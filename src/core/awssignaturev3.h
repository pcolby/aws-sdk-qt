#ifndef AWSSIGNATUREV3_H
#define AWSSIGNATUREV3_H

#include "qtawsglobal.h"
#include "awsabstractsignature.h"

QTAWS_BEGIN_NAMESPACE

class AwsSignatureV3Private;

class QTAWS_EXPORT AwsSignatureV3 : public AwsAbstractSignature {
    Q_DECLARE_PRIVATE(AwsSignatureV3)

public:
    AwsSignatureV3();

    ~AwsSignatureV3();

    virtual void sign(const AwsAbstractCredentials &credentials, const QNetworkAccessManager::Operation operation,
                      QNetworkRequest &request, const QByteArray &data = QByteArray()) const;

private:
    AwsSignatureV3Private * const d_ptr; ///< Internal d-pointer.
    friend class TestAwsSignatureV3;
};

QTAWS_END_NAMESPACE

#endif
