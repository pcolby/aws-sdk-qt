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

#include "autoscalingrequest.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::AutoScalingRequest
 * \brief The AutoScalingRequest class provides an interface for AutoScaling requests.
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * \enum AutoScalingRequest::Action
 *
 * This enum describes the actions that can be performed as AutoScaling
 * requests.
 *
 * \value AttachInstancesAction AutoScaling AttachInstances action.
 * \value AttachLoadBalancerTargetGroupsAction AutoScaling AttachLoadBalancerTargetGroups action.
 * \value AttachLoadBalancersAction AutoScaling AttachLoadBalancers action.
 * \value BatchDeleteScheduledActionAction AutoScaling BatchDeleteScheduledAction action.
 * \value BatchPutScheduledUpdateGroupActionAction AutoScaling BatchPutScheduledUpdateGroupAction action.
 * \value CancelInstanceRefreshAction AutoScaling CancelInstanceRefresh action.
 * \value CompleteLifecycleActionAction AutoScaling CompleteLifecycleAction action.
 * \value CreateAutoScalingGroupAction AutoScaling CreateAutoScalingGroup action.
 * \value CreateLaunchConfigurationAction AutoScaling CreateLaunchConfiguration action.
 * \value CreateOrUpdateTagsAction AutoScaling CreateOrUpdateTags action.
 * \value DeleteAutoScalingGroupAction AutoScaling DeleteAutoScalingGroup action.
 * \value DeleteLaunchConfigurationAction AutoScaling DeleteLaunchConfiguration action.
 * \value DeleteLifecycleHookAction AutoScaling DeleteLifecycleHook action.
 * \value DeleteNotificationConfigurationAction AutoScaling DeleteNotificationConfiguration action.
 * \value DeletePolicyAction AutoScaling DeletePolicy action.
 * \value DeleteScheduledActionAction AutoScaling DeleteScheduledAction action.
 * \value DeleteTagsAction AutoScaling DeleteTags action.
 * \value DeleteWarmPoolAction AutoScaling DeleteWarmPool action.
 * \value DescribeAccountLimitsAction AutoScaling DescribeAccountLimits action.
 * \value DescribeAdjustmentTypesAction AutoScaling DescribeAdjustmentTypes action.
 * \value DescribeAutoScalingGroupsAction AutoScaling DescribeAutoScalingGroups action.
 * \value DescribeAutoScalingInstancesAction AutoScaling DescribeAutoScalingInstances action.
 * \value DescribeAutoScalingNotificationTypesAction AutoScaling DescribeAutoScalingNotificationTypes action.
 * \value DescribeInstanceRefreshesAction AutoScaling DescribeInstanceRefreshes action.
 * \value DescribeLaunchConfigurationsAction AutoScaling DescribeLaunchConfigurations action.
 * \value DescribeLifecycleHookTypesAction AutoScaling DescribeLifecycleHookTypes action.
 * \value DescribeLifecycleHooksAction AutoScaling DescribeLifecycleHooks action.
 * \value DescribeLoadBalancerTargetGroupsAction AutoScaling DescribeLoadBalancerTargetGroups action.
 * \value DescribeLoadBalancersAction AutoScaling DescribeLoadBalancers action.
 * \value DescribeMetricCollectionTypesAction AutoScaling DescribeMetricCollectionTypes action.
 * \value DescribeNotificationConfigurationsAction AutoScaling DescribeNotificationConfigurations action.
 * \value DescribePoliciesAction AutoScaling DescribePolicies action.
 * \value DescribeScalingActivitiesAction AutoScaling DescribeScalingActivities action.
 * \value DescribeScalingProcessTypesAction AutoScaling DescribeScalingProcessTypes action.
 * \value DescribeScheduledActionsAction AutoScaling DescribeScheduledActions action.
 * \value DescribeTagsAction AutoScaling DescribeTags action.
 * \value DescribeTerminationPolicyTypesAction AutoScaling DescribeTerminationPolicyTypes action.
 * \value DescribeWarmPoolAction AutoScaling DescribeWarmPool action.
 * \value DetachInstancesAction AutoScaling DetachInstances action.
 * \value DetachLoadBalancerTargetGroupsAction AutoScaling DetachLoadBalancerTargetGroups action.
 * \value DetachLoadBalancersAction AutoScaling DetachLoadBalancers action.
 * \value DisableMetricsCollectionAction AutoScaling DisableMetricsCollection action.
 * \value EnableMetricsCollectionAction AutoScaling EnableMetricsCollection action.
 * \value EnterStandbyAction AutoScaling EnterStandby action.
 * \value ExecutePolicyAction AutoScaling ExecutePolicy action.
 * \value ExitStandbyAction AutoScaling ExitStandby action.
 * \value GetPredictiveScalingForecastAction AutoScaling GetPredictiveScalingForecast action.
 * \value PutLifecycleHookAction AutoScaling PutLifecycleHook action.
 * \value PutNotificationConfigurationAction AutoScaling PutNotificationConfiguration action.
 * \value PutScalingPolicyAction AutoScaling PutScalingPolicy action.
 * \value PutScheduledUpdateGroupActionAction AutoScaling PutScheduledUpdateGroupAction action.
 * \value PutWarmPoolAction AutoScaling PutWarmPool action.
 * \value RecordLifecycleActionHeartbeatAction AutoScaling RecordLifecycleActionHeartbeat action.
 * \value ResumeProcessesAction AutoScaling ResumeProcesses action.
 * \value SetDesiredCapacityAction AutoScaling SetDesiredCapacity action.
 * \value SetInstanceHealthAction AutoScaling SetInstanceHealth action.
 * \value SetInstanceProtectionAction AutoScaling SetInstanceProtection action.
 * \value StartInstanceRefreshAction AutoScaling StartInstanceRefresh action.
 * \value SuspendProcessesAction AutoScaling SuspendProcesses action.
 * \value TerminateInstanceInAutoScalingGroupAction AutoScaling TerminateInstanceInAutoScalingGroup action.
 * \value UpdateAutoScalingGroupAction AutoScaling UpdateAutoScalingGroup action.
 */

