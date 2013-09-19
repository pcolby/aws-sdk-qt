#ifndef AWSBASICCREDENTIALS_P_H
#define AWSBASICCREDENTIALS_P_H

#include "qtawsglobal.h"

#include <QString>

QTAWS_BEGIN_NAMESPACE

class AwsBasicCredentials;

class QTAWS_EXPORT AwsBasicCredentialsPrivate {
    Q_DECLARE_PUBLIC(AwsBasicCredentials)

public:
    QString accessKeyId; ///< AWS Access Key ID.
    QString secretKey;   ///< AWS Secret Access Key.
    QString token;       ///< AWS Security Token.

    AwsBasicCredentialsPrivate(AwsBasicCredentials * const q);

private:
    AwsBasicCredentials * const q_ptr; ///< Internal q-pointer.

};

QTAWS_END_NAMESPACE

#endif
