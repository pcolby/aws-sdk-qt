/*
    Copyright 2013-2016 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef AWSSIGNATUREV4_P_H
#define AWSSIGNATUREV4_P_H

#include "qtawsglobal.h"
#include "awsabstractsignature_p.h"

#include <QCryptographicHash>
#include <QDateTime>
#include <QNetworkAccessManager>
#include <QUrl>
#include <QUrlQuery>

QTAWS_BEGIN_NAMESPACE

class AwsSignatureV4;

class QTAWS_EXPORT AwsSignatureV4Private : public AwsAbstractSignaturePrivate {

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

QTAWS_END_NAMESPACE

#endif
