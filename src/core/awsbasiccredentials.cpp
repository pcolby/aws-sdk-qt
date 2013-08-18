#include "awsbasiccredentials.h"
#include "awsbasiccredentials_p.h"

QTAWS_BEGIN_NAMESPACE

AwsBasicCredentials::AwsBasicCredentials(const QString &accessKeyId, const QString &secretKey)
    : d_ptr(new AwsBasicCredentialsPrivate(this))
{
    Q_D(AwsBasicCredentials);
    d->accessKeyId = accessKeyId;
    d->secretKey = secretKey;
}

QString AwsBasicCredentials::accessKeyId() const {
    Q_D(const AwsBasicCredentials);
    return d->accessKeyId;
}

QString AwsBasicCredentials::secretKey() const {
    Q_D(const AwsBasicCredentials);
    return d->secretKey;
}

void AwsBasicCredentials::setAccessKeyId(const QString &accessKeyId) {
    Q_D(AwsBasicCredentials);
    d->accessKeyId = accessKeyId;
    emit changed();
}

void AwsBasicCredentials::setSecretKey(const QString &secretKey) {
    Q_D(AwsBasicCredentials);
    d->secretKey = secretKey;
    emit changed();
}

AwsBasicCredentialsPrivate::AwsBasicCredentialsPrivate(AwsBasicCredentials * const q) : q_ptr(q) {

}

QTAWS_END_NAMESPACE
