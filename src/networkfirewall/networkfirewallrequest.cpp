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

#include "networkfirewallrequest.h"
#include "networkfirewallrequest_p.h"

namespace QtAws {
namespace NetworkFirewall {

/*!
 * \class QtAws::NetworkFirewall::NetworkFirewallRequest
 * \brief The NetworkFirewallRequest class provides an interface for NetworkFirewall requests.
 *
 * \inmodule QtAwsNetworkFirewall
 */

/*!
 * \enum NetworkFirewallRequest::Action
 *
 * This enum describes the actions that can be performed as NetworkFirewall
 * requests.
 *
 * \value AssociateFirewallPolicyAction NetworkFirewall AssociateFirewallPolicy action.
 * \value AssociateSubnetsAction NetworkFirewall AssociateSubnets action.
 * \value CreateFirewallAction NetworkFirewall CreateFirewall action.
 * \value CreateFirewallPolicyAction NetworkFirewall CreateFirewallPolicy action.
 * \value CreateRuleGroupAction NetworkFirewall CreateRuleGroup action.
 * \value DeleteFirewallAction NetworkFirewall DeleteFirewall action.
 * \value DeleteFirewallPolicyAction NetworkFirewall DeleteFirewallPolicy action.
 * \value DeleteResourcePolicyAction NetworkFirewall DeleteResourcePolicy action.
 * \value DeleteRuleGroupAction NetworkFirewall DeleteRuleGroup action.
 * \value DescribeFirewallAction NetworkFirewall DescribeFirewall action.
 * \value DescribeFirewallPolicyAction NetworkFirewall DescribeFirewallPolicy action.
 * \value DescribeLoggingConfigurationAction NetworkFirewall DescribeLoggingConfiguration action.
 * \value DescribeResourcePolicyAction NetworkFirewall DescribeResourcePolicy action.
 * \value DescribeRuleGroupAction NetworkFirewall DescribeRuleGroup action.
 * \value DisassociateSubnetsAction NetworkFirewall DisassociateSubnets action.
 * \value ListFirewallPoliciesAction NetworkFirewall ListFirewallPolicies action.
 * \value ListFirewallsAction NetworkFirewall ListFirewalls action.
 * \value ListRuleGroupsAction NetworkFirewall ListRuleGroups action.
 * \value ListTagsForResourceAction NetworkFirewall ListTagsForResource action.
 * \value PutResourcePolicyAction NetworkFirewall PutResourcePolicy action.
 * \value TagResourceAction NetworkFirewall TagResource action.
 * \value UntagResourceAction NetworkFirewall UntagResource action.
 * \value UpdateFirewallDeleteProtectionAction NetworkFirewall UpdateFirewallDeleteProtection action.
 * \value UpdateFirewallDescriptionAction NetworkFirewall UpdateFirewallDescription action.
 * \value UpdateFirewallPolicyAction NetworkFirewall UpdateFirewallPolicy action.
 * \value UpdateFirewallPolicyChangeProtectionAction NetworkFirewall UpdateFirewallPolicyChangeProtection action.
 * \value UpdateLoggingConfigurationAction NetworkFirewall UpdateLoggingConfiguration action.
 * \value UpdateRuleGroupAction NetworkFirewall UpdateRuleGroup action.
 * \value UpdateSubnetChangeProtectionAction NetworkFirewall UpdateSubnetChangeProtection action.
 */

/*!
 * Constructs a NetworkFirewallRequest object for NetworkFirewall \a action.
 */
NetworkFirewallRequest::NetworkFirewallRequest(const Action action)
    : d_ptr(new NetworkFirewallRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
NetworkFirewallRequest::NetworkFirewallRequest(const NetworkFirewallRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new NetworkFirewallRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the NetworkFirewallRequest object to be equal to \a other.
 */
NetworkFirewallRequest& NetworkFirewallRequest::operator=(const NetworkFirewallRequest &other)
{
    Q_D(NetworkFirewallRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa NetworkFirewallRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from NetworkFirewallRequestPrivate.
 */
NetworkFirewallRequest::NetworkFirewallRequest(NetworkFirewallRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the NetworkFirewall action to be performed by this request.
 */
NetworkFirewallRequest::Action NetworkFirewallRequest::action() const
{
    Q_D(const NetworkFirewallRequest);
    return d->action;
}

/*!
 * Returns the name of the NetworkFirewall action to be performed by this request.
 */
QString NetworkFirewallRequest::actionString() const
{
    return NetworkFirewallRequestPrivate::toString(action());
}

/*!
 * Returns the NetworkFirewall API version implemented by this request.
 */
QString NetworkFirewallRequest::apiVersion() const
{
    Q_D(const NetworkFirewallRequest);
    return d->apiVersion;
}

/*!
 * Sets the NetworkFirewall action to be performed by this request to \a action.
 */
void NetworkFirewallRequest::setAction(const Action action)
{
    Q_D(NetworkFirewallRequest);
    d->action = action;
}

/*!
 * Sets the NetworkFirewall API version to include in this request to \a version.
 */
void NetworkFirewallRequest::setApiVersion(const QString &version)
{
    Q_D(NetworkFirewallRequest);
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
bool NetworkFirewallRequest::operator==(const NetworkFirewallRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid NetworkFirewall queue name.
 *
 * @par From NetworkFirewall FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid NetworkFirewall queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool NetworkFirewallRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int NetworkFirewallRequest::clearParameter(const QString &name)
{
    Q_D(NetworkFirewallRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void NetworkFirewallRequest::clearParameters()
{
    Q_D(NetworkFirewallRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant NetworkFirewallRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const NetworkFirewallRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &NetworkFirewallRequest::parameters() const
{
    Q_D(const NetworkFirewallRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void NetworkFirewallRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(NetworkFirewallRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void NetworkFirewallRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(NetworkFirewallRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the NetworkFirewall request using the given
 * \a endpoint.
 *
 * This NetworkFirewall implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest NetworkFirewallRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const NetworkFirewallRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::NetworkFirewall::NetworkFirewallRequestPrivate
 * \brief The NetworkFirewallRequestPrivate class provides private implementation for NetworkFirewallRequest.
 * \internal
 *
 * \inmodule QtAwsNetworkFirewall
 */

/*!
 * Constructs a NetworkFirewallRequestPrivate object for NetworkFirewall \a action,
 * with public implementation \a q.
 */
NetworkFirewallRequestPrivate::NetworkFirewallRequestPrivate(const NetworkFirewallRequest::Action action, NetworkFirewallRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the NetworkFirewallRequest class's copy constructor.
 */
NetworkFirewallRequestPrivate::NetworkFirewallRequestPrivate(const NetworkFirewallRequestPrivate &other,
                                     NetworkFirewallRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts NetworkFirewallRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the NetworkFirewall service's Action
 * query parameters.
 */
QString NetworkFirewallRequestPrivate::toString(const NetworkFirewallRequest::Action &action)
{
    #define ActionToString(action) \
        case NetworkFirewallRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace NetworkFirewall
} // namespace QtAws
