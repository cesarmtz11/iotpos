#ifndef MPAPI_INTEGRATION_H
#define MPAPI_INTEGRATION_H

#include "QJsonSource/QJsonObject.h"
#include "QJsonSource/QJsonDocument.h"
#include "QJsonSource/QJsonArray.h"
#include "QJsonSource/QJsonValue.h"
#include "QJsonSource/QJsonParseError.h"
#include "mpAPI_AccountInfo.h"

#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <iostream>
#include <QDebug>
#include <QObject>
#include <QMessageBox>


#define CARDPAY_URL (QString("https://api.mercadopago.com/point/services/integrations/v1"))
#define CARDPAY_DELETEURL (QString("https://api.mercadopago.com/point/services/integrations/v1/attempt/device/"))

class mpAPI_Integration
{
private:

    QByteArray cardPayOrder_token;
    QString cardPayOrder_url;
    QString cardPayOrder_deviceName;
    QString cardPayOrder_deleteUrl;
    QByteArray qrOrder_token;
    QString qrOrder_url;
    QString qrOrderDelete_url;
    QString mpOrderID;
    QNetworkAccessManager network;


    void send_cardPayPostRequest(QString mpUrl, QJsonDocument reqDoc);

public:
    mpAPI_Integration();
    QJsonDocument create_QRJsonDoc(double total_order, double transaction_number);
    bool send_QRPutRequest(QJsonDocument reqDoc);
    QJsonDocument create_cardPay(double total_order, double transaction_number);
    double send_CardPayPostRequest(QJsonDocument reqDoc);
    bool GETRequest_QROrder_status(double transaction_number);
    bool GETRequest_CardOrder_status(double id);
    void deleteQROrder_request();
    void deleteCardPayOrder_request();

};

#endif // MPAPI_INTEGRATION_H
