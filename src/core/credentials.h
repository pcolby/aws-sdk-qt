#ifndef CREDENTIALS_H
#define CREDENTIALS_H

#include "abstractcredentials.h"

#if defined QTAWS_LIBRARY
#define QTAWS_EXPORT Q_DECL_EXPORT
#else
#define QTAWS_EXPORT Q_DECL_IMPORT
#endif

//namespace aws {
//namespace core {

class CredentialsPrivate;

class QTAWS_EXPORT Credentials : public AbstractCredentials
{
    Q_OBJECT

public:
    virtual QString accessKeyId() const;
    virtual QString secretKey() const;
    virtual void setAccessKeyId(const QString &accessKeyId);
    virtual void setSecretKey(const QString &secretKey);

private:
    Q_DECLARE_PRIVATE(Credentials);
};

//} }

#endif
