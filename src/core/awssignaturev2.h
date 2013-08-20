#ifndef AWSSIGNATUREV2_H
#define AWSSIGNATUREV2_H

#include "qtawsglobal.h"
#include "awsabstractsignature.h"

QTAWS_BEGIN_NAMESPACE

class AwsSignatureV2Private;

class QTAWS_EXPORT AwsSignatureV2 : public AwsAbstractSignature {
    Q_OBJECT
    Q_DECLARE_PRIVATE(AwsSignatureV2)

public:
    AwsSignatureV2(QObject * const parent = 0);

    virtual void sign(const QNetworkAccessManager::Operation operation,
                      QNetworkRequest &request,
                      const AwsAbstractCredentials &credentials,
                      const QByteArray &data = QByteArray()) const;

private:
    AwsSignatureV2Private * const d_ptr;

};

QTAWS_END_NAMESPACE

#endif
