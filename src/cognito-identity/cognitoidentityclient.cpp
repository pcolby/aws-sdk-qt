/*
    Copyright 2013-2018 Paul Colby

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

#include "cognitoidentityclient.h"
#include "cognitoidentityclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace CognitoIdentity {

/**
 * @class  CognitoIdentityClient
 *
 * @brief  Client for Amazon Cognito Identity
 *
 * <fullname>Amazon Cognito</fullname>
 *
 * Amazon Cognito is a web service that delivers scoped temporary credentials to mobile devices and other untrusted
 * environments. Amazon Cognito uniquely identifies a device and supplies the user with a consistent identity over the
 * lifetime of an
 *
 * application>
 *
 * Using Amazon Cognito, you can enable authentication with one or more third-party identity providers (Facebook, Google,
 * or Login with Amazon), and you can also choose to support unauthenticated access from your app. Cognito delivers a
 * unique identifier for each user and acts as an OpenID token provider trusted by AWS Security Token Service (STS) to
 * access temporary, limited-privilege AWS
 *
 * credentials>
 *
 * To provide end-user credentials, first make an unsigned call to <a>GetId</a>. If the end user is authenticated with one
 * of the supported identity providers, set the <code>Logins</code> map with the identity provider token.
 * <code>GetId</code> returns a unique identifier for the
 *
 * user>
 *
 * Next, make an unsigned call to <a>GetCredentialsForIdentity</a>. This call expects the same <code>Logins</code> map as
 * the <code>GetId</code> call, as well as the <code>IdentityID</code> originally returned by <code>GetId</code>. Assuming
 * your identity pool has been configured via the <a>SetIdentityPoolRoles</a> operation,
 * <code>GetCredentialsForIdentity</code> will return AWS credentials for your use. If your pool has not been configured
 * with <code>SetIdentityPoolRoles</code>, or if you want to follow legacy flow, make an unsigned call to
 * <a>GetOpenIdToken</a>, which returns the OpenID token necessary to call STS and retrieve AWS credentials. This call
 * expects the same <code>Logins</code> map as the <code>GetId</code> call, as well as the <code>IdentityID</code>
 * originally returned by <code>GetId</code>. The token returned by <code>GetOpenIdToken</code> can be passed to the STS
 * operation <a
 * href="http://docs.aws.amazon.com/STS/latest/APIReference/API_AssumeRoleWithWebIdentity.html">AssumeRoleWithWebIdentity</a>
 * to retrieve AWS
 *
 * credentials>
 *
 * If you want to use Amazon Cognito in an Android, iOS, or Unity application, you will probably want to make API calls via
 * the AWS Mobile SDK. To learn more, see the <a href="http://docs.aws.amazon.com/mobile/index.html">AWS Mobile SDK
 * Developer
 */

/**
 * @brief  Constructs a new CognitoIdentityClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
CognitoIdentityClient::CognitoIdentityClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CognitoIdentityClientPrivate(this), parent)
{
    Q_D(CognitoIdentityClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new CognitoIdentityClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
CognitoIdentityClient::CognitoIdentityClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CognitoIdentityClientPrivate(this), parent)
{
    Q_D(CognitoIdentityClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  CognitoIdentityClientPrivate
 *
 * @brief  Private implementation for CognitoIdentityClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CognitoIdentityClientPrivate object.
 *
 * @param  q  Pointer to this object's public CognitoIdentityClient instance.
 */
CognitoIdentityClientPrivate::CognitoIdentityClientPrivate(CognitoIdentityClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace CognitoIdentity
} // namespace AWS
