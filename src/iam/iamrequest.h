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

#ifndef QTAWS_IAMREQUEST_H
#define QTAWS_IAMREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace IAM {

class IAMRequestPrivate;

class QTAWS_EXPORT IAMRequest : public QtAws::Core::AwsAbstractRequest {

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
        DeleteRolePolicyAction,
        DeleteSAMLProviderAction,
        DeleteSSHPublicKeyAction,
        DeleteServerCertificateAction,
        DeleteServiceLinkedRoleAction,
        DeleteServiceSpecificCredentialAction,
        DeleteSigningCertificateAction,
        DeleteUserAction,
        DeleteUserPolicyAction,
        DeleteVirtualMFADeviceAction,
        DetachGroupPolicyAction,
        DetachRolePolicyAction,
        DetachUserPolicyAction,
        EnableMFADeviceAction,
        GenerateCredentialReportAction,
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
        GetPolicyAction,
        GetPolicyVersionAction,
        GetRoleAction,
        GetRolePolicyAction,
        GetSAMLProviderAction,
        GetSSHPublicKeyAction,
        GetServerCertificateAction,
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
        ListPolicyVersionsAction,
        ListRolePoliciesAction,
        ListRolesAction,
        ListSAMLProvidersAction,
        ListSSHPublicKeysAction,
        ListServerCertificatesAction,
        ListServiceSpecificCredentialsAction,
        ListSigningCertificatesAction,
        ListUserPoliciesAction,
        ListUsersAction,
        ListVirtualMFADevicesAction,
        PutGroupPolicyAction,
        PutRolePolicyAction,
        PutUserPolicyAction,
        RemoveClientIDFromOpenIDConnectProviderAction,
        RemoveRoleFromInstanceProfileAction,
        RemoveUserFromGroupAction,
        ResetServiceSpecificCredentialAction,
        ResyncMFADeviceAction,
        SetDefaultPolicyVersionAction,
        SimulateCustomPolicyAction,
        SimulatePrincipalPolicyAction,
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

    IAMRequest(const Action action);
    IAMRequest(const IAMRequest &other);
    IAMRequest &operator=(const IAMRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const IAMRequest &other) const;


protected:
    /// @cond internal
    IAMRequest(IAMRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const;

private:
    Q_DECLARE_PRIVATE(IAMRequest)

};

} // namespace IAM
} // namespace QtAws

#endif
