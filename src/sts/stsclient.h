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

#ifndef QTAWS_STSCLIENT_H
#define QTAWS_STSCLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
class StsClientPrivate;

class QTAWS_EXPORT StsClient : public AwsAbstractClient {
    Q_OBJECT

public:
    StsClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    StsClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    StsAssumeRoleResponse * assumeRole(const StsAssumeRoleRequest &request);
    StsAssumeRoleWithSAMLResponse * assumeRoleWithSAML(const StsAssumeRoleWithSAMLRequest &request);
    StsAssumeRoleWithWebIdentityResponse * assumeRoleWithWebIdentity(const StsAssumeRoleWithWebIdentityRequest &request);
    StsDecodeAuthorizationMessageResponse * decodeAuthorizationMessage(const StsDecodeAuthorizationMessageRequest &request);
    StsGetCallerIdentityResponse * getCallerIdentity(const StsGetCallerIdentityRequest &request);
    StsGetFederationTokenResponse * getFederationToken(const StsGetFederationTokenRequest &request);
    StsGetSessionTokenResponse * getSessionToken(const StsGetSessionTokenRequest &request);

private:
    Q_DECLARE_PRIVATE(StsClient)
    Q_DISABLE_COPY(StsClient)

};

QTAWS_END_NAMESPACE

#endif
