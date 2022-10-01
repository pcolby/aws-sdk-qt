// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "emrrequest.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::EmrRequest
 * \brief The EmrRequest class provides an interface for Emr requests.
 *
 * \inmodule QtAwsEmr
 */

/*!
 * \enum EmrRequest::Action
 *
 * This enum describes the actions that can be performed as Emr
 * requests.
 *
 * \value AddInstanceFleetAction Emr AddInstanceFleet action.
 * \value AddInstanceGroupsAction Emr AddInstanceGroups action.
 * \value AddJobFlowStepsAction Emr AddJobFlowSteps action.
 * \value AddTagsAction Emr AddTags action.
 * \value CancelStepsAction Emr CancelSteps action.
 * \value CreateSecurityConfigurationAction Emr CreateSecurityConfiguration action.
 * \value CreateStudioAction Emr CreateStudio action.
 * \value CreateStudioSessionMappingAction Emr CreateStudioSessionMapping action.
 * \value DeleteSecurityConfigurationAction Emr DeleteSecurityConfiguration action.
 * \value DeleteStudioAction Emr DeleteStudio action.
 * \value DeleteStudioSessionMappingAction Emr DeleteStudioSessionMapping action.
 * \value DescribeClusterAction Emr DescribeCluster action.
 * \value DescribeJobFlowsAction Emr DescribeJobFlows action.
 * \value DescribeNotebookExecutionAction Emr DescribeNotebookExecution action.
 * \value DescribeReleaseLabelAction Emr DescribeReleaseLabel action.
 * \value DescribeSecurityConfigurationAction Emr DescribeSecurityConfiguration action.
 * \value DescribeStepAction Emr DescribeStep action.
 * \value DescribeStudioAction Emr DescribeStudio action.
 * \value GetAutoTerminationPolicyAction Emr GetAutoTerminationPolicy action.
 * \value GetBlockPublicAccessConfigurationAction Emr GetBlockPublicAccessConfiguration action.
 * \value GetManagedScalingPolicyAction Emr GetManagedScalingPolicy action.
 * \value GetStudioSessionMappingAction Emr GetStudioSessionMapping action.
 * \value ListBootstrapActionsAction Emr ListBootstrapActions action.
 * \value ListClustersAction Emr ListClusters action.
 * \value ListInstanceFleetsAction Emr ListInstanceFleets action.
 * \value ListInstanceGroupsAction Emr ListInstanceGroups action.
 * \value ListInstancesAction Emr ListInstances action.
 * \value ListNotebookExecutionsAction Emr ListNotebookExecutions action.
 * \value ListReleaseLabelsAction Emr ListReleaseLabels action.
 * \value ListSecurityConfigurationsAction Emr ListSecurityConfigurations action.
 * \value ListStepsAction Emr ListSteps action.
 * \value ListStudioSessionMappingsAction Emr ListStudioSessionMappings action.
 * \value ListStudiosAction Emr ListStudios action.
 * \value ModifyClusterAction Emr ModifyCluster action.
 * \value ModifyInstanceFleetAction Emr ModifyInstanceFleet action.
 * \value ModifyInstanceGroupsAction Emr ModifyInstanceGroups action.
 * \value PutAutoScalingPolicyAction Emr PutAutoScalingPolicy action.
 * \value PutAutoTerminationPolicyAction Emr PutAutoTerminationPolicy action.
 * \value PutBlockPublicAccessConfigurationAction Emr PutBlockPublicAccessConfiguration action.
 * \value PutManagedScalingPolicyAction Emr PutManagedScalingPolicy action.
 * \value RemoveAutoScalingPolicyAction Emr RemoveAutoScalingPolicy action.
 * \value RemoveAutoTerminationPolicyAction Emr RemoveAutoTerminationPolicy action.
 * \value RemoveManagedScalingPolicyAction Emr RemoveManagedScalingPolicy action.
 * \value RemoveTagsAction Emr RemoveTags action.
 * \value RunJobFlowAction Emr RunJobFlow action.
 * \value SetTerminationProtectionAction Emr SetTerminationProtection action.
 * \value SetVisibleToAllUsersAction Emr SetVisibleToAllUsers action.
 * \value StartNotebookExecutionAction Emr StartNotebookExecution action.
 * \value StopNotebookExecutionAction Emr StopNotebookExecution action.
 * \value TerminateJobFlowsAction Emr TerminateJobFlows action.
 * \value UpdateStudioAction Emr UpdateStudio action.
 * \value UpdateStudioSessionMappingAction Emr UpdateStudioSessionMapping action.
 */

/*!
 * Constructs a EmrRequest object for Emr \a action.
 */
