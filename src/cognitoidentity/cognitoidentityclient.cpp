// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
#include "getprincipaltagattributemaprequest.h"
#include "getprincipaltagattributemapresponse.h"
#include "listidentitiesrequest.h"
#include "listidentitiesresponse.h"
#include "listidentitypoolsrequest.h"
#include "listidentitypoolsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "lookupdeveloperidentityrequest.h"
#include "lookupdeveloperidentityresponse.h"
#include "mergedeveloperidentitiesrequest.h"
#include "mergedeveloperidentitiesresponse.h"
#include "setidentitypoolrolesrequest.h"
#include "setidentitypoolrolesresponse.h"
#include "setprincipaltagattributemaprequest.h"
#include "setprincipaltagattributemapresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "unlinkdeveloperidentityrequest.h"
#include "unlinkdeveloperidentityresponse.h"
#include "unlinkidentityrequest.h"
#include "unlinkidentityresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateidentitypoolrequest.h"
#include "updateidentitypoolresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::CognitoIdentity
 * \brief Contains classess for accessing Amazon Cognito Identity.
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
 *  <fullname>Amazon Cognito Federated Identities</fullname>
 * 
 *  Amazon Cognito Federated Identities is a web service that delivers scoped temporary credentials to mobile devices and
 *  other untrusted environments. It uniquely identifies a device and supplies the user with a consistent identity over the
 *  lifetime of an
 * 
 *  application>
 * 
 *  Using Amazon Cognito Federated Identities, you can enable authentication with one or more third-party identity providers
 *  (Facebook, Google, or Login with Amazon) or an Amazon Cognito user pool, and you can also choose to support
 *  unauthenticated access from your app. Cognito delivers a unique identifier for each user and acts as an OpenID token
 *  provider trusted by AWS Security Token Service (STS) to access temporary, limited-privilege AWS
 * 
 *  credentials>
 * 
 *  For a description of the authentication flow from the Amazon Cognito Developer Guide see <a
 *  href="https://docs.aws.amazon.com/cognito/latest/developerguide/authentication-flow.html">Authentication
 * 
 *  Flow</a>>
 * 
 *  For more information see <a
 *  href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-identity.html">Amazon Cognito Federated
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
 * account. The keys for <code>SupportedLoginProviders</code> are as
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
 * Deletes an identity pool. Once a pool is deleted, users will not be able to authenticate with the
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
 * The OpenID token is valid for 10
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
 * GetPrincipalTagAttributeMapResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Use <code>GetPrincipalTagAttributeMap</code> to list all mappings between <code>PrincipalTags</code> and user
 */
GetPrincipalTagAttributeMapResponse * CognitoIdentityClient::getPrincipalTagAttributeMap(const GetPrincipalTagAttributeMapRequest &request)
{
    return qobject_cast<GetPrincipalTagAttributeMapResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityClient service, and returns a pointer to an
 * ListIdentitiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the identities in an identity
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
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags that are assigned to an Amazon Cognito identity
 *
 * pool>
 *
 * A tag is a label that you can apply to identity pools to categorize and manage them in different ways, such as by
 * purpose, owner, environment, or other
 *
 * criteria>
 *
 * You can use this action up to 10 times per second, per
 */
ListTagsForResourceResponse * CognitoIdentityClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityClient service, and returns a pointer to an
 * LookupDeveloperIdentityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the <code>IdentityID</code> associated with a <code>DeveloperUserIdentifier</code> or the list of
 * <code>DeveloperUserIdentifier</code> values associated with an <code>IdentityId</code> for an existing identity. Either
 * <code>IdentityID</code> or <code>DeveloperUserIdentifier</code> must not be null. If you supply only one of these
 * values, the other value will be searched in the database and returned as a part of the response. If you supply both,
 * <code>DeveloperUserIdentifier</code> will be matched against <code>IdentityID</code>. If the values are verified against
 * the database, the response returns both values and is the same as the request. Otherwise a
 * <code>ResourceConflictException</code> is
 *
 * thrown>
 *
 * <code>LookupDeveloperIdentity</code> is intended for low-throughput control plane operations: for example, to enable
 * customer service to locate an identity ID by username. If you are using it for higher-volume operations such as user
 * authentication, your requests are likely to be throttled. <a>GetOpenIdTokenForDeveloperIdentity</a> is a better option
 * for higher-volume operations for user
 *
 * authentication>
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
 * The number of linked logins is limited to 20. So, the number of linked logins for the source user,
 * <code>SourceUserIdentifier</code>, and the destination user, <code>DestinationUserIdentifier</code>, together should not
 * be larger than 20. Otherwise, an exception will be
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
 * SetPrincipalTagAttributeMapResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * You can use this operation to use default (username and clientID) attribute or custom attribute
 */
SetPrincipalTagAttributeMapResponse * CognitoIdentityClient::setPrincipalTagAttributeMap(const SetPrincipalTagAttributeMapRequest &request)
{
    return qobject_cast<SetPrincipalTagAttributeMapResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns a set of tags to the specified Amazon Cognito identity pool. A tag is a label that you can use to categorize and
 * manage identity pools in different ways, such as by purpose, owner, environment, or other
 *
 * criteria>
 *
 * Each tag consists of a key and value, both of which you define. A key is a general category for more specific values.
 * For example, if you have two versions of an identity pool, one for testing and another for production, you might assign
 * an <code>Environment</code> tag key to both identity pools. The value of this key might be <code>Test</code> for one
 * identity pool and <code>Production</code> for the
 *
 * other>
 *
 * Tags are useful for cost tracking and access control. You can activate your tags so that they appear on the Billing and
 * Cost Management console, where you can track the costs associated with your identity pools. In an IAM policy, you can
 * constrain permissions for identity pools based on specific tags or tag
 *
 * values>
 *
 * You can use this action up to 5 times per second, per account. An identity pool can have as many as 50
 */
TagResourceResponse * CognitoIdentityClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
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
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified tags from the specified Amazon Cognito identity pool. You can use this action up to 5 times per
 * second, per
 */
UntagResourceResponse * CognitoIdentityClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoIdentityClient service, and returns a pointer to an
 * UpdateIdentityPoolResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an identity
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
