/*
    Copyright 2013 Paul Colby

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

#include <QTest>
#include "../../src/core/qtawsglobal.h"

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

    void sign();

    void signingKey_data();
    void signingKey();

    void stringToSign_data();
    void stringToSign();
};
