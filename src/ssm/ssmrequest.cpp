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

#include "ssmrequest.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace Ssm {

/*!
 * \class QtAws::Ssm::SsmRequest
 * \brief The SsmRequest class provides an interface for Ssm requests.
 *
 * \inmodule QtAwsSsm
 */

/*!
 * \enum SsmRequest::Action
 *
 * This enum describes the actions that can be performed as Ssm
 * requests.
 *
 * \value AddTagsToResourceAction Ssm AddTagsToResource action.
 * \value AssociateOpsItemRelatedItemAction Ssm AssociateOpsItemRelatedItem action.
 * \value CancelCommandAction Ssm CancelCommand action.
 * \value CancelMaintenanceWindowExecutionAction Ssm CancelMaintenanceWindowExecution action.
 * \value CreateActivationAction Ssm CreateActivation action.
 * \value CreateAssociationAction Ssm CreateAssociation action.
 * \value CreateAssociationBatchAction Ssm CreateAssociationBatch action.
 * \value CreateDocumentAction Ssm CreateDocument action.
 * \value CreateMaintenanceWindowAction Ssm CreateMaintenanceWindow action.
 * \value CreateOpsItemAction Ssm CreateOpsItem action.
 * \value CreateOpsMetadataAction Ssm CreateOpsMetadata action.
 * \value CreatePatchBaselineAction Ssm CreatePatchBaseline action.
 * \value CreateResourceDataSyncAction Ssm CreateResourceDataSync action.
 * \value DeleteActivationAction Ssm DeleteActivation action.
 * \value DeleteAssociationAction Ssm DeleteAssociation action.
 * \value DeleteDocumentAction Ssm DeleteDocument action.
 * \value DeleteInventoryAction Ssm DeleteInventory action.
 * \value DeleteMaintenanceWindowAction Ssm DeleteMaintenanceWindow action.
 * \value DeleteOpsMetadataAction Ssm DeleteOpsMetadata action.
 * \value DeleteParameterAction Ssm DeleteParameter action.
 * \value DeleteParametersAction Ssm DeleteParameters action.
 * \value DeletePatchBaselineAction Ssm DeletePatchBaseline action.
 * \value DeleteResourceDataSyncAction Ssm DeleteResourceDataSync action.
 * \value DeregisterManagedInstanceAction Ssm DeregisterManagedInstance action.
 * \value DeregisterPatchBaselineForPatchGroupAction Ssm DeregisterPatchBaselineForPatchGroup action.
 * \value DeregisterTargetFromMaintenanceWindowAction Ssm DeregisterTargetFromMaintenanceWindow action.
 * \value DeregisterTaskFromMaintenanceWindowAction Ssm DeregisterTaskFromMaintenanceWindow action.
 * \value DescribeActivationsAction Ssm DescribeActivations action.
 * \value DescribeAssociationAction Ssm DescribeAssociation action.
 * \value DescribeAssociationExecutionTargetsAction Ssm DescribeAssociationExecutionTargets action.
 * \value DescribeAssociationExecutionsAction Ssm DescribeAssociationExecutions action.
 * \value DescribeAutomationExecutionsAction Ssm DescribeAutomationExecutions action.
 * \value DescribeAutomationStepExecutionsAction Ssm DescribeAutomationStepExecutions action.
 * \value DescribeAvailablePatchesAction Ssm DescribeAvailablePatches action.
 * \value DescribeDocumentAction Ssm DescribeDocument action.
 * \value DescribeDocumentPermissionAction Ssm DescribeDocumentPermission action.
 * \value DescribeEffectiveInstanceAssociationsAction Ssm DescribeEffectiveInstanceAssociations action.
 * \value DescribeEffectivePatchesForPatchBaselineAction Ssm DescribeEffectivePatchesForPatchBaseline action.
 * \value DescribeInstanceAssociationsStatusAction Ssm DescribeInstanceAssociationsStatus action.
 * \value DescribeInstanceInformationAction Ssm DescribeInstanceInformation action.
 * \value DescribeInstancePatchStatesAction Ssm DescribeInstancePatchStates action.
 * \value DescribeInstancePatchStatesForPatchGroupAction Ssm DescribeInstancePatchStatesForPatchGroup action.
 * \value DescribeInstancePatchesAction Ssm DescribeInstancePatches action.
 * \value DescribeInventoryDeletionsAction Ssm DescribeInventoryDeletions action.
 * \value DescribeMaintenanceWindowExecutionTaskInvocationsAction Ssm DescribeMaintenanceWindowExecutionTaskInvocations action.
 * \value DescribeMaintenanceWindowExecutionTasksAction Ssm DescribeMaintenanceWindowExecutionTasks action.
 * \value DescribeMaintenanceWindowExecutionsAction Ssm DescribeMaintenanceWindowExecutions action.
 * \value DescribeMaintenanceWindowScheduleAction Ssm DescribeMaintenanceWindowSchedule action.
 * \value DescribeMaintenanceWindowTargetsAction Ssm DescribeMaintenanceWindowTargets action.
 * \value DescribeMaintenanceWindowTasksAction Ssm DescribeMaintenanceWindowTasks action.
 * \value DescribeMaintenanceWindowsAction Ssm DescribeMaintenanceWindows action.
 * \value DescribeMaintenanceWindowsForTargetAction Ssm DescribeMaintenanceWindowsForTarget action.
 * \value DescribeOpsItemsAction Ssm DescribeOpsItems action.
 * \value DescribeParametersAction Ssm DescribeParameters action.
 * \value DescribePatchBaselinesAction Ssm DescribePatchBaselines action.
 * \value DescribePatchGroupStateAction Ssm DescribePatchGroupState action.
 * \value DescribePatchGroupsAction Ssm DescribePatchGroups action.
 * \value DescribePatchPropertiesAction Ssm DescribePatchProperties action.
 * \value DescribeSessionsAction Ssm DescribeSessions action.
 * \value DisassociateOpsItemRelatedItemAction Ssm DisassociateOpsItemRelatedItem action.
 * \value GetAutomationExecutionAction Ssm GetAutomationExecution action.
 * \value GetCalendarStateAction Ssm GetCalendarState action.
 * \value GetCommandInvocationAction Ssm GetCommandInvocation action.
 * \value GetConnectionStatusAction Ssm GetConnectionStatus action.
 * \value GetDefaultPatchBaselineAction Ssm GetDefaultPatchBaseline action.
 * \value GetDeployablePatchSnapshotForInstanceAction Ssm GetDeployablePatchSnapshotForInstance action.
 * \value GetDocumentAction Ssm GetDocument action.
 * \value GetInventoryAction Ssm GetInventory action.
 * \value GetInventorySchemaAction Ssm GetInventorySchema action.
 * \value GetMaintenanceWindowAction Ssm GetMaintenanceWindow action.
 * \value GetMaintenanceWindowExecutionAction Ssm GetMaintenanceWindowExecution action.
 * \value GetMaintenanceWindowExecutionTaskAction Ssm GetMaintenanceWindowExecutionTask action.
 * \value GetMaintenanceWindowExecutionTaskInvocationAction Ssm GetMaintenanceWindowExecutionTaskInvocation action.
 * \value GetMaintenanceWindowTaskAction Ssm GetMaintenanceWindowTask action.
 * \value GetOpsItemAction Ssm GetOpsItem action.
 * \value GetOpsMetadataAction Ssm GetOpsMetadata action.
 * \value GetOpsSummaryAction Ssm GetOpsSummary action.
 * \value GetParameterAction Ssm GetParameter action.
 * \value GetParameterHistoryAction Ssm GetParameterHistory action.
 * \value GetParametersAction Ssm GetParameters action.
 * \value GetParametersByPathAction Ssm GetParametersByPath action.
 * \value GetPatchBaselineAction Ssm GetPatchBaseline action.
 * \value GetPatchBaselineForPatchGroupAction Ssm GetPatchBaselineForPatchGroup action.
 * \value GetServiceSettingAction Ssm GetServiceSetting action.
 * \value LabelParameterVersionAction Ssm LabelParameterVersion action.
 * \value ListAssociationVersionsAction Ssm ListAssociationVersions action.
 * \value ListAssociationsAction Ssm ListAssociations action.
 * \value ListCommandInvocationsAction Ssm ListCommandInvocations action.
 * \value ListCommandsAction Ssm ListCommands action.
 * \value ListComplianceItemsAction Ssm ListComplianceItems action.
 * \value ListComplianceSummariesAction Ssm ListComplianceSummaries action.
 * \value ListDocumentMetadataHistoryAction Ssm ListDocumentMetadataHistory action.
 * \value ListDocumentVersionsAction Ssm ListDocumentVersions action.
 * \value ListDocumentsAction Ssm ListDocuments action.
 * \value ListInventoryEntriesAction Ssm ListInventoryEntries action.
 * \value ListOpsItemEventsAction Ssm ListOpsItemEvents action.
 * \value ListOpsItemRelatedItemsAction Ssm ListOpsItemRelatedItems action.
 * \value ListOpsMetadataAction Ssm ListOpsMetadata action.
 * \value ListResourceComplianceSummariesAction Ssm ListResourceComplianceSummaries action.
 * \value ListResourceDataSyncAction Ssm ListResourceDataSync action.
 * \value ListTagsForResourceAction Ssm ListTagsForResource action.
 * \value ModifyDocumentPermissionAction Ssm ModifyDocumentPermission action.
 * \value PutComplianceItemsAction Ssm PutComplianceItems action.
 * \value PutInventoryAction Ssm PutInventory action.
 * \value PutParameterAction Ssm PutParameter action.
 * \value RegisterDefaultPatchBaselineAction Ssm RegisterDefaultPatchBaseline action.
 * \value RegisterPatchBaselineForPatchGroupAction Ssm RegisterPatchBaselineForPatchGroup action.
 * \value RegisterTargetWithMaintenanceWindowAction Ssm RegisterTargetWithMaintenanceWindow action.
 * \value RegisterTaskWithMaintenanceWindowAction Ssm RegisterTaskWithMaintenanceWindow action.
 * \value RemoveTagsFromResourceAction Ssm RemoveTagsFromResource action.
 * \value ResetServiceSettingAction Ssm ResetServiceSetting action.
 * \value ResumeSessionAction Ssm ResumeSession action.
 * \value SendAutomationSignalAction Ssm SendAutomationSignal action.
 * \value SendCommandAction Ssm SendCommand action.
 * \value StartAssociationsOnceAction Ssm StartAssociationsOnce action.
 * \value StartAutomationExecutionAction Ssm StartAutomationExecution action.
 * \value StartChangeRequestExecutionAction Ssm StartChangeRequestExecution action.
 * \value StartSessionAction Ssm StartSession action.
 * \value StopAutomationExecutionAction Ssm StopAutomationExecution action.
 * \value TerminateSessionAction Ssm TerminateSession action.
 * \value UnlabelParameterVersionAction Ssm UnlabelParameterVersion action.
 * \value UpdateAssociationAction Ssm UpdateAssociation action.
 * \value UpdateAssociationStatusAction Ssm UpdateAssociationStatus action.
 * \value UpdateDocumentAction Ssm UpdateDocument action.
 * \value UpdateDocumentDefaultVersionAction Ssm UpdateDocumentDefaultVersion action.
 * \value UpdateDocumentMetadataAction Ssm UpdateDocumentMetadata action.
 * \value UpdateMaintenanceWindowAction Ssm UpdateMaintenanceWindow action.
 * \value UpdateMaintenanceWindowTargetAction Ssm UpdateMaintenanceWindowTarget action.
 * \value UpdateMaintenanceWindowTaskAction Ssm UpdateMaintenanceWindowTask action.
 * \value UpdateManagedInstanceRoleAction Ssm UpdateManagedInstanceRole action.
 * \value UpdateOpsItemAction Ssm UpdateOpsItem action.
 * \value UpdateOpsMetadataAction Ssm UpdateOpsMetadata action.
 * \value UpdatePatchBaselineAction Ssm UpdatePatchBaseline action.
 * \value UpdateResourceDataSyncAction Ssm UpdateResourceDataSync action.
 * \value UpdateServiceSettingAction Ssm UpdateServiceSetting action.
 */

