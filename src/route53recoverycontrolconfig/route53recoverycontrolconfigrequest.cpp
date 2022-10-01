// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "route53recoverycontrolconfigrequest.h"
#include "route53recoverycontrolconfigrequest_p.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::Route53RecoveryControlConfigRequest
 * \brief The Route53RecoveryControlConfigRequest class provides an interface for Route53RecoveryControlConfig requests.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * \enum Route53RecoveryControlConfigRequest::Action
 *
 * This enum describes the actions that can be performed as Route53RecoveryControlConfig
 * requests.
 *
 * \value CreateClusterAction Route53RecoveryControlConfig CreateCluster action.
 * \value CreateControlPanelAction Route53RecoveryControlConfig CreateControlPanel action.
 * \value CreateRoutingControlAction Route53RecoveryControlConfig CreateRoutingControl action.
 * \value CreateSafetyRuleAction Route53RecoveryControlConfig CreateSafetyRule action.
 * \value DeleteClusterAction Route53RecoveryControlConfig DeleteCluster action.
 * \value DeleteControlPanelAction Route53RecoveryControlConfig DeleteControlPanel action.
 * \value DeleteRoutingControlAction Route53RecoveryControlConfig DeleteRoutingControl action.
 * \value DeleteSafetyRuleAction Route53RecoveryControlConfig DeleteSafetyRule action.
 * \value DescribeClusterAction Route53RecoveryControlConfig DescribeCluster action.
 * \value DescribeControlPanelAction Route53RecoveryControlConfig DescribeControlPanel action.
 * \value DescribeRoutingControlAction Route53RecoveryControlConfig DescribeRoutingControl action.
 * \value DescribeSafetyRuleAction Route53RecoveryControlConfig DescribeSafetyRule action.
 * \value ListAssociatedRoute53HealthChecksAction Route53RecoveryControlConfig ListAssociatedRoute53HealthChecks action.
 * \value ListClustersAction Route53RecoveryControlConfig ListClusters action.
 * \value ListControlPanelsAction Route53RecoveryControlConfig ListControlPanels action.
 * \value ListRoutingControlsAction Route53RecoveryControlConfig ListRoutingControls action.
 * \value ListSafetyRulesAction Route53RecoveryControlConfig ListSafetyRules action.
 * \value ListTagsForResourceAction Route53RecoveryControlConfig ListTagsForResource action.
 * \value TagResourceAction Route53RecoveryControlConfig TagResource action.
 * \value UntagResourceAction Route53RecoveryControlConfig UntagResource action.
 * \value UpdateControlPanelAction Route53RecoveryControlConfig UpdateControlPanel action.
 * \value UpdateRoutingControlAction Route53RecoveryControlConfig UpdateRoutingControl action.
 * \value UpdateSafetyRuleAction Route53RecoveryControlConfig UpdateSafetyRule action.
 */

/*!
 * Constructs a Route53RecoveryControlConfigRequest object for Route53RecoveryControlConfig \a action.
 */
