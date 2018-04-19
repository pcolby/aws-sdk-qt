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

#include "ssmrequest.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/*!
 * \class QtAws::SSM::SSMRequest
 * \brief The SSMRequest class provides an interface for SSM requests.
 *
 * \inmodule QtAwsSSM
 */

/*!
 * \enum SSMRequest::Action
 *
 * This enum describes the actions that can be performed as SSM
 * requests.
 *
 * \value AddTagsToResourceAction SSM AddTagsToResource action.
 * \value CancelCommandAction SSM CancelCommand action.
 * \value CreateActivationAction SSM CreateActivation action.
 * \value CreateAssociationAction SSM CreateAssociation action.
 * \value CreateAssociationBatchAction SSM CreateAssociationBatch action.
 * \value CreateDocumentAction SSM CreateDocument action.
 * \value CreateMaintenanceWindowAction SSM CreateMaintenanceWindow action.
 * \value CreatePatchBaselineAction SSM CreatePatchBaseline action.
 * \value CreateResourceDataSyncAction SSM CreateResourceDataSync action.
 * \value DeleteActivationAction SSM DeleteActivation action.
 * \value DeleteAssociationAction SSM DeleteAssociation action.
 * \value DeleteDocumentAction SSM DeleteDocument action.
 * \value DeleteMaintenanceWindowAction SSM DeleteMaintenanceWindow action.
 * \value DeleteParameterAction SSM DeleteParameter action.
 * \value DeleteParametersAction SSM DeleteParameters action.
 * \value DeletePatchBaselineAction SSM DeletePatchBaseline action.
 * \value DeleteResourceDataSyncAction SSM DeleteResourceDataSync action.
 * \value DeregisterManagedInstanceAction SSM DeregisterManagedInstance action.
 * \value DeregisterPatchBaselineForPatchGroupAction SSM DeregisterPatchBaselineForPatchGroup action.
 * \value DeregisterTargetFromMaintenanceWindowAction SSM DeregisterTargetFromMaintenanceWindow action.
 * \value DeregisterTaskFromMaintenanceWindowAction SSM DeregisterTaskFromMaintenanceWindow action.
 * \value DescribeActivationsAction SSM DescribeActivations action.
 * \value DescribeAssociationAction SSM DescribeAssociation action.
 * \value DescribeAutomationExecutionsAction SSM DescribeAutomationExecutions action.
 * \value DescribeAutomationStepExecutionsAction SSM DescribeAutomationStepExecutions action.
 * \value DescribeAvailablePatchesAction SSM DescribeAvailablePatches action.
 * \value DescribeDocumentAction SSM DescribeDocument action.
 * \value DescribeDocumentPermissionAction SSM DescribeDocumentPermission action.
 * \value DescribeEffectiveInstanceAssociationsAction SSM DescribeEffectiveInstanceAssociations action.
 * \value DescribeEffectivePatchesForPatchBaselineAction SSM DescribeEffectivePatchesForPatchBaseline action.
 * \value DescribeInstanceAssociationsStatusAction SSM DescribeInstanceAssociationsStatus action.
 * \value DescribeInstanceInformationAction SSM DescribeInstanceInformation action.
 * \value DescribeInstancePatchStatesAction SSM DescribeInstancePatchStates action.
 * \value DescribeInstancePatchStatesForPatchGroupAction SSM DescribeInstancePatchStatesForPatchGroup action.
 * \value DescribeInstancePatchesAction SSM DescribeInstancePatches action.
 * \value DescribeMaintenanceWindowExecutionTaskInvocationsAction SSM DescribeMaintenanceWindowExecutionTaskInvocations action.
 * \value DescribeMaintenanceWindowExecutionTasksAction SSM DescribeMaintenanceWindowExecutionTasks action.
 * \value DescribeMaintenanceWindowExecutionsAction SSM DescribeMaintenanceWindowExecutions action.
 * \value DescribeMaintenanceWindowTargetsAction SSM DescribeMaintenanceWindowTargets action.
 * \value DescribeMaintenanceWindowTasksAction SSM DescribeMaintenanceWindowTasks action.
 * \value DescribeMaintenanceWindowsAction SSM DescribeMaintenanceWindows action.
 * \value DescribeParametersAction SSM DescribeParameters action.
 * \value DescribePatchBaselinesAction SSM DescribePatchBaselines action.
 * \value DescribePatchGroupStateAction SSM DescribePatchGroupState action.
 * \value DescribePatchGroupsAction SSM DescribePatchGroups action.
 * \value GetAutomationExecutionAction SSM GetAutomationExecution action.
 * \value GetCommandInvocationAction SSM GetCommandInvocation action.
 * \value GetDefaultPatchBaselineAction SSM GetDefaultPatchBaseline action.
 * \value GetDeployablePatchSnapshotForInstanceAction SSM GetDeployablePatchSnapshotForInstance action.
 * \value GetDocumentAction SSM GetDocument action.
 * \value GetInventoryAction SSM GetInventory action.
 * \value GetInventorySchemaAction SSM GetInventorySchema action.
 * \value GetMaintenanceWindowAction SSM GetMaintenanceWindow action.
 * \value GetMaintenanceWindowExecutionAction SSM GetMaintenanceWindowExecution action.
 * \value GetMaintenanceWindowExecutionTaskAction SSM GetMaintenanceWindowExecutionTask action.
 * \value GetMaintenanceWindowExecutionTaskInvocationAction SSM GetMaintenanceWindowExecutionTaskInvocation action.
 * \value GetMaintenanceWindowTaskAction SSM GetMaintenanceWindowTask action.
 * \value GetParameterAction SSM GetParameter action.
 * \value GetParameterHistoryAction SSM GetParameterHistory action.
 * \value GetParametersAction SSM GetParameters action.
 * \value GetParametersByPathAction SSM GetParametersByPath action.
 * \value GetPatchBaselineAction SSM GetPatchBaseline action.
 * \value GetPatchBaselineForPatchGroupAction SSM GetPatchBaselineForPatchGroup action.
 * \value ListAssociationVersionsAction SSM ListAssociationVersions action.
 * \value ListAssociationsAction SSM ListAssociations action.
 * \value ListCommandInvocationsAction SSM ListCommandInvocations action.
 * \value ListCommandsAction SSM ListCommands action.
 * \value ListComplianceItemsAction SSM ListComplianceItems action.
 * \value ListComplianceSummariesAction SSM ListComplianceSummaries action.
 * \value ListDocumentVersionsAction SSM ListDocumentVersions action.
 * \value ListDocumentsAction SSM ListDocuments action.
 * \value ListInventoryEntriesAction SSM ListInventoryEntries action.
 * \value ListResourceComplianceSummariesAction SSM ListResourceComplianceSummaries action.
 * \value ListResourceDataSyncAction SSM ListResourceDataSync action.
 * \value ListTagsForResourceAction SSM ListTagsForResource action.
 * \value ModifyDocumentPermissionAction SSM ModifyDocumentPermission action.
 * \value PutComplianceItemsAction SSM PutComplianceItems action.
 * \value PutInventoryAction SSM PutInventory action.
 * \value PutParameterAction SSM PutParameter action.
 * \value RegisterDefaultPatchBaselineAction SSM RegisterDefaultPatchBaseline action.
 * \value RegisterPatchBaselineForPatchGroupAction SSM RegisterPatchBaselineForPatchGroup action.
 * \value RegisterTargetWithMaintenanceWindowAction SSM RegisterTargetWithMaintenanceWindow action.
 * \value RegisterTaskWithMaintenanceWindowAction SSM RegisterTaskWithMaintenanceWindow action.
 * \value RemoveTagsFromResourceAction SSM RemoveTagsFromResource action.
 * \value SendAutomationSignalAction SSM SendAutomationSignal action.
 * \value SendCommandAction SSM SendCommand action.
 * \value StartAutomationExecutionAction SSM StartAutomationExecution action.
 * \value StopAutomationExecutionAction SSM StopAutomationExecution action.
 * \value UpdateAssociationAction SSM UpdateAssociation action.
 * \value UpdateAssociationStatusAction SSM UpdateAssociationStatus action.
 * \value UpdateDocumentAction SSM UpdateDocument action.
 * \value UpdateDocumentDefaultVersionAction SSM UpdateDocumentDefaultVersion action.
 * \value UpdateMaintenanceWindowAction SSM UpdateMaintenanceWindow action.
 * \value UpdateMaintenanceWindowTargetAction SSM UpdateMaintenanceWindowTarget action.
 * \value UpdateMaintenanceWindowTaskAction SSM UpdateMaintenanceWindowTask action.
 * \value UpdateManagedInstanceRoleAction SSM UpdateManagedInstanceRole action.
 * \value UpdatePatchBaselineAction SSM UpdatePatchBaseline action.
 */

