#ifndef MPDEDICATED_SERVER_H
#define MPDEDICATED_SERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QStringList>

class mpDedicated_Server : public QObject
{
    Q_OBJECT

public:
    mpDedicated_Server();

    void run(); //Server startup
    void close();

private:
    QTcpServer *mpDedicated_TcpServer;
    QTcpSocket *mpDedicated_TcpSocket;

    QString notification_IDs[3];
    QString whereisId;

    quint16 blockSize;

private slots: //slot
    void newConnectionSlot();
    void slotDataReceived();

signals:
    void signalServer_Notification();
 };

#endif // MYTCPSERVER_H