/*!
 * Constructs a AutoScalingRequest object for AutoScaling \a action.
 */
AutoScalingRequest::AutoScalingRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new AutoScalingRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
AutoScalingRequest::AutoScalingRequest(const AutoScalingRequest &other)
    : QtAws::Core::AwsAbstractRequest(new AutoScalingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the AutoScalingRequest object to be equal to \a other.
 */
AutoScalingRequest& AutoScalingRequest::operator=(const AutoScalingRequest &other)
{
    Q_D(AutoScalingRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa AutoScalingRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AutoScalingRequestPrivate.
 */
AutoScalingRequest::AutoScalingRequest(AutoScalingRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the AutoScaling action to be performed by this request.
 */
AutoScalingRequest::Action AutoScalingRequest::action() const
{
    Q_D(const AutoScalingRequest);
    return d->action;
}

/*!
 * Returns the name of the AutoScaling action to be performed by this request.
 */
QString AutoScalingRequest::actionString() const
{
    return AutoScalingRequestPrivate::toString(action());
}

/*!
 * Returns the AutoScaling API version implemented by this request.
 */
QString AutoScalingRequest::apiVersion() const
{
    Q_D(const AutoScalingRequest);
    return d->apiVersion;
}

/*!
 * Sets the AutoScaling action to be performed by this request to \a action.
 */
void AutoScalingRequest::setAction(const Action action)
{
    Q_D(AutoScalingRequest);
    d->action = action;
}

/*!
 * Sets the AutoScaling API version to include in this request to \a version.
 */
void AutoScalingRequest::setApiVersion(const QString &version)
{
    Q_D(AutoScalingRequest);
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
bool AutoScalingRequest::operator==(const AutoScalingRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid AutoScaling queue name.
 *
 * @par From AutoScaling FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid AutoScaling queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool AutoScalingRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int AutoScalingRequest::clearParameter(const QString &name)
{
    Q_D(AutoScalingRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void AutoScalingRequest::clearParameters()
{
    Q_D(AutoScalingRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant AutoScalingRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const AutoScalingRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &AutoScalingRequest::parameters() const
{
    Q_D(const AutoScalingRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void AutoScalingRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(AutoScalingRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void AutoScalingRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(AutoScalingRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the AutoScaling request using the given
 * \a endpoint.
 *
 * This AutoScaling implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest AutoScalingRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const AutoScalingRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::AutoScaling::AutoScalingRequestPrivate
 * \brief The AutoScalingRequestPrivate class provides private implementation for AutoScalingRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a AutoScalingRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
AutoScalingRequestPrivate::AutoScalingRequestPrivate(const AutoScalingRequest::Action action, AutoScalingRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the AutoScalingRequest class's copy constructor.
 */
AutoScalingRequestPrivate::AutoScalingRequestPrivate(const AutoScalingRequestPrivate &other,
                                     AutoScalingRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts AutoScalingRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the AutoScaling service's Action
 * query parameters.
 */
QString AutoScalingRequestPrivate::toString(const AutoScalingRequest::Action &action)
{
    #define ActionToString(action) \
        case AutoScalingRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AttachInstances);
        ActionToString(AttachLoadBalancerTargetGroups);
        ActionToString(AttachLoadBalancers);
        ActionToString(BatchDeleteScheduledAction);
        ActionToString(BatchPutScheduledUpdateGroupAction);
        ActionToString(CancelInstanceRefresh);
        ActionToString(CompleteLifecycleAction);
        ActionToString(CreateAutoScalingGroup);
        ActionToString(CreateLaunchConfiguration);
        ActionToString(CreateOrUpdateTags);
        ActionToString(DeleteAutoScalingGroup);
        ActionToString(DeleteLaunchConfiguration);
        ActionToString(DeleteLifecycleHook);
        ActionToString(DeleteNotificationConfiguration);
        ActionToString(DeletePolicy);
        ActionToString(DeleteScheduledAction);
        ActionToString(DeleteTags);
        ActionToString(DeleteWarmPool);
        ActionToString(DescribeAccountLimits);
        ActionToString(DescribeAdjustmentTypes);
        ActionToString(DescribeAutoScalingGroups);
        ActionToString(DescribeAutoScalingInstances);
        ActionToString(DescribeAutoScalingNotificationTypes);
        ActionToString(DescribeInstanceRefreshes);
        ActionToString(DescribeLaunchConfigurations);
        ActionToString(DescribeLifecycleHookTypes);
        ActionToString(DescribeLifecycleHooks);
        ActionToString(DescribeLoadBalancerTargetGroups);
        ActionToString(DescribeLoadBalancers);
        ActionToString(DescribeMetricCollectionTypes);
        ActionToString(DescribeNotificationConfigurations);
        ActionToString(DescribePolicies);
        ActionToString(DescribeScalingActivities);
        ActionToString(DescribeScalingProcessTypes);
        ActionToString(DescribeScheduledActions);
        ActionToString(DescribeTags);
        ActionToString(DescribeTerminationPolicyTypes);
        ActionToString(DescribeWarmPool);
        ActionToString(DetachInstances);
        ActionToString(DetachLoadBalancerTargetGroups);
        ActionToString(DetachLoadBalancers);
        ActionToString(DisableMetricsCollection);
        ActionToString(EnableMetricsCollection);
        ActionToString(EnterStandby);
        ActionToString(ExecutePolicy);
        ActionToString(ExitStandby);
        ActionToString(GetPredictiveScalingForecast);
        ActionToString(PutLifecycleHook);
        ActionToString(PutNotificationConfiguration);
        ActionToString(PutScalingPolicy);
        ActionToString(PutScheduledUpdateGroupAction);
        ActionToString(PutWarmPool);
        ActionToString(RecordLifecycleActionHeartbeat);
        ActionToString(ResumeProcesses);
        ActionToString(SetDesiredCapacity);
        ActionToString(SetInstanceHealth);
        ActionToString(SetInstanceProtection);
        ActionToString(StartInstanceRefresh);
        ActionToString(SuspendProcesses);
        ActionToString(TerminateInstanceInAutoScalingGroup);
        ActionToString(UpdateAutoScalingGroup);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace AutoScaling
} // namespace QtAws
