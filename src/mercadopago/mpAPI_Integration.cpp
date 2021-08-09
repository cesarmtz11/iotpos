#include "mpAPI_Integration.h"

mpAPI_Integration::mpAPI_Integration()
{
    qDebug() << "Initialized";
    mpAPI_AccountInfo mpAccount;

    cardPayOrder_url = CARDPAY_URL;
    cardPayOrder_token = mpAccount.getCardPayOrder_token();
    cardPayOrder_deviceName = mpAccount.getCardPayOrder_deviceName();
    cardPayOrder_deleteUrl = CARDPAY_DELETEURL;
    qrOrder_token = mpAccount.getQROrder_token();
    qrOrder_url = mpAccount.getQROrder_url();
    qrOrderDelete_url = mpAccount.getQROrderDelete_url();
}


/* Creates JSONDocument with QR-Payment info and sends request via send_putRequest*/
QJsonDocument mpAPI_Integration::create_QRJsonDoc(double total_order, double transaction_number){
    QJsonObject orderJson;
    QString external_reference = QString("EMPOS%1").arg(transaction_number);

        orderJson.insert("external_reference", QJsonValue::fromVariant(external_reference));
        orderJson.insert("total_amount", QJsonValue::fromVariant(total_order));

        QJsonObject items;
        items.insert("sku_number", "KS955RUR");
        items.insert("category", "SUPERMERCADO");
        items.insert("title", "Producto de Supermercado");
        items.insert("description","Compra en EMPOS");
        items.insert("quantity",1);
        items.insert("unit_measure","unit");
        items.insert("unit_price",QJsonValue::fromVariant(total_order));
        items.insert("total_amount",QJsonValue::fromVariant(total_order));

        QJsonArray arrayItems;
        arrayItems.append(items);
        orderJson.insert("items",arrayItems);

        orderJson.insert("title", QJsonValue::fromVariant("Compra en EMPOS"));
        orderJson.insert("description", QJsonValue::fromVariant("El mejor super"));

        QJsonDocument order_QRJson(orderJson);
        return order_QRJson;

}


bool mpAPI_Integration::send_QRPutRequest(QJsonDocument reqDoc){
    QNetworkRequest req;
    QJsonObject json;
    req.setUrl(qrOrder_url);
    req.setHeader(QNetworkRequest::ContentTypeHeader, QString("application/json"));
    req.setRawHeader("Authorization",QByteArray(qrOrder_token));

    QNetworkReply *reply = network.put(req,reqDoc.toJson());

    while (!reply->isFinished())
    {
        qApp->processEvents();
    }

    //Print request info

    QNetworkRequest requ = reply->request();
    qDebug() << "Url: " << requ.url();
    QList<QByteArray> reqHeaders = requ.rawHeaderList();
        foreach( QByteArray reqName, reqHeaders )
        {
            QByteArray reqValue = requ.rawHeader( reqName );
            qDebug() << reqName << ": " << reqValue;
        }

    if(!reply->error()){
        qDebug()<<"PUT was a sucess!";
        return true;
    }else{
        qDebug()<< "Error : "<<reply->error();
        return false;
    }
}

void mpAPI_Integration::deleteQROrder_request(){
    QNetworkRequest req;
    QJsonObject json;
    req.setUrl(qrOrderDelete_url);
    req.setHeader(QNetworkRequest::ContentTypeHeader, QString("application/json"));
    req.setRawHeader("Authorization",QByteArray(qrOrder_token));

    QNetworkReply *reply = network.deleteResource(req);

    while (!reply->isFinished())
    {
        qApp->processEvents();
    }

    //Print request info

    QNetworkRequest requ = reply->request();
    qDebug() << "Url: " << requ.url();
    QList<QByteArray> reqHeaders = requ.rawHeaderList();
        foreach( QByteArray reqName, reqHeaders )
        {
            QByteArray reqValue = requ.rawHeader( reqName );
            qDebug() << reqName << ": " << reqValue;
        }

    if(!reply->error()){
        qDebug()<<"DELETE was a sucess!";
    }else{
        qDebug()<< "Error : "<<reply->error();
    }
}


/* Creates JSONDocument with CreditCard-Payment info and sends request via send_putRequest*/
QJsonDocument mpAPI_Integration::create_cardPay(double total_order, double transaction_number){
    QJsonObject orderJson;
    QString external_reference = QString("EMPOS%1").arg(transaction_number);

        orderJson.insert("external_reference", QJsonValue::fromVariant(external_reference));
        orderJson.insert("amount", QJsonValue::fromVariant(total_order));
        orderJson.insert("description", QJsonValue::fromVariant("Compra en EMPOS"));
        orderJson.insert("device_name", QJsonValue::fromVariant(cardPayOrder_deviceName));
        orderJson.insert("cc_type", QJsonValue::fromVariant("credit_card"));


        QJsonDocument order_JsonDoc(orderJson);
        return order_JsonDoc;

}


