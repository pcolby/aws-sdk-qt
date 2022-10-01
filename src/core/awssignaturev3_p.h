// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef AWSSIGNATUREV3_P_H
#define AWSSIGNATUREV3_P_H

#include "qtawscoreglobal.h"
#include "awsabstractsignature_p.h"

#include <QCryptographicHash>
#include <QDateTime>
#include <QNetworkAccessManager>
#include <QUrl>
#include <QUrlQuery>

namespace QtAws {
namespace Core {

class AwsSignatureV3;

class AwsSignatureV3Private : public AwsAbstractSignaturePrivate {

public:
    AwsSignatureV3Private(const QCryptographicHash::Algorithm hashAlgorithm, AwsSignatureV3 * const q);

    void setAuthorizationHeader(const AwsAbstractCredentials &credentials,
                                const QNetworkAccessManager::Operation operation,
                                QNetworkRequest &request, const QByteArray &payload) const;

    void setDateHeader(QNetworkRequest &request, const QDateTime &dateTime = QDateTime::currentDateTimeUtc()) const;

protected:
    const QCryptographicHash::Algorithm hashAlgorithm; ///< Hash algorithm to use when signing.

    QByteArray algorithmDesignation(const QCryptographicHash::Algorithm algorithm) const;

    QByteArray authorizationHeaderValue(const AwsAbstractCredentials &credentials,
                                        const QNetworkAccessManager::Operation operation,
                                        const QNetworkRequest &request, const QByteArray &payload) const;

    QByteArray canonicalHeader(const QByteArray &headerName, const QByteArray &headerValue) const;

    QByteArray canonicalHeaders(const QNetworkRequest &request, QByteArray * const signedHeaders) const;

    QByteArray canonicalRequest(const QNetworkAccessManager::Operation operation, const QNetworkRequest &request,
                                const QByteArray &payload, QByteArray * const signedHeaders) const;

    static inline bool isHttps(const QNetworkRequest &request);

private:
    Q_DECLARE_PUBLIC(AwsSignatureV3)
    Q_DISABLE_COPY(AwsSignatureV3Private)
    friend class TestAwsSignatureV3;
};

} // namespace Core
} // namespace QtAws

#endif
