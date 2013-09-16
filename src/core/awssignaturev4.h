#ifndef AWSSIGNATUREV4_H
#define AWSSIGNATUREV4_H

#include "qtawsglobal.h"
#include "awsabstractsignature.h"

#include <QCryptographicHash>

QTAWS_BEGIN_NAMESPACE

class AwsSignatureV4Private;

class QTAWS_EXPORT AwsSignatureV4 : public AwsAbstractSignature {
    Q_DECLARE_PRIVATE(AwsSignatureV4)

public:
    AwsSignatureV4(const QCryptographicHash::Algorithm hashAlgorithm = QCryptographicHash::Sha256);

    ~AwsSignatureV4();

    virtual void sign(const AwsAbstractCredentials &credentials,
                      const QNetworkAccessManager::Operation operation,
                      QNetworkRequest &request, const QByteArray &data = QByteArray()) const;

private:
    AwsSignatureV4Private * const d_ptr;
    friend class TestAwsSignatureV4;
};

QTAWS_END_NAMESPACE

#endif
