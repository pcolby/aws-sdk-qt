/*
    Copyright 2013-2018 Paul Colby

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

#include "cognitoidentityclient.h"
#include "cognitoidentityclient_p.h"

#include "core/awssignaturev4.h"
#include "createidentitypoolrequest.h"
#include "createidentitypoolresponse.h"
#include "deleteidentitiesrequest.h"
#include "deleteidentitiesresponse.h"
#include "deleteidentitypoolrequest.h"
#include "deleteidentitypoolresponse.h"
#include "describeidentityrequest.h"
#include "describeidentityresponse.h"
#include "describeidentitypoolrequest.h"
#include "describeidentitypoolresponse.h"
#include "getcredentialsforidentityrequest.h"
#include "getcredentialsforidentityresponse.h"
#include "getidrequest.h"
#include "getidresponse.h"
#include "getidentitypoolrolesrequest.h"
#include "getidentitypoolrolesresponse.h"
#include "getopenidtokenrequest.h"
#include "getopenidtokenresponse.h"
#include "getopenidtokenfordeveloperidentityrequest.h"
#include "getopenidtokenfordeveloperidentityresponse.h"
#include "listidentitiesrequest.h"
#include "listidentitiesresponse.h"
#include "listidentitypoolsrequest.h"
#include "listidentitypoolsresponse.h"
#include "lookupdeveloperidentityrequest.h"
#include "lookupdeveloperidentityresponse.h"
#include "mergedeveloperidentitiesrequest.h"
#include "mergedeveloperidentitiesresponse.h"
#include "setidentitypoolrolesrequest.h"
#include "setidentitypoolrolesresponse.h"
#include "unlinkdeveloperidentityrequest.h"
#include "unlinkdeveloperidentityresponse.h"
#include "unlinkidentityrequest.h"
#include "unlinkidentityresponse.h"
#include "updateidentitypoolrequest.h"
#include "updateidentitypoolresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::CognitoIdentity
 * \brief The QtAws::CognitoIdentity contains stuff...
 *
 * \inmodule QtAwsCognitoIdentity
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace CognitoIdentity {

/*!
 * \class QtAws::CognitoIdentity::CognitoIdentityClient
 * \brief The CognitoIdentityClient class provides access to the Amazon Cognito Identity service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCognitoIdentity
 *
 *  <fullname>Amazon Cognito</fullname>
 * 
 *  Amazon Cognito is a web service that delivers scoped temporary credentials to mobile devices and other untrusted
 *  environments. Amazon Cognito uniquely identifies a device and supplies the user with a consistent identity over the
 *  lifetime of an
 * 
 *  application>
 * 
 *  Using Amazon Cognito, you can enable authentication with one or more third-party identity providers (Facebook, Google,
 *  or Login with Amazon), and you can also choose to support unauthenticated access from your app. Cognito delivers a
 *  unique identifier for each user and acts as an OpenID token provider trusted by AWS Security Token Service (STS) to
 *  access temporary, limited-privilege AWS
 * 
 *  credentials>
 * 
 *  To provide end-user credentials, first make an unsigned call to <a>GetId</a>. If the end user is authenticated with one
 *  of the supported identity providers, set the <code>Logins</code> map with the identity provider token.
 *  <code>GetId</code> returns a unique identifier for the
 * 
 *  user>
 * 
 *  Next, make an unsigned call to <a>GetCredentialsForIdentity</a>. This call expects the same <code>Logins</code> map as
 *  the <code>GetId</code> call, as well as the <code>IdentityID</code> originally returned by <code>GetId</code>. Assuming
 *  your identity pool has been configured via the <a>SetIdentityPoolRoles</a> operation,
 *  <code>GetCredentialsForIdentity</code> will return AWS credentials for your use. If your pool has not been configured
 *  with <code>SetIdentityPoolRoles</code>, or if you want to follow legacy flow, make an unsigned call to
 *  <a>GetOpenIdToken</a>, which returns the OpenID token necessary to call STS and retrieve AWS credentials. This call
 *  expects the same <code>Logins</code> map as the <code>GetId</code> call, as well as the <code>IdentityID</code>
 *  originally returned by <code>GetId</code>. The token returned by <code>GetOpenIdToken</code> can be passed to the STS
 *  operation <a
 *  href="http://docs.aws.amazon.com/STS/latest/APIReference/API_AssumeRoleWithWebIdentity.html">AssumeRoleWithWebIdentity</a>
 *  to retrieve AWS
 * 
 *  credentials>
 * 
 *  If you want to use Amazon Cognito in an Android, iOS, or Unity application, you will probably want to make API calls via
 *  the AWS Mobile SDK. To learn more, see the <a href="http://docs.aws.amazon.com/mobile/index.html">AWS Mobile SDK
 *  Developer
 */

