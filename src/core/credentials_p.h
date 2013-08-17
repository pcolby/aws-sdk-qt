#ifndef CREDENTIALS_P_H
#define CREDENTIALS_P_H

#if defined QTAWS_LIBRARY
#define QTAWS_EXPORT Q_DECL_EXPORT
#else
#define QTAWS_EXPORT Q_DECL_IMPORT
#endif

//namespace aws {
//namespace core {

class Credentials;

class QTAWS_EXPORT CredentialsPrivate {
public:
    CredentialsPrivate(Credentials * const q);

protected:
    QString accessKeyId;
    QString secretKey;

private:
    Credentials * const q_ptr;
    Q_DECLARE_PUBLIC(Credentials);
};

//} }

#endif
