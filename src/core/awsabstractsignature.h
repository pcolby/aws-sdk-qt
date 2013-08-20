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
                      QNetworkRequest &request, const QIODevice * const data,
                      const AwsAbstractCredentials &credentials) const = 0;

    virtual void sign(const QNetworkAccessManager::Operation operation,
                      QNetworkRequest &request, const QByteArray &data,
                      const AwsAbstractCredentials &credentials) const;

    virtual void sign(const QNetworkAccessManager::Operation operation,
                      QNetworkRequest &request,
                      const AwsAbstractCredentials &credentials) const;
};

QTAWS_END_NAMESPACE

#endif
