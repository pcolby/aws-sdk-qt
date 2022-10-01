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
namespace Iam {

/*!
 * \class QtAws::Iam::IamRequest
 * \brief The IamRequest class provides an interface for Iam requests.
 *
 * \inmodule QtAwsIam
 */

/*!
 * \enum IamRequest::Action
 *
 * This enum describes the actions that can be performed as Iam
 * requests.
 *
 * \value AddClientIDToOpenIDConnectProviderAction Iam AddClientIDToOpenIDConnectProvider action.
 * \value AddRoleToInstanceProfileAction Iam AddRoleToInstanceProfile action.
 * \value AddUserToGroupAction Iam AddUserToGroup action.
 * \value AttachGroupPolicyAction Iam AttachGroupPolicy action.
 * \value AttachRolePolicyAction Iam AttachRolePolicy action.
 * \value AttachUserPolicyAction Iam AttachUserPolicy action.
 * \value ChangePasswordAction Iam ChangePassword action.
 * \value CreateAccessKeyAction Iam CreateAccessKey action.
 * \value CreateAccountAliasAction Iam CreateAccountAlias action.
 * \value CreateGroupAction Iam CreateGroup action.
 * \value CreateInstanceProfileAction Iam CreateInstanceProfile action.
 * \value CreateLoginProfileAction Iam CreateLoginProfile action.
 * \value CreateOpenIDConnectProviderAction Iam CreateOpenIDConnectProvider action.
 * \value CreatePolicyAction Iam CreatePolicy action.
 * \value CreatePolicyVersionAction Iam CreatePolicyVersion action.
 * \value CreateRoleAction Iam CreateRole action.
 * \value CreateSAMLProviderAction Iam CreateSAMLProvider action.
 * \value CreateServiceLinkedRoleAction Iam CreateServiceLinkedRole action.
 * \value CreateServiceSpecificCredentialAction Iam CreateServiceSpecificCredential action.
 * \value CreateUserAction Iam CreateUser action.
 * \value CreateVirtualMFADeviceAction Iam CreateVirtualMFADevice action.
 * \value DeactivateMFADeviceAction Iam DeactivateMFADevice action.
 * \value DeleteAccessKeyAction Iam DeleteAccessKey action.
 * \value DeleteAccountAliasAction Iam DeleteAccountAlias action.
 * \value DeleteAccountPasswordPolicyAction Iam DeleteAccountPasswordPolicy action.
 * \value DeleteGroupAction Iam DeleteGroup action.
 * \value DeleteGroupPolicyAction Iam DeleteGroupPolicy action.
 * \value DeleteInstanceProfileAction Iam DeleteInstanceProfile action.
 * \value DeleteLoginProfileAction Iam DeleteLoginProfile action.
 * \value DeleteOpenIDConnectProviderAction Iam DeleteOpenIDConnectProvider action.
 * \value DeletePolicyAction Iam DeletePolicy action.
 * \value DeletePolicyVersionAction Iam DeletePolicyVersion action.
 * \value DeleteRoleAction Iam DeleteRole action.
 * \value DeleteRolePermissionsBoundaryAction Iam DeleteRolePermissionsBoundary action.
 * \value DeleteRolePolicyAction Iam DeleteRolePolicy action.
 * \value DeleteSAMLProviderAction Iam DeleteSAMLProvider action.
 * \value DeleteSSHPublicKeyAction Iam DeleteSSHPublicKey action.
 * \value DeleteServerCertificateAction Iam DeleteServerCertificate action.
 * \value DeleteServiceLinkedRoleAction Iam DeleteServiceLinkedRole action.
 * \value DeleteServiceSpecificCredentialAction Iam DeleteServiceSpecificCredential action.
 * \value DeleteSigningCertificateAction Iam DeleteSigningCertificate action.
 * \value DeleteUserAction Iam DeleteUser action.
 * \value DeleteUserPermissionsBoundaryAction Iam DeleteUserPermissionsBoundary action.
 * \value DeleteUserPolicyAction Iam DeleteUserPolicy action.
 * \value DeleteVirtualMFADeviceAction Iam DeleteVirtualMFADevice action.
 * \value DetachGroupPolicyAction Iam DetachGroupPolicy action.
 * \value DetachRolePolicyAction Iam DetachRolePolicy action.
 * \value DetachUserPolicyAction Iam DetachUserPolicy action.
 * \value EnableMFADeviceAction Iam EnableMFADevice action.
 * \value GenerateCredentialReportAction Iam GenerateCredentialReport action.
 * \value GenerateOrganizationsAccessReportAction Iam GenerateOrganizationsAccessReport action.
 * \value GenerateServiceLastAccessedDetailsAction Iam GenerateServiceLastAccessedDetails action.
 * \value GetAccessKeyLastUsedAction Iam GetAccessKeyLastUsed action.
 * \value GetAccountAuthorizationDetailsAction Iam GetAccountAuthorizationDetails action.
 * \value GetAccountPasswordPolicyAction Iam GetAccountPasswordPolicy action.
 * \value GetAccountSummaryAction Iam GetAccountSummary action.
 * \value GetContextKeysForCustomPolicyAction Iam GetContextKeysForCustomPolicy action.
 * \value GetContextKeysForPrincipalPolicyAction Iam GetContextKeysForPrincipalPolicy action.
 * \value GetCredentialReportAction Iam GetCredentialReport action.
 * \value GetGroupAction Iam GetGroup action.
 * \value GetGroupPolicyAction Iam GetGroupPolicy action.
 * \value GetInstanceProfileAction Iam GetInstanceProfile action.
 * \value GetLoginProfileAction Iam GetLoginProfile action.
 * \value GetOpenIDConnectProviderAction Iam GetOpenIDConnectProvider action.
 * \value GetOrganizationsAccessReportAction Iam GetOrganizationsAccessReport action.
 * \value GetPolicyAction Iam GetPolicy action.
 * \value GetPolicyVersionAction Iam GetPolicyVersion action.
 * \value GetRoleAction Iam GetRole action.
 * \value GetRolePolicyAction Iam GetRolePolicy action.
 * \value GetSAMLProviderAction Iam GetSAMLProvider action.
 * \value GetSSHPublicKeyAction Iam GetSSHPublicKey action.
 * \value GetServerCertificateAction Iam GetServerCertificate action.
 * \value GetServiceLastAccessedDetailsAction Iam GetServiceLastAccessedDetails action.
 * \value GetServiceLastAccessedDetailsWithEntitiesAction Iam GetServiceLastAccessedDetailsWithEntities action.
 * \value GetServiceLinkedRoleDeletionStatusAction Iam GetServiceLinkedRoleDeletionStatus action.
 * \value GetUserAction Iam GetUser action.
 * \value GetUserPolicyAction Iam GetUserPolicy action.
 * \value ListAccessKeysAction Iam ListAccessKeys action.
 * \value ListAccountAliasesAction Iam ListAccountAliases action.
 * \value ListAttachedGroupPoliciesAction Iam ListAttachedGroupPolicies action.
 * \value ListAttachedRolePoliciesAction Iam ListAttachedRolePolicies action.
 * \value ListAttachedUserPoliciesAction Iam ListAttachedUserPolicies action.
 * \value ListEntitiesForPolicyAction Iam ListEntitiesForPolicy action.
 * \value ListGroupPoliciesAction Iam ListGroupPolicies action.
 * \value ListGroupsAction Iam ListGroups action.
 * \value ListGroupsForUserAction Iam ListGroupsForUser action.
 * \value ListInstanceProfileTagsAction Iam ListInstanceProfileTags action.
 * \value ListInstanceProfilesAction Iam ListInstanceProfiles action.
 * \value ListInstanceProfilesForRoleAction Iam ListInstanceProfilesForRole action.
 * \value ListMFADeviceTagsAction Iam ListMFADeviceTags action.
 * \value ListMFADevicesAction Iam ListMFADevices action.
 * \value ListOpenIDConnectProviderTagsAction Iam ListOpenIDConnectProviderTags action.
 * \value ListOpenIDConnectProvidersAction Iam ListOpenIDConnectProviders action.
 * \value ListPoliciesAction Iam ListPolicies action.
 * \value ListPoliciesGrantingServiceAccessAction Iam ListPoliciesGrantingServiceAccess action.
 * \value ListPolicyTagsAction Iam ListPolicyTags action.
 * \value ListPolicyVersionsAction Iam ListPolicyVersions action.
 * \value ListRolePoliciesAction Iam ListRolePolicies action.
 * \value ListRoleTagsAction Iam ListRoleTags action.
 * \value ListRolesAction Iam ListRoles action.
 * \value ListSAMLProviderTagsAction Iam ListSAMLProviderTags action.
 * \value ListSAMLProvidersAction Iam ListSAMLProviders action.
 * \value ListSSHPublicKeysAction Iam ListSSHPublicKeys action.
 * \value ListServerCertificateTagsAction Iam ListServerCertificateTags action.
 * \value ListServerCertificatesAction Iam ListServerCertificates action.
 * \value ListServiceSpecificCredentialsAction Iam ListServiceSpecificCredentials action.
 * \value ListSigningCertificatesAction Iam ListSigningCertificates action.
 * \value ListUserPoliciesAction Iam ListUserPolicies action.
 * \value ListUserTagsAction Iam ListUserTags action.
 * \value ListUsersAction Iam ListUsers action.
 * \value ListVirtualMFADevicesAction Iam ListVirtualMFADevices action.
 * \value PutGroupPolicyAction Iam PutGroupPolicy action.
 * \value PutRolePermissionsBoundaryAction Iam PutRolePermissionsBoundary action.
 * \value PutRolePolicyAction Iam PutRolePolicy action.
 * \value PutUserPermissionsBoundaryAction Iam PutUserPermissionsBoundary action.
 * \value PutUserPolicyAction Iam PutUserPolicy action.
 * \value RemoveClientIDFromOpenIDConnectProviderAction Iam RemoveClientIDFromOpenIDConnectProvider action.
 * \value RemoveRoleFromInstanceProfileAction Iam RemoveRoleFromInstanceProfile action.
 * \value RemoveUserFromGroupAction Iam RemoveUserFromGroup action.
 * \value ResetServiceSpecificCredentialAction Iam ResetServiceSpecificCredential action.
 * \value ResyncMFADeviceAction Iam ResyncMFADevice action.
 * \value SetDefaultPolicyVersionAction Iam SetDefaultPolicyVersion action.
 * \value SetSecurityTokenServicePreferencesAction Iam SetSecurityTokenServicePreferences action.
 * \value SimulateCustomPolicyAction Iam SimulateCustomPolicy action.
 * \value SimulatePrincipalPolicyAction Iam SimulatePrincipalPolicy action.
 * \value TagInstanceProfileAction Iam TagInstanceProfile action.
 * \value TagMFADeviceAction Iam TagMFADevice action.
 * \value TagOpenIDConnectProviderAction Iam TagOpenIDConnectProvider action.
 * \value TagPolicyAction Iam TagPolicy action.
 * \value TagRoleAction Iam TagRole action.
 * \value TagSAMLProviderAction Iam TagSAMLProvider action.
 * \value TagServerCertificateAction Iam TagServerCertificate action.
 * \value TagUserAction Iam TagUser action.
 * \value UntagInstanceProfileAction Iam UntagInstanceProfile action.
 * \value UntagMFADeviceAction Iam UntagMFADevice action.
 * \value UntagOpenIDConnectProviderAction Iam UntagOpenIDConnectProvider action.
 * \value UntagPolicyAction Iam UntagPolicy action.
 * \value UntagRoleAction Iam UntagRole action.
 * \value UntagSAMLProviderAction Iam UntagSAMLProvider action.
 * \value UntagServerCertificateAction Iam UntagServerCertificate action.
 * \value UntagUserAction Iam UntagUser action.
 * \value UpdateAccessKeyAction Iam UpdateAccessKey action.
 * \value UpdateAccountPasswordPolicyAction Iam UpdateAccountPasswordPolicy action.
 * \value UpdateAssumeRolePolicyAction Iam UpdateAssumeRolePolicy action.
 * \value UpdateGroupAction Iam UpdateGroup action.
 * \value UpdateLoginProfileAction Iam UpdateLoginProfile action.
 * \value UpdateOpenIDConnectProviderThumbprintAction Iam UpdateOpenIDConnectProviderThumbprint action.
 * \value UpdateRoleAction Iam UpdateRole action.
 * \value UpdateRoleDescriptionAction Iam UpdateRoleDescription action.
 * \value UpdateSAMLProviderAction Iam UpdateSAMLProvider action.
 * \value UpdateSSHPublicKeyAction Iam UpdateSSHPublicKey action.
 * \value UpdateServerCertificateAction Iam UpdateServerCertificate action.
 * \value UpdateServiceSpecificCredentialAction Iam UpdateServiceSpecificCredential action.
 * \value UpdateSigningCertificateAction Iam UpdateSigningCertificate action.
 * \value UpdateUserAction Iam UpdateUser action.
 * \value UploadSSHPublicKeyAction Iam UploadSSHPublicKey action.
 * \value UploadServerCertificateAction Iam UploadServerCertificate action.
 * \value UploadSigningCertificateAction Iam UploadSigningCertificate action.
 */

/*!
 * Constructs a IamRequest object for Iam \a action.
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
 * Returns the Iam action to be performed by this request.
 */
IamRequest::Action IamRequest::action() const
{
    Q_D(const IamRequest);
    return d->action;
}

/*!
 * Returns the name of the Iam action to be performed by this request.
 */
QString IamRequest::actionString() const
{
    return IamRequestPrivate::toString(action());
}

/*!
 * Returns the Iam API version implemented by this request.
 */
QString IamRequest::apiVersion() const
{
    Q_D(const IamRequest);
    return d->apiVersion;
}

/*!
 * Sets the Iam action to be performed by this request to \a action.
 */
void IamRequest::setAction(const Action action)
{
    Q_D(IamRequest);
    d->action = action;
}

/*!
 * Sets the Iam API version to include in this request to \a version.
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
 * Returns \c tue if \a queueName is a valid Iam queue name.
 *
 * @par From Iam FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Iam queue name, \c false otherwise.
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
 * Returns a network request for the Iam request using the given
 * \a endpoint.
 *
 * This Iam implementation builds request URLs by combining the
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
 * \class QtAws::Iam::IamRequestPrivate
 * \brief The IamRequestPrivate class provides private implementation for IamRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a IamRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
IamRequestPrivate::IamRequestPrivate(const IamRequest::Action action, IamRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2010-05-08"))
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
 * string representations, appropriate for use with the Iam service's Action
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

} // namespace Iam
} // namespace QtAws
