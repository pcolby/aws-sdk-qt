#ifndef AWSENDPOINT_P_H
#define AWSENDPOINT_P_H

#include "qtawsglobal.h"

#include "awsendpoint.h"

#include <QMutex>
#include <QString>
#include <QStringList>
#include <QXmlStreamReader>
#include <QVariant>

QTAWS_BEGIN_NAMESPACE

class AwsEndpoint;

class QTAWS_EXPORT AwsEndpointPrivate {
    Q_DECLARE_PUBLIC(AwsEndpoint)

public:
    QString hostName;    ///< This endpoint's hostname.
    QString regionName;  ///< This endpoint's region name.
    QString serviceName; ///< This endpoint's service name.

    AwsEndpointPrivate(AwsEndpoint * const q);

protected:
    /// The per-host information to load from the endpoints.xml file.
    struct HostInfo {
        QStringList regionNames;
        QString serviceName;
    };

    /// The per-region endpoint-specific information to load from the endpoints.xml file.
    struct RegionEndpointInfo {
        QString hostName;
        AwsEndpoint::Transports transports;
    };

    /// Hash of service names to RegionEndpointInfo.
    typedef QHash<QString, RegionEndpointInfo> RegionServices;

    /// The per-region information to load from the endpoints.xml file.
    struct RegionInfo {
        RegionServices services;
    };

    /// The per-service information to load from the endpoints.xml file.
    struct ServiceInfo {
        QString fullName;
        QStringList regionNames;
    };

    static QHash<QString, HostInfo> hosts;
    static QHash<QString, RegionInfo> regions;
    static QHash<QString, ServiceInfo> services;

    static QMutex mutex;

    static void loadEndpointData(const QString &fileName = QLatin1String(":/aws/endpoints.xml"));
    static void loadEndpointData(QIODevice &device);
    static void loadEndpointData(QXmlStreamReader &xml);
    static void parseRegion(QXmlStreamReader &xml);
    static void parseRegions(QXmlStreamReader &xml);
    static void parseService(QXmlStreamReader &xml);
    static void parseServices(QXmlStreamReader &xml);

private:
    AwsEndpoint * const q_ptr;
    friend class TestAwsEndpoint;
};

QTAWS_END_NAMESPACE

#endif
