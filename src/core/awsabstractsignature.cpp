#include "awsabstractsignature.h"

#include <QBuffer>
#include <QtNetwork/QNetworkRequest>

QTAWS_BEGIN_NAMESPACE

AwsAbstractSignature::AwsAbstractSignature(QObject * const parent) : QObject(parent) { }

/// @todo  Document this pure-virtual function.
/*void AwsAbstractSignature::sign(const QNetworkAccessManager::Operation operation,
                               QNetworkRequest &request, const QIODevice * constdata,
                               const AwsAbstractCredentials &credentials) = 0;*/

void AwsAbstractSignature::sign(const QNetworkAccessManager::Operation operation,
                                QNetworkRequest &request, const QByteArray &data,
                                const AwsAbstractCredentials &credentials
) {
    QBuffer buffer;
    buffer.setData(data);
    buffer.open(QIODevice::ReadOnly);
    sign(operation, request, &buffer, credentials);
}

void AwsAbstractSignature::sign(const QNetworkAccessManager::Operation operation,
                                QNetworkRequest &request,
                                const AwsAbstractCredentials &credentials
) {
    sign(operation, request, NULL, credentials);
}

QTAWS_END_NAMESPACE
