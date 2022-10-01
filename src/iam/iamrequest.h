// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IAMREQUEST_H
#define QTAWS_IAMREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsiamglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Iam {

class IamRequestPrivate;

class QTAWSIAM_EXPORT IamRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Iam.
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
        ListInstanceProfileTagsAction,
        ListInstanceProfilesAction,
        ListInstanceProfilesForRoleAction,
        ListMFADeviceTagsAction,
        ListMFADevicesAction,
        ListOpenIDConnectProviderTagsAction,
        ListOpenIDConnectProvidersAction,
        ListPoliciesAction,
        ListPoliciesGrantingServiceAccessAction,
        ListPolicyTagsAction,
        ListPolicyVersionsAction,
        ListRolePoliciesAction,
        ListRoleTagsAction,
        ListRolesAction,
        ListSAMLProviderTagsAction,
        ListSAMLProvidersAction,
        ListSSHPublicKeysAction,
        ListServerCertificateTagsAction,
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
        TagInstanceProfileAction,
        TagMFADeviceAction,
        TagOpenIDConnectProviderAction,
        TagPolicyAction,
        TagRoleAction,
        TagSAMLProviderAction,
        TagServerCertificateAction,
        TagUserAction,
        UntagInstanceProfileAction,
        UntagMFADeviceAction,
        UntagOpenIDConnectProviderAction,
        UntagPolicyAction,
        UntagRoleAction,
        UntagSAMLProviderAction,
        UntagServerCertificateAction,
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
    explicit IamRequest(IamRequestPrivate * const d);
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

} // namespace Iam
} // namespace QtAws

#endif
