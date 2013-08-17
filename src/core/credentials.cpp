#include "credentials.h"
#include "credentials_p.h"

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
    emit accessKeyIdChanged(accessKeyId);
}

void Credentials::setSecretKey(const QString &secretKey) {
    Q_D(Credentials);
    d->secretKey = secretKey;
    emit secretKeyChanged(secretKey);
}

CredentialsPrivate::CredentialsPrivate(Credentials * const q) : q_ptr(q) {

}
