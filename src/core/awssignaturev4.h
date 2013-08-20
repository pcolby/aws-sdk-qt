#ifndef AWSSIGNATUREV4_H
#define AWSSIGNATUREV4_H

#include "qtawsglobal.h"
#include "awsabstractsignature.h"

QTAWS_BEGIN_NAMESPACE

class AwsSignatureV4Private;

class QTAWS_EXPORT AwsSignatureV4 : public AwsAbstractSignature {
    Q_DECLARE_PRIVATE(AwsSignatureV4)

public:
    AwsSignatureV4();

    virtual void sign(const QNetworkAccessManager::Operation operation,
                      QNetworkRequest &request,
                      const AwsAbstractCredentials &credentials,
                      const QByteArray &data = QByteArray()) const;

private:
    AwsSignatureV4Private * const d_ptr;

};

QTAWS_END_NAMESPACE

#endif
