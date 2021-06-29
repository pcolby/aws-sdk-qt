/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_STSCLIENT_H
#define QTAWS_STSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsstsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace STS {

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

    StsClient(
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

protected:
    /// @cond internal
    StsClientPrivate * const d_ptr; ///< Internal d-pointer.
    StsClient(StsClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(StsClient)
    Q_DISABLE_COPY(StsClient)

};

} // namespace STS
} // namespace QtAws

#endif
