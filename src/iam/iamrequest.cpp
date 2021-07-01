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

#include "iamrequest.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::IamRequest
 * \brief The IamRequest class provides an interface for IAM requests.
 *
 * \inmodule QtAwsIAM
 */

/*!
 * \enum IamRequest::Action
 *
 * This enum describes the actions that can be performed as IAM
 * requests.
 *
 * \value AddClientIDToOpenIDConnectProviderAction IAM AddClientIDToOpenIDConnectProvider action.
 * \value AddRoleToInstanceProfileAction IAM AddRoleToInstanceProfile action.
 * \value AddUserToGroupAction IAM AddUserToGroup action.
 * \value AttachGroupPolicyAction IAM AttachGroupPolicy action.
 * \value AttachRolePolicyAction IAM AttachRolePolicy action.
 * \value AttachUserPolicyAction IAM AttachUserPolicy action.
 * \value ChangePasswordAction IAM ChangePassword action.
 * \value CreateAccessKeyAction IAM CreateAccessKey action.
 * \value CreateAccountAliasAction IAM CreateAccountAlias action.
 * \value CreateGroupAction IAM CreateGroup action.
 * \value CreateInstanceProfileAction IAM CreateInstanceProfile action.
 * \value CreateLoginProfileAction IAM CreateLoginProfile action.
 * \value CreateOpenIDConnectProviderAction IAM CreateOpenIDConnectProvider action.
 * \value CreatePolicyAction IAM CreatePolicy action.
 * \value CreatePolicyVersionAction IAM CreatePolicyVersion action.
 * \value CreateRoleAction IAM CreateRole action.
 * \value CreateSAMLProviderAction IAM CreateSAMLProvider action.
 * \value CreateServiceLinkedRoleAction IAM CreateServiceLinkedRole action.
 * \value CreateServiceSpecificCredentialAction IAM CreateServiceSpecificCredential action.
 * \value CreateUserAction IAM CreateUser action.
 * \value CreateVirtualMFADeviceAction IAM CreateVirtualMFADevice action.
 * \value DeactivateMFADeviceAction IAM DeactivateMFADevice action.
 * \value DeleteAccessKeyAction IAM DeleteAccessKey action.
 * \value DeleteAccountAliasAction IAM DeleteAccountAlias action.
 * \value DeleteAccountPasswordPolicyAction IAM DeleteAccountPasswordPolicy action.
 * \value DeleteGroupAction IAM DeleteGroup action.
 * \value DeleteGroupPolicyAction IAM DeleteGroupPolicy action.
 * \value DeleteInstanceProfileAction IAM DeleteInstanceProfile action.
 * \value DeleteLoginProfileAction IAM DeleteLoginProfile action.
 * \value DeleteOpenIDConnectProviderAction IAM DeleteOpenIDConnectProvider action.
 * \value DeletePolicyAction IAM DeletePolicy action.
 * \value DeletePolicyVersionAction IAM DeletePolicyVersion action.
 * \value DeleteRoleAction IAM DeleteRole action.
 * \value DeleteRolePermissionsBoundaryAction IAM DeleteRolePermissionsBoundary action.
 * \value DeleteRolePolicyAction IAM DeleteRolePolicy action.
 * \value DeleteSAMLProviderAction IAM DeleteSAMLProvider action.
 * \value DeleteSSHPublicKeyAction IAM DeleteSSHPublicKey action.
 * \value DeleteServerCertificateAction IAM DeleteServerCertificate action.
 * \value DeleteServiceLinkedRoleAction IAM DeleteServiceLinkedRole action.
 * \value DeleteServiceSpecificCredentialAction IAM DeleteServiceSpecificCredential action.
 * \value DeleteSigningCertificateAction IAM DeleteSigningCertificate action.
 * \value DeleteUserAction IAM DeleteUser action.
 * \value DeleteUserPermissionsBoundaryAction IAM DeleteUserPermissionsBoundary action.
 * \value DeleteUserPolicyAction IAM DeleteUserPolicy action.
 * \value DeleteVirtualMFADeviceAction IAM DeleteVirtualMFADevice action.
 * \value DetachGroupPolicyAction IAM DetachGroupPolicy action.
 * \value DetachRolePolicyAction IAM DetachRolePolicy action.
 * \value DetachUserPolicyAction IAM DetachUserPolicy action.
 * \value EnableMFADeviceAction IAM EnableMFADevice action.
 * \value GenerateCredentialReportAction IAM GenerateCredentialReport action.
 * \value GenerateOrganizationsAccessReportAction IAM GenerateOrganizationsAccessReport action.
 * \value GenerateServiceLastAccessedDetailsAction IAM GenerateServiceLastAccessedDetails action.
 * \value GetAccessKeyLastUsedAction IAM GetAccessKeyLastUsed action.
 * \value GetAccountAuthorizationDetailsAction IAM GetAccountAuthorizationDetails action.
 * \value GetAccountPasswordPolicyAction IAM GetAccountPasswordPolicy action.
 * \value GetAccountSummaryAction IAM GetAccountSummary action.
 * \value GetContextKeysForCustomPolicyAction IAM GetContextKeysForCustomPolicy action.
 * \value GetContextKeysForPrincipalPolicyAction IAM GetContextKeysForPrincipalPolicy action.
 * \value GetCredentialReportAction IAM GetCredentialReport action.
 * \value GetGroupAction IAM GetGroup action.
 * \value GetGroupPolicyAction IAM GetGroupPolicy action.
 * \value GetInstanceProfileAction IAM GetInstanceProfile action.
 * \value GetLoginProfileAction IAM GetLoginProfile action.
 * \value GetOpenIDConnectProviderAction IAM GetOpenIDConnectProvider action.
 * \value GetOrganizationsAccessReportAction IAM GetOrganizationsAccessReport action.
 * \value GetPolicyAction IAM GetPolicy action.
 * \value GetPolicyVersionAction IAM GetPolicyVersion action.
 * \value GetRoleAction IAM GetRole action.
 * \value GetRolePolicyAction IAM GetRolePolicy action.
 * \value GetSAMLProviderAction IAM GetSAMLProvider action.
 * \value GetSSHPublicKeyAction IAM GetSSHPublicKey action.
 * \value GetServerCertificateAction IAM GetServerCertificate action.
 * \value GetServiceLastAccessedDetailsAction IAM GetServiceLastAccessedDetails action.
 * \value GetServiceLastAccessedDetailsWithEntitiesAction IAM GetServiceLastAccessedDetailsWithEntities action.
 * \value GetServiceLinkedRoleDeletionStatusAction IAM GetServiceLinkedRoleDeletionStatus action.
 * \value GetUserAction IAM GetUser action.
 * \value GetUserPolicyAction IAM GetUserPolicy action.
 * \value ListAccessKeysAction IAM ListAccessKeys action.
 * \value ListAccountAliasesAction IAM ListAccountAliases action.
 * \value ListAttachedGroupPoliciesAction IAM ListAttachedGroupPolicies action.
 * \value ListAttachedRolePoliciesAction IAM ListAttachedRolePolicies action.
 * \value ListAttachedUserPoliciesAction IAM ListAttachedUserPolicies action.
 * \value ListEntitiesForPolicyAction IAM ListEntitiesForPolicy action.
 * \value ListGroupPoliciesAction IAM ListGroupPolicies action.
 * \value ListGroupsAction IAM ListGroups action.
 * \value ListGroupsForUserAction IAM ListGroupsForUser action.
 * \value ListInstanceProfileTagsAction IAM ListInstanceProfileTags action.
 * \value ListInstanceProfilesAction IAM ListInstanceProfiles action.
 * \value ListInstanceProfilesForRoleAction IAM ListInstanceProfilesForRole action.
 * \value ListMFADeviceTagsAction IAM ListMFADeviceTags action.
 * \value ListMFADevicesAction IAM ListMFADevices action.
 * \value ListOpenIDConnectProviderTagsAction IAM ListOpenIDConnectProviderTags action.
 * \value ListOpenIDConnectProvidersAction IAM ListOpenIDConnectProviders action.
 * \value ListPoliciesAction IAM ListPolicies action.
 * \value ListPoliciesGrantingServiceAccessAction IAM ListPoliciesGrantingServiceAccess action.
 * \value ListPolicyTagsAction IAM ListPolicyTags action.
 * \value ListPolicyVersionsAction IAM ListPolicyVersions action.
 * \value ListRolePoliciesAction IAM ListRolePolicies action.
 * \value ListRoleTagsAction IAM ListRoleTags action.
 * \value ListRolesAction IAM ListRoles action.
 * \value ListSAMLProviderTagsAction IAM ListSAMLProviderTags action.
 * \value ListSAMLProvidersAction IAM ListSAMLProviders action.
 * \value ListSSHPublicKeysAction IAM ListSSHPublicKeys action.
 * \value ListServerCertificateTagsAction IAM ListServerCertificateTags action.
 * \value ListServerCertificatesAction IAM ListServerCertificates action.
 * \value ListServiceSpecificCredentialsAction IAM ListServiceSpecificCredentials action.
 * \value ListSigningCertificatesAction IAM ListSigningCertificates action.
 * \value ListUserPoliciesAction IAM ListUserPolicies action.
 * \value ListUserTagsAction IAM ListUserTags action.
 * \value ListUsersAction IAM ListUsers action.
 * \value ListVirtualMFADevicesAction IAM ListVirtualMFADevices action.
 * \value PutGroupPolicyAction IAM PutGroupPolicy action.
 * \value PutRolePermissionsBoundaryAction IAM PutRolePermissionsBoundary action.
 * \value PutRolePolicyAction IAM PutRolePolicy action.
 * \value PutUserPermissionsBoundaryAction IAM PutUserPermissionsBoundary action.
 * \value PutUserPolicyAction IAM PutUserPolicy action.
 * \value RemoveClientIDFromOpenIDConnectProviderAction IAM RemoveClientIDFromOpenIDConnectProvider action.
 * \value RemoveRoleFromInstanceProfileAction IAM RemoveRoleFromInstanceProfile action.
 * \value RemoveUserFromGroupAction IAM RemoveUserFromGroup action.
 * \value ResetServiceSpecificCredentialAction IAM ResetServiceSpecificCredential action.
 * \value ResyncMFADeviceAction IAM ResyncMFADevice action.
 * \value SetDefaultPolicyVersionAction IAM SetDefaultPolicyVersion action.
 * \value SetSecurityTokenServicePreferencesAction IAM SetSecurityTokenServicePreferences action.
 * \value SimulateCustomPolicyAction IAM SimulateCustomPolicy action.
 * \value SimulatePrincipalPolicyAction IAM SimulatePrincipalPolicy action.
 * \value TagInstanceProfileAction IAM TagInstanceProfile action.
 * \value TagMFADeviceAction IAM TagMFADevice action.
 * \value TagOpenIDConnectProviderAction IAM TagOpenIDConnectProvider action.
 * \value TagPolicyAction IAM TagPolicy action.
 * \value TagRoleAction IAM TagRole action.
 * \value TagSAMLProviderAction IAM TagSAMLProvider action.
 * \value TagServerCertificateAction IAM TagServerCertificate action.
 * \value TagUserAction IAM TagUser action.
 * \value UntagInstanceProfileAction IAM UntagInstanceProfile action.
 * \value UntagMFADeviceAction IAM UntagMFADevice action.
 * \value UntagOpenIDConnectProviderAction IAM UntagOpenIDConnectProvider action.
 * \value UntagPolicyAction IAM UntagPolicy action.
 * \value UntagRoleAction IAM UntagRole action.
 * \value UntagSAMLProviderAction IAM UntagSAMLProvider action.
 * \value UntagServerCertificateAction IAM UntagServerCertificate action.
 * \value UntagUserAction IAM UntagUser action.
 * \value UpdateAccessKeyAction IAM UpdateAccessKey action.
 * \value UpdateAccountPasswordPolicyAction IAM UpdateAccountPasswordPolicy action.
 * \value UpdateAssumeRolePolicyAction IAM UpdateAssumeRolePolicy action.
 * \value UpdateGroupAction IAM UpdateGroup action.
 * \value UpdateLoginProfileAction IAM UpdateLoginProfile action.
 * \value UpdateOpenIDConnectProviderThumbprintAction IAM UpdateOpenIDConnectProviderThumbprint action.
 * \value UpdateRoleAction IAM UpdateRole action.
 * \value UpdateRoleDescriptionAction IAM UpdateRoleDescription action.
 * \value UpdateSAMLProviderAction IAM UpdateSAMLProvider action.
 * \value UpdateSSHPublicKeyAction IAM UpdateSSHPublicKey action.
 * \value UpdateServerCertificateAction IAM UpdateServerCertificate action.
 * \value UpdateServiceSpecificCredentialAction IAM UpdateServiceSpecificCredential action.
 * \value UpdateSigningCertificateAction IAM UpdateSigningCertificate action.
 * \value UpdateUserAction IAM UpdateUser action.
 * \value UploadSSHPublicKeyAction IAM UploadSSHPublicKey action.
 * \value UploadServerCertificateAction IAM UploadServerCertificate action.
 * \value UploadSigningCertificateAction IAM UploadSigningCertificate action.
 */

