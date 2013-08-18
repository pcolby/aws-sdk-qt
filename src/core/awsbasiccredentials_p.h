#ifndef AWSBASICCREDENTIALS_P_H
#define AWSBASICCREDENTIALS_P_H

QTAWS_BEGIN_NAMESPACE

class AwsBasicCredentials;

/// @private
class QTAWS_EXPORT AwsBasicCredentialsPrivate {
    Q_DECLARE_PUBLIC(AwsBasicCredentials)

public:
    QString accessKeyId;
    QString secretKey;

    AwsBasicCredentialsPrivate(AwsBasicCredentials * const q);

private:
    AwsBasicCredentials * const q_ptr;

};

QTAWS_END_NAMESPACE

#endif
