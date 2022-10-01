// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COGNITOIDENTITYPROVIDERREQUEST_H
#define QTAWS_COGNITOIDENTITYPROVIDERREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawscognitoidentityproviderglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace CognitoIdentityProvider {

class CognitoIdentityProviderRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT CognitoIdentityProviderRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by CognitoIdentityProvider.
    enum Action {
        AddCustomAttributesAction,
        AdminAddUserToGroupAction,
        AdminConfirmSignUpAction,
        AdminCreateUserAction,
        AdminDeleteUserAction,
        AdminDeleteUserAttributesAction,
        AdminDisableProviderForUserAction,
        AdminDisableUserAction,
        AdminEnableUserAction,
        AdminForgetDeviceAction,
        AdminGetDeviceAction,
        AdminGetUserAction,
        AdminInitiateAuthAction,
        AdminLinkProviderForUserAction,
        AdminListDevicesAction,
        AdminListGroupsForUserAction,
        AdminListUserAuthEventsAction,
        AdminRemoveUserFromGroupAction,
        AdminResetUserPasswordAction,
        AdminRespondToAuthChallengeAction,
        AdminSetUserMFAPreferenceAction,
        AdminSetUserPasswordAction,
        AdminSetUserSettingsAction,
        AdminUpdateAuthEventFeedbackAction,
        AdminUpdateDeviceStatusAction,
        AdminUpdateUserAttributesAction,
        AdminUserGlobalSignOutAction,
        AssociateSoftwareTokenAction,
        ChangePasswordAction,
        ConfirmDeviceAction,
        ConfirmForgotPasswordAction,
        ConfirmSignUpAction,
        CreateGroupAction,
        CreateIdentityProviderAction,
        CreateResourceServerAction,
        CreateUserImportJobAction,
        CreateUserPoolAction,
        CreateUserPoolClientAction,
        CreateUserPoolDomainAction,
        DeleteGroupAction,
        DeleteIdentityProviderAction,
        DeleteResourceServerAction,
        DeleteUserAction,
        DeleteUserAttributesAction,
        DeleteUserPoolAction,
        DeleteUserPoolClientAction,
        DeleteUserPoolDomainAction,
        DescribeIdentityProviderAction,
        DescribeResourceServerAction,
        DescribeRiskConfigurationAction,
        DescribeUserImportJobAction,
        DescribeUserPoolAction,
        DescribeUserPoolClientAction,
        DescribeUserPoolDomainAction,
        ForgetDeviceAction,
        ForgotPasswordAction,
        GetCSVHeaderAction,
        GetDeviceAction,
        GetGroupAction,
        GetIdentityProviderByIdentifierAction,
        GetSigningCertificateAction,
        GetUICustomizationAction,
        GetUserAction,
        GetUserAttributeVerificationCodeAction,
        GetUserPoolMfaConfigAction,
        GlobalSignOutAction,
        InitiateAuthAction,
        ListDevicesAction,
        ListGroupsAction,
        ListIdentityProvidersAction,
        ListResourceServersAction,
        ListTagsForResourceAction,
        ListUserImportJobsAction,
        ListUserPoolClientsAction,
        ListUserPoolsAction,
        ListUsersAction,
        ListUsersInGroupAction,
        ResendConfirmationCodeAction,
        RespondToAuthChallengeAction,
        RevokeTokenAction,
        SetRiskConfigurationAction,
        SetUICustomizationAction,
        SetUserMFAPreferenceAction,
        SetUserPoolMfaConfigAction,
        SetUserSettingsAction,
        SignUpAction,
        StartUserImportJobAction,
        StopUserImportJobAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateAuthEventFeedbackAction,
        UpdateDeviceStatusAction,
        UpdateGroupAction,
        UpdateIdentityProviderAction,
        UpdateResourceServerAction,
        UpdateUserAttributesAction,
        UpdateUserPoolAction,
        UpdateUserPoolClientAction,
        UpdateUserPoolDomainAction,
        VerifySoftwareTokenAction,
        VerifyUserAttributeAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    CognitoIdentityProviderRequest(const Action action);
    CognitoIdentityProviderRequest(const CognitoIdentityProviderRequest &other);
    CognitoIdentityProviderRequest &operator=(const CognitoIdentityProviderRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const CognitoIdentityProviderRequest &other) const;


protected:
    /// @cond internal
    explicit CognitoIdentityProviderRequest(CognitoIdentityProviderRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CognitoIdentityProviderRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