/*!
 * Constructs a SsmRequest object for Ssm \a action.
 */
SsmRequest::SsmRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SsmRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SsmRequest::SsmRequest(const SsmRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SsmRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SsmRequest object to be equal to \a other.
 */
SsmRequest& SsmRequest::operator=(const SsmRequest &other)
{
    Q_D(SsmRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SsmRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SsmRequestPrivate.
 */
SsmRequest::SsmRequest(SsmRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Ssm action to be performed by this request.
 */
SsmRequest::Action SsmRequest::action() const
{
    Q_D(const SsmRequest);
    return d->action;
}

/*!
 * Returns the name of the Ssm action to be performed by this request.
 */
QString SsmRequest::actionString() const
{
    return SsmRequestPrivate::toString(action());
}

/*!
 * Returns the Ssm API version implemented by this request.
 */
QString SsmRequest::apiVersion() const
{
    Q_D(const SsmRequest);
    return d->apiVersion;
}

/*!
 * Sets the Ssm action to be performed by this request to \a action.
 */
void SsmRequest::setAction(const Action action)
{
    Q_D(SsmRequest);
    d->action = action;
}

/*!
 * Sets the Ssm API version to include in this request to \a version.
 */
void SsmRequest::setApiVersion(const QString &version)
{
    Q_D(SsmRequest);
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
bool SsmRequest::operator==(const SsmRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Ssm queue name.
 *
 * @par From Ssm FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Ssm queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SsmRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SsmRequest::clearParameter(const QString &name)
{
    Q_D(SsmRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SsmRequest::clearParameters()
{
    Q_D(SsmRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SsmRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SsmRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SsmRequest::parameters() const
{
    Q_D(const SsmRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SsmRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SsmRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SsmRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SsmRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Ssm request using the given
 * \a endpoint.
 *
 * This Ssm implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SsmRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const SsmRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Ssm::SsmRequestPrivate
 * \brief The SsmRequestPrivate class provides private implementation for SsmRequest.
 * \internal
 *
 * \inmodule QtAwsSsm
 */

/*!
 * Constructs a SsmRequestPrivate object for Ssm \a action,
 * with public implementation \a q.
 */
SsmRequestPrivate::SsmRequestPrivate(const SsmRequest::Action action, SsmRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2014-11-06"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SsmRequest class's copy constructor.
 */
SsmRequestPrivate::SsmRequestPrivate(const SsmRequestPrivate &other,
                                     SsmRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SsmRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Ssm service's Action
 * query parameters.
 */
QString SsmRequestPrivate::toString(const SsmRequest::Action &action)
{
    #define ActionToString(action) \
        case SsmRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AddTagsToResource);
        ActionToString(AssociateOpsItemRelatedItem);
        ActionToString(CancelCommand);
        ActionToString(CancelMaintenanceWindowExecution);
        ActionToString(CreateActivation);
        ActionToString(CreateAssociation);
        ActionToString(CreateAssociationBatch);
        ActionToString(CreateDocument);
        ActionToString(CreateMaintenanceWindow);
        ActionToString(CreateOpsItem);
        ActionToString(CreateOpsMetadata);
        ActionToString(CreatePatchBaseline);
        ActionToString(CreateResourceDataSync);
        ActionToString(DeleteActivation);
        ActionToString(DeleteAssociation);
        ActionToString(DeleteDocument);
        ActionToString(DeleteInventory);
        ActionToString(DeleteMaintenanceWindow);
        ActionToString(DeleteOpsMetadata);
        ActionToString(DeleteParameter);
        ActionToString(DeleteParameters);
        ActionToString(DeletePatchBaseline);
        ActionToString(DeleteResourceDataSync);
        ActionToString(DeregisterManagedInstance);
        ActionToString(DeregisterPatchBaselineForPatchGroup);
        ActionToString(DeregisterTargetFromMaintenanceWindow);
        ActionToString(DeregisterTaskFromMaintenanceWindow);
        ActionToString(DescribeActivations);
        ActionToString(DescribeAssociation);
        ActionToString(DescribeAssociationExecutionTargets);
        ActionToString(DescribeAssociationExecutions);
        ActionToString(DescribeAutomationExecutions);
        ActionToString(DescribeAutomationStepExecutions);
        ActionToString(DescribeAvailablePatches);
        ActionToString(DescribeDocument);
        ActionToString(DescribeDocumentPermission);
        ActionToString(DescribeEffectiveInstanceAssociations);
        ActionToString(DescribeEffectivePatchesForPatchBaseline);
        ActionToString(DescribeInstanceAssociationsStatus);
        ActionToString(DescribeInstanceInformation);
        ActionToString(DescribeInstancePatchStates);
        ActionToString(DescribeInstancePatchStatesForPatchGroup);
        ActionToString(DescribeInstancePatches);
        ActionToString(DescribeInventoryDeletions);
        ActionToString(DescribeMaintenanceWindowExecutionTaskInvocations);
        ActionToString(DescribeMaintenanceWindowExecutionTasks);
        ActionToString(DescribeMaintenanceWindowExecutions);
        ActionToString(DescribeMaintenanceWindowSchedule);
        ActionToString(DescribeMaintenanceWindowTargets);
        ActionToString(DescribeMaintenanceWindowTasks);
        ActionToString(DescribeMaintenanceWindows);
        ActionToString(DescribeMaintenanceWindowsForTarget);
        ActionToString(DescribeOpsItems);
        ActionToString(DescribeParameters);
        ActionToString(DescribePatchBaselines);
        ActionToString(DescribePatchGroupState);
        ActionToString(DescribePatchGroups);
        ActionToString(DescribePatchProperties);
        ActionToString(DescribeSessions);
        ActionToString(DisassociateOpsItemRelatedItem);
        ActionToString(GetAutomationExecution);
        ActionToString(GetCalendarState);
        ActionToString(GetCommandInvocation);
        ActionToString(GetConnectionStatus);
        ActionToString(GetDefaultPatchBaseline);
        ActionToString(GetDeployablePatchSnapshotForInstance);
        ActionToString(GetDocument);
        ActionToString(GetInventory);
        ActionToString(GetInventorySchema);
        ActionToString(GetMaintenanceWindow);
        ActionToString(GetMaintenanceWindowExecution);
        ActionToString(GetMaintenanceWindowExecutionTask);
        ActionToString(GetMaintenanceWindowExecutionTaskInvocation);
        ActionToString(GetMaintenanceWindowTask);
        ActionToString(GetOpsItem);
        ActionToString(GetOpsMetadata);
        ActionToString(GetOpsSummary);
        ActionToString(GetParameter);
        ActionToString(GetParameterHistory);
        ActionToString(GetParameters);
        ActionToString(GetParametersByPath);
        ActionToString(GetPatchBaseline);
        ActionToString(GetPatchBaselineForPatchGroup);
        ActionToString(GetServiceSetting);
        ActionToString(LabelParameterVersion);
        ActionToString(ListAssociationVersions);
        ActionToString(ListAssociations);
        ActionToString(ListCommandInvocations);
        ActionToString(ListCommands);
        ActionToString(ListComplianceItems);
        ActionToString(ListComplianceSummaries);
        ActionToString(ListDocumentMetadataHistory);
        ActionToString(ListDocumentVersions);
        ActionToString(ListDocuments);
        ActionToString(ListInventoryEntries);
        ActionToString(ListOpsItemEvents);
        ActionToString(ListOpsItemRelatedItems);
        ActionToString(ListOpsMetadata);
        ActionToString(ListResourceComplianceSummaries);
        ActionToString(ListResourceDataSync);
        ActionToString(ListTagsForResource);
        ActionToString(ModifyDocumentPermission);
        ActionToString(PutComplianceItems);
        ActionToString(PutInventory);
        ActionToString(PutParameter);
        ActionToString(RegisterDefaultPatchBaseline);
        ActionToString(RegisterPatchBaselineForPatchGroup);
        ActionToString(RegisterTargetWithMaintenanceWindow);
        ActionToString(RegisterTaskWithMaintenanceWindow);
        ActionToString(RemoveTagsFromResource);
        ActionToString(ResetServiceSetting);
        ActionToString(ResumeSession);
        ActionToString(SendAutomationSignal);
        ActionToString(SendCommand);
        ActionToString(StartAssociationsOnce);
        ActionToString(StartAutomationExecution);
        ActionToString(StartChangeRequestExecution);
        ActionToString(StartSession);
        ActionToString(StopAutomationExecution);
        ActionToString(TerminateSession);
        ActionToString(UnlabelParameterVersion);
        ActionToString(UpdateAssociation);
        ActionToString(UpdateAssociationStatus);
        ActionToString(UpdateDocument);
        ActionToString(UpdateDocumentDefaultVersion);
        ActionToString(UpdateDocumentMetadata);
        ActionToString(UpdateMaintenanceWindow);
        ActionToString(UpdateMaintenanceWindowTarget);
        ActionToString(UpdateMaintenanceWindowTask);
        ActionToString(UpdateManagedInstanceRole);
        ActionToString(UpdateOpsItem);
        ActionToString(UpdateOpsMetadata);
        ActionToString(UpdatePatchBaseline);
        ActionToString(UpdateResourceDataSync);
        ActionToString(UpdateServiceSetting);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Ssm
} // namespace QtAws
