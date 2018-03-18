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

#include "cognitoidentityproviderclient.h"
#include "cognitoidentityproviderclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
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
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CognitoIdentityProviderClientPrivate(this), parent)
{
    Q_D(CognitoIdentityProviderClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
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
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CognitoIdentityProviderClientPrivate(this), parent)
{
    Q_D(CognitoIdentityProviderClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * Adds additional user attributes to the user pool
 */
AddCustomAttributesResponse * CognitoIdentityProviderClient::addCustomAttributes(const AddCustomAttributesRequest &request)
{

}

/**
 * Adds the specified user to the specified
 *
 * group>
 *
 * Requires developer
 */
AdminAddUserToGroupResponse * CognitoIdentityProviderClient::adminAddUserToGroup(const AdminAddUserToGroupRequest &request)
{

}

/**
 * Confirms user registration as an admin without using a confirmation code. Works on any
 *
 * user>
 *
 * Requires developer
 */
AdminConfirmSignUpResponse * CognitoIdentityProviderClient::adminConfirmSignUp(const AdminConfirmSignUpRequest &request)
{

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
 */
AdminCreateUserResponse * CognitoIdentityProviderClient::adminCreateUser(const AdminCreateUserRequest &request)
{

}

/**
 * Deletes a user as an administrator. Works on any
 *
 * user>
 *
 * Requires developer
 */
AdminDeleteUserResponse * CognitoIdentityProviderClient::adminDeleteUser(const AdminDeleteUserRequest &request)
{

}

/**
 * Deletes the user attributes in a user pool as an administrator. Works on any
 *
 * user>
 *
 * Requires developer
 */
AdminDeleteUserAttributesResponse * CognitoIdentityProviderClient::adminDeleteUserAttributes(const AdminDeleteUserAttributesRequest &request)
{

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
 */
AdminDisableProviderForUserResponse * CognitoIdentityProviderClient::adminDisableProviderForUser(const AdminDisableProviderForUserRequest &request)
{

}

/**
 * Disables the specified user as an administrator. Works on any
 *
 * user>
 *
 * Requires developer
 */
AdminDisableUserResponse * CognitoIdentityProviderClient::adminDisableUser(const AdminDisableUserRequest &request)
{

}

/**
 * Enables the specified user as an administrator. Works on any
 *
 * user>
 *
 * Requires developer
 */
AdminEnableUserResponse * CognitoIdentityProviderClient::adminEnableUser(const AdminEnableUserRequest &request)
{

}

/**
 * Forgets the device, as an
 *
 * administrator>
 *
 * Requires developer
 */
AdminForgetDeviceResponse * CognitoIdentityProviderClient::adminForgetDevice(const AdminForgetDeviceRequest &request)
{

}

/**
 * Gets the device, as an
 *
 * administrator>
 *
 * Requires developer
 */
AdminGetDeviceResponse * CognitoIdentityProviderClient::adminGetDevice(const AdminGetDeviceRequest &request)
{

}

/**
 * Gets the specified user by user name in a user pool as an administrator. Works on any
 *
 * user>
 *
 * Requires developer
 */
AdminGetUserResponse * CognitoIdentityProviderClient::adminGetUser(const AdminGetUserRequest &request)
{

}

/**
 * Initiates the authentication flow, as an
 *
 * administrator>
 *
 * Requires developer
 */
AdminInitiateAuthResponse * CognitoIdentityProviderClient::adminInitiateAuth(const AdminInitiateAuthRequest &request)
{

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
 * </p <important>
 *
 * Because this API allows a user with an external federated identity to sign in as an existing user in the user pool, it
 * is critical that it only be used with external identity providers and provider attributes that have been trusted by the
 * application
 *
 * owner> </important>
 *
 * See also
 *
 * >
 *
 * This action is enabled only for admin access and requires developer
 */
AdminLinkProviderForUserResponse * CognitoIdentityProviderClient::adminLinkProviderForUser(const AdminLinkProviderForUserRequest &request)
{

}

/**
 * Lists devices, as an
 *
 * administrator>
 *
 * Requires developer
 */
AdminListDevicesResponse * CognitoIdentityProviderClient::adminListDevices(const AdminListDevicesRequest &request)
{

}

/**
 * Lists the groups that the user belongs
 *
 * to>
 *
 * Requires developer
 */
AdminListGroupsForUserResponse * CognitoIdentityProviderClient::adminListGroupsForUser(const AdminListGroupsForUserRequest &request)
{

}

/**
 * Lists a history of user activity and any risks detected as part of Amazon Cognito advanced
 */
AdminListUserAuthEventsResponse * CognitoIdentityProviderClient::adminListUserAuthEvents(const AdminListUserAuthEventsRequest &request)
{

}

/**
 * Removes the specified user from the specified
 *
 * group>
 *
 * Requires developer
 */
AdminRemoveUserFromGroupResponse * CognitoIdentityProviderClient::adminRemoveUserFromGroup(const AdminRemoveUserFromGroupRequest &request)
{

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
 */
AdminResetUserPasswordResponse * CognitoIdentityProviderClient::adminResetUserPassword(const AdminResetUserPasswordRequest &request)
{

}

/**
 * Responds to an authentication challenge, as an
 *
 * administrator>
 *
 * Requires developer
 */
AdminRespondToAuthChallengeResponse * CognitoIdentityProviderClient::adminRespondToAuthChallenge(const AdminRespondToAuthChallengeRequest &request)
{

}

/**
 * Sets the user's multi-factor authentication (MFA)
 */
AdminSetUserMFAPreferenceResponse * CognitoIdentityProviderClient::adminSetUserMFAPreference(const AdminSetUserMFAPreferenceRequest &request)
{

}

/**
 * Sets all the user settings for a specified user name. Works on any
 *
 * user>
 *
 * Requires developer
 */
AdminSetUserSettingsResponse * CognitoIdentityProviderClient::adminSetUserSettings(const AdminSetUserSettingsRequest &request)
{

}

/**
 * Provides feedback for an authentication event as to whether it was from a valid user. This feedback is used for
 * improving the risk evaluation decision for the user pool as part of Amazon Cognito advanced
 */
AdminUpdateAuthEventFeedbackResponse * CognitoIdentityProviderClient::adminUpdateAuthEventFeedback(const AdminUpdateAuthEventFeedbackRequest &request)
{

}

/**
 * Updates the device status as an
 *
 * administrator>
 *
 * Requires developer
 */
AdminUpdateDeviceStatusResponse * CognitoIdentityProviderClient::adminUpdateDeviceStatus(const AdminUpdateDeviceStatusRequest &request)
{

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
 */
AdminUpdateUserAttributesResponse * CognitoIdentityProviderClient::adminUpdateUserAttributes(const AdminUpdateUserAttributesRequest &request)
{

}

/**
 * Signs out users from all devices, as an
 *
 * administrator>
 *
 * Requires developer
 */
AdminUserGlobalSignOutResponse * CognitoIdentityProviderClient::adminUserGlobalSignOut(const AdminUserGlobalSignOutRequest &request)
{

}

/**
 * Returns a unique generated shared secret key code for the user account. The request takes an access token or a session
 * string, but not
 */
AssociateSoftwareTokenResponse * CognitoIdentityProviderClient::associateSoftwareToken(const AssociateSoftwareTokenRequest &request)
{

}

/**
 * Changes the password for a specified user in a user
 */
ChangePasswordResponse * CognitoIdentityProviderClient::changePassword(const ChangePasswordRequest &request)
{

}

/**
 * Confirms tracking of the device. This API call is the call that begins device
 */
ConfirmDeviceResponse * CognitoIdentityProviderClient::confirmDevice(const ConfirmDeviceRequest &request)
{

}

/**
 * Allows a user to enter a confirmation code to reset a forgotten
 */
ConfirmForgotPasswordResponse * CognitoIdentityProviderClient::confirmForgotPassword(const ConfirmForgotPasswordRequest &request)
{

}

/**
 * Confirms registration of a user and handles the existing alias from a previous
 */
ConfirmSignUpResponse * CognitoIdentityProviderClient::confirmSignUp(const ConfirmSignUpRequest &request)
{

}

/**
 * Creates a new group in the specified user
 *
 * pool>
 *
 * Requires developer
 */
CreateGroupResponse * CognitoIdentityProviderClient::createGroup(const CreateGroupRequest &request)
{

}

/**
 * Creates an identity provider for a user
 */
CreateIdentityProviderResponse * CognitoIdentityProviderClient::createIdentityProvider(const CreateIdentityProviderRequest &request)
{

}

/**
 * Creates a new OAuth2.0 resource server and defines custom scopes in
 */
CreateResourceServerResponse * CognitoIdentityProviderClient::createResourceServer(const CreateResourceServerRequest &request)
{

}

/**
 * Creates the user import
 */
CreateUserImportJobResponse * CognitoIdentityProviderClient::createUserImportJob(const CreateUserImportJobRequest &request)
{

}

/**
 * Creates a new Amazon Cognito user pool and sets the password policy for the
 */
CreateUserPoolResponse * CognitoIdentityProviderClient::createUserPool(const CreateUserPoolRequest &request)
{

}

/**
 * Creates the user pool
 */
CreateUserPoolClientResponse * CognitoIdentityProviderClient::createUserPoolClient(const CreateUserPoolClientRequest &request)
{

}

/**
 * Creates a new domain for a user
 */
CreateUserPoolDomainResponse * CognitoIdentityProviderClient::createUserPoolDomain(const CreateUserPoolDomainRequest &request)
{

}

/**
 * Deletes a group. Currently only groups with no members can be
 *
 * deleted>
 *
 * Requires developer
 */
DeleteGroupResponse * CognitoIdentityProviderClient::deleteGroup(const DeleteGroupRequest &request)
{

}

/**
 * Deletes an identity provider for a user
 */
DeleteIdentityProviderResponse * CognitoIdentityProviderClient::deleteIdentityProvider(const DeleteIdentityProviderRequest &request)
{

}

/**
 * Deletes a resource
 */
DeleteResourceServerResponse * CognitoIdentityProviderClient::deleteResourceServer(const DeleteResourceServerRequest &request)
{

}

/**
 * Allows a user to delete himself or
 */
DeleteUserResponse * CognitoIdentityProviderClient::deleteUser(const DeleteUserRequest &request)
{

}

/**
 * Deletes the attributes for a
 */
DeleteUserAttributesResponse * CognitoIdentityProviderClient::deleteUserAttributes(const DeleteUserAttributesRequest &request)
{

}

/**
 * Deletes the specified Amazon Cognito user
 */
DeleteUserPoolResponse * CognitoIdentityProviderClient::deleteUserPool(const DeleteUserPoolRequest &request)
{

}

/**
 * Allows the developer to delete the user pool
 */
DeleteUserPoolClientResponse * CognitoIdentityProviderClient::deleteUserPoolClient(const DeleteUserPoolClientRequest &request)
{

}

/**
 * Deletes a domain for a user
 */
DeleteUserPoolDomainResponse * CognitoIdentityProviderClient::deleteUserPoolDomain(const DeleteUserPoolDomainRequest &request)
{

}

/**
 * Gets information about a specific identity
 */
DescribeIdentityProviderResponse * CognitoIdentityProviderClient::describeIdentityProvider(const DescribeIdentityProviderRequest &request)
{

}

/**
 * Describes a resource
 */
DescribeResourceServerResponse * CognitoIdentityProviderClient::describeResourceServer(const DescribeResourceServerRequest &request)
{

}

/**
 * Describes the risk
 */
DescribeRiskConfigurationResponse * CognitoIdentityProviderClient::describeRiskConfiguration(const DescribeRiskConfigurationRequest &request)
{

}

/**
 * Describes the user import
 */
DescribeUserImportJobResponse * CognitoIdentityProviderClient::describeUserImportJob(const DescribeUserImportJobRequest &request)
{

}

/**
 * Returns the configuration information and metadata of the specified user
 */
DescribeUserPoolResponse * CognitoIdentityProviderClient::describeUserPool(const DescribeUserPoolRequest &request)
{

}

/**
 * Client method for returning the configuration information and metadata of the specified user pool
 */
DescribeUserPoolClientResponse * CognitoIdentityProviderClient::describeUserPoolClient(const DescribeUserPoolClientRequest &request)
{

}

/**
 * Gets information about a
 */
DescribeUserPoolDomainResponse * CognitoIdentityProviderClient::describeUserPoolDomain(const DescribeUserPoolDomainRequest &request)
{

}

/**
 * Forgets the specified
 */
ForgetDeviceResponse * CognitoIdentityProviderClient::forgetDevice(const ForgetDeviceRequest &request)
{

}

/**
 * Calling this API causes a message to be sent to the end user with a confirmation code that is required to change the
 * user's password. For the <code>Username</code> parameter, you can use the username or user alias. If a verified phone
 * number exists for the user, the confirmation code is sent to the phone number. Otherwise, if a verified email exists,
 * the confirmation code is sent to the email. If neither a verified phone number nor a verified email exists,
 * <code>InvalidParameterException</code> is thrown. To use the confirmation code for resetting the password, call
 */
ForgotPasswordResponse * CognitoIdentityProviderClient::forgotPassword(const ForgotPasswordRequest &request)
{

}

/**
 * Gets the header information for the .csv file to be used as input for the user import
 */
GetCSVHeaderResponse * CognitoIdentityProviderClient::getCSVHeader(const GetCSVHeaderRequest &request)
{

}

/**
 * Gets the
 */
GetDeviceResponse * CognitoIdentityProviderClient::getDevice(const GetDeviceRequest &request)
{

}

/**
 * Gets a
 *
 * group>
 *
 * Requires developer
 */
GetGroupResponse * CognitoIdentityProviderClient::getGroup(const GetGroupRequest &request)
{

}

/**
 * Gets the specified identity
 */
GetIdentityProviderByIdentifierResponse * CognitoIdentityProviderClient::getIdentityProviderByIdentifier(const GetIdentityProviderByIdentifierRequest &request)
{

}

/**
 * This method takes a user pool ID, and returns the signing
 */
GetSigningCertificateResponse * CognitoIdentityProviderClient::getSigningCertificate(const GetSigningCertificateRequest &request)
{

}

/**
 * Gets the UI Customization information for a particular app client's app UI, if there is something set. If nothing is set
 * for the particular client, but there is an existing pool level customization (app <code>clientId</code> will be
 * <code>ALL</code>), then that is returned. If nothing is present, then an empty shape is
 */
GetUICustomizationResponse * CognitoIdentityProviderClient::getUICustomization(const GetUICustomizationRequest &request)
{

}

/**
 * Gets the user attributes and metadata for a
 */
GetUserResponse * CognitoIdentityProviderClient::getUser(const GetUserRequest &request)
{

}

/**
 * Gets the user attribute verification code for the specified attribute
 */
GetUserAttributeVerificationCodeResponse * CognitoIdentityProviderClient::getUserAttributeVerificationCode(const GetUserAttributeVerificationCodeRequest &request)
{

}

/**
 * Gets the user pool multi-factor authentication (MFA)
 */
GetUserPoolMfaConfigResponse * CognitoIdentityProviderClient::getUserPoolMfaConfig(const GetUserPoolMfaConfigRequest &request)
{

}

/**
 * Signs out users from all
 */
GlobalSignOutResponse * CognitoIdentityProviderClient::globalSignOut(const GlobalSignOutRequest &request)
{

}

/**
 * Initiates the authentication
 */
InitiateAuthResponse * CognitoIdentityProviderClient::initiateAuth(const InitiateAuthRequest &request)
{

}

/**
 * Lists the
 */
ListDevicesResponse * CognitoIdentityProviderClient::listDevices(const ListDevicesRequest &request)
{

}

/**
 * Lists the groups associated with a user
 *
 * pool>
 *
 * Requires developer
 */
ListGroupsResponse * CognitoIdentityProviderClient::listGroups(const ListGroupsRequest &request)
{

}

/**
 * Lists information about all identity providers for a user
 */
ListIdentityProvidersResponse * CognitoIdentityProviderClient::listIdentityProviders(const ListIdentityProvidersRequest &request)
{

}

/**
 * Lists the resource servers for a user
 */
ListResourceServersResponse * CognitoIdentityProviderClient::listResourceServers(const ListResourceServersRequest &request)
{

}

/**
 * Lists the user import
 */
ListUserImportJobsResponse * CognitoIdentityProviderClient::listUserImportJobs(const ListUserImportJobsRequest &request)
{

}

/**
 * Lists the clients that have been created for the specified user
 */
ListUserPoolClientsResponse * CognitoIdentityProviderClient::listUserPoolClients(const ListUserPoolClientsRequest &request)
{

}

/**
 * Lists the user pools associated with an AWS
 */
ListUserPoolsResponse * CognitoIdentityProviderClient::listUserPools(const ListUserPoolsRequest &request)
{

}

/**
 * Lists the users in the Amazon Cognito user
 */
ListUsersResponse * CognitoIdentityProviderClient::listUsers(const ListUsersRequest &request)
{

}

/**
 * Lists the users in the specified
 *
 * group>
 *
 * Requires developer
 */
ListUsersInGroupResponse * CognitoIdentityProviderClient::listUsersInGroup(const ListUsersInGroupRequest &request)
{

}

/**
 * Resends the confirmation (for confirmation of registration) to a specific user in the user
 */
ResendConfirmationCodeResponse * CognitoIdentityProviderClient::resendConfirmationCode(const ResendConfirmationCodeRequest &request)
{

}

/**
 * Responds to the authentication
 */
RespondToAuthChallengeResponse * CognitoIdentityProviderClient::respondToAuthChallenge(const RespondToAuthChallengeRequest &request)
{

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
 */
SetRiskConfigurationResponse * CognitoIdentityProviderClient::setRiskConfiguration(const SetRiskConfigurationRequest &request)
{

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
 */
SetUICustomizationResponse * CognitoIdentityProviderClient::setUICustomization(const SetUICustomizationRequest &request)
{

}

/**
 * Set the user's multi-factor authentication (MFA) method
 */
SetUserMFAPreferenceResponse * CognitoIdentityProviderClient::setUserMFAPreference(const SetUserMFAPreferenceRequest &request)
{

}

/**
 * Set the user pool MFA
 */
SetUserPoolMfaConfigResponse * CognitoIdentityProviderClient::setUserPoolMfaConfig(const SetUserPoolMfaConfigRequest &request)
{

}

/**
 * Sets the user settings like multi-factor authentication (MFA). If MFA is to be removed for a particular attribute pass
 * the attribute with code delivery as null. If null list is passed, all MFA options are
 */
SetUserSettingsResponse * CognitoIdentityProviderClient::setUserSettings(const SetUserSettingsRequest &request)
{

}

/**
 * Registers the user in the specified user pool and creates a user name, password, and user
 */
SignUpResponse * CognitoIdentityProviderClient::signUp(const SignUpRequest &request)
{

}

/**
 * Starts the user
 */
StartUserImportJobResponse * CognitoIdentityProviderClient::startUserImportJob(const StartUserImportJobRequest &request)
{

}

/**
 * Stops the user import
 */
StopUserImportJobResponse * CognitoIdentityProviderClient::stopUserImportJob(const StopUserImportJobRequest &request)
{

}

/**
 * Provides the feedback for an authentication event whether it was from a valid user or not. This feedback is used for
 * improving the risk evaluation decision for the user pool as part of Amazon Cognito advanced
 */
UpdateAuthEventFeedbackResponse * CognitoIdentityProviderClient::updateAuthEventFeedback(const UpdateAuthEventFeedbackRequest &request)
{

}

/**
 * Updates the device
 */
UpdateDeviceStatusResponse * CognitoIdentityProviderClient::updateDeviceStatus(const UpdateDeviceStatusRequest &request)
{

}

/**
 * Updates the specified group with the specified
 *
 * attributes>
 *
 * Requires developer
 */
UpdateGroupResponse * CognitoIdentityProviderClient::updateGroup(const UpdateGroupRequest &request)
{

}

/**
 * Updates identity provider information for a user
 */
UpdateIdentityProviderResponse * CognitoIdentityProviderClient::updateIdentityProvider(const UpdateIdentityProviderRequest &request)
{

}

/**
 * Updates the name and scopes of resource server. All other fields are
 */
UpdateResourceServerResponse * CognitoIdentityProviderClient::updateResourceServer(const UpdateResourceServerRequest &request)
{

}

/**
 * Allows a user to update a specific attribute (one at a
 */
UpdateUserAttributesResponse * CognitoIdentityProviderClient::updateUserAttributes(const UpdateUserAttributesRequest &request)
{

}

/**
 * Updates the specified user pool with the specified
 */
UpdateUserPoolResponse * CognitoIdentityProviderClient::updateUserPool(const UpdateUserPoolRequest &request)
{

}

/**
 * Allows the developer to update the specified user pool client and password
 */
UpdateUserPoolClientResponse * CognitoIdentityProviderClient::updateUserPoolClient(const UpdateUserPoolClientRequest &request)
{

}

/**
 * Use this API to register a user's entered TOTP code and mark the user's software token MFA status as "verified" if
 */
VerifySoftwareTokenResponse * CognitoIdentityProviderClient::verifySoftwareToken(const VerifySoftwareTokenRequest &request)
{

}

/**
 * Verifies the specified user attributes in the user
 */
VerifyUserAttributeResponse * CognitoIdentityProviderClient::verifyUserAttribute(const VerifyUserAttributeRequest &request)
{

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
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace CognitoIdentityProvider
} // namespace AWS
