#ifndef AWSENDPOINT_P_H
#define AWSENDPOINT_P_H

#include "qtawsglobal.h"

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

    QVariantMap toVariant(QXmlStreamReader &xml);

protected:
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
