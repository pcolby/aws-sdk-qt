#ifndef AWSNETWORKACCESSMANAGER_P_H
#define AWSNETWORKACCESSMANAGER_P_H

#include "qtawsglobal.h"
#include "awsnetworkaccessmanager.h"

#include <QString>

QTAWS_BEGIN_NAMESPACE

/// @private
class QTAWS_EXPORT AwsNetworkAccessManagerPrivate {
    Q_DECLARE_PUBLIC(AwsNetworkAccessManager)

public:
    AwsNetworkAccessManager::SignatureVersion signatureVersion;

    AwsNetworkAccessManagerPrivate(AwsNetworkAccessManager * const q);

private:
    AwsNetworkAccessManager * const q_ptr;

};

QTAWS_END_NAMESPACE

#endif