double mpAPI_Integration::send_CardPayPostRequest(QJsonDocument reqDoc){
    QNetworkRequest req;
    QJsonObject json;
    req.setUrl(cardPayOrder_url);
    req.setHeader(QNetworkRequest::ContentTypeHeader, QString("application/json"));
    req.setRawHeader("Authorization",QByteArray(cardPayOrder_token));

    QNetworkReply *reply = network.post(req,reqDoc.toJson());

    while (!reply->isFinished())
    {
        qApp->processEvents();
    }

    QJsonDocument document = QJsonDocument::fromJson(reply->readAll());

    QString strJson2(document.toJson(QJsonDocument::Compact));
    qDebug() << "------------------------------------" << strJson2 << endl;
    QJsonObject rootObject = document.object();
    double id = rootObject.value("id").toDouble();
    QString status = rootObject.value("status").toString();

    qDebug() << "ID: " << id << endl << "Status: " << status;

    if(!reply->error()){
        qDebug()<<"POST was a sucess!";
        return id;
    }else{
        qDebug()<< "Error : "<<reply->error();
        return 0;
    }
}

void mpAPI_Integration::deleteCardPayOrder_request(){
    QNetworkRequest req;
    QJsonObject json;
    req.setUrl(cardPayOrder_deleteUrl + cardPayOrder_deviceName);
    req.setHeader(QNetworkRequest::ContentTypeHeader, QString("application/json"));
    req.setRawHeader("Authorization",QByteArray(cardPayOrder_token));

    QNetworkReply *reply = network.deleteResource(req);

    while (!reply->isFinished())
    {
        qApp->processEvents();
    }

    //Print request info

    QNetworkRequest requ = reply->request();
    qDebug() << "Url: " << requ.url();
    QList<QByteArray> reqHeaders = requ.rawHeaderList();
        foreach( QByteArray reqName, reqHeaders )
        {
            QByteArray reqValue = requ.rawHeader( reqName );
            qDebug() << reqName << ": " << reqValue;
        }

    if(!reply->error()){
        qDebug()<<"Card order DELETE was a sucess!";
    }else{
        qDebug()<< "Error : "<<reply->error();
    }
}

bool mpAPI_Integration::GETRequest_QROrder_status(double transaction_number){
    QNetworkRequest paymentRequest;
    QJsonObject json;
    QString external_reference = QString("EMPOS%1").arg(transaction_number);

    paymentRequest.setUrl("https://api.mercadopago.com/merchant_orders?external_reference="+external_reference+"");
    paymentRequest.setRawHeader("Authorization",QByteArray(qrOrder_token));

    QNetworkReply *reply = network.get(paymentRequest);

    while (!reply->isFinished())
    {
        qApp->processEvents();
    }
    QString stringJson = reply->readAll();
    QJsonDocument infoJson = QJsonDocument::fromJson(stringJson.toUtf8());

   /* QJsonObject objectJson = infoJson.object();
    QJsonValue orderStatus = objectJson.value(QString("order_status"));
    qDebug() << "ID: " << transaction_number << "Order status: " << orderStatus.toString();*/

    QJsonObject rootObject = infoJson.object();
    QJsonArray elements = rootObject["elements"].toArray();
    QString status = elements[0].toObject()["status"].toString();
    QString order_status = elements[0].toObject()["order_status"].toString();

    qDebug() << "Status: " << status << "Order status: " << order_status;

    if(!reply->error()){
        qDebug()<<"GET was a sucess!";
    }else{
        qDebug()<< "Error : "<<reply->error();
    }

    if(order_status == "paid") return true;
    else {
        return false;
    }
}

bool mpAPI_Integration::GETRequest_CardOrder_status(double id){
    QNetworkRequest paymentRequest;
    QJsonObject json;

    paymentRequest.setUrl("https://api.mercadopago.com/point/services/integrations/v1/"+QString::number(id)+"");
    paymentRequest.setHeader(QNetworkRequest::ContentTypeHeader, QString("application/json"));
    paymentRequest.setRawHeader("Authorization",QByteArray(cardPayOrder_token));

    QNetworkReply *reply = network.get(paymentRequest);

    while (!reply->isFinished())
    {
        qApp->processEvents();
    }
    QString stringJson = reply->readAll();
    QJsonDocument infoJson = QJsonDocument::fromJson(stringJson.toUtf8());

   /* QJsonObject objectJson = infoJson.object();
    QJsonValue orderStatus = objectJson.value(QString("order_status"));
    qDebug() << "ID: " << transaction_number << "Order status: " << orderStatus.toString();*/

    QJsonObject rootObject = infoJson.object();
    QString payment_status = rootObject.value("payment_status").toString();
    QString status = rootObject.value("status").toString();

    QString strJson2(infoJson.toJson(QJsonDocument::Compact));
    qDebug() << "------------------------------------" << strJson2 << endl;
    qDebug() << "Status: " << status;

    if(!reply->error() && status == "CLOSED"){
        qDebug()<<"GET was a sucess!";
        return true;
    }else{
        qDebug()<< "Error : "<<reply->error();
        return false;
    }

  /*  if(order_status == "paid") return true;
    else {
        return false;
    }*/
}
