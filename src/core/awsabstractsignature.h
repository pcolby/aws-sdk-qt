#ifndef AWSABSTRACTSIGNATURE_H
#define AWSABSTRACTSIGNATURE_H

#include "qtawsglobal.h"
#include "awsabstractcredentials.h"

#include <QtNetwork/QNetworkAccessManager>

QTAWS_BEGIN_NAMESPACE

class QTAWS_EXPORT AwsAbstractSignature : public QObject {
    Q_OBJECT

public:
    AwsAbstractSignature(QObject * const parent = 0);

    virtual void sign(const QNetworkAccessManager::Operation operation,
                      QNetworkRequest &request,
                      const AwsAbstractCredentials &credentials);

    virtual void sign(const QNetworkAccessManager::Operation operation,
                      QNetworkRequest &request, const QIODevice * const data,
                      const AwsAbstractCredentials &credentials) = 0;

    virtual void sign(const QNetworkAccessManager::Operation operation,
                      QNetworkRequest &request, const QByteArray &data,
                      const AwsAbstractCredentials &credentials);

    virtual void sign(const QNetworkAccessManager::Operation operation,
                      QNetworkRequest &request, QHttpMultiPart * multiPart,
                      const AwsAbstractCredentials &credentials);

};

QTAWS_END_NAMESPACE

#endif
