/*
    Copyright 2013-2016 Paul Colby

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

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
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
    IamAddClientIDToOpenIDConnectProviderResponse * addClientIDToOpenIDConnectProvider(const IamAddClientIDToOpenIDConnectProviderRequest &request);
    IamAddRoleToInstanceProfileResponse * addRoleToInstanceProfile(const IamAddRoleToInstanceProfileRequest &request);
    IamAddUserToGroupResponse * addUserToGroup(const IamAddUserToGroupRequest &request);
    IamAttachGroupPolicyResponse * attachGroupPolicy(const IamAttachGroupPolicyRequest &request);
    IamAttachRolePolicyResponse * attachRolePolicy(const IamAttachRolePolicyRequest &request);
    IamAttachUserPolicyResponse * attachUserPolicy(const IamAttachUserPolicyRequest &request);
    IamChangePasswordResponse * changePassword(const IamChangePasswordRequest &request);
    IamCreateAccessKeyResponse * createAccessKey(const IamCreateAccessKeyRequest &request);
    IamCreateAccountAliasResponse * createAccountAlias(const IamCreateAccountAliasRequest &request);
    IamCreateGroupResponse * createGroup(const IamCreateGroupRequest &request);
    IamCreateInstanceProfileResponse * createInstanceProfile(const IamCreateInstanceProfileRequest &request);
    IamCreateLoginProfileResponse * createLoginProfile(const IamCreateLoginProfileRequest &request);
    IamCreateOpenIDConnectProviderResponse * createOpenIDConnectProvider(const IamCreateOpenIDConnectProviderRequest &request);
    IamCreatePolicyResponse * createPolicy(const IamCreatePolicyRequest &request);
    IamCreatePolicyVersionResponse * createPolicyVersion(const IamCreatePolicyVersionRequest &request);
    IamCreateRoleResponse * createRole(const IamCreateRoleRequest &request);
    IamCreateSAMLProviderResponse * createSAMLProvider(const IamCreateSAMLProviderRequest &request);
    IamCreateUserResponse * createUser(const IamCreateUserRequest &request);
    IamCreateVirtualMFADeviceResponse * createVirtualMFADevice(const IamCreateVirtualMFADeviceRequest &request);
    IamDeactivateMFADeviceResponse * deactivateMFADevice(const IamDeactivateMFADeviceRequest &request);
    IamDeleteAccessKeyResponse * deleteAccessKey(const IamDeleteAccessKeyRequest &request);
    IamDeleteAccountAliasResponse * deleteAccountAlias(const IamDeleteAccountAliasRequest &request);
    IamDeleteAccountPasswordPolicyResponse * deleteAccountPasswordPolicy();
    IamDeleteGroupResponse * deleteGroup(const IamDeleteGroupRequest &request);
    IamDeleteGroupPolicyResponse * deleteGroupPolicy(const IamDeleteGroupPolicyRequest &request);
    IamDeleteInstanceProfileResponse * deleteInstanceProfile(const IamDeleteInstanceProfileRequest &request);
    IamDeleteLoginProfileResponse * deleteLoginProfile(const IamDeleteLoginProfileRequest &request);
    IamDeleteOpenIDConnectProviderResponse * deleteOpenIDConnectProvider(const IamDeleteOpenIDConnectProviderRequest &request);
    IamDeletePolicyResponse * deletePolicy(const IamDeletePolicyRequest &request);
    IamDeletePolicyVersionResponse * deletePolicyVersion(const IamDeletePolicyVersionRequest &request);
    IamDeleteRoleResponse * deleteRole(const IamDeleteRoleRequest &request);
    IamDeleteRolePolicyResponse * deleteRolePolicy(const IamDeleteRolePolicyRequest &request);
    IamDeleteSAMLProviderResponse * deleteSAMLProvider(const IamDeleteSAMLProviderRequest &request);
    IamDeleteSSHPublicKeyResponse * deleteSSHPublicKey(const IamDeleteSSHPublicKeyRequest &request);
    IamDeleteServerCertificateResponse * deleteServerCertificate(const IamDeleteServerCertificateRequest &request);
    IamDeleteSigningCertificateResponse * deleteSigningCertificate(const IamDeleteSigningCertificateRequest &request);
    IamDeleteUserResponse * deleteUser(const IamDeleteUserRequest &request);
    IamDeleteUserPolicyResponse * deleteUserPolicy(const IamDeleteUserPolicyRequest &request);
    IamDeleteVirtualMFADeviceResponse * deleteVirtualMFADevice(const IamDeleteVirtualMFADeviceRequest &request);
    IamDetachGroupPolicyResponse * detachGroupPolicy(const IamDetachGroupPolicyRequest &request);
    IamDetachRolePolicyResponse * detachRolePolicy(const IamDetachRolePolicyRequest &request);
    IamDetachUserPolicyResponse * detachUserPolicy(const IamDetachUserPolicyRequest &request);
    IamEnableMFADeviceResponse * enableMFADevice(const IamEnableMFADeviceRequest &request);
    IamGenerateCredentialReportResponse * generateCredentialReport();
    IamGetAccessKeyLastUsedResponse * getAccessKeyLastUsed(const IamGetAccessKeyLastUsedRequest &request);
    IamGetAccountAuthorizationDetailsResponse * getAccountAuthorizationDetails(const IamGetAccountAuthorizationDetailsRequest &request);
    IamGetAccountPasswordPolicyResponse * getAccountPasswordPolicy();
    IamGetAccountSummaryResponse * getAccountSummary();
    IamGetContextKeysForCustomPolicyResponse * getContextKeysForCustomPolicy(const IamGetContextKeysForCustomPolicyRequest &request);
    IamGetContextKeysForPrincipalPolicyResponse * getContextKeysForPrincipalPolicy(const IamGetContextKeysForPrincipalPolicyRequest &request);
    IamGetCredentialReportResponse * getCredentialReport();
    IamGetGroupResponse * getGroup(const IamGetGroupRequest &request);
    IamGetGroupPolicyResponse * getGroupPolicy(const IamGetGroupPolicyRequest &request);
    IamGetInstanceProfileResponse * getInstanceProfile(const IamGetInstanceProfileRequest &request);
    IamGetLoginProfileResponse * getLoginProfile(const IamGetLoginProfileRequest &request);
    IamGetOpenIDConnectProviderResponse * getOpenIDConnectProvider(const IamGetOpenIDConnectProviderRequest &request);
    IamGetPolicyResponse * getPolicy(const IamGetPolicyRequest &request);
    IamGetPolicyVersionResponse * getPolicyVersion(const IamGetPolicyVersionRequest &request);
    IamGetRoleResponse * getRole(const IamGetRoleRequest &request);
    IamGetRolePolicyResponse * getRolePolicy(const IamGetRolePolicyRequest &request);
    IamGetSAMLProviderResponse * getSAMLProvider(const IamGetSAMLProviderRequest &request);
    IamGetSSHPublicKeyResponse * getSSHPublicKey(const IamGetSSHPublicKeyRequest &request);
    IamGetServerCertificateResponse * getServerCertificate(const IamGetServerCertificateRequest &request);
    IamGetUserResponse * getUser(const IamGetUserRequest &request);
    IamGetUserPolicyResponse * getUserPolicy(const IamGetUserPolicyRequest &request);
    IamListAccessKeysResponse * listAccessKeys(const IamListAccessKeysRequest &request);
    IamListAccountAliasesResponse * listAccountAliases(const IamListAccountAliasesRequest &request);
    IamListAttachedGroupPoliciesResponse * listAttachedGroupPolicies(const IamListAttachedGroupPoliciesRequest &request);
    IamListAttachedRolePoliciesResponse * listAttachedRolePolicies(const IamListAttachedRolePoliciesRequest &request);
    IamListAttachedUserPoliciesResponse * listAttachedUserPolicies(const IamListAttachedUserPoliciesRequest &request);
    IamListEntitiesForPolicyResponse * listEntitiesForPolicy(const IamListEntitiesForPolicyRequest &request);
    IamListGroupPoliciesResponse * listGroupPolicies(const IamListGroupPoliciesRequest &request);
    IamListGroupsResponse * listGroups(const IamListGroupsRequest &request);
    IamListGroupsForUserResponse * listGroupsForUser(const IamListGroupsForUserRequest &request);
    IamListInstanceProfilesResponse * listInstanceProfiles(const IamListInstanceProfilesRequest &request);
    IamListInstanceProfilesForRoleResponse * listInstanceProfilesForRole(const IamListInstanceProfilesForRoleRequest &request);
    IamListMFADevicesResponse * listMFADevices(const IamListMFADevicesRequest &request);
    IamListOpenIDConnectProvidersResponse * listOpenIDConnectProviders(const IamListOpenIDConnectProvidersRequest &request);
    IamListPoliciesResponse * listPolicies(const IamListPoliciesRequest &request);
    IamListPolicyVersionsResponse * listPolicyVersions(const IamListPolicyVersionsRequest &request);
    IamListRolePoliciesResponse * listRolePolicies(const IamListRolePoliciesRequest &request);
    IamListRolesResponse * listRoles(const IamListRolesRequest &request);
    IamListSAMLProvidersResponse * listSAMLProviders(const IamListSAMLProvidersRequest &request);
    IamListSSHPublicKeysResponse * listSSHPublicKeys(const IamListSSHPublicKeysRequest &request);
    IamListServerCertificatesResponse * listServerCertificates(const IamListServerCertificatesRequest &request);
    IamListSigningCertificatesResponse * listSigningCertificates(const IamListSigningCertificatesRequest &request);
    IamListUserPoliciesResponse * listUserPolicies(const IamListUserPoliciesRequest &request);
    IamListUsersResponse * listUsers(const IamListUsersRequest &request);
    IamListVirtualMFADevicesResponse * listVirtualMFADevices(const IamListVirtualMFADevicesRequest &request);
    IamPutGroupPolicyResponse * putGroupPolicy(const IamPutGroupPolicyRequest &request);
    IamPutRolePolicyResponse * putRolePolicy(const IamPutRolePolicyRequest &request);
    IamPutUserPolicyResponse * putUserPolicy(const IamPutUserPolicyRequest &request);
    IamRemoveClientIDFromOpenIDConnectProviderResponse * removeClientIDFromOpenIDConnectProvider(const IamRemoveClientIDFromOpenIDConnectProviderRequest &request);
    IamRemoveRoleFromInstanceProfileResponse * removeRoleFromInstanceProfile(const IamRemoveRoleFromInstanceProfileRequest &request);
    IamRemoveUserFromGroupResponse * removeUserFromGroup(const IamRemoveUserFromGroupRequest &request);
    IamResyncMFADeviceResponse * resyncMFADevice(const IamResyncMFADeviceRequest &request);
    IamSetDefaultPolicyVersionResponse * setDefaultPolicyVersion(const IamSetDefaultPolicyVersionRequest &request);
    IamSimulateCustomPolicyResponse * simulateCustomPolicy(const IamSimulateCustomPolicyRequest &request);
    IamSimulatePrincipalPolicyResponse * simulatePrincipalPolicy(const IamSimulatePrincipalPolicyRequest &request);
    IamUpdateAccessKeyResponse * updateAccessKey(const IamUpdateAccessKeyRequest &request);
    IamUpdateAccountPasswordPolicyResponse * updateAccountPasswordPolicy(const IamUpdateAccountPasswordPolicyRequest &request);
    IamUpdateAssumeRolePolicyResponse * updateAssumeRolePolicy(const IamUpdateAssumeRolePolicyRequest &request);
    IamUpdateGroupResponse * updateGroup(const IamUpdateGroupRequest &request);
    IamUpdateLoginProfileResponse * updateLoginProfile(const IamUpdateLoginProfileRequest &request);
    IamUpdateOpenIDConnectProviderThumbprintResponse * updateOpenIDConnectProviderThumbprint(const IamUpdateOpenIDConnectProviderThumbprintRequest &request);
    IamUpdateSAMLProviderResponse * updateSAMLProvider(const IamUpdateSAMLProviderRequest &request);
    IamUpdateSSHPublicKeyResponse * updateSSHPublicKey(const IamUpdateSSHPublicKeyRequest &request);
    IamUpdateServerCertificateResponse * updateServerCertificate(const IamUpdateServerCertificateRequest &request);
    IamUpdateSigningCertificateResponse * updateSigningCertificate(const IamUpdateSigningCertificateRequest &request);
    IamUpdateUserResponse * updateUser(const IamUpdateUserRequest &request);
    IamUploadSSHPublicKeyResponse * uploadSSHPublicKey(const IamUploadSSHPublicKeyRequest &request);
    IamUploadServerCertificateResponse * uploadServerCertificate(const IamUploadServerCertificateRequest &request);
    IamUploadSigningCertificateResponse * uploadSigningCertificate(const IamUploadSigningCertificateRequest &request);

private:
    Q_DECLARE_PRIVATE(IamClient)
    Q_DISABLE_COPY(IamClient)

};

QTAWS_END_NAMESPACE

#endif