/*!
 * Constructs a IamRequest object for IAM \a action.
 */
IamRequest::IamRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new IamRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
IamRequest::IamRequest(const IamRequest &other)
    : QtAws::Core::AwsAbstractRequest(new IamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the IamRequest object to be equal to \a other.
 */
IamRequest& IamRequest::operator=(const IamRequest &other)
{
    Q_D(IamRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa IamRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IamRequestPrivate.
 */
IamRequest::IamRequest(IamRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the IAM action to be performed by this request.
 */
IamRequest::Action IamRequest::action() const
{
    Q_D(const IamRequest);
    return d->action;
}

/*!
 * Returns the name of the IAM action to be performed by this request.
 */
QString IamRequest::actionString() const
{
    return IamRequestPrivate::toString(action());
}

/*!
 * Returns the IAM API version implemented by this request.
 */
QString IamRequest::apiVersion() const
{
    Q_D(const IamRequest);
    return d->apiVersion;
}

/*!
 * Sets the IAM action to be performed by this request to \a action.
 */
void IamRequest::setAction(const Action action)
{
    Q_D(IamRequest);
    d->action = action;
}

/*!
 * Sets the IAM API version to include in this request to \a version.
 */
void IamRequest::setApiVersion(const QString &version)
{
    Q_D(IamRequest);
    d->apiVersion = version;
}

/*!
 * Returns \c true if this request is equal to \a other; \c false otherwise.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 */
bool IamRequest::operator==(const IamRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid IAM queue name.
 *
 * @par From IAM FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid IAM queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool IamRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int IamRequest::clearParameter(const QString &name)
{
    Q_D(IamRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void IamRequest::clearParameters()
{
    Q_D(IamRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant IamRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const IamRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &IamRequest::parameters() const
{
    Q_D(const IamRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void IamRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(IamRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void IamRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(IamRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the IAM request using the given
 * \a endpoint.
 *
 * This IAM implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest IamRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const IamRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::IAM::IamRequestPrivate
 * \brief The IamRequestPrivate class provides private implementation for IamRequest.
 * \internal
 *
 * \inmodule QtAwsIAM
 */

/*!
 * Constructs a IamRequestPrivate object for IAM \a action,
 * with public implementation \a q.
 */
IamRequestPrivate::IamRequestPrivate(const IamRequest::Action action, IamRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the IamRequest class's copy constructor.
 */
IamRequestPrivate::IamRequestPrivate(const IamRequestPrivate &other,
                                     IamRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts IamRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the IAM service's Action
 * query parameters.
 */
QString IamRequestPrivate::toString(const IamRequest::Action &action)
{
    #define ActionToString(action) \
        case IamRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AddClientIDToOpenIDConnectProvider);
        ActionToString(AddRoleToInstanceProfile);
        ActionToString(AddUserToGroup);
        ActionToString(AttachGroupPolicy);
        ActionToString(AttachRolePolicy);
        ActionToString(AttachUserPolicy);
        ActionToString(ChangePassword);
        ActionToString(CreateAccessKey);
        ActionToString(CreateAccountAlias);
        ActionToString(CreateGroup);
        ActionToString(CreateInstanceProfile);
        ActionToString(CreateLoginProfile);
        ActionToString(CreateOpenIDConnectProvider);
        ActionToString(CreatePolicy);
        ActionToString(CreatePolicyVersion);
        ActionToString(CreateRole);
        ActionToString(CreateSAMLProvider);
        ActionToString(CreateServiceLinkedRole);
        ActionToString(CreateServiceSpecificCredential);
        ActionToString(CreateUser);
        ActionToString(CreateVirtualMFADevice);
        ActionToString(DeactivateMFADevice);
        ActionToString(DeleteAccessKey);
        ActionToString(DeleteAccountAlias);
        ActionToString(DeleteAccountPasswordPolicy);
        ActionToString(DeleteGroup);
        ActionToString(DeleteGroupPolicy);
        ActionToString(DeleteInstanceProfile);
        ActionToString(DeleteLoginProfile);
        ActionToString(DeleteOpenIDConnectProvider);
        ActionToString(DeletePolicy);
        ActionToString(DeletePolicyVersion);
        ActionToString(DeleteRole);
        ActionToString(DeleteRolePermissionsBoundary);
        ActionToString(DeleteRolePolicy);
        ActionToString(DeleteSAMLProvider);
        ActionToString(DeleteSSHPublicKey);
        ActionToString(DeleteServerCertificate);
        ActionToString(DeleteServiceLinkedRole);
        ActionToString(DeleteServiceSpecificCredential);
        ActionToString(DeleteSigningCertificate);
        ActionToString(DeleteUser);
        ActionToString(DeleteUserPermissionsBoundary);
        ActionToString(DeleteUserPolicy);
        ActionToString(DeleteVirtualMFADevice);
        ActionToString(DetachGroupPolicy);
        ActionToString(DetachRolePolicy);
        ActionToString(DetachUserPolicy);
        ActionToString(EnableMFADevice);
        ActionToString(GenerateCredentialReport);
        ActionToString(GenerateOrganizationsAccessReport);
        ActionToString(GenerateServiceLastAccessedDetails);
        ActionToString(GetAccessKeyLastUsed);
        ActionToString(GetAccountAuthorizationDetails);
        ActionToString(GetAccountPasswordPolicy);
        ActionToString(GetAccountSummary);
        ActionToString(GetContextKeysForCustomPolicy);
        ActionToString(GetContextKeysForPrincipalPolicy);
        ActionToString(GetCredentialReport);
        ActionToString(GetGroup);
        ActionToString(GetGroupPolicy);
        ActionToString(GetInstanceProfile);
        ActionToString(GetLoginProfile);
        ActionToString(GetOpenIDConnectProvider);
        ActionToString(GetOrganizationsAccessReport);
        ActionToString(GetPolicy);
        ActionToString(GetPolicyVersion);
        ActionToString(GetRole);
        ActionToString(GetRolePolicy);
        ActionToString(GetSAMLProvider);
        ActionToString(GetSSHPublicKey);
        ActionToString(GetServerCertificate);
        ActionToString(GetServiceLastAccessedDetails);
        ActionToString(GetServiceLastAccessedDetailsWithEntities);
        ActionToString(GetServiceLinkedRoleDeletionStatus);
        ActionToString(GetUser);
        ActionToString(GetUserPolicy);
        ActionToString(ListAccessKeys);
        ActionToString(ListAccountAliases);
        ActionToString(ListAttachedGroupPolicies);
        ActionToString(ListAttachedRolePolicies);
        ActionToString(ListAttachedUserPolicies);
        ActionToString(ListEntitiesForPolicy);
        ActionToString(ListGroupPolicies);
        ActionToString(ListGroups);
        ActionToString(ListGroupsForUser);
        ActionToString(ListInstanceProfileTags);
        ActionToString(ListInstanceProfiles);
        ActionToString(ListInstanceProfilesForRole);
        ActionToString(ListMFADeviceTags);
        ActionToString(ListMFADevices);
        ActionToString(ListOpenIDConnectProviderTags);
        ActionToString(ListOpenIDConnectProviders);
        ActionToString(ListPolicies);
        ActionToString(ListPoliciesGrantingServiceAccess);
        ActionToString(ListPolicyTags);
        ActionToString(ListPolicyVersions);
        ActionToString(ListRolePolicies);
        ActionToString(ListRoleTags);
        ActionToString(ListRoles);
        ActionToString(ListSAMLProviderTags);
        ActionToString(ListSAMLProviders);
        ActionToString(ListSSHPublicKeys);
        ActionToString(ListServerCertificateTags);
        ActionToString(ListServerCertificates);
        ActionToString(ListServiceSpecificCredentials);
        ActionToString(ListSigningCertificates);
        ActionToString(ListUserPolicies);
        ActionToString(ListUserTags);
        ActionToString(ListUsers);
        ActionToString(ListVirtualMFADevices);
        ActionToString(PutGroupPolicy);
        ActionToString(PutRolePermissionsBoundary);
        ActionToString(PutRolePolicy);
        ActionToString(PutUserPermissionsBoundary);
        ActionToString(PutUserPolicy);
        ActionToString(RemoveClientIDFromOpenIDConnectProvider);
        ActionToString(RemoveRoleFromInstanceProfile);
        ActionToString(RemoveUserFromGroup);
        ActionToString(ResetServiceSpecificCredential);
        ActionToString(ResyncMFADevice);
        ActionToString(SetDefaultPolicyVersion);
        ActionToString(SetSecurityTokenServicePreferences);
        ActionToString(SimulateCustomPolicy);
        ActionToString(SimulatePrincipalPolicy);
        ActionToString(TagInstanceProfile);
        ActionToString(TagMFADevice);
        ActionToString(TagOpenIDConnectProvider);
        ActionToString(TagPolicy);
        ActionToString(TagRole);
        ActionToString(TagSAMLProvider);
        ActionToString(TagServerCertificate);
        ActionToString(TagUser);
        ActionToString(UntagInstanceProfile);
        ActionToString(UntagMFADevice);
        ActionToString(UntagOpenIDConnectProvider);
        ActionToString(UntagPolicy);
        ActionToString(UntagRole);
        ActionToString(UntagSAMLProvider);
        ActionToString(UntagServerCertificate);
        ActionToString(UntagUser);
        ActionToString(UpdateAccessKey);
        ActionToString(UpdateAccountPasswordPolicy);
        ActionToString(UpdateAssumeRolePolicy);
        ActionToString(UpdateGroup);
        ActionToString(UpdateLoginProfile);
        ActionToString(UpdateOpenIDConnectProviderThumbprint);
        ActionToString(UpdateRole);
        ActionToString(UpdateRoleDescription);
        ActionToString(UpdateSAMLProvider);
        ActionToString(UpdateSSHPublicKey);
        ActionToString(UpdateServerCertificate);
        ActionToString(UpdateServiceSpecificCredential);
        ActionToString(UpdateSigningCertificate);
        ActionToString(UpdateUser);
        ActionToString(UploadSSHPublicKey);
        ActionToString(UploadServerCertificate);
        ActionToString(UploadSigningCertificate);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace IAM
} // namespace QtAws
