#include "awsbasiccredentials.h"
#include "awsbasiccredentials_p.h"

QTAWS_BEGIN_NAMESPACE

/**
 * @class  AwsBasicCredentials
 *
 * @brief  Basic implementation of the AwsAbstractCredentials interface that allows callers
 *         to pass in the AWS access key and secret access in the constructor.
 */

/**
 * @brief  Constructs a new AwsBasicCredentials object.
 *
 * @param accessKeyId  The AWS access key ID to use for this credentials object.
 * @param secretKey    The AWS secret access key to use for this credentials object.
 * @param token        The AWS security token to use for this credentials object.
 */
AwsBasicCredentials::AwsBasicCredentials(const QString &accessKeyId, const QString &secretKey, const QString &token)
    : d_ptr(new AwsBasicCredentialsPrivate(this))
{
    Q_D(AwsBasicCredentials);
    d->accessKeyId = accessKeyId;
    d->secretKey = secretKey;
    d->token = token;
}

QString AwsBasicCredentials::accessKeyId() const {
    Q_D(const AwsBasicCredentials);
    return d->accessKeyId;
}

QString AwsBasicCredentials::secretKey() const {
    Q_D(const AwsBasicCredentials);
    return d->secretKey;
}

QString AwsBasicCredentials::token() const {
    Q_D(const AwsBasicCredentials);
    return d->token;
}

/**
 * @brief Set the AWS access key ID for this credentials object.
 *
 * @param accessKeyId  The AWS access key ID to set for this credentials object.
 */
void AwsBasicCredentials::setAccessKeyId(const QString &accessKeyId) {
    Q_D(AwsBasicCredentials);
    d->accessKeyId = accessKeyId;
    emit changed();
}

/**
 * @brief Set the AWS secret access key for this credentials object.
 *
 * @param secretKey  The AWS secret access key to set for this credentials object.
 */
void AwsBasicCredentials::setSecretKey(const QString &secretKey) {
    Q_D(AwsBasicCredentials);
    d->secretKey = secretKey;
    emit changed();
}

/**
 * @brief Set the AWS security token for this credentials object.
 *
 * @param token  The AWS security token to set for this credentials object.
 */
void AwsBasicCredentials::setToken(const QString &token) {
    Q_D(AwsBasicCredentials);
    d->token = token;
    emit changed();
}

AwsBasicCredentialsPrivate::AwsBasicCredentialsPrivate(AwsBasicCredentials * const q) : q_ptr(q) {

}

QTAWS_END_NAMESPACE
