#include <QtTest/QtTest>
#include "../../src/core/qtawsglobal.h"

class TestAwsEndpoint : public QObject {
    Q_OBJECT

private slots:
    void init();

    //void construct_QByteArray_data();
    //void construct_QByteArray();

    //void construct_QString_data();
    //void construct_QString();

    //void construct_QString_QString_data();
    //void construct_QString_QString();

    /*static QUrl getEndpoint(const QString &regionName, const QString &serviceName,
                            const Transports transport = AnyTransport);

    bool isSupported(const QString &serviceName, const Transports transport = AnyTransport) const;

    bool isValid() const;

    QString hostName() const;

    QString regionName() const;

    QString serviceName() const;

    static QStringList supportedRegions(const QString &serviceName,
                                        const Transports transport = AnyTransport);

    static QStringList supportedServices(const QString &regionName,
                                         const Transports transport = AnyTransport);

    QStringList supportedServices(const Transports transport = AnyTransport) const;
    */

    void loadEndpointData();
    void parseRegion();
    void parseRegions();
    void parseService();
    void parseServices();

};