Route53RecoveryControlConfigRequest::Route53RecoveryControlConfigRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new Route53RecoveryControlConfigRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
Route53RecoveryControlConfigRequest::Route53RecoveryControlConfigRequest(const Route53RecoveryControlConfigRequest &other)
    : QtAws::Core::AwsAbstractRequest(new Route53RecoveryControlConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the Route53RecoveryControlConfigRequest object to be equal to \a other.
 */
Route53RecoveryControlConfigRequest& Route53RecoveryControlConfigRequest::operator=(const Route53RecoveryControlConfigRequest &other)
{
    Q_D(Route53RecoveryControlConfigRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa Route53RecoveryControlConfigRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from Route53RecoveryControlConfigRequestPrivate.
 */
Route53RecoveryControlConfigRequest::Route53RecoveryControlConfigRequest(Route53RecoveryControlConfigRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Route53RecoveryControlConfig action to be performed by this request.
 */
Route53RecoveryControlConfigRequest::Action Route53RecoveryControlConfigRequest::action() const
{
    Q_D(const Route53RecoveryControlConfigRequest);
    return d->action;
}

/*!
 * Returns the name of the Route53RecoveryControlConfig action to be performed by this request.
 */
QString Route53RecoveryControlConfigRequest::actionString() const
{
    return Route53RecoveryControlConfigRequestPrivate::toString(action());
}

/*!
 * Returns the Route53RecoveryControlConfig API version implemented by this request.
 */
QString Route53RecoveryControlConfigRequest::apiVersion() const
{
    Q_D(const Route53RecoveryControlConfigRequest);
    return d->apiVersion;
}

/*!
 * Sets the Route53RecoveryControlConfig action to be performed by this request to \a action.
 */
void Route53RecoveryControlConfigRequest::setAction(const Action action)
{
    Q_D(Route53RecoveryControlConfigRequest);
    d->action = action;
}

/*!
 * Sets the Route53RecoveryControlConfig API version to include in this request to \a version.
 */
void Route53RecoveryControlConfigRequest::setApiVersion(const QString &version)
{
    Q_D(Route53RecoveryControlConfigRequest);
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
bool Route53RecoveryControlConfigRequest::operator==(const Route53RecoveryControlConfigRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Route53RecoveryControlConfig queue name.
 *
 * @par From Route53RecoveryControlConfig FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Route53RecoveryControlConfig queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool Route53RecoveryControlConfigRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int Route53RecoveryControlConfigRequest::clearParameter(const QString &name)
{
    Q_D(Route53RecoveryControlConfigRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void Route53RecoveryControlConfigRequest::clearParameters()
{
    Q_D(Route53RecoveryControlConfigRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant Route53RecoveryControlConfigRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const Route53RecoveryControlConfigRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &Route53RecoveryControlConfigRequest::parameters() const
{
    Q_D(const Route53RecoveryControlConfigRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void Route53RecoveryControlConfigRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(Route53RecoveryControlConfigRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void Route53RecoveryControlConfigRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(Route53RecoveryControlConfigRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Route53RecoveryControlConfig request using the given
 * \a endpoint.
 *
 * This Route53RecoveryControlConfig implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest Route53RecoveryControlConfigRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const Route53RecoveryControlConfigRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::Route53RecoveryControlConfigRequestPrivate
 * \brief The Route53RecoveryControlConfigRequestPrivate class provides private implementation for Route53RecoveryControlConfigRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a Route53RecoveryControlConfigRequestPrivate object for Route53RecoveryControlConfig \a action,
 * with public implementation \a q.
 */
Route53RecoveryControlConfigRequestPrivate::Route53RecoveryControlConfigRequestPrivate(const Route53RecoveryControlConfigRequest::Action action, Route53RecoveryControlConfigRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2020-11-02"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the Route53RecoveryControlConfigRequest class's copy constructor.
 */
Route53RecoveryControlConfigRequestPrivate::Route53RecoveryControlConfigRequestPrivate(const Route53RecoveryControlConfigRequestPrivate &other,
                                     Route53RecoveryControlConfigRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts Route53RecoveryControlConfigRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Route53RecoveryControlConfig service's Action
 * query parameters.
 */
QString Route53RecoveryControlConfigRequestPrivate::toString(const Route53RecoveryControlConfigRequest::Action &action)
{
    #define ActionToString(action) \
        case Route53RecoveryControlConfigRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateCluster);
        ActionToString(CreateControlPanel);
        ActionToString(CreateRoutingControl);
        ActionToString(CreateSafetyRule);
        ActionToString(DeleteCluster);
        ActionToString(DeleteControlPanel);
        ActionToString(DeleteRoutingControl);
        ActionToString(DeleteSafetyRule);
        ActionToString(DescribeCluster);
        ActionToString(DescribeControlPanel);
        ActionToString(DescribeRoutingControl);
        ActionToString(DescribeSafetyRule);
        ActionToString(ListAssociatedRoute53HealthChecks);
        ActionToString(ListClusters);
        ActionToString(ListControlPanels);
        ActionToString(ListRoutingControls);
        ActionToString(ListSafetyRules);
        ActionToString(ListTagsForResource);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateControlPanel);
        ActionToString(UpdateRoutingControl);
        ActionToString(UpdateSafetyRule);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