/*!
 * \brief Constructs a CognitoIdentityClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
CognitoIdentityClient::CognitoIdentityClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CognitoIdentityClientPrivate(this), parent)
{
    Q_D(CognitoIdentityClient);
    d->apiVersion = QStringLiteral("2014-06-30");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("cognito-identity");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Cognito Identity");
    d->serviceName = QStringLiteral("cognito-identity");
}

/*!
 * \overload CognitoIdentityClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
CognitoIdentityClient::CognitoIdentityClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CognitoIdentityClientPrivate(this), parent)
{
    Q_D(CognitoIdentityClient);
    d->apiVersion = QStringLiteral("2014-06-30");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("cognito-identity");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Cognito Identity");
    d->serviceName = QStringLiteral("cognito-identity");
}

/*!
 * Sends \a request to the CognitoIdentityClient service, and returns a pointer to an
 * CreateIdentityPoolResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new identity pool. The identity pool is a store of user identity information that is specific to your AWS
 * account. The limit on identity pools is 60 per account. The keys for <code>SupportedLoginProviders</code> are as
 *
 * follows> <ul> <li>
 *
 * Facebook: <code>graph.facebook.com</code>
 *
 * </p </li> <li>
 *
 * Google: <code>accounts.google.com</code>
 *
 * </p </li> <li>
 *
 * Amazon: <code>www.amazon.com</code>
 *
 * </p </li> <li>
 *
 * Twitter: <code>api.twitter.com</code>
 *
 * </p </li> <li>
 *
 * Digits: <code>www.digits.com</code>
 *
 * </p </li> </ul>
 *
 * You must use AWS Developer credentials to call this
 */
