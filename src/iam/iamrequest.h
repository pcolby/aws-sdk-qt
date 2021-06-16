/*
    Copyright 2013-2021 Paul Colby

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

#ifndef QTAWS_IAMREQUEST_H
#define QTAWS_IAMREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace IAM {

class IamRequestPrivate;

class QTAWS_EXPORT IamRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by IAM.
    enum Action {
        AddClientIDToOpenIDConnectProviderAction,
        AddRoleToInstanceProfileAction,
        AddUserToGroupAction,
        AttachGroupPolicyAction,
        AttachRolePolicyAction,
        AttachUserPolicyAction,
        ChangePasswordAction,
        CreateAccessKeyAction,
        CreateAccountAliasAction,
        CreateGroupAction,
        CreateInstanceProfileAction,
        CreateLoginProfileAction,
        CreateOpenIDConnectProviderAction,
        CreatePolicyAction,
        CreatePolicyVersionAction,
        CreateRoleAction,
        CreateSAMLProviderAction,
        CreateServiceLinkedRoleAction,
        CreateServiceSpecificCredentialAction,
        CreateUserAction,
        CreateVirtualMFADeviceAction,
        DeactivateMFADeviceAction,
        DeleteAccessKeyAction,
        DeleteAccountAliasAction,
        DeleteAccountPasswordPolicyAction,
        DeleteGroupAction,
        DeleteGroupPolicyAction,
        DeleteInstanceProfileAction,
        DeleteLoginProfileAction,
        DeleteOpenIDConnectProviderAction,
        DeletePolicyAction,
        DeletePolicyVersionAction,
        DeleteRoleAction,
        DeleteRolePermissionsBoundaryAction,
        DeleteRolePolicyAction,
        DeleteSAMLProviderAction,
        DeleteSSHPublicKeyAction,
        DeleteServerCertificateAction,
        DeleteServiceLinkedRoleAction,
        DeleteServiceSpecificCredentialAction,
        DeleteSigningCertificateAction,
        DeleteUserAction,
        DeleteUserPermissionsBoundaryAction,
        DeleteUserPolicyAction,
        DeleteVirtualMFADeviceAction,
        DetachGroupPolicyAction,
        DetachRolePolicyAction,
        DetachUserPolicyAction,
        EnableMFADeviceAction,
        GenerateCredentialReportAction,
        GenerateOrganizationsAccessReportAction,
        GenerateServiceLastAccessedDetailsAction,
        GetAccessKeyLastUsedAction,
        GetAccountAuthorizationDetailsAction,
        GetAccountPasswordPolicyAction,
        GetAccountSummaryAction,
        GetContextKeysForCustomPolicyAction,
        GetContextKeysForPrincipalPolicyAction,
        GetCredentialReportAction,
        GetGroupAction,
        GetGroupPolicyAction,
        GetInstanceProfileAction,
        GetLoginProfileAction,
        GetOpenIDConnectProviderAction,
        GetOrganizationsAccessReportAction,
        GetPolicyAction,
        GetPolicyVersionAction,
        GetRoleAction,
        GetRolePolicyAction,
        GetSAMLProviderAction,
        GetSSHPublicKeyAction,
        GetServerCertificateAction,
        GetServiceLastAccessedDetailsAction,
        GetServiceLastAccessedDetailsWithEntitiesAction,
        GetServiceLinkedRoleDeletionStatusAction,
        GetUserAction,
        GetUserPolicyAction,
        ListAccessKeysAction,
        ListAccountAliasesAction,
        ListAttachedGroupPoliciesAction,
        ListAttachedRolePoliciesAction,
        ListAttachedUserPoliciesAction,
        ListEntitiesForPolicyAction,
        ListGroupPoliciesAction,
        ListGroupsAction,
        ListGroupsForUserAction,
        ListInstanceProfilesAction,
        ListInstanceProfilesForRoleAction,
        ListMFADevicesAction,
        ListOpenIDConnectProvidersAction,
        ListPoliciesAction,
        ListPoliciesGrantingServiceAccessAction,
        ListPolicyVersionsAction,
        ListRolePoliciesAction,
        ListRoleTagsAction,
        ListRolesAction,
        ListSAMLProvidersAction,
        ListSSHPublicKeysAction,
        ListServerCertificatesAction,
        ListServiceSpecificCredentialsAction,
        ListSigningCertificatesAction,
        ListUserPoliciesAction,
        ListUserTagsAction,
        ListUsersAction,
        ListVirtualMFADevicesAction,
        PutGroupPolicyAction,
        PutRolePermissionsBoundaryAction,
        PutRolePolicyAction,
        PutUserPermissionsBoundaryAction,
        PutUserPolicyAction,
        RemoveClientIDFromOpenIDConnectProviderAction,
        RemoveRoleFromInstanceProfileAction,
        RemoveUserFromGroupAction,
        ResetServiceSpecificCredentialAction,
        ResyncMFADeviceAction,
        SetDefaultPolicyVersionAction,
        SetSecurityTokenServicePreferencesAction,
        SimulateCustomPolicyAction,
        SimulatePrincipalPolicyAction,
        TagRoleAction,
        TagUserAction,
        UntagRoleAction,
        UntagUserAction,
        UpdateAccessKeyAction,
        UpdateAccountPasswordPolicyAction,
        UpdateAssumeRolePolicyAction,
        UpdateGroupAction,
        UpdateLoginProfileAction,
        UpdateOpenIDConnectProviderThumbprintAction,
        UpdateRoleAction,
        UpdateRoleDescriptionAction,
        UpdateSAMLProviderAction,
        UpdateSSHPublicKeyAction,
        UpdateServerCertificateAction,
        UpdateServiceSpecificCredentialAction,
        UpdateSigningCertificateAction,
        UpdateUserAction,
        UploadSSHPublicKeyAction,
        UploadServerCertificateAction,
        UploadSigningCertificateAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    IamRequest(const Action action);
    IamRequest(const IamRequest &other);
    IamRequest &operator=(const IamRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const IamRequest &other) const;


protected:
    /// @cond internal
    IamRequest(IamRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IamRequest)

};

} // namespace IAM
} // namespace QtAws

#endif
