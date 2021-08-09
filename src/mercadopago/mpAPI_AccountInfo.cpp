#include "mpAPI_AccountInfo.h"

mpAPI_AccountInfo::mpAPI_AccountInfo()
{
    mpAPI_ReadAccountInfo();
}

QByteArray mpAPI_AccountInfo::getCardPayOrder_token() const
{
    return cardPayOrder_token;
}

void mpAPI_AccountInfo::setCardPayOrder_token(const QString &value)
{
    cardPayOrder_token = value.toUtf8();
}

QString mpAPI_AccountInfo::getCardPayOrder_deviceName() const
{
    return cardPayOrder_deviceName;
}

void mpAPI_AccountInfo::setCardPayOrder_deviceName(const QString &value)
{
    cardPayOrder_deviceName = value;
}

QByteArray mpAPI_AccountInfo::getQROrder_token() const
{
    return qrOrder_token;
}

void mpAPI_AccountInfo::setQROrder_token(const QString &value)
{
    qrOrder_token = value.toUtf8();
}

QString mpAPI_AccountInfo::getQROrder_url() const
{
    return qrOrder_url;
}

void mpAPI_AccountInfo::setQROrder_url(const QString &value)
{
    qrOrder_url = value;
}

QString mpAPI_AccountInfo::getQROrderDelete_url() const
{
    return qrOrderDelete_url;
}

void mpAPI_AccountInfo::setQROrderDelete_url(const QString &value)
{
    qrOrderDelete_url = value;
}


void mpAPI_AccountInfo::mpAPI_ReadAccountInfo()
{
    QFile inputFile(QString(":/Resources/mpAPI_AccountInfo.txt"));
    if (inputFile.open(QIODevice::ReadOnly))
    {
       qDebug() << "Opening file";
       QTextStream in(&inputFile);
       while (!in.atEnd())
       {
          QString line = in.readLine();
          QStringList fields = line.split( "=" );
          if(fields[0] == "cardPayOrder_token") setCardPayOrder_token(fields[1]);
          else if (fields[0] == "cardPayOrder_deviceName") setCardPayOrder_deviceName(fields[1]);
          else if (fields[0] == "qrOrder_token") setQROrder_token(fields[1]);
          else if (fields[0] == "qrOrder_url") setQROrder_url(fields[1]);
          else if (fields[0] == "qrOrderDelete_url") setQROrderDelete_url(fields[1]);
       }
    }
    inputFile.close();
}
