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

#include "route53request.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::Route53Request
 * \brief The Route53Request class provides an interface for Route53 requests.
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * \enum Route53Request::Action
 *
 * This enum describes the actions that can be performed as Route53
 * requests.
 *
 * \value AssociateVPCWithHostedZoneAction Route53 AssociateVPCWithHostedZone action.
 * \value ChangeResourceRecordSetsAction Route53 ChangeResourceRecordSets action.
 * \value ChangeTagsForResourceAction Route53 ChangeTagsForResource action.
 * \value CreateHealthCheckAction Route53 CreateHealthCheck action.
 * \value CreateHostedZoneAction Route53 CreateHostedZone action.
 * \value CreateQueryLoggingConfigAction Route53 CreateQueryLoggingConfig action.
 * \value CreateReusableDelegationSetAction Route53 CreateReusableDelegationSet action.
 * \value CreateTrafficPolicyAction Route53 CreateTrafficPolicy action.
 * \value CreateTrafficPolicyInstanceAction Route53 CreateTrafficPolicyInstance action.
 * \value CreateTrafficPolicyVersionAction Route53 CreateTrafficPolicyVersion action.
 * \value CreateVPCAssociationAuthorizationAction Route53 CreateVPCAssociationAuthorization action.
 * \value DeleteHealthCheckAction Route53 DeleteHealthCheck action.
 * \value DeleteHostedZoneAction Route53 DeleteHostedZone action.
 * \value DeleteQueryLoggingConfigAction Route53 DeleteQueryLoggingConfig action.
 * \value DeleteReusableDelegationSetAction Route53 DeleteReusableDelegationSet action.
 * \value DeleteTrafficPolicyAction Route53 DeleteTrafficPolicy action.
 * \value DeleteTrafficPolicyInstanceAction Route53 DeleteTrafficPolicyInstance action.
 * \value DeleteVPCAssociationAuthorizationAction Route53 DeleteVPCAssociationAuthorization action.
 * \value DisassociateVPCFromHostedZoneAction Route53 DisassociateVPCFromHostedZone action.
 * \value GetAccountLimitAction Route53 GetAccountLimit action.
 * \value GetChangeAction Route53 GetChange action.
 * \value GetCheckerIpRangesAction Route53 GetCheckerIpRanges action.
 * \value GetGeoLocationAction Route53 GetGeoLocation action.
 * \value GetHealthCheckAction Route53 GetHealthCheck action.
 * \value GetHealthCheckCountAction Route53 GetHealthCheckCount action.
 * \value GetHealthCheckLastFailureReasonAction Route53 GetHealthCheckLastFailureReason action.
 * \value GetHealthCheckStatusAction Route53 GetHealthCheckStatus action.
 * \value GetHostedZoneAction Route53 GetHostedZone action.
 * \value GetHostedZoneCountAction Route53 GetHostedZoneCount action.
 * \value GetHostedZoneLimitAction Route53 GetHostedZoneLimit action.
 * \value GetQueryLoggingConfigAction Route53 GetQueryLoggingConfig action.
 * \value GetReusableDelegationSetAction Route53 GetReusableDelegationSet action.
 * \value GetReusableDelegationSetLimitAction Route53 GetReusableDelegationSetLimit action.
 * \value GetTrafficPolicyAction Route53 GetTrafficPolicy action.
 * \value GetTrafficPolicyInstanceAction Route53 GetTrafficPolicyInstance action.
 * \value GetTrafficPolicyInstanceCountAction Route53 GetTrafficPolicyInstanceCount action.
 * \value ListGeoLocationsAction Route53 ListGeoLocations action.
 * \value ListHealthChecksAction Route53 ListHealthChecks action.
 * \value ListHostedZonesAction Route53 ListHostedZones action.
 * \value ListHostedZonesByNameAction Route53 ListHostedZonesByName action.
 * \value ListQueryLoggingConfigsAction Route53 ListQueryLoggingConfigs action.
 * \value ListResourceRecordSetsAction Route53 ListResourceRecordSets action.
 * \value ListReusableDelegationSetsAction Route53 ListReusableDelegationSets action.
 * \value ListTagsForResourceAction Route53 ListTagsForResource action.
 * \value ListTagsForResourcesAction Route53 ListTagsForResources action.
 * \value ListTrafficPoliciesAction Route53 ListTrafficPolicies action.
 * \value ListTrafficPolicyInstancesAction Route53 ListTrafficPolicyInstances action.
 * \value ListTrafficPolicyInstancesByHostedZoneAction Route53 ListTrafficPolicyInstancesByHostedZone action.
 * \value ListTrafficPolicyInstancesByPolicyAction Route53 ListTrafficPolicyInstancesByPolicy action.
 * \value ListTrafficPolicyVersionsAction Route53 ListTrafficPolicyVersions action.
 * \value ListVPCAssociationAuthorizationsAction Route53 ListVPCAssociationAuthorizations action.
 * \value TestDNSAnswerAction Route53 TestDNSAnswer action.
 * \value UpdateHealthCheckAction Route53 UpdateHealthCheck action.
 * \value UpdateHostedZoneCommentAction Route53 UpdateHostedZoneComment action.
 * \value UpdateTrafficPolicyCommentAction Route53 UpdateTrafficPolicyComment action.
 * \value UpdateTrafficPolicyInstanceAction Route53 UpdateTrafficPolicyInstance action.
 */

