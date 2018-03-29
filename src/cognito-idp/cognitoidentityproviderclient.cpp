/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "cognitoidentityproviderclient.h"
#include "cognitoidentityproviderclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  CognitoIdentityProviderClient
 *
 * @brief  Client for Amazon Cognito Identity Provider
 *
 * Using the Amazon Cognito User Pools API, you can create a user pool to manage directories and users. You can
 * authenticate a user to obtain tokens related to user identity and access
 *
 * policies>
 *
 * This API reference provides information about user pools in Amazon Cognito User
 *
 * Pools>
 *
 * For more information, see the Amazon Cognito
 */

/**
 * @brief  Constructs a new CognitoIdentityProviderClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
CognitoIdentityProviderClient::CognitoIdentityProviderClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CognitoIdentityProviderClientPrivate(this), parent)
{
    Q_D(CognitoIdentityProviderClient);
    d->apiVersion = QStringLiteral("2016-04-18");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("cognito-idp");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Cognito Identity Provider");
    d->serviceName = QStringLiteral("cognito-idp");
}

/**
 * @brief  Constructs a new CognitoIdentityProviderClient object.
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
CognitoIdentityProviderClient::CognitoIdentityProviderClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CognitoIdentityProviderClientPrivate(this), parent)
{
    Q_D(CognitoIdentityProviderClient);
    d->apiVersion = QStringLiteral("2016-04-18");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("cognito-idp");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Cognito Identity Provider");
    d->serviceName = QStringLiteral("cognito-idp");
}

/**
 * Adds additional user attributes to the user pool
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AddCustomAttributesResponse * CognitoIdentityProviderClient::addCustomAttributes(const AddCustomAttributesRequest &request)
{
    return qobject_cast<AddCustomAttributesResponse *>(send(request));
}

/**
 * Adds the specified user to the specified
 *
 * group>
 *
 * Requires developer
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AdminAddUserToGroupResponse * CognitoIdentityProviderClient::adminAddUserToGroup(const AdminAddUserToGroupRequest &request)
{
    return qobject_cast<AdminAddUserToGroupResponse *>(send(request));
}

/**
 * Confirms user registration as an admin without using a confirmation code. Works on any
 *
 * user>
 *
 * Requires developer
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AdminConfirmSignUpResponse * CognitoIdentityProviderClient::adminConfirmSignUp(const AdminConfirmSignUpRequest &request)
{
    return qobject_cast<AdminConfirmSignUpResponse *>(send(request));
}

/**
 * Creates a new user in the specified user
 *
 * pool>
 *
 * If <code>MessageAction</code> is not set, the default is to send a welcome message via email or phone
 *
 * (SMS)> <note>
 *
 * This message is based on a template that you configured in your call to or . This template includes your custom sign-up
 * instructions and placeholders for user name and temporary
 *
 * password> </note>
 *
 * Alternatively, you can call AdminCreateUser with “SUPPRESS” for the <code>MessageAction</code> parameter, and Amazon
 * Cognito will not send any email.
 *
 * </p
 *
 * In either case, the user will be in the <code>FORCE_CHANGE_PASSWORD</code> state until they sign in and change their
 *
 * password>
 *
 * AdminCreateUser requires developer
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AdminCreateUserResponse * CognitoIdentityProviderClient::adminCreateUser(const AdminCreateUserRequest &request)
{
    return qobject_cast<AdminCreateUserResponse *>(send(request));
}

/**
 * Deletes a user as an administrator. Works on any
 *
 * user>
 *
 * Requires developer
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AdminDeleteUserResponse * CognitoIdentityProviderClient::adminDeleteUser(const AdminDeleteUserRequest &request)
{
    return qobject_cast<AdminDeleteUserResponse *>(send(request));
}

/**
 * Deletes the user attributes in a user pool as an administrator. Works on any
 *
 * user>
 *
 * Requires developer
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AdminDeleteUserAttributesResponse * CognitoIdentityProviderClient::adminDeleteUserAttributes(const AdminDeleteUserAttributesRequest &request)
{
    return qobject_cast<AdminDeleteUserAttributesResponse *>(send(request));
}

/**
 * Disables the user from signing in with the specified external (SAML or social) identity provider. If the user to disable
 * is a Cognito User Pools native username + password user, they are not permitted to use their password to sign-in. If the
 * user to disable is a linked external IdP user, any link between that user and an existing user is removed. The next time
 * the external user (no longer attached to the previously linked <code>DestinationUser</code>) signs in, they must create
 * a new user account. See
 *
 * >
 *
 * This action is enabled only for admin access and requires developer
 *
 * credentials>
 *
 * The <code>ProviderName</code> must match the value specified when creating an IdP for the pool.
 *
 * </p
 *
 * To disable a native username + password user, the <code>ProviderName</code> value must be <code>Cognito</code> and the
 * <code>ProviderAttributeName</code> must be <code>Cognito_Subject</code>, with the <code>ProviderAttributeValue</code>
 * being the name that is used in the user pool for the
 *
 * user>
 *
 * The <code>ProviderAttributeName</code> must always be <code>Cognito_Subject</code> for social identity providers. The
 * <code>ProviderAttributeValue</code> must always be the exact subject that was used when the user was originally linked
 * as a source
 *
 * user>
 *
 * For de-linking a SAML identity, there are two scenarios. If the linked identity has not yet been used to sign-in, the
 * <code>ProviderAttributeName</code> and <code>ProviderAttributeValue</code> must be the same values that were used for
 * the <code>SourceUser</code> when the identities were originally linked in the call. (If the linking was done with
 * <code>ProviderAttributeName</code> set to <code>Cognito_Subject</code>, the same applies here). However, if the user has
 * already signed in, the <code>ProviderAttributeName</code> must be <code>Cognito_Subject</code> and
 * <code>ProviderAttributeValue</code> must be the subject of the SAML
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AdminDisableProviderForUserResponse * CognitoIdentityProviderClient::adminDisableProviderForUser(const AdminDisableProviderForUserRequest &request)
{
    return qobject_cast<AdminDisableProviderForUserResponse *>(send(request));
}

/**
 * Disables the specified user as an administrator. Works on any
 *
 * user>
 *
 * Requires developer
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AdminDisableUserResponse * CognitoIdentityProviderClient::adminDisableUser(const AdminDisableUserRequest &request)
{
    return qobject_cast<AdminDisableUserResponse *>(send(request));
}

/**
 * Enables the specified user as an administrator. Works on any
 *
 * user>
 *
 * Requires developer
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AdminEnableUserResponse * CognitoIdentityProviderClient::adminEnableUser(const AdminEnableUserRequest &request)
{
    return qobject_cast<AdminEnableUserResponse *>(send(request));
}

/**
 * Forgets the device, as an
 *
 * administrator>
 *
 * Requires developer
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AdminForgetDeviceResponse * CognitoIdentityProviderClient::adminForgetDevice(const AdminForgetDeviceRequest &request)
{
    return qobject_cast<AdminForgetDeviceResponse *>(send(request));
}

/**
 * Gets the device, as an
 *
 * administrator>
 *
 * Requires developer
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AdminGetDeviceResponse * CognitoIdentityProviderClient::adminGetDevice(const AdminGetDeviceRequest &request)
{
    return qobject_cast<AdminGetDeviceResponse *>(send(request));
}

/**
 * Gets the specified user by user name in a user pool as an administrator. Works on any
 *
 * user>
 *
 * Requires developer
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AdminGetUserResponse * CognitoIdentityProviderClient::adminGetUser(const AdminGetUserRequest &request)
{
    return qobject_cast<AdminGetUserResponse *>(send(request));
}

/**
 * Initiates the authentication flow, as an
 *
 * administrator>
 *
 * Requires developer
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AdminInitiateAuthResponse * CognitoIdentityProviderClient::adminInitiateAuth(const AdminInitiateAuthRequest &request)
{
    return qobject_cast<AdminInitiateAuthResponse *>(send(request));
}

/**
 * Links an existing user account in a user pool (<code>DestinationUser</code>) to an identity from an external identity
 * provider (<code>SourceUser</code>) based on a specified attribute name and value from the external identity provider.
 * This allows you to create a link from the existing user account to an external federated user identity that has not yet
 * been used to sign in, so that the federated user identity can be used to sign in as the existing user account.
 *
 * </p
 *
 * For example, if there is an existing user with a username and password, this API links that user to a federated user
 * identity, so that when the federated user identity is used, the user signs in as the existing user account.
 *
 * </p <b>
 *
 * Because this API allows a user with an external federated identity to sign in as an existing user in the user pool, it
 * is critical that it only be used with external identity providers and provider attributes that have been trusted by the
 * application
 *
 * owner> </b>
 *
 * See also
 *
 * >
 *
 * This action is enabled only for admin access and requires developer
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AdminLinkProviderForUserResponse * CognitoIdentityProviderClient::adminLinkProviderForUser(const AdminLinkProviderForUserRequest &request)
{
    return qobject_cast<AdminLinkProviderForUserResponse *>(send(request));
}

/**
 * Lists devices, as an
 *
 * administrator>
 *
 * Requires developer
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AdminListDevicesResponse * CognitoIdentityProviderClient::adminListDevices(const AdminListDevicesRequest &request)
{
    return qobject_cast<AdminListDevicesResponse *>(send(request));
}

/**
 * Lists the groups that the user belongs
 *
 * to>
 *
 * Requires developer
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AdminListGroupsForUserResponse * CognitoIdentityProviderClient::adminListGroupsForUser(const AdminListGroupsForUserRequest &request)
{
    return qobject_cast<AdminListGroupsForUserResponse *>(send(request));
}

/**
 * Lists a history of user activity and any risks detected as part of Amazon Cognito advanced
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AdminListUserAuthEventsResponse * CognitoIdentityProviderClient::adminListUserAuthEvents(const AdminListUserAuthEventsRequest &request)
{
    return qobject_cast<AdminListUserAuthEventsResponse *>(send(request));
}

/**
 * Removes the specified user from the specified
 *
 * group>
 *
 * Requires developer
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AdminRemoveUserFromGroupResponse * CognitoIdentityProviderClient::adminRemoveUserFromGroup(const AdminRemoveUserFromGroupRequest &request)
{
    return qobject_cast<AdminRemoveUserFromGroupResponse *>(send(request));
}

/**
 * Resets the specified user's password in a user pool as an administrator. Works on any
 *
 * user>
 *
 * When a developer calls this API, the current password is invalidated, so it must be changed. If a user tries to sign in
 * after the API is called, the app will get a PasswordResetRequiredException exception back and should direct the user
 * down the flow to reset the password, which is the same as the forgot password flow. In addition, if the user pool has
 * phone verification selected and a verified phone number exists for the user, or if email verification is selected and a
 * verified email exists for the user, calling this API will also result in sending a message to the end user with the code
 * to change their
 *
 * password>
 *
 * Requires developer
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AdminResetUserPasswordResponse * CognitoIdentityProviderClient::adminResetUserPassword(const AdminResetUserPasswordRequest &request)
{
    return qobject_cast<AdminResetUserPasswordResponse *>(send(request));
}

/**
 * Responds to an authentication challenge, as an
 *
 * administrator>
 *
 * Requires developer
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AdminRespondToAuthChallengeResponse * CognitoIdentityProviderClient::adminRespondToAuthChallenge(const AdminRespondToAuthChallengeRequest &request)
{
    return qobject_cast<AdminRespondToAuthChallengeResponse *>(send(request));
}

/**
 * Sets the user's multi-factor authentication (MFA)
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AdminSetUserMFAPreferenceResponse * CognitoIdentityProviderClient::adminSetUserMFAPreference(const AdminSetUserMFAPreferenceRequest &request)
{
    return qobject_cast<AdminSetUserMFAPreferenceResponse *>(send(request));
}

/**
 * Sets all the user settings for a specified user name. Works on any
 *
 * user>
 *
 * Requires developer
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AdminSetUserSettingsResponse * CognitoIdentityProviderClient::adminSetUserSettings(const AdminSetUserSettingsRequest &request)
{
    return qobject_cast<AdminSetUserSettingsResponse *>(send(request));
}

/**
 * Provides feedback for an authentication event as to whether it was from a valid user. This feedback is used for
 * improving the risk evaluation decision for the user pool as part of Amazon Cognito advanced
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AdminUpdateAuthEventFeedbackResponse * CognitoIdentityProviderClient::adminUpdateAuthEventFeedback(const AdminUpdateAuthEventFeedbackRequest &request)
{
    return qobject_cast<AdminUpdateAuthEventFeedbackResponse *>(send(request));
}

/**
 * Updates the device status as an
 *
 * administrator>
 *
 * Requires developer
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AdminUpdateDeviceStatusResponse * CognitoIdentityProviderClient::adminUpdateDeviceStatus(const AdminUpdateDeviceStatusRequest &request)
{
    return qobject_cast<AdminUpdateDeviceStatusResponse *>(send(request));
}

/**
 * Updates the specified user's attributes, including developer attributes, as an administrator. Works on any
 *
 * user>
 *
 * For custom attributes, you must prepend the <code>custom:</code> prefix to the attribute
 *
 * name>
 *
 * In addition to updating user attributes, this API can also be used to mark phone and email as
 *
 * verified>
 *
 * Requires developer
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AdminUpdateUserAttributesResponse * CognitoIdentityProviderClient::adminUpdateUserAttributes(const AdminUpdateUserAttributesRequest &request)
{
    return qobject_cast<AdminUpdateUserAttributesResponse *>(send(request));
}

/**
 * Signs out users from all devices, as an
 *
 * administrator>
 *
 * Requires developer
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AdminUserGlobalSignOutResponse * CognitoIdentityProviderClient::adminUserGlobalSignOut(const AdminUserGlobalSignOutRequest &request)
{
    return qobject_cast<AdminUserGlobalSignOutResponse *>(send(request));
}

/**
 * Returns a unique generated shared secret key code for the user account. The request takes an access token or a session
 * string, but not
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AssociateSoftwareTokenResponse * CognitoIdentityProviderClient::associateSoftwareToken(const AssociateSoftwareTokenRequest &request)
{
    return qobject_cast<AssociateSoftwareTokenResponse *>(send(request));
}

/**
 * Changes the password for a specified user in a user
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ChangePasswordResponse * CognitoIdentityProviderClient::changePassword(const ChangePasswordRequest &request)
{
    return qobject_cast<ChangePasswordResponse *>(send(request));
}

/**
 * Confirms tracking of the device. This API call is the call that begins device
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ConfirmDeviceResponse * CognitoIdentityProviderClient::confirmDevice(const ConfirmDeviceRequest &request)
{
    return qobject_cast<ConfirmDeviceResponse *>(send(request));
}

/**
 * Allows a user to enter a confirmation code to reset a forgotten
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ConfirmForgotPasswordResponse * CognitoIdentityProviderClient::confirmForgotPassword(const ConfirmForgotPasswordRequest &request)
{
    return qobject_cast<ConfirmForgotPasswordResponse *>(send(request));
}

/**
 * Confirms registration of a user and handles the existing alias from a previous
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ConfirmSignUpResponse * CognitoIdentityProviderClient::confirmSignUp(const ConfirmSignUpRequest &request)
{
    return qobject_cast<ConfirmSignUpResponse *>(send(request));
}

/**
 * Creates a new group in the specified user
 *
 * pool>
 *
 * Requires developer
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateGroupResponse * CognitoIdentityProviderClient::createGroup(const CreateGroupRequest &request)
{
    return qobject_cast<CreateGroupResponse *>(send(request));
}

/**
 * Creates an identity provider for a user
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateIdentityProviderResponse * CognitoIdentityProviderClient::createIdentityProvider(const CreateIdentityProviderRequest &request)
{
    return qobject_cast<CreateIdentityProviderResponse *>(send(request));
}

/**
 * Creates a new OAuth2.0 resource server and defines custom scopes in
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateResourceServerResponse * CognitoIdentityProviderClient::createResourceServer(const CreateResourceServerRequest &request)
{
    return qobject_cast<CreateResourceServerResponse *>(send(request));
}

/**
 * Creates the user import
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateUserImportJobResponse * CognitoIdentityProviderClient::createUserImportJob(const CreateUserImportJobRequest &request)
{
    return qobject_cast<CreateUserImportJobResponse *>(send(request));
}

/**
 * Creates a new Amazon Cognito user pool and sets the password policy for the
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateUserPoolResponse * CognitoIdentityProviderClient::createUserPool(const CreateUserPoolRequest &request)
{
    return qobject_cast<CreateUserPoolResponse *>(send(request));
}

/**
 * Creates the user pool
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateUserPoolClientResponse * CognitoIdentityProviderClient::createUserPoolClient(const CreateUserPoolClientRequest &request)
{
    return qobject_cast<CreateUserPoolClientResponse *>(send(request));
}

/**
 * Creates a new domain for a user
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateUserPoolDomainResponse * CognitoIdentityProviderClient::createUserPoolDomain(const CreateUserPoolDomainRequest &request)
{
    return qobject_cast<CreateUserPoolDomainResponse *>(send(request));
}

/**
 * Deletes a group. Currently only groups with no members can be
 *
 * deleted>
 *
 * Requires developer
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteGroupResponse * CognitoIdentityProviderClient::deleteGroup(const DeleteGroupRequest &request)
{
    return qobject_cast<DeleteGroupResponse *>(send(request));
}

/**
 * Deletes an identity provider for a user
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteIdentityProviderResponse * CognitoIdentityProviderClient::deleteIdentityProvider(const DeleteIdentityProviderRequest &request)
{
    return qobject_cast<DeleteIdentityProviderResponse *>(send(request));
}

/**
 * Deletes a resource
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteResourceServerResponse * CognitoIdentityProviderClient::deleteResourceServer(const DeleteResourceServerRequest &request)
{
    return qobject_cast<DeleteResourceServerResponse *>(send(request));
}

/**
 * Allows a user to delete himself or
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteUserResponse * CognitoIdentityProviderClient::deleteUser(const DeleteUserRequest &request)
{
    return qobject_cast<DeleteUserResponse *>(send(request));
}

/**
 * Deletes the attributes for a
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteUserAttributesResponse * CognitoIdentityProviderClient::deleteUserAttributes(const DeleteUserAttributesRequest &request)
{
    return qobject_cast<DeleteUserAttributesResponse *>(send(request));
}

/**
 * Deletes the specified Amazon Cognito user
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteUserPoolResponse * CognitoIdentityProviderClient::deleteUserPool(const DeleteUserPoolRequest &request)
{
    return qobject_cast<DeleteUserPoolResponse *>(send(request));
}

/**
 * Allows the developer to delete the user pool
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteUserPoolClientResponse * CognitoIdentityProviderClient::deleteUserPoolClient(const DeleteUserPoolClientRequest &request)
{
    return qobject_cast<DeleteUserPoolClientResponse *>(send(request));
}

/**
 * Deletes a domain for a user
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteUserPoolDomainResponse * CognitoIdentityProviderClient::deleteUserPoolDomain(const DeleteUserPoolDomainRequest &request)
{
    return qobject_cast<DeleteUserPoolDomainResponse *>(send(request));
}

/**
 * Gets information about a specific identity
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeIdentityProviderResponse * CognitoIdentityProviderClient::describeIdentityProvider(const DescribeIdentityProviderRequest &request)
{
    return qobject_cast<DescribeIdentityProviderResponse *>(send(request));
}

/**
 * Describes a resource
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeResourceServerResponse * CognitoIdentityProviderClient::describeResourceServer(const DescribeResourceServerRequest &request)
{
    return qobject_cast<DescribeResourceServerResponse *>(send(request));
}

/**
 * Describes the risk
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeRiskConfigurationResponse * CognitoIdentityProviderClient::describeRiskConfiguration(const DescribeRiskConfigurationRequest &request)
{
    return qobject_cast<DescribeRiskConfigurationResponse *>(send(request));
}

/**
 * Describes the user import
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeUserImportJobResponse * CognitoIdentityProviderClient::describeUserImportJob(const DescribeUserImportJobRequest &request)
{
    return qobject_cast<DescribeUserImportJobResponse *>(send(request));
}

/**
 * Returns the configuration information and metadata of the specified user
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeUserPoolResponse * CognitoIdentityProviderClient::describeUserPool(const DescribeUserPoolRequest &request)
{
    return qobject_cast<DescribeUserPoolResponse *>(send(request));
}

/**
 * Client method for returning the configuration information and metadata of the specified user pool
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeUserPoolClientResponse * CognitoIdentityProviderClient::describeUserPoolClient(const DescribeUserPoolClientRequest &request)
{
    return qobject_cast<DescribeUserPoolClientResponse *>(send(request));
}

/**
 * Gets information about a
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeUserPoolDomainResponse * CognitoIdentityProviderClient::describeUserPoolDomain(const DescribeUserPoolDomainRequest &request)
{
    return qobject_cast<DescribeUserPoolDomainResponse *>(send(request));
}

/**
 * Forgets the specified
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ForgetDeviceResponse * CognitoIdentityProviderClient::forgetDevice(const ForgetDeviceRequest &request)
{
    return qobject_cast<ForgetDeviceResponse *>(send(request));
}

/**
 * Calling this API causes a message to be sent to the end user with a confirmation code that is required to change the
 * user's password. For the <code>Username</code> parameter, you can use the username or user alias. If a verified phone
 * number exists for the user, the confirmation code is sent to the phone number. Otherwise, if a verified email exists,
 * the confirmation code is sent to the email. If neither a verified phone number nor a verified email exists,
 * <code>InvalidParameterException</code> is thrown. To use the confirmation code for resetting the password, call
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ForgotPasswordResponse * CognitoIdentityProviderClient::forgotPassword(const ForgotPasswordRequest &request)
{
    return qobject_cast<ForgotPasswordResponse *>(send(request));
}

/**
 * Gets the header information for the .csv file to be used as input for the user import
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetCSVHeaderResponse * CognitoIdentityProviderClient::getCSVHeader(const GetCSVHeaderRequest &request)
{
    return qobject_cast<GetCSVHeaderResponse *>(send(request));
}

/**
 * Gets the
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDeviceResponse * CognitoIdentityProviderClient::getDevice(const GetDeviceRequest &request)
{
    return qobject_cast<GetDeviceResponse *>(send(request));
}

/**
 * Gets a
 *
 * group>
 *
 * Requires developer
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetGroupResponse * CognitoIdentityProviderClient::getGroup(const GetGroupRequest &request)
{
    return qobject_cast<GetGroupResponse *>(send(request));
}

/**
 * Gets the specified identity
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetIdentityProviderByIdentifierResponse * CognitoIdentityProviderClient::getIdentityProviderByIdentifier(const GetIdentityProviderByIdentifierRequest &request)
{
    return qobject_cast<GetIdentityProviderByIdentifierResponse *>(send(request));
}

/**
 * This method takes a user pool ID, and returns the signing
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSigningCertificateResponse * CognitoIdentityProviderClient::getSigningCertificate(const GetSigningCertificateRequest &request)
{
    return qobject_cast<GetSigningCertificateResponse *>(send(request));
}

/**
 * Gets the UI Customization information for a particular app client's app UI, if there is something set. If nothing is set
 * for the particular client, but there is an existing pool level customization (app <code>clientId</code> will be
 * <code>ALL</code>), then that is returned. If nothing is present, then an empty shape is
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetUICustomizationResponse * CognitoIdentityProviderClient::getUICustomization(const GetUICustomizationRequest &request)
{
    return qobject_cast<GetUICustomizationResponse *>(send(request));
}

/**
 * Gets the user attributes and metadata for a
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetUserResponse * CognitoIdentityProviderClient::getUser(const GetUserRequest &request)
{
    return qobject_cast<GetUserResponse *>(send(request));
}

/**
 * Gets the user attribute verification code for the specified attribute
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetUserAttributeVerificationCodeResponse * CognitoIdentityProviderClient::getUserAttributeVerificationCode(const GetUserAttributeVerificationCodeRequest &request)
{
    return qobject_cast<GetUserAttributeVerificationCodeResponse *>(send(request));
}

/**
 * Gets the user pool multi-factor authentication (MFA)
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetUserPoolMfaConfigResponse * CognitoIdentityProviderClient::getUserPoolMfaConfig(const GetUserPoolMfaConfigRequest &request)
{
    return qobject_cast<GetUserPoolMfaConfigResponse *>(send(request));
}

/**
 * Signs out users from all
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GlobalSignOutResponse * CognitoIdentityProviderClient::globalSignOut(const GlobalSignOutRequest &request)
{
    return qobject_cast<GlobalSignOutResponse *>(send(request));
}

/**
 * Initiates the authentication
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
InitiateAuthResponse * CognitoIdentityProviderClient::initiateAuth(const InitiateAuthRequest &request)
{
    return qobject_cast<InitiateAuthResponse *>(send(request));
}

/**
 * Lists the
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListDevicesResponse * CognitoIdentityProviderClient::listDevices(const ListDevicesRequest &request)
{
    return qobject_cast<ListDevicesResponse *>(send(request));
}

/**
 * Lists the groups associated with a user
 *
 * pool>
 *
 * Requires developer
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListGroupsResponse * CognitoIdentityProviderClient::listGroups(const ListGroupsRequest &request)
{
    return qobject_cast<ListGroupsResponse *>(send(request));
}

/**
 * Lists information about all identity providers for a user
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListIdentityProvidersResponse * CognitoIdentityProviderClient::listIdentityProviders(const ListIdentityProvidersRequest &request)
{
    return qobject_cast<ListIdentityProvidersResponse *>(send(request));
}

/**
 * Lists the resource servers for a user
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListResourceServersResponse * CognitoIdentityProviderClient::listResourceServers(const ListResourceServersRequest &request)
{
    return qobject_cast<ListResourceServersResponse *>(send(request));
}

/**
 * Lists the user import
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListUserImportJobsResponse * CognitoIdentityProviderClient::listUserImportJobs(const ListUserImportJobsRequest &request)
{
    return qobject_cast<ListUserImportJobsResponse *>(send(request));
}

/**
 * Lists the clients that have been created for the specified user
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListUserPoolClientsResponse * CognitoIdentityProviderClient::listUserPoolClients(const ListUserPoolClientsRequest &request)
{
    return qobject_cast<ListUserPoolClientsResponse *>(send(request));
}

/**
 * Lists the user pools associated with an AWS
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListUserPoolsResponse * CognitoIdentityProviderClient::listUserPools(const ListUserPoolsRequest &request)
{
    return qobject_cast<ListUserPoolsResponse *>(send(request));
}

/**
 * Lists the users in the Amazon Cognito user
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListUsersResponse * CognitoIdentityProviderClient::listUsers(const ListUsersRequest &request)
{
    return qobject_cast<ListUsersResponse *>(send(request));
}

/**
 * Lists the users in the specified
 *
 * group>
 *
 * Requires developer
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListUsersInGroupResponse * CognitoIdentityProviderClient::listUsersInGroup(const ListUsersInGroupRequest &request)
{
    return qobject_cast<ListUsersInGroupResponse *>(send(request));
}

/**
 * Resends the confirmation (for confirmation of registration) to a specific user in the user
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ResendConfirmationCodeResponse * CognitoIdentityProviderClient::resendConfirmationCode(const ResendConfirmationCodeRequest &request)
{
    return qobject_cast<ResendConfirmationCodeResponse *>(send(request));
}

/**
 * Responds to the authentication
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RespondToAuthChallengeResponse * CognitoIdentityProviderClient::respondToAuthChallenge(const RespondToAuthChallengeRequest &request)
{
    return qobject_cast<RespondToAuthChallengeResponse *>(send(request));
}

/**
 * Configures actions on detected risks. To delete the risk configuration for <code>UserPoolId</code> or
 * <code>ClientId</code>, pass null values for all four configuration
 *
 * types>
 *
 * To enable Amazon Cognito advanced security features, update the user pool to include the <code>UserPoolAddOns</code>
 *
 * key<code>AdvancedSecurityMode</code>>
 *
 * See
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SetRiskConfigurationResponse * CognitoIdentityProviderClient::setRiskConfiguration(const SetRiskConfigurationRequest &request)
{
    return qobject_cast<SetRiskConfigurationResponse *>(send(request));
}

/**
 * Sets the UI customization information for a user pool's built-in app
 *
 * UI>
 *
 * You can specify app UI customization settings for a single client (with a specific <code>clientId</code>) or for all
 * clients (by setting the <code>clientId</code> to <code>ALL</code>). If you specify <code>ALL</code>, the default
 * configuration will be used for every client that has no UI customization set previously. If you specify UI customization
 * settings for a particular client, it will no longer fall back to the <code>ALL</code> configuration.
 *
 * </p <note>
 *
 * To use this API, your user pool must have a domain associated with it. Otherwise, there is no place to host the app's
 * pages, and the service will throw an
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SetUICustomizationResponse * CognitoIdentityProviderClient::setUICustomization(const SetUICustomizationRequest &request)
{
    return qobject_cast<SetUICustomizationResponse *>(send(request));
}

/**
 * Set the user's multi-factor authentication (MFA) method
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SetUserMFAPreferenceResponse * CognitoIdentityProviderClient::setUserMFAPreference(const SetUserMFAPreferenceRequest &request)
{
    return qobject_cast<SetUserMFAPreferenceResponse *>(send(request));
}

/**
 * Set the user pool MFA
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SetUserPoolMfaConfigResponse * CognitoIdentityProviderClient::setUserPoolMfaConfig(const SetUserPoolMfaConfigRequest &request)
{
    return qobject_cast<SetUserPoolMfaConfigResponse *>(send(request));
}

/**
 * Sets the user settings like multi-factor authentication (MFA). If MFA is to be removed for a particular attribute pass
 * the attribute with code delivery as null. If null list is passed, all MFA options are
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SetUserSettingsResponse * CognitoIdentityProviderClient::setUserSettings(const SetUserSettingsRequest &request)
{
    return qobject_cast<SetUserSettingsResponse *>(send(request));
}

/**
 * Registers the user in the specified user pool and creates a user name, password, and user
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SignUpResponse * CognitoIdentityProviderClient::signUp(const SignUpRequest &request)
{
    return qobject_cast<SignUpResponse *>(send(request));
}

/**
 * Starts the user
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartUserImportJobResponse * CognitoIdentityProviderClient::startUserImportJob(const StartUserImportJobRequest &request)
{
    return qobject_cast<StartUserImportJobResponse *>(send(request));
}

/**
 * Stops the user import
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StopUserImportJobResponse * CognitoIdentityProviderClient::stopUserImportJob(const StopUserImportJobRequest &request)
{
    return qobject_cast<StopUserImportJobResponse *>(send(request));
}

/**
 * Provides the feedback for an authentication event whether it was from a valid user or not. This feedback is used for
 * improving the risk evaluation decision for the user pool as part of Amazon Cognito advanced
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateAuthEventFeedbackResponse * CognitoIdentityProviderClient::updateAuthEventFeedback(const UpdateAuthEventFeedbackRequest &request)
{
    return qobject_cast<UpdateAuthEventFeedbackResponse *>(send(request));
}

/**
 * Updates the device
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateDeviceStatusResponse * CognitoIdentityProviderClient::updateDeviceStatus(const UpdateDeviceStatusRequest &request)
{
    return qobject_cast<UpdateDeviceStatusResponse *>(send(request));
}

/**
 * Updates the specified group with the specified
 *
 * attributes>
 *
 * Requires developer
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateGroupResponse * CognitoIdentityProviderClient::updateGroup(const UpdateGroupRequest &request)
{
    return qobject_cast<UpdateGroupResponse *>(send(request));
}

/**
 * Updates identity provider information for a user
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateIdentityProviderResponse * CognitoIdentityProviderClient::updateIdentityProvider(const UpdateIdentityProviderRequest &request)
{
    return qobject_cast<UpdateIdentityProviderResponse *>(send(request));
}

/**
 * Updates the name and scopes of resource server. All other fields are
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateResourceServerResponse * CognitoIdentityProviderClient::updateResourceServer(const UpdateResourceServerRequest &request)
{
    return qobject_cast<UpdateResourceServerResponse *>(send(request));
}

/**
 * Allows a user to update a specific attribute (one at a
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateUserAttributesResponse * CognitoIdentityProviderClient::updateUserAttributes(const UpdateUserAttributesRequest &request)
{
    return qobject_cast<UpdateUserAttributesResponse *>(send(request));
}

/**
 * Updates the specified user pool with the specified
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateUserPoolResponse * CognitoIdentityProviderClient::updateUserPool(const UpdateUserPoolRequest &request)
{
    return qobject_cast<UpdateUserPoolResponse *>(send(request));
}

/**
 * Allows the developer to update the specified user pool client and password
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateUserPoolClientResponse * CognitoIdentityProviderClient::updateUserPoolClient(const UpdateUserPoolClientRequest &request)
{
    return qobject_cast<UpdateUserPoolClientResponse *>(send(request));
}

/**
 * Use this API to register a user's entered TOTP code and mark the user's software token MFA status as "verified" if
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
VerifySoftwareTokenResponse * CognitoIdentityProviderClient::verifySoftwareToken(const VerifySoftwareTokenRequest &request)
{
    return qobject_cast<VerifySoftwareTokenResponse *>(send(request));
}

/**
 * Verifies the specified user attributes in the user
 *
 * @param  request Request to send to Amazon Cognito Identity Provider.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
VerifyUserAttributeResponse * CognitoIdentityProviderClient::verifyUserAttribute(const VerifyUserAttributeRequest &request)
{
    return qobject_cast<VerifyUserAttributeResponse *>(send(request));
}

/**
 * @internal
 *
 * @class  CognitoIdentityProviderClientPrivate
 *
 * @brief  Private implementation for CognitoIdentityProviderClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CognitoIdentityProviderClientPrivate object.
 *
 * @param  q  Pointer to this object's public CognitoIdentityProviderClient instance.
 */
CognitoIdentityProviderClientPrivate::CognitoIdentityProviderClientPrivate(CognitoIdentityProviderClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