CreateIdentityPoolResponse * CognitoIdentityClient::createIdentityPool(const CreateIdentityPoolRequest &request)
{
    return qobject_cast<CreateIdentityPoolResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityClient service, and returns a pointer to an
 * DeleteIdentitiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes identities from an identity pool. You can specify a list of 1-60 identities that you want to
 *
 * delete>
 *
 * You must use AWS Developer credentials to call this
 */
DeleteIdentitiesResponse * CognitoIdentityClient::deleteIdentities(const DeleteIdentitiesRequest &request)
{
    return qobject_cast<DeleteIdentitiesResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityClient service, and returns a pointer to an
 * DeleteIdentityPoolResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a user pool. Once a pool is deleted, users will not be able to authenticate with the
 *
 * pool>
 *
 * You must use AWS Developer credentials to call this
 */
DeleteIdentityPoolResponse * CognitoIdentityClient::deleteIdentityPool(const DeleteIdentityPoolRequest &request)
{
    return qobject_cast<DeleteIdentityPoolResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityClient service, and returns a pointer to an
 * DescribeIdentityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns metadata related to the given identity, including when the identity was created and any associated linked
 *
 * logins>
 *
 * You must use AWS Developer credentials to call this
 */
DescribeIdentityResponse * CognitoIdentityClient::describeIdentity(const DescribeIdentityRequest &request)
{
    return qobject_cast<DescribeIdentityResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityClient service, and returns a pointer to an
 * DescribeIdentityPoolResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets details about a particular identity pool, including the pool name, ID description, creation date, and current
 * number of
 *
 * users>
 *
 * You must use AWS Developer credentials to call this
 */
DescribeIdentityPoolResponse * CognitoIdentityClient::describeIdentityPool(const DescribeIdentityPoolRequest &request)
{
    return qobject_cast<DescribeIdentityPoolResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityClient service, and returns a pointer to an
 * GetCredentialsForIdentityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns credentials for the provided identity ID. Any provided logins will be validated against supported login
 * providers. If the token is for cognito-identity.amazonaws.com, it will be passed through to AWS Security Token Service
 * with the appropriate role for the
 *
 * token>
 *
 * This is a public API. You do not need any credentials to call this
 */
GetCredentialsForIdentityResponse * CognitoIdentityClient::getCredentialsForIdentity(const GetCredentialsForIdentityRequest &request)
{
    return qobject_cast<GetCredentialsForIdentityResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityClient service, and returns a pointer to an
 * GetIdResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates (or retrieves) a Cognito ID. Supplying multiple logins will create an implicit linked
 *
 * account>
 *
 * This is a public API. You do not need any credentials to call this
 */
GetIdResponse * CognitoIdentityClient::getId(const GetIdRequest &request)
{
    return qobject_cast<GetIdResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityClient service, and returns a pointer to an
 * GetIdentityPoolRolesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the roles for an identity
 *
 * pool>
 *
 * You must use AWS Developer credentials to call this
 */
GetIdentityPoolRolesResponse * CognitoIdentityClient::getIdentityPoolRoles(const GetIdentityPoolRolesRequest &request)
{
    return qobject_cast<GetIdentityPoolRolesResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityClient service, and returns a pointer to an
 * GetOpenIdTokenResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an OpenID token, using a known Cognito ID. This known Cognito ID is returned by <a>GetId</a>. You can optionally
 * add additional logins for the identity. Supplying multiple logins creates an implicit
 *
 * link>
 *
 * The OpenId token is valid for 15
 *
 * minutes>
 *
 * This is a public API. You do not need any credentials to call this
 */
GetOpenIdTokenResponse * CognitoIdentityClient::getOpenIdToken(const GetOpenIdTokenRequest &request)
{
    return qobject_cast<GetOpenIdTokenResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityClient service, and returns a pointer to an
 * GetOpenIdTokenForDeveloperIdentityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers (or retrieves) a Cognito <code>IdentityId</code> and an OpenID Connect token for a user authenticated by your
 * backend authentication process. Supplying multiple logins will create an implicit linked account. You can only specify
 * one developer provider as part of the <code>Logins</code> map, which is linked to the identity pool. The developer
 * provider is the "domain" by which Cognito will refer to your
 *
 * users>
 *
 * You can use <code>GetOpenIdTokenForDeveloperIdentity</code> to create a new identity and to link new logins (that is,
 * user credentials issued by a public provider or developer provider) to an existing identity. When you want to create a
 * new identity, the <code>IdentityId</code> should be null. When you want to associate a new login with an existing
 * authenticated/unauthenticated identity, you can do so by providing the existing <code>IdentityId</code>. This API will
 * create the identity in the specified
 *
 * <code>IdentityPoolId</code>>
 *
 * You must use AWS Developer credentials to call this
 */
GetOpenIdTokenForDeveloperIdentityResponse * CognitoIdentityClient::getOpenIdTokenForDeveloperIdentity(const GetOpenIdTokenForDeveloperIdentityRequest &request)
{
    return qobject_cast<GetOpenIdTokenForDeveloperIdentityResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityClient service, and returns a pointer to an
 * ListIdentitiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the identities in a
 *
 * pool>
 *
 * You must use AWS Developer credentials to call this
 */
ListIdentitiesResponse * CognitoIdentityClient::listIdentities(const ListIdentitiesRequest &request)
{
    return qobject_cast<ListIdentitiesResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityClient service, and returns a pointer to an
 * ListIdentityPoolsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all of the Cognito identity pools registered for your
 *
 * account>
 *
 * You must use AWS Developer credentials to call this
 */
ListIdentityPoolsResponse * CognitoIdentityClient::listIdentityPools(const ListIdentityPoolsRequest &request)
{
    return qobject_cast<ListIdentityPoolsResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityClient service, and returns a pointer to an
 * LookupDeveloperIdentityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the <code>IdentityID</code> associated with a <code>DeveloperUserIdentifier</code> or the list of
 * <code>DeveloperUserIdentifier</code>s associated with an <code>IdentityId</code> for an existing identity. Either
 * <code>IdentityID</code> or <code>DeveloperUserIdentifier</code> must not be null. If you supply only one of these
 * values, the other value will be searched in the database and returned as a part of the response. If you supply both,
 * <code>DeveloperUserIdentifier</code> will be matched against <code>IdentityID</code>. If the values are verified against
 * the database, the response returns both values and is the same as the request. Otherwise a
 * <code>ResourceConflictException</code> is
 *
 * thrown>
 *
 * You must use AWS Developer credentials to call this
 */
LookupDeveloperIdentityResponse * CognitoIdentityClient::lookupDeveloperIdentity(const LookupDeveloperIdentityRequest &request)
{
    return qobject_cast<LookupDeveloperIdentityResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityClient service, and returns a pointer to an
 * MergeDeveloperIdentitiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Merges two users having different <code>IdentityId</code>s, existing in the same identity pool, and identified by the
 * same developer provider. You can use this action to request that discrete users be merged and identified as a single
 * user in the Cognito environment. Cognito associates the given source user (<code>SourceUserIdentifier</code>) with the
 * <code>IdentityId</code> of the <code>DestinationUserIdentifier</code>. Only developer-authenticated users can be merged.
 * If the users to be merged are associated with the same public provider, but as two different users, an exception will be
 *
 * thrown>
 *
 * You must use AWS Developer credentials to call this
 */
MergeDeveloperIdentitiesResponse * CognitoIdentityClient::mergeDeveloperIdentities(const MergeDeveloperIdentitiesRequest &request)
{
    return qobject_cast<MergeDeveloperIdentitiesResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityClient service, and returns a pointer to an
 * SetIdentityPoolRolesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the roles for an identity pool. These roles are used when making calls to <a>GetCredentialsForIdentity</a>
 *
 * action>
 *
 * You must use AWS Developer credentials to call this
 */
SetIdentityPoolRolesResponse * CognitoIdentityClient::setIdentityPoolRoles(const SetIdentityPoolRolesRequest &request)
{
    return qobject_cast<SetIdentityPoolRolesResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityClient service, and returns a pointer to an
 * UnlinkDeveloperIdentityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Unlinks a <code>DeveloperUserIdentifier</code> from an existing identity. Unlinked developer users will be considered
 * new identities next time they are seen. If, for a given Cognito identity, you remove all federated identities as well as
 * the developer user identifier, the Cognito identity becomes
 *
 * inaccessible>
 *
 * You must use AWS Developer credentials to call this
 */
UnlinkDeveloperIdentityResponse * CognitoIdentityClient::unlinkDeveloperIdentity(const UnlinkDeveloperIdentityRequest &request)
{
    return qobject_cast<UnlinkDeveloperIdentityResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityClient service, and returns a pointer to an
 * UnlinkIdentityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Unlinks a federated identity from an existing account. Unlinked logins will be considered new identities next time they
 * are seen. Removing the last linked login will make this identity
 *
 * inaccessible>
 *
 * This is a public API. You do not need any credentials to call this
 */
UnlinkIdentityResponse * CognitoIdentityClient::unlinkIdentity(const UnlinkIdentityRequest &request)
{
    return qobject_cast<UnlinkIdentityResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityClient service, and returns a pointer to an
 * UpdateIdentityPoolResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a user
 *
 * pool>
 *
 * You must use AWS Developer credentials to call this
 */
UpdateIdentityPoolResponse * CognitoIdentityClient::updateIdentityPool(const UpdateIdentityPoolRequest &request)
{
    return qobject_cast<UpdateIdentityPoolResponse *>(send(request));
}

/*!
 * \class QtAws::CognitoIdentity::CognitoIdentityClientPrivate
 * \brief The CognitoIdentityClientPrivate class provides private implementation for CognitoIdentityClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCognitoIdentity
 */

/*!
 * Constructs a CognitoIdentityClientPrivate object with public implementation \a q.
 */
CognitoIdentityClientPrivate::CognitoIdentityClientPrivate(CognitoIdentityClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace CognitoIdentity
} // namespace QtAws
