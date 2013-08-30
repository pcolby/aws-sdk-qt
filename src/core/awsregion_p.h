#ifndef AWSSIGNATUREV4_P_H
#define AWSSIGNATUREV4_P_H

#include "qtawsglobal.h"

QTAWS_BEGIN_NAMESPACE

class AwsRegion;

class QTAWS_EXPORT AwsRegionPrivate {
    Q_DECLARE_PUBLIC(AwsRegion)

public:
    AwsRegionPrivate(AwsRegion * const q);

protected:
    //QMap<QByteArray, QByteArray> hostToRegionServiceMap;
    //QMap<QByteArray, Regions> serviceToRegionsMap;
    //QMap<QByteArray, QStringList> regionToServicesMap;

private:
    AwsRegion * const q_ptr;
    friend class TestAwsRegionPrivate;
};

QTAWS_END_NAMESPACE

#endif
