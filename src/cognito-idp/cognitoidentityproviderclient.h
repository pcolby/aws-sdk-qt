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

#ifndef QTAWS_COGNITOIDENTITYPROVIDERCLIENT_H
#define QTAWS_COGNITOIDENTITYPROVIDERCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace CognitoIdentityProvider {

class CognitoIdentityProviderClientPrivate;

class QTAWS_EXPORT CognitoIdentityProviderClient : public AwsAbstractClient {
    Q_OBJECT

public:
    CognitoIdentityProviderClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CognitoIdentityProviderClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddCustomAttributesResponse * addCustomAttributes(const AddCustomAttributesRequest &request);
    AdminAddUserToGroupResponse * adminAddUserToGroup(const AdminAddUserToGroupRequest &request);
    AdminConfirmSignUpResponse * adminConfirmSignUp(const AdminConfirmSignUpRequest &request);
    AdminCreateUserResponse * adminCreateUser(const AdminCreateUserRequest &request);
    AdminDeleteUserResponse * adminDeleteUser(const AdminDeleteUserRequest &request);
    AdminDeleteUserAttributesResponse * adminDeleteUserAttributes(const AdminDeleteUserAttributesRequest &request);
    AdminDisableProviderForUserResponse * adminDisableProviderForUser(const AdminDisableProviderForUserRequest &request);
    AdminDisableUserResponse * adminDisableUser(const AdminDisableUserRequest &request);
    AdminEnableUserResponse * adminEnableUser(const AdminEnableUserRequest &request);
    AdminForgetDeviceResponse * adminForgetDevice(const AdminForgetDeviceRequest &request);
    AdminGetDeviceResponse * adminGetDevice(const AdminGetDeviceRequest &request);
    AdminGetUserResponse * adminGetUser(const AdminGetUserRequest &request);
    AdminInitiateAuthResponse * adminInitiateAuth(const AdminInitiateAuthRequest &request);
    AdminLinkProviderForUserResponse * adminLinkProviderForUser(const AdminLinkProviderForUserRequest &request);
    AdminListDevicesResponse * adminListDevices(const AdminListDevicesRequest &request);
    AdminListGroupsForUserResponse * adminListGroupsForUser(const AdminListGroupsForUserRequest &request);
    AdminListUserAuthEventsResponse * adminListUserAuthEvents(const AdminListUserAuthEventsRequest &request);
    AdminRemoveUserFromGroupResponse * adminRemoveUserFromGroup(const AdminRemoveUserFromGroupRequest &request);
    AdminResetUserPasswordResponse * adminResetUserPassword(const AdminResetUserPasswordRequest &request);
    AdminRespondToAuthChallengeResponse * adminRespondToAuthChallenge(const AdminRespondToAuthChallengeRequest &request);
    AdminSetUserMFAPreferenceResponse * adminSetUserMFAPreference(const AdminSetUserMFAPreferenceRequest &request);
    AdminSetUserSettingsResponse * adminSetUserSettings(const AdminSetUserSettingsRequest &request);
    AdminUpdateAuthEventFeedbackResponse * adminUpdateAuthEventFeedback(const AdminUpdateAuthEventFeedbackRequest &request);
    AdminUpdateDeviceStatusResponse * adminUpdateDeviceStatus(const AdminUpdateDeviceStatusRequest &request);
    AdminUpdateUserAttributesResponse * adminUpdateUserAttributes(const AdminUpdateUserAttributesRequest &request);
    AdminUserGlobalSignOutResponse * adminUserGlobalSignOut(const AdminUserGlobalSignOutRequest &request);
    AssociateSoftwareTokenResponse * associateSoftwareToken(const AssociateSoftwareTokenRequest &request);
    ChangePasswordResponse * changePassword(const ChangePasswordRequest &request);
    ConfirmDeviceResponse * confirmDevice(const ConfirmDeviceRequest &request);
    ConfirmForgotPasswordResponse * confirmForgotPassword(const ConfirmForgotPasswordRequest &request);
    ConfirmSignUpResponse * confirmSignUp(const ConfirmSignUpRequest &request);
    CreateGroupResponse * createGroup(const CreateGroupRequest &request);
    CreateIdentityProviderResponse * createIdentityProvider(const CreateIdentityProviderRequest &request);
    CreateResourceServerResponse * createResourceServer(const CreateResourceServerRequest &request);
    CreateUserImportJobResponse * createUserImportJob(const CreateUserImportJobRequest &request);
    CreateUserPoolResponse * createUserPool(const CreateUserPoolRequest &request);
    CreateUserPoolClientResponse * createUserPoolClient(const CreateUserPoolClientRequest &request);
    CreateUserPoolDomainResponse * createUserPoolDomain(const CreateUserPoolDomainRequest &request);
    DeleteGroupResponse * deleteGroup(const DeleteGroupRequest &request);
    DeleteIdentityProviderResponse * deleteIdentityProvider(const DeleteIdentityProviderRequest &request);
    DeleteResourceServerResponse * deleteResourceServer(const DeleteResourceServerRequest &request);
    DeleteUserResponse * deleteUser(const DeleteUserRequest &request);
    DeleteUserAttributesResponse * deleteUserAttributes(const DeleteUserAttributesRequest &request);
    DeleteUserPoolResponse * deleteUserPool(const DeleteUserPoolRequest &request);
    DeleteUserPoolClientResponse * deleteUserPoolClient(const DeleteUserPoolClientRequest &request);
    DeleteUserPoolDomainResponse * deleteUserPoolDomain(const DeleteUserPoolDomainRequest &request);
    DescribeIdentityProviderResponse * describeIdentityProvider(const DescribeIdentityProviderRequest &request);
    DescribeResourceServerResponse * describeResourceServer(const DescribeResourceServerRequest &request);
    DescribeRiskConfigurationResponse * describeRiskConfiguration(const DescribeRiskConfigurationRequest &request);
    DescribeUserImportJobResponse * describeUserImportJob(const DescribeUserImportJobRequest &request);
    DescribeUserPoolResponse * describeUserPool(const DescribeUserPoolRequest &request);
    DescribeUserPoolClientResponse * describeUserPoolClient(const DescribeUserPoolClientRequest &request);
    DescribeUserPoolDomainResponse * describeUserPoolDomain(const DescribeUserPoolDomainRequest &request);
    ForgetDeviceResponse * forgetDevice(const ForgetDeviceRequest &request);
    ForgotPasswordResponse * forgotPassword(const ForgotPasswordRequest &request);
    GetCSVHeaderResponse * getCSVHeader(const GetCSVHeaderRequest &request);
    GetDeviceResponse * getDevice(const GetDeviceRequest &request);
    GetGroupResponse * getGroup(const GetGroupRequest &request);
    GetIdentityProviderByIdentifierResponse * getIdentityProviderByIdentifier(const GetIdentityProviderByIdentifierRequest &request);
    GetSigningCertificateResponse * getSigningCertificate(const GetSigningCertificateRequest &request);
    GetUICustomizationResponse * getUICustomization(const GetUICustomizationRequest &request);
    GetUserResponse * getUser(const GetUserRequest &request);
    GetUserAttributeVerificationCodeResponse * getUserAttributeVerificationCode(const GetUserAttributeVerificationCodeRequest &request);
    GetUserPoolMfaConfigResponse * getUserPoolMfaConfig(const GetUserPoolMfaConfigRequest &request);
    GlobalSignOutResponse * globalSignOut(const GlobalSignOutRequest &request);
    InitiateAuthResponse * initiateAuth(const InitiateAuthRequest &request);
    ListDevicesResponse * listDevices(const ListDevicesRequest &request);
    ListGroupsResponse * listGroups(const ListGroupsRequest &request);
    ListIdentityProvidersResponse * listIdentityProviders(const ListIdentityProvidersRequest &request);
    ListResourceServersResponse * listResourceServers(const ListResourceServersRequest &request);
    ListUserImportJobsResponse * listUserImportJobs(const ListUserImportJobsRequest &request);
    ListUserPoolClientsResponse * listUserPoolClients(const ListUserPoolClientsRequest &request);
    ListUserPoolsResponse * listUserPools(const ListUserPoolsRequest &request);
    ListUsersResponse * listUsers(const ListUsersRequest &request);
    ListUsersInGroupResponse * listUsersInGroup(const ListUsersInGroupRequest &request);
    ResendConfirmationCodeResponse * resendConfirmationCode(const ResendConfirmationCodeRequest &request);
    RespondToAuthChallengeResponse * respondToAuthChallenge(const RespondToAuthChallengeRequest &request);
    SetRiskConfigurationResponse * setRiskConfiguration(const SetRiskConfigurationRequest &request);
    SetUICustomizationResponse * setUICustomization(const SetUICustomizationRequest &request);
    SetUserMFAPreferenceResponse * setUserMFAPreference(const SetUserMFAPreferenceRequest &request);
    SetUserPoolMfaConfigResponse * setUserPoolMfaConfig(const SetUserPoolMfaConfigRequest &request);
    SetUserSettingsResponse * setUserSettings(const SetUserSettingsRequest &request);
    SignUpResponse * signUp(const SignUpRequest &request);
    StartUserImportJobResponse * startUserImportJob(const StartUserImportJobRequest &request);
    StopUserImportJobResponse * stopUserImportJob(const StopUserImportJobRequest &request);
    UpdateAuthEventFeedbackResponse * updateAuthEventFeedback(const UpdateAuthEventFeedbackRequest &request);
    UpdateDeviceStatusResponse * updateDeviceStatus(const UpdateDeviceStatusRequest &request);
    UpdateGroupResponse * updateGroup(const UpdateGroupRequest &request);
    UpdateIdentityProviderResponse * updateIdentityProvider(const UpdateIdentityProviderRequest &request);
    UpdateResourceServerResponse * updateResourceServer(const UpdateResourceServerRequest &request);
    UpdateUserAttributesResponse * updateUserAttributes(const UpdateUserAttributesRequest &request);
    UpdateUserPoolResponse * updateUserPool(const UpdateUserPoolRequest &request);
    UpdateUserPoolClientResponse * updateUserPoolClient(const UpdateUserPoolClientRequest &request);
    VerifySoftwareTokenResponse * verifySoftwareToken(const VerifySoftwareTokenRequest &request);
    VerifyUserAttributeResponse * verifyUserAttribute(const VerifyUserAttributeRequest &request);

private:
    Q_DECLARE_PRIVATE(CognitoIdentityProviderClient)
    Q_DISABLE_COPY(CognitoIdentityProviderClient)

};

} // namespace CognitoIdentityProvider
} // namespace AWS

#endif
