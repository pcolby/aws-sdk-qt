// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STSCLIENT_H
#define QTAWS_STSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsstsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Sts {

class StsClientPrivate;
class AssumeRoleRequest;
class AssumeRoleResponse;
class AssumeRoleWithSAMLRequest;
class AssumeRoleWithSAMLResponse;
class AssumeRoleWithWebIdentityRequest;
class AssumeRoleWithWebIdentityResponse;
class DecodeAuthorizationMessageRequest;
class DecodeAuthorizationMessageResponse;
class GetAccessKeyInfoRequest;
class GetAccessKeyInfoResponse;
class GetCallerIdentityRequest;
class GetCallerIdentityResponse;
class GetFederationTokenRequest;
class GetFederationTokenResponse;
class GetSessionTokenRequest;
class GetSessionTokenResponse;

class QTAWSSTS_EXPORT StsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    StsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit StsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssumeRoleResponse * assumeRole(const AssumeRoleRequest &request);
    AssumeRoleWithSAMLResponse * assumeRoleWithSAML(const AssumeRoleWithSAMLRequest &request);
    AssumeRoleWithWebIdentityResponse * assumeRoleWithWebIdentity(const AssumeRoleWithWebIdentityRequest &request);
    DecodeAuthorizationMessageResponse * decodeAuthorizationMessage(const DecodeAuthorizationMessageRequest &request);
    GetAccessKeyInfoResponse * getAccessKeyInfo(const GetAccessKeyInfoRequest &request);
    GetCallerIdentityResponse * getCallerIdentity(const GetCallerIdentityRequest &request);
    GetFederationTokenResponse * getFederationToken(const GetFederationTokenRequest &request);
    GetSessionTokenResponse * getSessionToken(const GetSessionTokenRequest &request);

private:
    Q_DECLARE_PRIVATE(StsClient)
    Q_DISABLE_COPY(StsClient)

};

} // namespace Sts
} // namespace QtAws

#endif
