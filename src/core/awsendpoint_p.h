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
    QString hostName;
    QString regionName;
    QString serviceName;

    AwsEndpointPrivate(AwsEndpoint * const q);

protected:
    struct HostInfo {
        QString regionName;
        QStringList serviceNames;
    };
    static QHash<QString, HostInfo> hosts;

    struct RegionEndpointInfo {
        QString hostName;
        AwsEndpoint::Transports transports;
    };
    typedef QHash<QString, RegionEndpointInfo> RegionServices;
    struct RegionInfo {
        RegionServices services;
    };
    static QHash<QString, RegionInfo> regions;

    struct ServiceInfo {
        QString fullName;
        QStringList regionNames;
    };
    static QHash<QString, ServiceInfo> services;

    static QMutex mutex;

    static bool loadEndpointData();
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
