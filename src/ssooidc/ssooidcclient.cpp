// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "ssooidcclient.h"
#include "ssooidcclient_p.h"

#include "core/awssignaturev4.h"
#include "createtokenrequest.h"
#include "createtokenresponse.h"
#include "registerclientrequest.h"
#include "registerclientresponse.h"
#include "startdeviceauthorizationrequest.h"
#include "startdeviceauthorizationresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::SsoOidc
 * \brief Contains classess for accessing AWS SSO OIDC.
 *
 * \inmodule QtAwsSsoOidc
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace SsoOidc {

/*!
 * \class QtAws::SsoOidc::SsoOidcClient
 * \brief The SsoOidcClient class provides access to the AWS SSO OIDC service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSsoOidc
 *
 *  AWS Single Sign-On (SSO) OpenID Connect (OIDC) is a web service that enables a client (such as AWS CLI or a native
 *  application) to register with AWS SSO. The service also enables the client to fetch the user’s access token upon
 *  successful authentication and authorization with AWS SSO. This service conforms with the OAuth 2.0 based implementation
 *  of the device authorization grant standard (<a
 * 
 *  href="https://tools.ietf.org/html/rfc8628">https://tools.ietf.org/html/rfc8628</a>)>
 * 
 *  For general information about AWS SSO, see <a
 *  href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html">What is AWS Single Sign-On?</a> in the
 *  <i>AWS SSO User
 * 
 *  Guide</i>>
 * 
 *  This API reference guide describes the AWS SSO OIDC operations that you can call programatically and includes detailed
 *  information on data types and
 * 
 *  errors> <note>
 * 
 *  AWS provides SDKs that consist of libraries and sample code for various programming languages and platforms such as
 *  Java, Ruby, .Net, iOS, and Android. The SDKs provide a convenient way to create programmatic access to AWS SSO and other
 *  AWS services. For more information about the AWS SDKs, including how to download and install them, see <a
 *  href="http://aws.amazon.com/tools/">Tools for Amazon Web
 */

/*!
 * \brief Constructs a SsoOidcClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
SsoOidcClient::SsoOidcClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SsoOidcClientPrivate(this), parent)
{
    Q_D(SsoOidcClient);
    d->apiVersion = QStringLiteral("2019-06-10");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("oidc");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS SSO OIDC");
    d->serviceName = QStringLiteral("awsssooidc");
}

/*!
 * \overload SsoOidcClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
SsoOidcClient::SsoOidcClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SsoOidcClientPrivate(this), parent)
{
    Q_D(SsoOidcClient);
    d->apiVersion = QStringLiteral("2019-06-10");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("oidc");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS SSO OIDC");
    d->serviceName = QStringLiteral("awsssooidc");
}

/*!
 * Sends \a request to the SsoOidcClient service, and returns a pointer to an
 * CreateTokenResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates and returns an access token for the authorized client. The access token issued will be used to fetch short-term
 * credentials for the assigned roles in the AWS
 */
CreateTokenResponse * SsoOidcClient::createToken(const CreateTokenRequest &request)
{
    return qobject_cast<CreateTokenResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoOidcClient service, and returns a pointer to an
 * RegisterClientResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers a client with AWS SSO. This allows clients to initiate device authorization. The output should be persisted
 * for reuse through many authentication
 */
RegisterClientResponse * SsoOidcClient::registerClient(const RegisterClientRequest &request)
{
    return qobject_cast<RegisterClientResponse *>(send(request));
}

/*!
 * Sends \a request to the SsoOidcClient service, and returns a pointer to an
 * StartDeviceAuthorizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Initiates device authorization by requesting a pair of verification codes from the authorization
 */
StartDeviceAuthorizationResponse * SsoOidcClient::startDeviceAuthorization(const StartDeviceAuthorizationRequest &request)
{
    return qobject_cast<StartDeviceAuthorizationResponse *>(send(request));
}

/*!
 * \class QtAws::SsoOidc::SsoOidcClientPrivate
 * \brief The SsoOidcClientPrivate class provides private implementation for SsoOidcClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSsoOidc
 */

/*!
 * Constructs a SsoOidcClientPrivate object with public implementation \a q.
 */
SsoOidcClientPrivate::SsoOidcClientPrivate(SsoOidcClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace SsoOidc
} // namespace QtAws
