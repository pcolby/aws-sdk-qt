#ifndef AWSBASICCREDENTIALS_H
#define AWSBASICCREDENTIALS_H

#include "awsabstractcredentials.h"

QTAWS_BEGIN_NAMESPACE

class AwsBasicCredentialsPrivate;

class QTAWS_EXPORT AwsBasicCredentials : public AwsAbstractCredentials {
    Q_OBJECT
    Q_DECLARE_PRIVATE(AwsBasicCredentials)

public:
    AwsBasicCredentials(const QString &accessKeyid, const QString &secretKey, const QString &token=QString());
    virtual QString accessKeyId() const;
    virtual QString secretKey() const;
    virtual QString token() const;

public slots:
    virtual void setAccessKeyId(const QString &accessKeyId);
    virtual void setSecretKey(const QString &secretKey);
    virtual void setToken(const QString &token);

private:
    AwsBasicCredentialsPrivate * const d_ptr;

};

QTAWS_END_NAMESPACE

#endif
