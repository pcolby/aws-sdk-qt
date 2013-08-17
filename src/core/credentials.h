#ifndef CREDENTIALS_H
#define CREDENTIALS_H

#include "abstractcredentials.h"

#if defined QTAWS_LIBRARY
#define QTAWS_EXPORT Q_DECL_EXPORT
#else
#define QTAWS_EXPORT Q_DECL_IMPORT
#endif

class CredentialsPrivate;

class QTAWS_EXPORT Credentials : public AbstractCredentials {
    Q_OBJECT
    Q_DECLARE_PRIVATE(Credentials)

public:
    Credentials(const QString &accessKeyid, const QString &secretKey);

    virtual QString accessKeyId() const;
    virtual QString secretKey() const;
    virtual void setAccessKeyId(const QString &accessKeyId);
    virtual void setSecretKey(const QString &secretKey);

private:
    CredentialsPrivate * const d_ptr;

};

#endif
