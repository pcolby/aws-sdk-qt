#ifndef AWSSIGNATUREV4_H
#define AWSSIGNATUREV4_H

#include "qtawsglobal.h"
#include "awsabstractsignature.h"

QTAWS_BEGIN_NAMESPACE

class AwsSignatureV4Private;

class QTAWS_EXPORT AwsSignatureV4 : public AwsAbstractSignature {
    Q_OBJECT
    Q_DECLARE_PRIVATE(AwsSignatureV4)

public:
    AwsSignatureV4(QObject * const parent = 0);

public slots:
    virtual void sign(const QNetworkAccessManager::Operation operation,
                      QNetworkRequest &request, const QIODevice * const data,
                      const AwsAbstractCredentials &credentials);

private:
    AwsSignatureV4Private * const d_ptr;

};

QTAWS_END_NAMESPACE

#endif
