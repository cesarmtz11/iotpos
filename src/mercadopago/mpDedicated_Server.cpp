#include "mpDedicated_Server.h"
#include <QDebug>
#include <QCoreApplication>

mpDedicated_Server::mpDedicated_Server()
{
    mpDedicated_TcpServer = new QTcpServer();
    connect(mpDedicated_TcpServer, SIGNAL(newConnection()), this, SLOT(newConnectionSlot()));

}

void mpDedicated_Server::run()
{
    if (mpDedicated_TcpServer->listen(QHostAddress::Any, 3333))
    {
        qDebug()<<"[TcpServer]-------------------------------------------------listen sucess"<<endl;
    }
    else
    {
        qDebug()<<"[TcpServer]-------------------------------------------------listen faile"<<endl;
    }
}

void mpDedicated_Server::close(){
    mpDedicated_TcpServer->close();
}

void mpDedicated_Server::newConnectionSlot()
{
     qDebug()<<"[TcpServer]-------------------------------------------------new Connection !!!"<<endl;
     mpDedicated_TcpSocket = mpDedicated_TcpServer->nextPendingConnection();
     qDebug()<<"From ---> "<<mpDedicated_TcpSocket->peerAddress()<<":"<<mpDedicated_TcpSocket->peerPort()<<endl;

     // Receive new data signals and disconnected signals
     connect(mpDedicated_TcpSocket, SIGNAL(readyRead()),this, SLOT(slotDataReceived()));
     connect(mpDedicated_TcpSocket, SIGNAL(disconnected()), mpDedicated_TcpSocket, SLOT(deleteLater()));

    mpDedicated_TcpSocket->write("HTTP/1.1 200 \r\n\r\n");
}

void mpDedicated_Server::slotDataReceived()
{
    QByteArray buffer;
    QString stringBuffer;
    QString mpOrder_ID;
    QStringList listBuffer;
    // Read the buffer data
    char charBuffer[1024];
    qint64 lineLenght = mpDedicated_TcpSocket->readLine(charBuffer, sizeof(charBuffer));
    if (lineLenght != 1){
        qDebug() << "Header ---> " << charBuffer;
        stringBuffer = QString(charBuffer);
        listBuffer = stringBuffer.split(QRegExp("\\b"));
            if((listBuffer.at(1) == "POST") &&
               (listBuffer.at(3) == "id") &&
               (listBuffer.at(9) == "payment")){
                mpOrder_ID = listBuffer.at(5);
                qDebug() << "New ID: " << mpOrder_ID;
                emit(signalServer_Notification());
           }

    }
}

