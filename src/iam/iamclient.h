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

#ifndef QTAWS_IAMCLIENT_H
#define QTAWS_IAMCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace IAM {

class IamClientPrivate;

class QTAWS_EXPORT IamClient : public AwsAbstractClient {
    Q_OBJECT

public:
    IamClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    IamClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddClientIDToOpenIDConnectProviderResponse * addClientIDToOpenIDConnectProvider(const AddClientIDToOpenIDConnectProviderRequest &request);
    AddRoleToInstanceProfileResponse * addRoleToInstanceProfile(const AddRoleToInstanceProfileRequest &request);
    AddUserToGroupResponse * addUserToGroup(const AddUserToGroupRequest &request);
    AttachGroupPolicyResponse * attachGroupPolicy(const AttachGroupPolicyRequest &request);
    AttachRolePolicyResponse * attachRolePolicy(const AttachRolePolicyRequest &request);
    AttachUserPolicyResponse * attachUserPolicy(const AttachUserPolicyRequest &request);
    ChangePasswordResponse * changePassword(const ChangePasswordRequest &request);
    CreateAccessKeyResponse * createAccessKey(const CreateAccessKeyRequest &request);
    CreateAccountAliasResponse * createAccountAlias(const CreateAccountAliasRequest &request);
    CreateGroupResponse * createGroup(const CreateGroupRequest &request);
    CreateInstanceProfileResponse * createInstanceProfile(const CreateInstanceProfileRequest &request);
    CreateLoginProfileResponse * createLoginProfile(const CreateLoginProfileRequest &request);
    CreateOpenIDConnectProviderResponse * createOpenIDConnectProvider(const CreateOpenIDConnectProviderRequest &request);
    CreatePolicyResponse * createPolicy(const CreatePolicyRequest &request);
    CreatePolicyVersionResponse * createPolicyVersion(const CreatePolicyVersionRequest &request);
    CreateRoleResponse * createRole(const CreateRoleRequest &request);
    CreateSAMLProviderResponse * createSAMLProvider(const CreateSAMLProviderRequest &request);
    CreateUserResponse * createUser(const CreateUserRequest &request);
    CreateVirtualMFADeviceResponse * createVirtualMFADevice(const CreateVirtualMFADeviceRequest &request);
    DeactivateMFADeviceResponse * deactivateMFADevice(const DeactivateMFADeviceRequest &request);
    DeleteAccessKeyResponse * deleteAccessKey(const DeleteAccessKeyRequest &request);
    DeleteAccountAliasResponse * deleteAccountAlias(const DeleteAccountAliasRequest &request);
    DeleteAccountPasswordPolicyResponse * deleteAccountPasswordPolicy();
    DeleteGroupResponse * deleteGroup(const DeleteGroupRequest &request);
    DeleteGroupPolicyResponse * deleteGroupPolicy(const DeleteGroupPolicyRequest &request);
    DeleteInstanceProfileResponse * deleteInstanceProfile(const DeleteInstanceProfileRequest &request);
    DeleteLoginProfileResponse * deleteLoginProfile(const DeleteLoginProfileRequest &request);
    DeleteOpenIDConnectProviderResponse * deleteOpenIDConnectProvider(const DeleteOpenIDConnectProviderRequest &request);
    DeletePolicyResponse * deletePolicy(const DeletePolicyRequest &request);
    DeletePolicyVersionResponse * deletePolicyVersion(const DeletePolicyVersionRequest &request);
    DeleteRoleResponse * deleteRole(const DeleteRoleRequest &request);
    DeleteRolePolicyResponse * deleteRolePolicy(const DeleteRolePolicyRequest &request);
    DeleteSAMLProviderResponse * deleteSAMLProvider(const DeleteSAMLProviderRequest &request);
    DeleteSSHPublicKeyResponse * deleteSSHPublicKey(const DeleteSSHPublicKeyRequest &request);
    DeleteServerCertificateResponse * deleteServerCertificate(const DeleteServerCertificateRequest &request);
    DeleteSigningCertificateResponse * deleteSigningCertificate(const DeleteSigningCertificateRequest &request);
    DeleteUserResponse * deleteUser(const DeleteUserRequest &request);
    DeleteUserPolicyResponse * deleteUserPolicy(const DeleteUserPolicyRequest &request);
    DeleteVirtualMFADeviceResponse * deleteVirtualMFADevice(const DeleteVirtualMFADeviceRequest &request);
    DetachGroupPolicyResponse * detachGroupPolicy(const DetachGroupPolicyRequest &request);
    DetachRolePolicyResponse * detachRolePolicy(const DetachRolePolicyRequest &request);
    DetachUserPolicyResponse * detachUserPolicy(const DetachUserPolicyRequest &request);
    EnableMFADeviceResponse * enableMFADevice(const EnableMFADeviceRequest &request);
    GenerateCredentialReportResponse * generateCredentialReport();
    GetAccessKeyLastUsedResponse * getAccessKeyLastUsed(const GetAccessKeyLastUsedRequest &request);
    GetAccountAuthorizationDetailsResponse * getAccountAuthorizationDetails(const GetAccountAuthorizationDetailsRequest &request);
    GetAccountPasswordPolicyResponse * getAccountPasswordPolicy();
    GetAccountSummaryResponse * getAccountSummary();
    GetContextKeysForCustomPolicyResponse * getContextKeysForCustomPolicy(const GetContextKeysForCustomPolicyRequest &request);
    GetContextKeysForPrincipalPolicyResponse * getContextKeysForPrincipalPolicy(const GetContextKeysForPrincipalPolicyRequest &request);
    GetCredentialReportResponse * getCredentialReport();
    GetGroupResponse * getGroup(const GetGroupRequest &request);
    GetGroupPolicyResponse * getGroupPolicy(const GetGroupPolicyRequest &request);
    GetInstanceProfileResponse * getInstanceProfile(const GetInstanceProfileRequest &request);
    GetLoginProfileResponse * getLoginProfile(const GetLoginProfileRequest &request);
    GetOpenIDConnectProviderResponse * getOpenIDConnectProvider(const GetOpenIDConnectProviderRequest &request);
    GetPolicyResponse * getPolicy(const GetPolicyRequest &request);
    GetPolicyVersionResponse * getPolicyVersion(const GetPolicyVersionRequest &request);
    GetRoleResponse * getRole(const GetRoleRequest &request);
    GetRolePolicyResponse * getRolePolicy(const GetRolePolicyRequest &request);
    GetSAMLProviderResponse * getSAMLProvider(const GetSAMLProviderRequest &request);
    GetSSHPublicKeyResponse * getSSHPublicKey(const GetSSHPublicKeyRequest &request);
    GetServerCertificateResponse * getServerCertificate(const GetServerCertificateRequest &request);
    GetUserResponse * getUser(const GetUserRequest &request);
    GetUserPolicyResponse * getUserPolicy(const GetUserPolicyRequest &request);
    ListAccessKeysResponse * listAccessKeys(const ListAccessKeysRequest &request);
    ListAccountAliasesResponse * listAccountAliases(const ListAccountAliasesRequest &request);
    ListAttachedGroupPoliciesResponse * listAttachedGroupPolicies(const ListAttachedGroupPoliciesRequest &request);
    ListAttachedRolePoliciesResponse * listAttachedRolePolicies(const ListAttachedRolePoliciesRequest &request);
    ListAttachedUserPoliciesResponse * listAttachedUserPolicies(const ListAttachedUserPoliciesRequest &request);
    ListEntitiesForPolicyResponse * listEntitiesForPolicy(const ListEntitiesForPolicyRequest &request);
    ListGroupPoliciesResponse * listGroupPolicies(const ListGroupPoliciesRequest &request);
    ListGroupsResponse * listGroups(const ListGroupsRequest &request);
    ListGroupsForUserResponse * listGroupsForUser(const ListGroupsForUserRequest &request);
    ListInstanceProfilesResponse * listInstanceProfiles(const ListInstanceProfilesRequest &request);
    ListInstanceProfilesForRoleResponse * listInstanceProfilesForRole(const ListInstanceProfilesForRoleRequest &request);
    ListMFADevicesResponse * listMFADevices(const ListMFADevicesRequest &request);
    ListOpenIDConnectProvidersResponse * listOpenIDConnectProviders(const ListOpenIDConnectProvidersRequest &request);
    ListPoliciesResponse * listPolicies(const ListPoliciesRequest &request);
    ListPolicyVersionsResponse * listPolicyVersions(const ListPolicyVersionsRequest &request);
    ListRolePoliciesResponse * listRolePolicies(const ListRolePoliciesRequest &request);
    ListRolesResponse * listRoles(const ListRolesRequest &request);
    ListSAMLProvidersResponse * listSAMLProviders(const ListSAMLProvidersRequest &request);
    ListSSHPublicKeysResponse * listSSHPublicKeys(const ListSSHPublicKeysRequest &request);
    ListServerCertificatesResponse * listServerCertificates(const ListServerCertificatesRequest &request);
    ListSigningCertificatesResponse * listSigningCertificates(const ListSigningCertificatesRequest &request);
    ListUserPoliciesResponse * listUserPolicies(const ListUserPoliciesRequest &request);
    ListUsersResponse * listUsers(const ListUsersRequest &request);
    ListVirtualMFADevicesResponse * listVirtualMFADevices(const ListVirtualMFADevicesRequest &request);
    PutGroupPolicyResponse * putGroupPolicy(const PutGroupPolicyRequest &request);
    PutRolePolicyResponse * putRolePolicy(const PutRolePolicyRequest &request);
    PutUserPolicyResponse * putUserPolicy(const PutUserPolicyRequest &request);
    RemoveClientIDFromOpenIDConnectProviderResponse * removeClientIDFromOpenIDConnectProvider(const RemoveClientIDFromOpenIDConnectProviderRequest &request);
    RemoveRoleFromInstanceProfileResponse * removeRoleFromInstanceProfile(const RemoveRoleFromInstanceProfileRequest &request);
    RemoveUserFromGroupResponse * removeUserFromGroup(const RemoveUserFromGroupRequest &request);
    ResyncMFADeviceResponse * resyncMFADevice(const ResyncMFADeviceRequest &request);
    SetDefaultPolicyVersionResponse * setDefaultPolicyVersion(const SetDefaultPolicyVersionRequest &request);
    SimulateCustomPolicyResponse * simulateCustomPolicy(const SimulateCustomPolicyRequest &request);
    SimulatePrincipalPolicyResponse * simulatePrincipalPolicy(const SimulatePrincipalPolicyRequest &request);
    UpdateAccessKeyResponse * updateAccessKey(const UpdateAccessKeyRequest &request);
    UpdateAccountPasswordPolicyResponse * updateAccountPasswordPolicy(const UpdateAccountPasswordPolicyRequest &request);
    UpdateAssumeRolePolicyResponse * updateAssumeRolePolicy(const UpdateAssumeRolePolicyRequest &request);
    UpdateGroupResponse * updateGroup(const UpdateGroupRequest &request);
    UpdateLoginProfileResponse * updateLoginProfile(const UpdateLoginProfileRequest &request);
    UpdateOpenIDConnectProviderThumbprintResponse * updateOpenIDConnectProviderThumbprint(const UpdateOpenIDConnectProviderThumbprintRequest &request);
    UpdateSAMLProviderResponse * updateSAMLProvider(const UpdateSAMLProviderRequest &request);
    UpdateSSHPublicKeyResponse * updateSSHPublicKey(const UpdateSSHPublicKeyRequest &request);
    UpdateServerCertificateResponse * updateServerCertificate(const UpdateServerCertificateRequest &request);
    UpdateSigningCertificateResponse * updateSigningCertificate(const UpdateSigningCertificateRequest &request);
    UpdateUserResponse * updateUser(const UpdateUserRequest &request);
    UploadSSHPublicKeyResponse * uploadSSHPublicKey(const UploadSSHPublicKeyRequest &request);
    UploadServerCertificateResponse * uploadServerCertificate(const UploadServerCertificateRequest &request);
    UploadSigningCertificateResponse * uploadSigningCertificate(const UploadSigningCertificateRequest &request);

private:
    Q_DECLARE_PRIVATE(IamClient)
    Q_DISABLE_COPY(IamClient)

};

} // namespace IAM
} // namespace AWS

#endif
