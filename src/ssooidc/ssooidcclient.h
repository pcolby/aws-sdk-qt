// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SSOOIDCCLIENT_H
#define QTAWS_SSOOIDCCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsssooidcglobal.h"

class QNetworkReply;

namespace QtAws {
namespace SsoOidc {

class SsoOidcClientPrivate;
class CreateTokenRequest;
class CreateTokenResponse;
class RegisterClientRequest;
class RegisterClientResponse;
class StartDeviceAuthorizationRequest;
class StartDeviceAuthorizationResponse;

class QTAWSSSOOIDC_EXPORT SsoOidcClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    SsoOidcClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit SsoOidcClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateTokenResponse * createToken(const CreateTokenRequest &request);
    RegisterClientResponse * registerClient(const RegisterClientRequest &request);
    StartDeviceAuthorizationResponse * startDeviceAuthorization(const StartDeviceAuthorizationRequest &request);

private:
    Q_DECLARE_PRIVATE(SsoOidcClient)
    Q_DISABLE_COPY(SsoOidcClient)

};

} // namespace SsoOidc
} // namespace QtAws

#endif
