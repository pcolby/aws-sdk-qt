#include "credentials.h"
#include "credentials_p.h"

QString Credentials::accessKeyId() {
    Q_D(Credentials);
    return d->accessKeyId;
}

QString Credentials::secretKey() {
    Q_D(Credentials);
    return d->secretKey;
}

void Credentials::setAccessKeyId(const QString &accessKeyId) {
    Q_D(Credentials);
    d->accessKeyId = accessKeyId;
}

void Credentials::setSecretKey(const QString &secretKey) {
    Q_D(Credentials);
    d->secretKey = secretKey;
}

CredentialsPrivate::CredentialsPrivate(Credentials * const q) : q_ptr(q) {

}
