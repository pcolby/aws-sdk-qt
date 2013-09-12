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
    //QHash<QString, QString> hostNameToRegionName;
    //QHash<QString, QStringList> regionNameToServiceNames; // Need HTTP/HTTPS?
    //QHash<QString, QStringList> serviceNameToRegionNames;

    struct RegionEndpointInfo {
        QString hostName;
        AwsEndpoint::Transports transports;
    };
    struct RegionInfo {
        QHash<QString, RegionEndpointInfo> services;
    };
    static QHash<QString, RegionInfo> regions;

    struct ServiceInfo {
        QString fullName;
        QStringList regionNames;
    };
    static QHash<QString, ServiceInfo> services;

    static bool loadEndpointData();
    static int parseRegion(QXmlStreamReader &xml);
    static int parseRegions(QXmlStreamReader &xml);
    static int parseService(QXmlStreamReader &xml);
    static int parseServices(QXmlStreamReader &xml);

private:
    static QMutex mutex;

    AwsEndpoint * const q_ptr;
    friend class TestAwsEndpoint;
};

QTAWS_END_NAMESPACE

#endif
