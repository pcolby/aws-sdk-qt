// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include <QTest>
#include "core/qtawsglobal.h"

#include <QNetworkAccessManager>
#include <QVariantMap>

class TestAwsSignatureV4 : public QObject {
    Q_OBJECT

private:
    static const QString AwsTestSuiteAccessKeyId;
    static const QString AwsTestSuiteSecretKey;

    QVariantMap officialAwsTestSuiteData;

    int loadOfficialTestSuiteData();

    QNetworkAccessManager::Operation networkOperation(const QByteArray &req) const;
    QNetworkRequest networkRequest(const QByteArray &req) const;
    QByteArray networkRequestPayload(const QByteArray &req) const;
    QByteArray requestCredentialScope(const QByteArray &sts) const;
    QDateTime requestDate(const QByteArray &authz) const;
    QByteArray signedHeaders(const QByteArray &sreq) const;

private slots:
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
    void initTestCase();

    void algorithmDesignation_data();
    void algorithmDesignation();

    void authorizationHeaderValue_data();
    void authorizationHeaderValue();

    void canonicalHeader_data();
    void canonicalHeader();

    void canonicalHeaders_data();
    void canonicalHeaders();

    void canonicalRequest_data();
    void canonicalRequest();

    void credentialScope_data();
    void credentialScope();

    void setAuthorizationHeader_data();
    void setAuthorizationHeader();

    void setDateHeader_data();
    void setDateHeader();
#endif

    void sign();

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
    void signingKey_data();
    void signingKey();

    void stringToSign_data();
    void stringToSign();
#endif

    void version();
};
