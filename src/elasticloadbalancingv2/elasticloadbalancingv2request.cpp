/*
    Copyright 2013-2018 Paul Colby

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

#include "elasticloadbalancingv2request.h"
#include "elasticloadbalancingv2request_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

/*!
 * \class QtAws::ElasticLoadBalancingv2::ElasticLoadBalancingv2Request
 * \brief The ElasticLoadBalancingv2Request class provides an interface for ElasticLoadBalancingv2 requests.
 *
 * \inmodule QtAwsElasticLoadBalancingv2
 */

/*!
 * \enum ElasticLoadBalancingv2Request::Action
 *
 * This enum describes the actions that can be performed as ElasticLoadBalancingv2
 * requests.
 *
 * \value AddListenerCertificatesAction ElasticLoadBalancingv2 AddListenerCertificates action.
 * \value AddTagsAction ElasticLoadBalancingv2 AddTags action.
 * \value CreateListenerAction ElasticLoadBalancingv2 CreateListener action.
 * \value CreateLoadBalancerAction ElasticLoadBalancingv2 CreateLoadBalancer action.
 * \value CreateRuleAction ElasticLoadBalancingv2 CreateRule action.
 * \value CreateTargetGroupAction ElasticLoadBalancingv2 CreateTargetGroup action.
 * \value DeleteListenerAction ElasticLoadBalancingv2 DeleteListener action.
 * \value DeleteLoadBalancerAction ElasticLoadBalancingv2 DeleteLoadBalancer action.
 * \value DeleteRuleAction ElasticLoadBalancingv2 DeleteRule action.
 * \value DeleteTargetGroupAction ElasticLoadBalancingv2 DeleteTargetGroup action.
 * \value DeregisterTargetsAction ElasticLoadBalancingv2 DeregisterTargets action.
 * \value DescribeAccountLimitsAction ElasticLoadBalancingv2 DescribeAccountLimits action.
 * \value DescribeListenerCertificatesAction ElasticLoadBalancingv2 DescribeListenerCertificates action.
 * \value DescribeListenersAction ElasticLoadBalancingv2 DescribeListeners action.
 * \value DescribeLoadBalancerAttributesAction ElasticLoadBalancingv2 DescribeLoadBalancerAttributes action.
 * \value DescribeLoadBalancersAction ElasticLoadBalancingv2 DescribeLoadBalancers action.
 * \value DescribeRulesAction ElasticLoadBalancingv2 DescribeRules action.
 * \value DescribeSSLPoliciesAction ElasticLoadBalancingv2 DescribeSSLPolicies action.
 * \value DescribeTagsAction ElasticLoadBalancingv2 DescribeTags action.
 * \value DescribeTargetGroupAttributesAction ElasticLoadBalancingv2 DescribeTargetGroupAttributes action.
 * \value DescribeTargetGroupsAction ElasticLoadBalancingv2 DescribeTargetGroups action.
 * \value DescribeTargetHealthAction ElasticLoadBalancingv2 DescribeTargetHealth action.
 * \value ModifyListenerAction ElasticLoadBalancingv2 ModifyListener action.
 * \value ModifyLoadBalancerAttributesAction ElasticLoadBalancingv2 ModifyLoadBalancerAttributes action.
 * \value ModifyRuleAction ElasticLoadBalancingv2 ModifyRule action.
 * \value ModifyTargetGroupAction ElasticLoadBalancingv2 ModifyTargetGroup action.
 * \value ModifyTargetGroupAttributesAction ElasticLoadBalancingv2 ModifyTargetGroupAttributes action.
 * \value RegisterTargetsAction ElasticLoadBalancingv2 RegisterTargets action.
 * \value RemoveListenerCertificatesAction ElasticLoadBalancingv2 RemoveListenerCertificates action.
 * \value RemoveTagsAction ElasticLoadBalancingv2 RemoveTags action.
 * \value SetIpAddressTypeAction ElasticLoadBalancingv2 SetIpAddressType action.
 * \value SetRulePrioritiesAction ElasticLoadBalancingv2 SetRulePriorities action.
 * \value SetSecurityGroupsAction ElasticLoadBalancingv2 SetSecurityGroups action.
 * \value SetSubnetsAction ElasticLoadBalancingv2 SetSubnets action.
 */

/*!
 * Constructs a ElasticLoadBalancingv2Request object for ElasticLoadBalancingv2 \a action.
 */
