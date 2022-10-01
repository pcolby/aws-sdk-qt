// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef AWSSIGNATUREV4_P_H
#define AWSSIGNATUREV4_P_H

#include "qtawscoreglobal.h"
#include "awsabstractsignature_p.h"

#include <QCryptographicHash>
#include <QDateTime>
#include <QNetworkAccessManager>
#include <QUrl>
#include <QUrlQuery>

namespace QtAws {
namespace Core {

class AwsSignatureV4;

class AwsSignatureV4Private : public AwsAbstractSignaturePrivate {

public:
    AwsSignatureV4Private(const QCryptographicHash::Algorithm hashAlgorithm, AwsSignatureV4 * const q);

    void setAuthorizationHeader(const AwsAbstractCredentials &credentials,
                                const QNetworkAccessManager::Operation operation,
                                QNetworkRequest &request, const QByteArray &payload,
                                const QDateTime &timestamp) const;

    QDateTime setDateHeader(QNetworkRequest &request, const QDateTime &dateTime = QDateTime::currentDateTimeUtc()) const;

protected:
    static const QLatin1String DateFormat;
    static const QLatin1String DateTimeFormat;

    const QCryptographicHash::Algorithm hashAlgorithm; ///< Hash algorithm to use when signing.

    QByteArray algorithmDesignation(const QCryptographicHash::Algorithm algorithm) const;

    QByteArray authorizationHeaderValue(const AwsAbstractCredentials &credentials,
                                        const QNetworkAccessManager::Operation operation,
                                        QNetworkRequest &request, const QByteArray &payload,
                                        const QDateTime &timestamp) const;

    QByteArray canonicalHeader(const QByteArray &headerName, const QByteArray &headerValue) const;

    QByteArray canonicalHeaders(const QNetworkRequest &request, QByteArray * const signedHeaders) const;

    QByteArray canonicalRequest(const QNetworkAccessManager::Operation operation, const QNetworkRequest &request,
                                const QByteArray &payload, QByteArray * const signedHeaders) const;

    QByteArray credentialScope(const QDate &date, const QString &region, const QString &service) const;

    QByteArray signingKey(const AwsAbstractCredentials &credentials, const QDate &date,
                          const QString &region, const QString &service) const;

    QByteArray stringToSign(const QByteArray &algorithmDesignation, const QDateTime &requestDate,
                            const QByteArray &credentialScope, const QByteArray &canonicalRequest) const;

private:
    Q_DECLARE_PUBLIC(AwsSignatureV4)
    Q_DISABLE_COPY(AwsSignatureV4Private)
    friend class TestAwsSignatureV4;
};

} // namespace Core
} // namespace QtAws

#endif