/*!
 * Constructs a SSMRequest object for SSM \a action.
 */
SSMRequest::SSMRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SSMRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SSMRequest::SSMRequest(const SSMRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SSMRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SSMRequest object to be equal to \a other.
 */
SSMRequest& SSMRequest::operator=(const SSMRequest &other)
{
    Q_D(SSMRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SSMRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SSMRequestPrivate.
 */
SSMRequest::SSMRequest(SSMRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the SSM action to be performed by this request.
 */
SSMRequest::Action SSMRequest::action() const
{
    Q_D(const SSMRequest);
    return d->action;
}

/*!
 * Returns the name of the SSM action to be performed by this request.
 */
QString SSMRequest::actionString() const
{
    return SSMRequestPrivate::toString(action());
}

/*!
 * Returns the SSM API version implemented by this request.
 */
QString SSMRequest::apiVersion() const
{
    Q_D(const SSMRequest);
    return d->apiVersion;
}

/*!
 * Sets the SSM action to be performed by this request to \a action.
 */
void SSMRequest::setAction(const Action action)
{
    Q_D(SSMRequest);
    d->action = action;
}

/*!
 * Sets the SSM API version to include in this request to \a version.
 */
void SSMRequest::setApiVersion(const QString &version)
{
    Q_D(SSMRequest);
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
bool SSMRequest::operator==(const SSMRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid SSM queue name.
 *
 * @par From SSM FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid SSM queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SSMRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SSMRequest::clearParameter(const QString &name)
{
    Q_D(SSMRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SSMRequest::clearParameters()
{
    Q_D(SSMRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SSMRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SSMRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SSMRequest::parameters() const
{
    Q_D(const SSMRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SSMRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SSMRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SSMRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SSMRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the SSM request using the given
 * \a endpoint.
 *
 * This SSM implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SSMRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const SSMRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::SSM::SSMRequestPrivate
 * \brief The SSMRequestPrivate class provides private implementation for SSMRequest.
 * \internal
 *
 * \inmodule QtAwsSSM
 */

/*!
 * Constructs a SSMRequestPrivate object for SSM \a action,
 * with public implementation \a q.
 */
SSMRequestPrivate::SSMRequestPrivate(const SSMRequest::Action action, SSMRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SSMRequest class's copy constructor.
 */
SSMRequestPrivate::SSMRequestPrivate(const SSMRequestPrivate &other,
                                     SSMRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SSMRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the SSM service's Action
 * query parameters.
 */
QString SSMRequestPrivate::toString(const SSMRequest::Action &action)
{
    #define ActionToString(action) \
        case SSMRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace SSM
} // namespace QtAws
