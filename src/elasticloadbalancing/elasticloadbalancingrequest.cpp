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

#include "elasticloadbalancingrequest.h"
#include "elasticloadbalancingrequest_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

/*!
 * \class QtAws::ElasticLoadBalancing::ElasticLoadBalancingRequest
 * \brief The ElasticLoadBalancingRequest class provides an interface for ElasticLoadBalancing requests.
 *
 * \inmodule QtAwsElasticLoadBalancing
 */

/*!
 * \enum ElasticLoadBalancingRequest::Action
 *
 * This enum describes the actions that can be performed as ElasticLoadBalancing
 * requests.
 *
 * \value AddTagsAction ElasticLoadBalancing AddTags action.
 * \value ApplySecurityGroupsToLoadBalancerAction ElasticLoadBalancing ApplySecurityGroupsToLoadBalancer action.
 * \value AttachLoadBalancerToSubnetsAction ElasticLoadBalancing AttachLoadBalancerToSubnets action.
 * \value ConfigureHealthCheckAction ElasticLoadBalancing ConfigureHealthCheck action.
 * \value CreateAppCookieStickinessPolicyAction ElasticLoadBalancing CreateAppCookieStickinessPolicy action.
 * \value CreateLBCookieStickinessPolicyAction ElasticLoadBalancing CreateLBCookieStickinessPolicy action.
 * \value CreateLoadBalancerAction ElasticLoadBalancing CreateLoadBalancer action.
 * \value CreateLoadBalancerListenersAction ElasticLoadBalancing CreateLoadBalancerListeners action.
 * \value CreateLoadBalancerPolicyAction ElasticLoadBalancing CreateLoadBalancerPolicy action.
 * \value DeleteLoadBalancerAction ElasticLoadBalancing DeleteLoadBalancer action.
 * \value DeleteLoadBalancerListenersAction ElasticLoadBalancing DeleteLoadBalancerListeners action.
 * \value DeleteLoadBalancerPolicyAction ElasticLoadBalancing DeleteLoadBalancerPolicy action.
 * \value DeregisterInstancesFromLoadBalancerAction ElasticLoadBalancing DeregisterInstancesFromLoadBalancer action.
 * \value DescribeAccountLimitsAction ElasticLoadBalancing DescribeAccountLimits action.
 * \value DescribeInstanceHealthAction ElasticLoadBalancing DescribeInstanceHealth action.
 * \value DescribeLoadBalancerAttributesAction ElasticLoadBalancing DescribeLoadBalancerAttributes action.
 * \value DescribeLoadBalancerPoliciesAction ElasticLoadBalancing DescribeLoadBalancerPolicies action.
 * \value DescribeLoadBalancerPolicyTypesAction ElasticLoadBalancing DescribeLoadBalancerPolicyTypes action.
 * \value DescribeLoadBalancersAction ElasticLoadBalancing DescribeLoadBalancers action.
 * \value DescribeTagsAction ElasticLoadBalancing DescribeTags action.
 * \value DetachLoadBalancerFromSubnetsAction ElasticLoadBalancing DetachLoadBalancerFromSubnets action.
 * \value DisableAvailabilityZonesForLoadBalancerAction ElasticLoadBalancing DisableAvailabilityZonesForLoadBalancer action.
 * \value EnableAvailabilityZonesForLoadBalancerAction ElasticLoadBalancing EnableAvailabilityZonesForLoadBalancer action.
 * \value ModifyLoadBalancerAttributesAction ElasticLoadBalancing ModifyLoadBalancerAttributes action.
 * \value RegisterInstancesWithLoadBalancerAction ElasticLoadBalancing RegisterInstancesWithLoadBalancer action.
 * \value RemoveTagsAction ElasticLoadBalancing RemoveTags action.
 * \value SetLoadBalancerListenerSSLCertificateAction ElasticLoadBalancing SetLoadBalancerListenerSSLCertificate action.
 * \value SetLoadBalancerPoliciesForBackendServerAction ElasticLoadBalancing SetLoadBalancerPoliciesForBackendServer action.
 * \value SetLoadBalancerPoliciesOfListenerAction ElasticLoadBalancing SetLoadBalancerPoliciesOfListener action.
 */

