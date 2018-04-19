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

#include "iamrequest.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::IAMRequest
 * \brief The IAMRequest class provides an interface for IAM requests.
 *
 * \inmodule QtAwsIAM
 */

/*!
 * \enum IAMRequest::Action
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
 * \value DeleteRolePolicyAction IAM DeleteRolePolicy action.
 * \value DeleteSAMLProviderAction IAM DeleteSAMLProvider action.
 * \value DeleteSSHPublicKeyAction IAM DeleteSSHPublicKey action.
 * \value DeleteServerCertificateAction IAM DeleteServerCertificate action.
 * \value DeleteServiceLinkedRoleAction IAM DeleteServiceLinkedRole action.
 * \value DeleteServiceSpecificCredentialAction IAM DeleteServiceSpecificCredential action.
 * \value DeleteSigningCertificateAction IAM DeleteSigningCertificate action.
 * \value DeleteUserAction IAM DeleteUser action.
 * \value DeleteUserPolicyAction IAM DeleteUserPolicy action.
 * \value DeleteVirtualMFADeviceAction IAM DeleteVirtualMFADevice action.
 * \value DetachGroupPolicyAction IAM DetachGroupPolicy action.
 * \value DetachRolePolicyAction IAM DetachRolePolicy action.
 * \value DetachUserPolicyAction IAM DetachUserPolicy action.
 * \value EnableMFADeviceAction IAM EnableMFADevice action.
 * \value GenerateCredentialReportAction IAM GenerateCredentialReport action.
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
 * \value GetPolicyAction IAM GetPolicy action.
 * \value GetPolicyVersionAction IAM GetPolicyVersion action.
 * \value GetRoleAction IAM GetRole action.
 * \value GetRolePolicyAction IAM GetRolePolicy action.
 * \value GetSAMLProviderAction IAM GetSAMLProvider action.
 * \value GetSSHPublicKeyAction IAM GetSSHPublicKey action.
 * \value GetServerCertificateAction IAM GetServerCertificate action.
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
 * \value ListInstanceProfilesAction IAM ListInstanceProfiles action.
 * \value ListInstanceProfilesForRoleAction IAM ListInstanceProfilesForRole action.
 * \value ListMFADevicesAction IAM ListMFADevices action.
 * \value ListOpenIDConnectProvidersAction IAM ListOpenIDConnectProviders action.
 * \value ListPoliciesAction IAM ListPolicies action.
 * \value ListPolicyVersionsAction IAM ListPolicyVersions action.
 * \value ListRolePoliciesAction IAM ListRolePolicies action.
 * \value ListRolesAction IAM ListRoles action.
 * \value ListSAMLProvidersAction IAM ListSAMLProviders action.
 * \value ListSSHPublicKeysAction IAM ListSSHPublicKeys action.
 * \value ListServerCertificatesAction IAM ListServerCertificates action.
 * \value ListServiceSpecificCredentialsAction IAM ListServiceSpecificCredentials action.
 * \value ListSigningCertificatesAction IAM ListSigningCertificates action.
 * \value ListUserPoliciesAction IAM ListUserPolicies action.
 * \value ListUsersAction IAM ListUsers action.
 * \value ListVirtualMFADevicesAction IAM ListVirtualMFADevices action.
 * \value PutGroupPolicyAction IAM PutGroupPolicy action.
 * \value PutRolePolicyAction IAM PutRolePolicy action.
 * \value PutUserPolicyAction IAM PutUserPolicy action.
 * \value RemoveClientIDFromOpenIDConnectProviderAction IAM RemoveClientIDFromOpenIDConnectProvider action.
 * \value RemoveRoleFromInstanceProfileAction IAM RemoveRoleFromInstanceProfile action.
 * \value RemoveUserFromGroupAction IAM RemoveUserFromGroup action.
 * \value ResetServiceSpecificCredentialAction IAM ResetServiceSpecificCredential action.
 * \value ResyncMFADeviceAction IAM ResyncMFADevice action.
 * \value SetDefaultPolicyVersionAction IAM SetDefaultPolicyVersion action.
 * \value SimulateCustomPolicyAction IAM SimulateCustomPolicy action.
 * \value SimulatePrincipalPolicyAction IAM SimulatePrincipalPolicy action.
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
 * Constructs a IAMRequest object for IAM \a action.
 */
IAMRequest::IAMRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new IAMRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
IAMRequest::IAMRequest(const IAMRequest &other)
    : QtAws::Core::AwsAbstractRequest(new IAMRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the IAMRequest object to be equal to \a other.
 */
IAMRequest& IAMRequest::operator=(const IAMRequest &other)
{
    Q_D(IAMRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa IAMRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IAMRequestPrivate.
 */
IAMRequest::IAMRequest(IAMRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the IAM action to be performed by this request.
 */
IAMRequest::Action IAMRequest::action() const
{
    Q_D(const IAMRequest);
    return d->action;
}

/*!
 * Returns the name of the IAM action to be performed by this request.
 */
QString IAMRequest::actionString() const
{
    return IAMRequestPrivate::toString(action());
}

/*!
 * Returns the IAM API version implemented by this request.
 */
QString IAMRequest::apiVersion() const
{
    Q_D(const IAMRequest);
    return d->apiVersion;
}

/*!
 * Sets the IAM action to be performed by this request to \a action.
 */
void IAMRequest::setAction(const Action action)
{
    Q_D(IAMRequest);
    d->action = action;
}

/*!
 * Sets the IAM API version to include in this request to \a version.
 */
void IAMRequest::setApiVersion(const QString &version)
{
    Q_D(IAMRequest);
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
bool IAMRequest::operator==(const IAMRequest &other) const
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
/*bool IAMRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int IAMRequest::clearParameter(const QString &name)
{
    Q_D(IAMRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void IAMRequest::clearParameters()
{
    Q_D(IAMRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant IAMRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const IAMRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &IAMRequest::parameters() const
{
    Q_D(const IAMRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void IAMRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(IAMRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void IAMRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(IAMRequest);
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
QNetworkRequest IAMRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const IAMRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::IAM::IAMRequestPrivate
 * \brief The IAMRequestPrivate class provides private implementation for IAMRequest.
 * \internal
 *
 * \inmodule QtAwsIAM
 */

/*!
 * Constructs a IAMRequestPrivate object for IAM \a action,
 * with public implementation \a q.
 */
IAMRequestPrivate::IAMRequestPrivate(const IAMRequest::Action action, IAMRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the IAMRequest class's copy constructor.
 */
IAMRequestPrivate::IAMRequestPrivate(const IAMRequestPrivate &other,
                                     IAMRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts IAMRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the IAM service's Action
 * query parameters.
 */
QString IAMRequestPrivate::toString(const IAMRequest::Action &action)
{
    #define ActionToString(action) \
        case IAMRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace IAM
} // namespace QtAws