EmrRequest::EmrRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new EmrRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
EmrRequest::EmrRequest(const EmrRequest &other)
    : QtAws::Core::AwsAbstractRequest(new EmrRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the EmrRequest object to be equal to \a other.
 */
EmrRequest& EmrRequest::operator=(const EmrRequest &other)
{
    Q_D(EmrRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa EmrRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EmrRequestPrivate.
 */
EmrRequest::EmrRequest(EmrRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Emr action to be performed by this request.
 */
EmrRequest::Action EmrRequest::action() const
{
    Q_D(const EmrRequest);
    return d->action;
}

/*!
 * Returns the name of the Emr action to be performed by this request.
 */
QString EmrRequest::actionString() const
{
    return EmrRequestPrivate::toString(action());
}

/*!
 * Returns the Emr API version implemented by this request.
 */
QString EmrRequest::apiVersion() const
{
    Q_D(const EmrRequest);
    return d->apiVersion;
}

/*!
 * Sets the Emr action to be performed by this request to \a action.
 */
void EmrRequest::setAction(const Action action)
{
    Q_D(EmrRequest);
    d->action = action;
}

/*!
 * Sets the Emr API version to include in this request to \a version.
 */
void EmrRequest::setApiVersion(const QString &version)
{
    Q_D(EmrRequest);
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
bool EmrRequest::operator==(const EmrRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Emr queue name.
 *
 * @par From Emr FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Emr queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool EmrRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int EmrRequest::clearParameter(const QString &name)
{
    Q_D(EmrRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void EmrRequest::clearParameters()
{
    Q_D(EmrRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant EmrRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const EmrRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &EmrRequest::parameters() const
{
    Q_D(const EmrRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void EmrRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(EmrRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void EmrRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(EmrRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Emr request using the given
 * \a endpoint.
 *
 * This Emr implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest EmrRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const EmrRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Emr::EmrRequestPrivate
 * \brief The EmrRequestPrivate class provides private implementation for EmrRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a EmrRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
EmrRequestPrivate::EmrRequestPrivate(const EmrRequest::Action action, EmrRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2009-03-31"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the EmrRequest class's copy constructor.
 */
EmrRequestPrivate::EmrRequestPrivate(const EmrRequestPrivate &other,
                                     EmrRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts EmrRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Emr service's Action
 * query parameters.
 */
QString EmrRequestPrivate::toString(const EmrRequest::Action &action)
{
    #define ActionToString(action) \
        case EmrRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AddInstanceFleet);
        ActionToString(AddInstanceGroups);
        ActionToString(AddJobFlowSteps);
        ActionToString(AddTags);
        ActionToString(CancelSteps);
        ActionToString(CreateSecurityConfiguration);
        ActionToString(CreateStudio);
        ActionToString(CreateStudioSessionMapping);
        ActionToString(DeleteSecurityConfiguration);
        ActionToString(DeleteStudio);
        ActionToString(DeleteStudioSessionMapping);
        ActionToString(DescribeCluster);
        ActionToString(DescribeJobFlows);
        ActionToString(DescribeNotebookExecution);
        ActionToString(DescribeReleaseLabel);
        ActionToString(DescribeSecurityConfiguration);
        ActionToString(DescribeStep);
        ActionToString(DescribeStudio);
        ActionToString(GetAutoTerminationPolicy);
        ActionToString(GetBlockPublicAccessConfiguration);
        ActionToString(GetManagedScalingPolicy);
        ActionToString(GetStudioSessionMapping);
        ActionToString(ListBootstrapActions);
        ActionToString(ListClusters);
        ActionToString(ListInstanceFleets);
        ActionToString(ListInstanceGroups);
        ActionToString(ListInstances);
        ActionToString(ListNotebookExecutions);
        ActionToString(ListReleaseLabels);
        ActionToString(ListSecurityConfigurations);
        ActionToString(ListSteps);
        ActionToString(ListStudioSessionMappings);
        ActionToString(ListStudios);
        ActionToString(ModifyCluster);
        ActionToString(ModifyInstanceFleet);
        ActionToString(ModifyInstanceGroups);
        ActionToString(PutAutoScalingPolicy);
        ActionToString(PutAutoTerminationPolicy);
        ActionToString(PutBlockPublicAccessConfiguration);
        ActionToString(PutManagedScalingPolicy);
        ActionToString(RemoveAutoScalingPolicy);
        ActionToString(RemoveAutoTerminationPolicy);
        ActionToString(RemoveManagedScalingPolicy);
        ActionToString(RemoveTags);
        ActionToString(RunJobFlow);
        ActionToString(SetTerminationProtection);
        ActionToString(SetVisibleToAllUsers);
        ActionToString(StartNotebookExecution);
        ActionToString(StopNotebookExecution);
        ActionToString(TerminateJobFlows);
        ActionToString(UpdateStudio);
        ActionToString(UpdateStudioSessionMapping);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Emr
} // namespace QtAws