/*!
 * Constructs a[n] ElasticLoadBalancingRequest object for ElasticLoadBalancing \a action.
 */
ElasticLoadBalancingRequest::ElasticLoadBalancingRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ElasticLoadBalancingRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ElasticLoadBalancingRequest::ElasticLoadBalancingRequest(const ElasticLoadBalancingRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ElasticLoadBalancingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ElasticLoadBalancingRequest object to be equal to \a other.
 */
ElasticLoadBalancingRequest& ElasticLoadBalancingRequest::operator=(const ElasticLoadBalancingRequest &other)
{
    Q_D(ElasticLoadBalancingRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ElasticLoadBalancingRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ElasticLoadBalancingRequestPrivate.
 */
ElasticLoadBalancingRequest::ElasticLoadBalancingRequest(ElasticLoadBalancingRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the ElasticLoadBalancing action to be performed by this request.
 */
ElasticLoadBalancingRequest::Action ElasticLoadBalancingRequest::action() const
{
    Q_D(const ElasticLoadBalancingRequest);
    return d->action;
}

/*!
 * Returns the name of the ElasticLoadBalancing action to be performed by this request.
 */
QString ElasticLoadBalancingRequest::actionString() const
{
    return ElasticLoadBalancingRequestPrivate::toString(action());
}

/*!
 * Returns the ElasticLoadBalancing API version implemented by this request.
 */
QString ElasticLoadBalancingRequest::apiVersion() const
{
    Q_D(const ElasticLoadBalancingRequest);
    return d->apiVersion;
}

/*!
 * Sets the ElasticLoadBalancing action to be performed by this request to \a action.
 */
void ElasticLoadBalancingRequest::setAction(const Action action)
{
    Q_D(ElasticLoadBalancingRequest);
    d->action = action;
}

/*!
 * Sets the ElasticLoadBalancing API version to include in this request to \a version.
 */
void ElasticLoadBalancingRequest::setApiVersion(const QString &version)
{
    Q_D(ElasticLoadBalancingRequest);
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
bool ElasticLoadBalancingRequest::operator==(const ElasticLoadBalancingRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ElasticLoadBalancing queue name.
 *
 * @par From ElasticLoadBalancing FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ElasticLoadBalancing queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ElasticLoadBalancingRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ElasticLoadBalancingRequest::clearParameter(const QString &name)
{
    Q_D(ElasticLoadBalancingRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ElasticLoadBalancingRequest::clearParameters()
{
    Q_D(ElasticLoadBalancingRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ElasticLoadBalancingRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ElasticLoadBalancingRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ElasticLoadBalancingRequest::parameters() const
{
    Q_D(const ElasticLoadBalancingRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ElasticLoadBalancingRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ElasticLoadBalancingRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ElasticLoadBalancingRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ElasticLoadBalancingRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ElasticLoadBalancing request using the given
 * \a endpoint.
 *
 * This ElasticLoadBalancing implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ElasticLoadBalancingRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const ElasticLoadBalancingRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ElasticLoadBalancing::ElasticLoadBalancingRequestPrivate
 * \brief The ElasticLoadBalancingRequestPrivate class provides private implementation for ElasticLoadBalancingRequest.
 * \internal
 *
 * \inmodule QtAwsElasticLoadBalancing
 */

/*!
 * Constructs a ElasticLoadBalancingRequestPrivate object for ElasticLoadBalancing \a action with,
 * public implementation \a q.
 */
ElasticLoadBalancingRequestPrivate::ElasticLoadBalancingRequestPrivate(const ElasticLoadBalancingRequest::Action action, ElasticLoadBalancingRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ElasticLoadBalancingRequest class's copy constructor.
 */
ElasticLoadBalancingRequestPrivate::ElasticLoadBalancingRequestPrivate(const ElasticLoadBalancingRequestPrivate &other,
                                     ElasticLoadBalancingRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ElasticLoadBalancingRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ElasticLoadBalancing service's Action
 * query parameters.
 */
QString ElasticLoadBalancingRequestPrivate::toString(const ElasticLoadBalancingRequest::Action &action)
{
    #define ActionToString(action) \
        case ElasticLoadBalancingRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ElasticLoadBalancing
} // namespace QtAws
