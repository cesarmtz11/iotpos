#ifndef PROPERTYREADER_H
#define PROPERTYREADER_H

#include <QObject>
#include <QFile>
#include <QTextStream>
#include <QtDebug>
#include <QStringList>

class mpAPI_AccountInfo
{
public:
    mpAPI_AccountInfo();
// ------ Setters
    void mpAPI_ReadAccountInfo();
    void setCardPayOrder_token(const QString &value);
    void setCardPayOrder_deviceName(const QString &value);
    void setQROrder_token(const QString &value);
    void setQROrder_url(const QString &value);
    void setQROrderDelete_url(const QString &value);

// ------ Getters

    QByteArray getCardPayOrder_token() const;    
    QString getCardPayOrder_deviceName() const;
    QByteArray getQROrder_token() const;
    QString getQROrder_url() const;
    QString getQROrderDelete_url() const;

private:
    QByteArray cardPayOrder_token;
    QString cardPayOrder_deviceName;
    QByteArray qrOrder_token;
    QString qrOrder_url;
    QString qrOrderDelete_url;
};

#endif // PROPERTYREADER_H
