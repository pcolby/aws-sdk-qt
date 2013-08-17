#ifndef AWSBASICCREDENTIALS_P_H
#define AWSBASICCREDENTIALS_P_H

#if defined QTAWS_LIBRARY
#define QTAWS_EXPORT Q_DECL_EXPORT
#else
#define QTAWS_EXPORT Q_DECL_IMPORT
#endif

class AwsBasicCredentials;

class QTAWS_EXPORT AwsBasicCredentialsPrivate {
    Q_DECLARE_PUBLIC(AwsBasicCredentials)

public:
    QString accessKeyId;
    QString secretKey;

    AwsBasicCredentialsPrivate(AwsBasicCredentials * const q);

private:
    AwsBasicCredentials * const q_ptr;

};

#endif
