#ifndef AWSENDPOINT_P_H
#define AWSENDPOINT_P_H

#include "qtawsglobal.h"

#include <QMutex>
#include <QString>
#include <QStringList>

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
    static bool loadEndpointData();

private:
    static QMutex mutex;

    AwsEndpoint * const q_ptr;
    friend class TestAwsEndpoint;
};

QTAWS_END_NAMESPACE

#endif
