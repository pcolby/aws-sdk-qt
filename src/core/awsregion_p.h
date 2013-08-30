#ifndef AWSSIGNATUREV4_P_H
#define AWSSIGNATUREV4_P_H

#include "qtawsglobal.h"

QTAWS_BEGIN_NAMESPACE

class AwsEndpoints;

class QTAWS_EXPORT AwsEndpointsPrivate {
    Q_DECLARE_PUBLIC(AwsEndpoints)

public:
    AwsEndpointsPrivate(AwsEndpoints * const q);

protected:
    QMap<QByteArray, QByteArray> hostToRegionServiceMap;
    QMap<QByteArray, Regions> serviceToRegionsMap;
    QMap<QByteArray, QStringList> regionToServicesMap;

private:
    AwsEndpoints * const q_ptr;
    friend class TestAwsEndpoints;
};

QTAWS_END_NAMESPACE

#endif
