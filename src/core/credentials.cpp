#include "credentials.h"
#include "credentials_p.h"

Credentials::Credentials(const QString &accessKeyId, const QString &secretKey)
    : d_ptr(new CredentialsPrivate(this))
{
    Q_D(Credentials);
    d->accessKeyId = accessKeyId;
    d->secretKey = secretKey;
}

QString Credentials::accessKeyId() const {
    Q_D(const Credentials);
    return d->accessKeyId;
}

QString Credentials::secretKey() const {
    Q_D(const Credentials);
    return d->secretKey;
}

void Credentials::setAccessKeyId(const QString &accessKeyId) {
    Q_D(Credentials);
    d->accessKeyId = accessKeyId;
    emit changed();
}

void Credentials::setSecretKey(const QString &secretKey) {
    Q_D(Credentials);
    d->secretKey = secretKey;
    emit changed();
}

CredentialsPrivate::CredentialsPrivate(Credentials * const q) : q_ptr(q) {

}
