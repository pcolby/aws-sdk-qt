#ifndef AWSENDPOINT_P_H
#define AWSENDPOINT_P_H

#include "qtawsglobal.h"

QTAWS_BEGIN_NAMESPACE

class AwsEndpoint;

class QTAWS_EXPORT AwsEndpointPrivate {
    Q_DECLARE_PUBLIC(AwsEndpoint)

public:
    AwsEndpointPrivate(AwsEndpoint * const q);

protected:

private:
    AwsEndpoint * const q_ptr;
    friend class TestAwsEndpoint;
};

QTAWS_END_NAMESPACE

#endif