ElasticLoadBalancingv2Request::ElasticLoadBalancingv2Request(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ElasticLoadBalancingv2RequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ElasticLoadBalancingv2Request::ElasticLoadBalancingv2Request(const ElasticLoadBalancingv2Request &other)
    : QtAws::Core::AwsAbstractRequest(new ElasticLoadBalancingv2RequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ElasticLoadBalancingv2Request object to be equal to \a other.
 */
ElasticLoadBalancingv2Request& ElasticLoadBalancingv2Request::operator=(const ElasticLoadBalancingv2Request &other)
{
    Q_D(ElasticLoadBalancingv2Request);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ElasticLoadBalancingv2Request object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ElasticLoadBalancingv2RequestPrivate.
 */
ElasticLoadBalancingv2Request::ElasticLoadBalancingv2Request(ElasticLoadBalancingv2RequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the ElasticLoadBalancingv2 action to be performed by this request.
 */
ElasticLoadBalancingv2Request::Action ElasticLoadBalancingv2Request::action() const
{
    Q_D(const ElasticLoadBalancingv2Request);
    return d->action;
}

/*!
 * Returns the name of the ElasticLoadBalancingv2 action to be performed by this request.
 */
QString ElasticLoadBalancingv2Request::actionString() const
{
    return ElasticLoadBalancingv2RequestPrivate::toString(action());
}

/*!
 * Returns the ElasticLoadBalancingv2 API version implemented by this request.
 */
QString ElasticLoadBalancingv2Request::apiVersion() const
{
    Q_D(const ElasticLoadBalancingv2Request);
    return d->apiVersion;
}

/*!
 * Sets the ElasticLoadBalancingv2 action to be performed by this request to \a action.
 */
void ElasticLoadBalancingv2Request::setAction(const Action action)
{
    Q_D(ElasticLoadBalancingv2Request);
    d->action = action;
}

/*!
 * Sets the ElasticLoadBalancingv2 API version to include in this request to \a version.
 */
void ElasticLoadBalancingv2Request::setApiVersion(const QString &version)
{
    Q_D(ElasticLoadBalancingv2Request);
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
bool ElasticLoadBalancingv2Request::operator==(const ElasticLoadBalancingv2Request &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ElasticLoadBalancingv2 queue name.
 *
 * @par From ElasticLoadBalancingv2 FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ElasticLoadBalancingv2 queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ElasticLoadBalancingv2Request::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ElasticLoadBalancingv2Request::clearParameter(const QString &name)
{
    Q_D(ElasticLoadBalancingv2Request);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ElasticLoadBalancingv2Request::clearParameters()
{
    Q_D(ElasticLoadBalancingv2Request);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ElasticLoadBalancingv2Request::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ElasticLoadBalancingv2Request);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ElasticLoadBalancingv2Request::parameters() const
{
    Q_D(const ElasticLoadBalancingv2Request);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ElasticLoadBalancingv2Request::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ElasticLoadBalancingv2Request);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ElasticLoadBalancingv2Request::setParameters(const QVariantMap &parameters)
{
    Q_D(ElasticLoadBalancingv2Request);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ElasticLoadBalancingv2 request using the given
 * \a endpoint.
 *
 * This ElasticLoadBalancingv2 implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ElasticLoadBalancingv2Request::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const ElasticLoadBalancingv2Request);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ElasticLoadBalancingv2::ElasticLoadBalancingv2RequestPrivate
 * \brief The ElasticLoadBalancingv2RequestPrivate class provides private implementation for ElasticLoadBalancingv2Request.
 * \internal
 *
 * \inmodule QtAwsElasticLoadBalancingv2
 */

/*!
 * Constructs a ElasticLoadBalancingv2RequestPrivate object for ElasticLoadBalancingv2 \a action,
 * with public implementation \a q.
 */
ElasticLoadBalancingv2RequestPrivate::ElasticLoadBalancingv2RequestPrivate(const ElasticLoadBalancingv2Request::Action action, ElasticLoadBalancingv2Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ElasticLoadBalancingv2Request class's copy constructor.
 */
ElasticLoadBalancingv2RequestPrivate::ElasticLoadBalancingv2RequestPrivate(const ElasticLoadBalancingv2RequestPrivate &other,
                                     ElasticLoadBalancingv2Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ElasticLoadBalancingv2Request::Action enumerator values to their respective
 * string representations, appropriate for use with the ElasticLoadBalancingv2 service's Action
 * query parameters.
 */
QString ElasticLoadBalancingv2RequestPrivate::toString(const ElasticLoadBalancingv2Request::Action &action)
{
    #define ActionToString(action) \
        case ElasticLoadBalancingv2Request::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ElasticLoadBalancingv2
} // namespace QtAws
