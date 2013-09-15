#ifndef AWSABSTRACTSIGNATURE_H
#define AWSABSTRACTSIGNATURE_H

#include "qtawsglobal.h"
#include "awsabstractcredentials.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QUrlQuery>

QTAWS_BEGIN_NAMESPACE

class QTAWS_EXPORT AwsAbstractSignature {

public:
    virtual ~AwsAbstractSignature();

    virtual void sign(const AwsAbstractCredentials &credentials, const QNetworkAccessManager::Operation operation,
                      QNetworkRequest &request, const QByteArray &data = QByteArray()) const = 0;

protected:
    QString canonicalPath(const QUrl &url) const;

    QByteArray canonicalQuery(const QUrlQuery &query) const;

    QString httpMethod(const QNetworkAccessManager::Operation operation) const;

    friend class TestAwsAbstractSignature;
};

QTAWS_END_NAMESPACE

#endif