/*!
 * Constructs a Route53Request object for Route53 \a action.
 */
Route53Request::Route53Request(const Action action)
    : QtAws::Core::AwsAbstractRequest(new Route53RequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
Route53Request::Route53Request(const Route53Request &other)
    : QtAws::Core::AwsAbstractRequest(new Route53RequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the Route53Request object to be equal to \a other.
 */
Route53Request& Route53Request::operator=(const Route53Request &other)
{
    Q_D(Route53Request);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa Route53Request object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from Route53RequestPrivate.
 */
Route53Request::Route53Request(Route53RequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Route53 action to be performed by this request.
 */
Route53Request::Action Route53Request::action() const
{
    Q_D(const Route53Request);
    return d->action;
}

/*!
 * Returns the name of the Route53 action to be performed by this request.
 */
QString Route53Request::actionString() const
{
    return Route53RequestPrivate::toString(action());
}

/*!
 * Returns the Route53 API version implemented by this request.
 */
QString Route53Request::apiVersion() const
{
    Q_D(const Route53Request);
    return d->apiVersion;
}

/*!
 * Sets the Route53 action to be performed by this request to \a action.
 */
void Route53Request::setAction(const Action action)
{
    Q_D(Route53Request);
    d->action = action;
}

/*!
 * Sets the Route53 API version to include in this request to \a version.
 */
void Route53Request::setApiVersion(const QString &version)
{
    Q_D(Route53Request);
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
bool Route53Request::operator==(const Route53Request &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Route53 queue name.
 *
 * @par From Route53 FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Route53 queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool Route53Request::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int Route53Request::clearParameter(const QString &name)
{
    Q_D(Route53Request);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void Route53Request::clearParameters()
{
    Q_D(Route53Request);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant Route53Request::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const Route53Request);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &Route53Request::parameters() const
{
    Q_D(const Route53Request);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void Route53Request::setParameter(const QString &name, const QVariant &value)
{
    Q_D(Route53Request);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void Route53Request::setParameters(const QVariantMap &parameters)
{
    Q_D(Route53Request);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Route53 request using the given
 * \a endpoint.
 *
 * This Route53 implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest Route53Request::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const Route53Request);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Route53::Route53RequestPrivate
 * \brief The Route53RequestPrivate class provides private implementation for Route53Request.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a Route53RequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
Route53RequestPrivate::Route53RequestPrivate(const Route53Request::Action action, Route53Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the Route53Request class's copy constructor.
 */
Route53RequestPrivate::Route53RequestPrivate(const Route53RequestPrivate &other,
                                     Route53Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts Route53Request::Action enumerator values to their respective
 * string representations, appropriate for use with the Route53 service's Action
 * query parameters.
 */
QString Route53RequestPrivate::toString(const Route53Request::Action &action)
{
    #define ActionToString(action) \
        case Route53Request::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Route53
} // namespace QtAws
