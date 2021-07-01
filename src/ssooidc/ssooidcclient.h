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

#ifndef QTAWS_SSOOIDCCLIENT_H
#define QTAWS_SSOOIDCCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsssooidcglobal.h"

class QNetworkReply;

namespace QtAws {
namespace SSOOIDC {

class SsooidcClientPrivate;
class CreateTokenRequest;
class CreateTokenResponse;
class RegisterClientRequest;
class RegisterClientResponse;
class StartDeviceAuthorizationRequest;
class StartDeviceAuthorizationResponse;

class QTAWSSSOOIDC_EXPORT SsooidcClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    SsooidcClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit SsooidcClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateTokenResponse * createToken(const CreateTokenRequest &request);
    RegisterClientResponse * registerClient(const RegisterClientRequest &request);
    StartDeviceAuthorizationResponse * startDeviceAuthorization(const StartDeviceAuthorizationRequest &request);

private:
    Q_DECLARE_PRIVATE(SsooidcClient)
    Q_DISABLE_COPY(SsooidcClient)

};

} // namespace SSOOIDC
} // namespace QtAws

#endif
