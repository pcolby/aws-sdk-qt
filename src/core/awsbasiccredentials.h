#ifndef AWSBASICCREDENTIALS_H
#define AWSBASICCREDENTIALS_H

#include "awsabstractcredentials.h"

#if defined QTAWS_LIBRARY
#define QTAWS_EXPORT Q_DECL_EXPORT
#else
#define QTAWS_EXPORT Q_DECL_IMPORT
#endif

class AwsBasicCredentialsPrivate;

class QTAWS_EXPORT AwsBasicCredentials : public AwsAbstractCredentials {
    Q_OBJECT
    Q_DECLARE_PRIVATE(AwsBasicCredentials)

public:
    AwsBasicCredentials(const QString &accessKeyid, const QString &secretKey);
    virtual QString accessKeyId() const;
    virtual QString secretKey() const;

public slots:
    virtual void setAccessKeyId(const QString &accessKeyId);
    virtual void setSecretKey(const QString &secretKey);

private:
    AwsBasicCredentialsPrivate * const d_ptr;

};

#endif
