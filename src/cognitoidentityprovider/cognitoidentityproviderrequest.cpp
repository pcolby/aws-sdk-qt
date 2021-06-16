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

#include "cognitoidentityproviderrequest.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::CognitoIdentityProviderRequest
 * \brief The CognitoIdentityProviderRequest class provides an interface for CognitoIdentityProvider requests.
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * \enum CognitoIdentityProviderRequest::Action
 *
 * This enum describes the actions that can be performed as CognitoIdentityProvider
 * requests.
 *
 * \value AddCustomAttributesAction CognitoIdentityProvider AddCustomAttributes action.
 * \value AdminAddUserToGroupAction CognitoIdentityProvider AdminAddUserToGroup action.
 * \value AdminConfirmSignUpAction CognitoIdentityProvider AdminConfirmSignUp action.
 * \value AdminCreateUserAction CognitoIdentityProvider AdminCreateUser action.
 * \value AdminDeleteUserAction CognitoIdentityProvider AdminDeleteUser action.
 * \value AdminDeleteUserAttributesAction CognitoIdentityProvider AdminDeleteUserAttributes action.
 * \value AdminDisableProviderForUserAction CognitoIdentityProvider AdminDisableProviderForUser action.
 * \value AdminDisableUserAction CognitoIdentityProvider AdminDisableUser action.
 * \value AdminEnableUserAction CognitoIdentityProvider AdminEnableUser action.
 * \value AdminForgetDeviceAction CognitoIdentityProvider AdminForgetDevice action.
 * \value AdminGetDeviceAction CognitoIdentityProvider AdminGetDevice action.
 * \value AdminGetUserAction CognitoIdentityProvider AdminGetUser action.
 * \value AdminInitiateAuthAction CognitoIdentityProvider AdminInitiateAuth action.
 * \value AdminLinkProviderForUserAction CognitoIdentityProvider AdminLinkProviderForUser action.
 * \value AdminListDevicesAction CognitoIdentityProvider AdminListDevices action.
 * \value AdminListGroupsForUserAction CognitoIdentityProvider AdminListGroupsForUser action.
 * \value AdminListUserAuthEventsAction CognitoIdentityProvider AdminListUserAuthEvents action.
 * \value AdminRemoveUserFromGroupAction CognitoIdentityProvider AdminRemoveUserFromGroup action.
 * \value AdminResetUserPasswordAction CognitoIdentityProvider AdminResetUserPassword action.
 * \value AdminRespondToAuthChallengeAction CognitoIdentityProvider AdminRespondToAuthChallenge action.
 * \value AdminSetUserMFAPreferenceAction CognitoIdentityProvider AdminSetUserMFAPreference action.
 * \value AdminSetUserPasswordAction CognitoIdentityProvider AdminSetUserPassword action.
 * \value AdminSetUserSettingsAction CognitoIdentityProvider AdminSetUserSettings action.
 * \value AdminUpdateAuthEventFeedbackAction CognitoIdentityProvider AdminUpdateAuthEventFeedback action.
 * \value AdminUpdateDeviceStatusAction CognitoIdentityProvider AdminUpdateDeviceStatus action.
 * \value AdminUpdateUserAttributesAction CognitoIdentityProvider AdminUpdateUserAttributes action.
 * \value AdminUserGlobalSignOutAction CognitoIdentityProvider AdminUserGlobalSignOut action.
 * \value AssociateSoftwareTokenAction CognitoIdentityProvider AssociateSoftwareToken action.
 * \value ChangePasswordAction CognitoIdentityProvider ChangePassword action.
 * \value ConfirmDeviceAction CognitoIdentityProvider ConfirmDevice action.
 * \value ConfirmForgotPasswordAction CognitoIdentityProvider ConfirmForgotPassword action.
 * \value ConfirmSignUpAction CognitoIdentityProvider ConfirmSignUp action.
 * \value CreateGroupAction CognitoIdentityProvider CreateGroup action.
 * \value CreateIdentityProviderAction CognitoIdentityProvider CreateIdentityProvider action.
 * \value CreateResourceServerAction CognitoIdentityProvider CreateResourceServer action.
 * \value CreateUserImportJobAction CognitoIdentityProvider CreateUserImportJob action.
 * \value CreateUserPoolAction CognitoIdentityProvider CreateUserPool action.
 * \value CreateUserPoolClientAction CognitoIdentityProvider CreateUserPoolClient action.
 * \value CreateUserPoolDomainAction CognitoIdentityProvider CreateUserPoolDomain action.
 * \value DeleteGroupAction CognitoIdentityProvider DeleteGroup action.
 * \value DeleteIdentityProviderAction CognitoIdentityProvider DeleteIdentityProvider action.
 * \value DeleteResourceServerAction CognitoIdentityProvider DeleteResourceServer action.
 * \value DeleteUserAction CognitoIdentityProvider DeleteUser action.
 * \value DeleteUserAttributesAction CognitoIdentityProvider DeleteUserAttributes action.
 * \value DeleteUserPoolAction CognitoIdentityProvider DeleteUserPool action.
 * \value DeleteUserPoolClientAction CognitoIdentityProvider DeleteUserPoolClient action.
 * \value DeleteUserPoolDomainAction CognitoIdentityProvider DeleteUserPoolDomain action.
 * \value DescribeIdentityProviderAction CognitoIdentityProvider DescribeIdentityProvider action.
 * \value DescribeResourceServerAction CognitoIdentityProvider DescribeResourceServer action.
 * \value DescribeRiskConfigurationAction CognitoIdentityProvider DescribeRiskConfiguration action.
 * \value DescribeUserImportJobAction CognitoIdentityProvider DescribeUserImportJob action.
 * \value DescribeUserPoolAction CognitoIdentityProvider DescribeUserPool action.
 * \value DescribeUserPoolClientAction CognitoIdentityProvider DescribeUserPoolClient action.
 * \value DescribeUserPoolDomainAction CognitoIdentityProvider DescribeUserPoolDomain action.
 * \value ForgetDeviceAction CognitoIdentityProvider ForgetDevice action.
 * \value ForgotPasswordAction CognitoIdentityProvider ForgotPassword action.
 * \value GetCSVHeaderAction CognitoIdentityProvider GetCSVHeader action.
 * \value GetDeviceAction CognitoIdentityProvider GetDevice action.
 * \value GetGroupAction CognitoIdentityProvider GetGroup action.
 * \value GetIdentityProviderByIdentifierAction CognitoIdentityProvider GetIdentityProviderByIdentifier action.
 * \value GetSigningCertificateAction CognitoIdentityProvider GetSigningCertificate action.
 * \value GetUICustomizationAction CognitoIdentityProvider GetUICustomization action.
 * \value GetUserAction CognitoIdentityProvider GetUser action.
 * \value GetUserAttributeVerificationCodeAction CognitoIdentityProvider GetUserAttributeVerificationCode action.
 * \value GetUserPoolMfaConfigAction CognitoIdentityProvider GetUserPoolMfaConfig action.
 * \value GlobalSignOutAction CognitoIdentityProvider GlobalSignOut action.
 * \value InitiateAuthAction CognitoIdentityProvider InitiateAuth action.
 * \value ListDevicesAction CognitoIdentityProvider ListDevices action.
 * \value ListGroupsAction CognitoIdentityProvider ListGroups action.
 * \value ListIdentityProvidersAction CognitoIdentityProvider ListIdentityProviders action.
 * \value ListResourceServersAction CognitoIdentityProvider ListResourceServers action.
 * \value ListTagsForResourceAction CognitoIdentityProvider ListTagsForResource action.
 * \value ListUserImportJobsAction CognitoIdentityProvider ListUserImportJobs action.
 * \value ListUserPoolClientsAction CognitoIdentityProvider ListUserPoolClients action.
 * \value ListUserPoolsAction CognitoIdentityProvider ListUserPools action.
 * \value ListUsersAction CognitoIdentityProvider ListUsers action.
 * \value ListUsersInGroupAction CognitoIdentityProvider ListUsersInGroup action.
 * \value ResendConfirmationCodeAction CognitoIdentityProvider ResendConfirmationCode action.
 * \value RespondToAuthChallengeAction CognitoIdentityProvider RespondToAuthChallenge action.
 * \value RevokeTokenAction CognitoIdentityProvider RevokeToken action.
 * \value SetRiskConfigurationAction CognitoIdentityProvider SetRiskConfiguration action.
 * \value SetUICustomizationAction CognitoIdentityProvider SetUICustomization action.
 * \value SetUserMFAPreferenceAction CognitoIdentityProvider SetUserMFAPreference action.
 * \value SetUserPoolMfaConfigAction CognitoIdentityProvider SetUserPoolMfaConfig action.
 * \value SetUserSettingsAction CognitoIdentityProvider SetUserSettings action.
 * \value SignUpAction CognitoIdentityProvider SignUp action.
 * \value StartUserImportJobAction CognitoIdentityProvider StartUserImportJob action.
 * \value StopUserImportJobAction CognitoIdentityProvider StopUserImportJob action.
 * \value TagResourceAction CognitoIdentityProvider TagResource action.
 * \value UntagResourceAction CognitoIdentityProvider UntagResource action.
 * \value UpdateAuthEventFeedbackAction CognitoIdentityProvider UpdateAuthEventFeedback action.
 * \value UpdateDeviceStatusAction CognitoIdentityProvider UpdateDeviceStatus action.
 * \value UpdateGroupAction CognitoIdentityProvider UpdateGroup action.
 * \value UpdateIdentityProviderAction CognitoIdentityProvider UpdateIdentityProvider action.
 * \value UpdateResourceServerAction CognitoIdentityProvider UpdateResourceServer action.
 * \value UpdateUserAttributesAction CognitoIdentityProvider UpdateUserAttributes action.
 * \value UpdateUserPoolAction CognitoIdentityProvider UpdateUserPool action.
 * \value UpdateUserPoolClientAction CognitoIdentityProvider UpdateUserPoolClient action.
 * \value UpdateUserPoolDomainAction CognitoIdentityProvider UpdateUserPoolDomain action.
 * \value VerifySoftwareTokenAction CognitoIdentityProvider VerifySoftwareToken action.
 * \value VerifyUserAttributeAction CognitoIdentityProvider VerifyUserAttribute action.
 */

