#ifndef AWSABSTRACTSIGNATURE_H
#define AWSABSTRACTSIGNATURE_H

#include "qtawsglobal.h"
#include "awsabstractcredentials.h"

#include <QtNetwork/QNetworkAccessManager>

QTAWS_BEGIN_NAMESPACE

class QTAWS_EXPORT AwsAbstractSignature {

public:
    virtual void sign(const QNetworkAccessManager::Operation operation,
                      QNetworkRequest &request,
                      const AwsAbstractCredentials &credentials,
                      const QByteArray &data = QByteArray()) const = 0;

};

QTAWS_END_NAMESPACE

#endif
