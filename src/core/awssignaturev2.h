#ifndef AWSSIGNATUREV2_H
#define AWSSIGNATUREV2_H

#include "qtawsglobal.h"
#include "awsabstractsignature.h"

#include <QCryptographicHash>

QTAWS_BEGIN_NAMESPACE

class AwsSignatureV2Private;

class QTAWS_EXPORT AwsSignatureV2 : public AwsAbstractSignature {
    Q_DECLARE_PRIVATE(AwsSignatureV2)

public:
    AwsSignatureV2(const QCryptographicHash::Algorithm hashAlgorithm = QCryptographicHash::Sha256);

    ~AwsSignatureV2();

    virtual void sign(const AwsAbstractCredentials &credentials, const QNetworkAccessManager::Operation operation,
                      QNetworkRequest &request, const QByteArray &data = QByteArray()) const;

private:
    AwsSignatureV2Private * const d_ptr;
    friend class TestAwsSignatureV2;
};

QTAWS_END_NAMESPACE

#endif