/*!
 * Constructs a CognitoIdentityProviderRequest object for CognitoIdentityProvider \a action.
 */
CognitoIdentityProviderRequest::CognitoIdentityProviderRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new CognitoIdentityProviderRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
CognitoIdentityProviderRequest::CognitoIdentityProviderRequest(const CognitoIdentityProviderRequest &other)
    : QtAws::Core::AwsAbstractRequest(new CognitoIdentityProviderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the CognitoIdentityProviderRequest object to be equal to \a other.
 */
CognitoIdentityProviderRequest& CognitoIdentityProviderRequest::operator=(const CognitoIdentityProviderRequest &other)
{
    Q_D(CognitoIdentityProviderRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa CognitoIdentityProviderRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CognitoIdentityProviderRequestPrivate.
 */
CognitoIdentityProviderRequest::CognitoIdentityProviderRequest(CognitoIdentityProviderRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the CognitoIdentityProvider action to be performed by this request.
 */
CognitoIdentityProviderRequest::Action CognitoIdentityProviderRequest::action() const
{
    Q_D(const CognitoIdentityProviderRequest);
    return d->action;
}

/*!
 * Returns the name of the CognitoIdentityProvider action to be performed by this request.
 */
QString CognitoIdentityProviderRequest::actionString() const
{
    return CognitoIdentityProviderRequestPrivate::toString(action());
}

/*!
 * Returns the CognitoIdentityProvider API version implemented by this request.
 */
QString CognitoIdentityProviderRequest::apiVersion() const
{
    Q_D(const CognitoIdentityProviderRequest);
    return d->apiVersion;
}

/*!
 * Sets the CognitoIdentityProvider action to be performed by this request to \a action.
 */
void CognitoIdentityProviderRequest::setAction(const Action action)
{
    Q_D(CognitoIdentityProviderRequest);
    d->action = action;
}

/*!
 * Sets the CognitoIdentityProvider API version to include in this request to \a version.
 */
void CognitoIdentityProviderRequest::setApiVersion(const QString &version)
{
    Q_D(CognitoIdentityProviderRequest);
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
bool CognitoIdentityProviderRequest::operator==(const CognitoIdentityProviderRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid CognitoIdentityProvider queue name.
 *
 * @par From CognitoIdentityProvider FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid CognitoIdentityProvider queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool CognitoIdentityProviderRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int CognitoIdentityProviderRequest::clearParameter(const QString &name)
{
    Q_D(CognitoIdentityProviderRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void CognitoIdentityProviderRequest::clearParameters()
{
    Q_D(CognitoIdentityProviderRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant CognitoIdentityProviderRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const CognitoIdentityProviderRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &CognitoIdentityProviderRequest::parameters() const
{
    Q_D(const CognitoIdentityProviderRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void CognitoIdentityProviderRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(CognitoIdentityProviderRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void CognitoIdentityProviderRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(CognitoIdentityProviderRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the CognitoIdentityProvider request using the given
 * \a endpoint.
 *
 * This CognitoIdentityProvider implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest CognitoIdentityProviderRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const CognitoIdentityProviderRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::CognitoIdentityProvider::CognitoIdentityProviderRequestPrivate
 * \brief The CognitoIdentityProviderRequestPrivate class provides private implementation for CognitoIdentityProviderRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a CognitoIdentityProviderRequestPrivate object for CognitoIdentityProvider \a action,
 * with public implementation \a q.
 */
CognitoIdentityProviderRequestPrivate::CognitoIdentityProviderRequestPrivate(const CognitoIdentityProviderRequest::Action action, CognitoIdentityProviderRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the CognitoIdentityProviderRequest class's copy constructor.
 */
CognitoIdentityProviderRequestPrivate::CognitoIdentityProviderRequestPrivate(const CognitoIdentityProviderRequestPrivate &other,
                                     CognitoIdentityProviderRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts CognitoIdentityProviderRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the CognitoIdentityProvider service's Action
 * query parameters.
 */
QString CognitoIdentityProviderRequestPrivate::toString(const CognitoIdentityProviderRequest::Action &action)
{
    #define ActionToString(action) \
        case CognitoIdentityProviderRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
