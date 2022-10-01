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

#include "organizationsrequest.h"
#include "organizationsrequest_p.h"

namespace QtAws {
namespace Organizations {

/*!
 * \class QtAws::Organizations::OrganizationsRequest
 * \brief The OrganizationsRequest class provides an interface for Organizations requests.
 *
 * \inmodule QtAwsOrganizations
 */

/*!
 * \enum OrganizationsRequest::Action
 *
 * This enum describes the actions that can be performed as Organizations
 * requests.
 *
 * \value AcceptHandshakeAction Organizations AcceptHandshake action.
 * \value AttachPolicyAction Organizations AttachPolicy action.
 * \value CancelHandshakeAction Organizations CancelHandshake action.
 * \value CloseAccountAction Organizations CloseAccount action.
 * \value CreateAccountAction Organizations CreateAccount action.
 * \value CreateGovCloudAccountAction Organizations CreateGovCloudAccount action.
 * \value CreateOrganizationAction Organizations CreateOrganization action.
 * \value CreateOrganizationalUnitAction Organizations CreateOrganizationalUnit action.
 * \value CreatePolicyAction Organizations CreatePolicy action.
 * \value DeclineHandshakeAction Organizations DeclineHandshake action.
 * \value DeleteOrganizationAction Organizations DeleteOrganization action.
 * \value DeleteOrganizationalUnitAction Organizations DeleteOrganizationalUnit action.
 * \value DeletePolicyAction Organizations DeletePolicy action.
 * \value DeregisterDelegatedAdministratorAction Organizations DeregisterDelegatedAdministrator action.
 * \value DescribeAccountAction Organizations DescribeAccount action.
 * \value DescribeCreateAccountStatusAction Organizations DescribeCreateAccountStatus action.
 * \value DescribeEffectivePolicyAction Organizations DescribeEffectivePolicy action.
 * \value DescribeHandshakeAction Organizations DescribeHandshake action.
 * \value DescribeOrganizationAction Organizations DescribeOrganization action.
 * \value DescribeOrganizationalUnitAction Organizations DescribeOrganizationalUnit action.
 * \value DescribePolicyAction Organizations DescribePolicy action.
 * \value DetachPolicyAction Organizations DetachPolicy action.
 * \value DisableAWSServiceAccessAction Organizations DisableAWSServiceAccess action.
 * \value DisablePolicyTypeAction Organizations DisablePolicyType action.
 * \value EnableAWSServiceAccessAction Organizations EnableAWSServiceAccess action.
 * \value EnableAllFeaturesAction Organizations EnableAllFeatures action.
 * \value EnablePolicyTypeAction Organizations EnablePolicyType action.
 * \value InviteAccountToOrganizationAction Organizations InviteAccountToOrganization action.
 * \value LeaveOrganizationAction Organizations LeaveOrganization action.
 * \value ListAWSServiceAccessForOrganizationAction Organizations ListAWSServiceAccessForOrganization action.
 * \value ListAccountsAction Organizations ListAccounts action.
 * \value ListAccountsForParentAction Organizations ListAccountsForParent action.
 * \value ListChildrenAction Organizations ListChildren action.
 * \value ListCreateAccountStatusAction Organizations ListCreateAccountStatus action.
 * \value ListDelegatedAdministratorsAction Organizations ListDelegatedAdministrators action.
 * \value ListDelegatedServicesForAccountAction Organizations ListDelegatedServicesForAccount action.
 * \value ListHandshakesForAccountAction Organizations ListHandshakesForAccount action.
 * \value ListHandshakesForOrganizationAction Organizations ListHandshakesForOrganization action.
 * \value ListOrganizationalUnitsForParentAction Organizations ListOrganizationalUnitsForParent action.
 * \value ListParentsAction Organizations ListParents action.
 * \value ListPoliciesAction Organizations ListPolicies action.
 * \value ListPoliciesForTargetAction Organizations ListPoliciesForTarget action.
 * \value ListRootsAction Organizations ListRoots action.
 * \value ListTagsForResourceAction Organizations ListTagsForResource action.
 * \value ListTargetsForPolicyAction Organizations ListTargetsForPolicy action.
 * \value MoveAccountAction Organizations MoveAccount action.
 * \value RegisterDelegatedAdministratorAction Organizations RegisterDelegatedAdministrator action.
 * \value RemoveAccountFromOrganizationAction Organizations RemoveAccountFromOrganization action.
 * \value TagResourceAction Organizations TagResource action.
 * \value UntagResourceAction Organizations UntagResource action.
 * \value UpdateOrganizationalUnitAction Organizations UpdateOrganizationalUnit action.
 * \value UpdatePolicyAction Organizations UpdatePolicy action.
 */

/*!
 * Constructs a OrganizationsRequest object for Organizations \a action.
 */
OrganizationsRequest::OrganizationsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new OrganizationsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
OrganizationsRequest::OrganizationsRequest(const OrganizationsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new OrganizationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the OrganizationsRequest object to be equal to \a other.
 */
OrganizationsRequest& OrganizationsRequest::operator=(const OrganizationsRequest &other)
{
    Q_D(OrganizationsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa OrganizationsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from OrganizationsRequestPrivate.
 */
OrganizationsRequest::OrganizationsRequest(OrganizationsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Organizations action to be performed by this request.
 */
OrganizationsRequest::Action OrganizationsRequest::action() const
{
    Q_D(const OrganizationsRequest);
    return d->action;
}

/*!
 * Returns the name of the Organizations action to be performed by this request.
 */
QString OrganizationsRequest::actionString() const
{
    return OrganizationsRequestPrivate::toString(action());
}

/*!
 * Returns the Organizations API version implemented by this request.
 */
QString OrganizationsRequest::apiVersion() const
{
    Q_D(const OrganizationsRequest);
    return d->apiVersion;
}

/*!
 * Sets the Organizations action to be performed by this request to \a action.
 */
void OrganizationsRequest::setAction(const Action action)
{
    Q_D(OrganizationsRequest);
    d->action = action;
}

/*!
 * Sets the Organizations API version to include in this request to \a version.
 */
void OrganizationsRequest::setApiVersion(const QString &version)
{
    Q_D(OrganizationsRequest);
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
bool OrganizationsRequest::operator==(const OrganizationsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Organizations queue name.
 *
 * @par From Organizations FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Organizations queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool OrganizationsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int OrganizationsRequest::clearParameter(const QString &name)
{
    Q_D(OrganizationsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void OrganizationsRequest::clearParameters()
{
    Q_D(OrganizationsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant OrganizationsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const OrganizationsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &OrganizationsRequest::parameters() const
{
    Q_D(const OrganizationsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void OrganizationsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(OrganizationsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void OrganizationsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(OrganizationsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Organizations request using the given
 * \a endpoint.
 *
 * This Organizations implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest OrganizationsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const OrganizationsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Organizations::OrganizationsRequestPrivate
 * \brief The OrganizationsRequestPrivate class provides private implementation for OrganizationsRequest.
 * \internal
 *
 * \inmodule QtAwsOrganizations
 */

/*!
 * Constructs a OrganizationsRequestPrivate object for Organizations \a action,
 * with public implementation \a q.
 */
OrganizationsRequestPrivate::OrganizationsRequestPrivate(const OrganizationsRequest::Action action, OrganizationsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2016-11-28"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the OrganizationsRequest class's copy constructor.
 */
OrganizationsRequestPrivate::OrganizationsRequestPrivate(const OrganizationsRequestPrivate &other,
                                     OrganizationsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts OrganizationsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Organizations service's Action
 * query parameters.
 */
QString OrganizationsRequestPrivate::toString(const OrganizationsRequest::Action &action)
{
    #define ActionToString(action) \
        case OrganizationsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AcceptHandshake);
        ActionToString(AttachPolicy);
        ActionToString(CancelHandshake);
        ActionToString(CloseAccount);
        ActionToString(CreateAccount);
        ActionToString(CreateGovCloudAccount);
        ActionToString(CreateOrganization);
        ActionToString(CreateOrganizationalUnit);
        ActionToString(CreatePolicy);
        ActionToString(DeclineHandshake);
        ActionToString(DeleteOrganization);
        ActionToString(DeleteOrganizationalUnit);
        ActionToString(DeletePolicy);
        ActionToString(DeregisterDelegatedAdministrator);
        ActionToString(DescribeAccount);
        ActionToString(DescribeCreateAccountStatus);
        ActionToString(DescribeEffectivePolicy);
        ActionToString(DescribeHandshake);
        ActionToString(DescribeOrganization);
        ActionToString(DescribeOrganizationalUnit);
        ActionToString(DescribePolicy);
        ActionToString(DetachPolicy);
        ActionToString(DisableAWSServiceAccess);
        ActionToString(DisablePolicyType);
        ActionToString(EnableAWSServiceAccess);
        ActionToString(EnableAllFeatures);
        ActionToString(EnablePolicyType);
        ActionToString(InviteAccountToOrganization);
        ActionToString(LeaveOrganization);
        ActionToString(ListAWSServiceAccessForOrganization);
        ActionToString(ListAccounts);
        ActionToString(ListAccountsForParent);
        ActionToString(ListChildren);
        ActionToString(ListCreateAccountStatus);
        ActionToString(ListDelegatedAdministrators);
        ActionToString(ListDelegatedServicesForAccount);
        ActionToString(ListHandshakesForAccount);
        ActionToString(ListHandshakesForOrganization);
        ActionToString(ListOrganizationalUnitsForParent);
        ActionToString(ListParents);
        ActionToString(ListPolicies);
        ActionToString(ListPoliciesForTarget);
        ActionToString(ListRoots);
        ActionToString(ListTagsForResource);
        ActionToString(ListTargetsForPolicy);
        ActionToString(MoveAccount);
        ActionToString(RegisterDelegatedAdministrator);
        ActionToString(RemoveAccountFromOrganization);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateOrganizationalUnit);
        ActionToString(UpdatePolicy);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Organizations
} // namespace QtAws
