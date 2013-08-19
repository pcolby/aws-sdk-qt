#ifndef AWSNETWORKACCESSMANAGER_H
#define AWSNETWORKACCESSMANAGER_H

#include "qtawsglobal.h"

#include <QtNetwork/QNetworkAccessManager>

QTAWS_BEGIN_NAMESPACE

class AwsNetworkAccessManagerPrivate;

class QTAWS_EXPORT AwsNetworkAccessManager : public QNetworkAccessManager {
    Q_OBJECT
    Q_DECLARE_PRIVATE(AwsNetworkAccessManager)

    Q_PROPERTY(SignatureVersion signatureVersion
               READ signatureVersion
               WRITE setSignatureVersion
               NOTIFY versionChanged)

public:
    enum SignatureVersion { SignatureV2, SignatureV3, SignatureV4 };

    AwsNetworkAccessManager(const SignatureVersion signatureVersion, QObject * const parent = 0);

    SignatureVersion signatureVersion() const;
    void setSignatureVersion(const SignatureVersion signatureVersion);

protected:
    virtual QNetworkReply *createRequest(Operation operation, const QNetworkRequest &request, QIODevice * data = 0);

private:
    AwsNetworkAccessManagerPrivate * const d_ptr;

signals:
    void versionChanged(SignatureVersion signatureVersion);

};

QTAWS_END_NAMESPACE

#endif
