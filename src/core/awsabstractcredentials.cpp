#include "awsabstractcredentials.h"

#include <QtDebug>

QTAWS_BEGIN_NAMESPACE

QDateTime AwsAbstractCredentials::expiration() const {
    if (isRefreshable()) {
        qWarning() << "AwsAbstractCredentials: expiration must be implemented by refreshable derived classes";
    } else {
        qWarning() << "AwsAbstractCredentials: expiration should not be invoked on non-refreshable objects";
    }
    return QDateTime(); // A null QDateTime.
}

bool AwsAbstractCredentials::isExpired() const {
    if (isRefreshable()) {
        const QDateTime expiration = this->expiration();
        return ((expiration.isValid()) && (expiration < QDateTime::currentDateTimeUtc()));
    } else {
        qWarning() << "AwsAbstractCredentials: isExpired should not be invoked on non-refreshable objects";
        return false;
    }
}

bool AwsAbstractCredentials::isRefreshable() const {
    return false;
}

bool AwsAbstractCredentials::refresh() {
    if (isRefreshable()) {
        qWarning() << "AwsAbstractCredentials: refresh must be implemented by refreshable derived classes";
    } else {
        qWarning() << "AwsAbstractCredentials: refresh should not be invoked on non-refreshable objects";
    }
    return false;
}

QTAWS_END_NAMESPACE
