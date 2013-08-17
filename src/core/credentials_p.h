#ifndef CREDENTIALS_P_H
#define CREDENTIALS_P_H

#if defined QTAWS_LIBRARY
#define QTAWS_EXPORT Q_DECL_EXPORT
#else
#define QTAWS_EXPORT Q_DECL_IMPORT
#endif

class Credentials;

class QTAWS_EXPORT CredentialsPrivate {
    Q_DECLARE_PUBLIC(Credentials)

public:
    QString accessKeyId;
    QString secretKey;

    CredentialsPrivate(Credentials * const q);

private:
    Credentials * const q_ptr;

};

#endif
