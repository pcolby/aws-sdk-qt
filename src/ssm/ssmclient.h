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

#ifndef QTAWS_SSMCLIENT_H
#define QTAWS_SSMCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsssmglobal.h"

class QNetworkReply;

namespace QtAws {
namespace SSM {

class SsmClientPrivate;
class AddTagsToResourceRequest;
class AddTagsToResourceResponse;
class AssociateOpsItemRelatedItemRequest;
class AssociateOpsItemRelatedItemResponse;
class CancelCommandRequest;
class CancelCommandResponse;
class CancelMaintenanceWindowExecutionRequest;
class CancelMaintenanceWindowExecutionResponse;
class CreateActivationRequest;
class CreateActivationResponse;
class CreateAssociationRequest;
class CreateAssociationResponse;
class CreateAssociationBatchRequest;
class CreateAssociationBatchResponse;
class CreateDocumentRequest;
class CreateDocumentResponse;
class CreateMaintenanceWindowRequest;
class CreateMaintenanceWindowResponse;
class CreateOpsItemRequest;
class CreateOpsItemResponse;
class CreateOpsMetadataRequest;
class CreateOpsMetadataResponse;
class CreatePatchBaselineRequest;
class CreatePatchBaselineResponse;
class CreateResourceDataSyncRequest;
class CreateResourceDataSyncResponse;
class DeleteActivationRequest;
class DeleteActivationResponse;
class DeleteAssociationRequest;
class DeleteAssociationResponse;
class DeleteDocumentRequest;
class DeleteDocumentResponse;
class DeleteInventoryRequest;
class DeleteInventoryResponse;
class DeleteMaintenanceWindowRequest;
class DeleteMaintenanceWindowResponse;
class DeleteOpsMetadataRequest;
class DeleteOpsMetadataResponse;
class DeleteParameterRequest;
class DeleteParameterResponse;
class DeleteParametersRequest;
class DeleteParametersResponse;
class DeletePatchBaselineRequest;
class DeletePatchBaselineResponse;
class DeleteResourceDataSyncRequest;
class DeleteResourceDataSyncResponse;
class DeregisterManagedInstanceRequest;
class DeregisterManagedInstanceResponse;
class DeregisterPatchBaselineForPatchGroupRequest;
class DeregisterPatchBaselineForPatchGroupResponse;
class DeregisterTargetFromMaintenanceWindowRequest;
class DeregisterTargetFromMaintenanceWindowResponse;
class DeregisterTaskFromMaintenanceWindowRequest;
class DeregisterTaskFromMaintenanceWindowResponse;
class DescribeActivationsRequest;
class DescribeActivationsResponse;
class DescribeAssociationRequest;
class DescribeAssociationResponse;
class DescribeAssociationExecutionTargetsRequest;
class DescribeAssociationExecutionTargetsResponse;
class DescribeAssociationExecutionsRequest;
class DescribeAssociationExecutionsResponse;
class DescribeAutomationExecutionsRequest;
class DescribeAutomationExecutionsResponse;
class DescribeAutomationStepExecutionsRequest;
class DescribeAutomationStepExecutionsResponse;
class DescribeAvailablePatchesRequest;
class DescribeAvailablePatchesResponse;
class DescribeDocumentRequest;
class DescribeDocumentResponse;
class DescribeDocumentPermissionRequest;
class DescribeDocumentPermissionResponse;
class DescribeEffectiveInstanceAssociationsRequest;
class DescribeEffectiveInstanceAssociationsResponse;
class DescribeEffectivePatchesForPatchBaselineRequest;
class DescribeEffectivePatchesForPatchBaselineResponse;
class DescribeInstanceAssociationsStatusRequest;
class DescribeInstanceAssociationsStatusResponse;
class DescribeInstanceInformationRequest;
class DescribeInstanceInformationResponse;
class DescribeInstancePatchStatesRequest;
class DescribeInstancePatchStatesResponse;
class DescribeInstancePatchStatesForPatchGroupRequest;
class DescribeInstancePatchStatesForPatchGroupResponse;
class DescribeInstancePatchesRequest;
class DescribeInstancePatchesResponse;
class DescribeInventoryDeletionsRequest;
class DescribeInventoryDeletionsResponse;
class DescribeMaintenanceWindowExecutionTaskInvocationsRequest;
class DescribeMaintenanceWindowExecutionTaskInvocationsResponse;
class DescribeMaintenanceWindowExecutionTasksRequest;
class DescribeMaintenanceWindowExecutionTasksResponse;
class DescribeMaintenanceWindowExecutionsRequest;
class DescribeMaintenanceWindowExecutionsResponse;
class DescribeMaintenanceWindowScheduleRequest;
class DescribeMaintenanceWindowScheduleResponse;
class DescribeMaintenanceWindowTargetsRequest;
class DescribeMaintenanceWindowTargetsResponse;
class DescribeMaintenanceWindowTasksRequest;
class DescribeMaintenanceWindowTasksResponse;
class DescribeMaintenanceWindowsRequest;
class DescribeMaintenanceWindowsResponse;
class DescribeMaintenanceWindowsForTargetRequest;
class DescribeMaintenanceWindowsForTargetResponse;
class DescribeOpsItemsRequest;
class DescribeOpsItemsResponse;
class DescribeParametersRequest;
class DescribeParametersResponse;
class DescribePatchBaselinesRequest;
class DescribePatchBaselinesResponse;
class DescribePatchGroupStateRequest;
class DescribePatchGroupStateResponse;
class DescribePatchGroupsRequest;
class DescribePatchGroupsResponse;
class DescribePatchPropertiesRequest;
class DescribePatchPropertiesResponse;
class DescribeSessionsRequest;
class DescribeSessionsResponse;
class DisassociateOpsItemRelatedItemRequest;
class DisassociateOpsItemRelatedItemResponse;
class GetAutomationExecutionRequest;
class GetAutomationExecutionResponse;
class GetCalendarStateRequest;
class GetCalendarStateResponse;
class GetCommandInvocationRequest;
class GetCommandInvocationResponse;
class GetConnectionStatusRequest;
class GetConnectionStatusResponse;
class GetDefaultPatchBaselineRequest;
class GetDefaultPatchBaselineResponse;
class GetDeployablePatchSnapshotForInstanceRequest;
class GetDeployablePatchSnapshotForInstanceResponse;
class GetDocumentRequest;
class GetDocumentResponse;
class GetInventoryRequest;
class GetInventoryResponse;
class GetInventorySchemaRequest;
class GetInventorySchemaResponse;
class GetMaintenanceWindowRequest;
class GetMaintenanceWindowResponse;
class GetMaintenanceWindowExecutionRequest;
class GetMaintenanceWindowExecutionResponse;
class GetMaintenanceWindowExecutionTaskRequest;
class GetMaintenanceWindowExecutionTaskResponse;
class GetMaintenanceWindowExecutionTaskInvocationRequest;
class GetMaintenanceWindowExecutionTaskInvocationResponse;
class GetMaintenanceWindowTaskRequest;
class GetMaintenanceWindowTaskResponse;
class GetOpsItemRequest;
class GetOpsItemResponse;
class GetOpsMetadataRequest;
class GetOpsMetadataResponse;
class GetOpsSummaryRequest;
class GetOpsSummaryResponse;
class GetParameterRequest;
class GetParameterResponse;
class GetParameterHistoryRequest;
class GetParameterHistoryResponse;
class GetParametersRequest;
class GetParametersResponse;
class GetParametersByPathRequest;
class GetParametersByPathResponse;
class GetPatchBaselineRequest;
class GetPatchBaselineResponse;
class GetPatchBaselineForPatchGroupRequest;
class GetPatchBaselineForPatchGroupResponse;
class GetServiceSettingRequest;
class GetServiceSettingResponse;
class LabelParameterVersionRequest;
class LabelParameterVersionResponse;
class ListAssociationVersionsRequest;
class ListAssociationVersionsResponse;
class ListAssociationsRequest;
class ListAssociationsResponse;
class ListCommandInvocationsRequest;
class ListCommandInvocationsResponse;
class ListCommandsRequest;
class ListCommandsResponse;
class ListComplianceItemsRequest;
class ListComplianceItemsResponse;
class ListComplianceSummariesRequest;
class ListComplianceSummariesResponse;
class ListDocumentMetadataHistoryRequest;
class ListDocumentMetadataHistoryResponse;
class ListDocumentVersionsRequest;
class ListDocumentVersionsResponse;
class ListDocumentsRequest;
class ListDocumentsResponse;
class ListInventoryEntriesRequest;
class ListInventoryEntriesResponse;
class ListOpsItemEventsRequest;
class ListOpsItemEventsResponse;
class ListOpsItemRelatedItemsRequest;
class ListOpsItemRelatedItemsResponse;
class ListOpsMetadataRequest;
class ListOpsMetadataResponse;
class ListResourceComplianceSummariesRequest;
class ListResourceComplianceSummariesResponse;
class ListResourceDataSyncRequest;
class ListResourceDataSyncResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ModifyDocumentPermissionRequest;
class ModifyDocumentPermissionResponse;
class PutComplianceItemsRequest;
class PutComplianceItemsResponse;
class PutInventoryRequest;
class PutInventoryResponse;
class PutParameterRequest;
class PutParameterResponse;
class RegisterDefaultPatchBaselineRequest;
class RegisterDefaultPatchBaselineResponse;
class RegisterPatchBaselineForPatchGroupRequest;
class RegisterPatchBaselineForPatchGroupResponse;
class RegisterTargetWithMaintenanceWindowRequest;
class RegisterTargetWithMaintenanceWindowResponse;
class RegisterTaskWithMaintenanceWindowRequest;
class RegisterTaskWithMaintenanceWindowResponse;
class RemoveTagsFromResourceRequest;
class RemoveTagsFromResourceResponse;
class ResetServiceSettingRequest;
class ResetServiceSettingResponse;
class ResumeSessionRequest;
class ResumeSessionResponse;
class SendAutomationSignalRequest;
class SendAutomationSignalResponse;
class SendCommandRequest;
class SendCommandResponse;
class StartAssociationsOnceRequest;
class StartAssociationsOnceResponse;
class StartAutomationExecutionRequest;
class StartAutomationExecutionResponse;
class StartChangeRequestExecutionRequest;
class StartChangeRequestExecutionResponse;
class StartSessionRequest;
class StartSessionResponse;
class StopAutomationExecutionRequest;
class StopAutomationExecutionResponse;
class TerminateSessionRequest;
class TerminateSessionResponse;
class UnlabelParameterVersionRequest;
class UnlabelParameterVersionResponse;
class UpdateAssociationRequest;
class UpdateAssociationResponse;
class UpdateAssociationStatusRequest;
class UpdateAssociationStatusResponse;
class UpdateDocumentRequest;
class UpdateDocumentResponse;
class UpdateDocumentDefaultVersionRequest;
class UpdateDocumentDefaultVersionResponse;
class UpdateDocumentMetadataRequest;
class UpdateDocumentMetadataResponse;
class UpdateMaintenanceWindowRequest;
class UpdateMaintenanceWindowResponse;
class UpdateMaintenanceWindowTargetRequest;
class UpdateMaintenanceWindowTargetResponse;
class UpdateMaintenanceWindowTaskRequest;
class UpdateMaintenanceWindowTaskResponse;
class UpdateManagedInstanceRoleRequest;
class UpdateManagedInstanceRoleResponse;
class UpdateOpsItemRequest;
class UpdateOpsItemResponse;
class UpdateOpsMetadataRequest;
class UpdateOpsMetadataResponse;
class UpdatePatchBaselineRequest;
class UpdatePatchBaselineResponse;
class UpdateResourceDataSyncRequest;
class UpdateResourceDataSyncResponse;
class UpdateServiceSettingRequest;
class UpdateServiceSettingResponse;

class QTAWSSSM_EXPORT SsmClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    SsmClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    SsmClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddTagsToResourceResponse * addTagsToResource(const AddTagsToResourceRequest &request);
    AssociateOpsItemRelatedItemResponse * associateOpsItemRelatedItem(const AssociateOpsItemRelatedItemRequest &request);
    CancelCommandResponse * cancelCommand(const CancelCommandRequest &request);
    CancelMaintenanceWindowExecutionResponse * cancelMaintenanceWindowExecution(const CancelMaintenanceWindowExecutionRequest &request);
    CreateActivationResponse * createActivation(const CreateActivationRequest &request);
    CreateAssociationResponse * createAssociation(const CreateAssociationRequest &request);
    CreateAssociationBatchResponse * createAssociationBatch(const CreateAssociationBatchRequest &request);
    CreateDocumentResponse * createDocument(const CreateDocumentRequest &request);
    CreateMaintenanceWindowResponse * createMaintenanceWindow(const CreateMaintenanceWindowRequest &request);
    CreateOpsItemResponse * createOpsItem(const CreateOpsItemRequest &request);
    CreateOpsMetadataResponse * createOpsMetadata(const CreateOpsMetadataRequest &request);
    CreatePatchBaselineResponse * createPatchBaseline(const CreatePatchBaselineRequest &request);
    CreateResourceDataSyncResponse * createResourceDataSync(const CreateResourceDataSyncRequest &request);
    DeleteActivationResponse * deleteActivation(const DeleteActivationRequest &request);
    DeleteAssociationResponse * deleteAssociation(const DeleteAssociationRequest &request);
    DeleteDocumentResponse * deleteDocument(const DeleteDocumentRequest &request);
    DeleteInventoryResponse * deleteInventory(const DeleteInventoryRequest &request);
    DeleteMaintenanceWindowResponse * deleteMaintenanceWindow(const DeleteMaintenanceWindowRequest &request);
    DeleteOpsMetadataResponse * deleteOpsMetadata(const DeleteOpsMetadataRequest &request);
    DeleteParameterResponse * deleteParameter(const DeleteParameterRequest &request);
    DeleteParametersResponse * deleteParameters(const DeleteParametersRequest &request);
    DeletePatchBaselineResponse * deletePatchBaseline(const DeletePatchBaselineRequest &request);
    DeleteResourceDataSyncResponse * deleteResourceDataSync(const DeleteResourceDataSyncRequest &request);
    DeregisterManagedInstanceResponse * deregisterManagedInstance(const DeregisterManagedInstanceRequest &request);
    DeregisterPatchBaselineForPatchGroupResponse * deregisterPatchBaselineForPatchGroup(const DeregisterPatchBaselineForPatchGroupRequest &request);
    DeregisterTargetFromMaintenanceWindowResponse * deregisterTargetFromMaintenanceWindow(const DeregisterTargetFromMaintenanceWindowRequest &request);
    DeregisterTaskFromMaintenanceWindowResponse * deregisterTaskFromMaintenanceWindow(const DeregisterTaskFromMaintenanceWindowRequest &request);
    DescribeActivationsResponse * describeActivations(const DescribeActivationsRequest &request);
    DescribeAssociationResponse * describeAssociation(const DescribeAssociationRequest &request);
    DescribeAssociationExecutionTargetsResponse * describeAssociationExecutionTargets(const DescribeAssociationExecutionTargetsRequest &request);
    DescribeAssociationExecutionsResponse * describeAssociationExecutions(const DescribeAssociationExecutionsRequest &request);
    DescribeAutomationExecutionsResponse * describeAutomationExecutions(const DescribeAutomationExecutionsRequest &request);
    DescribeAutomationStepExecutionsResponse * describeAutomationStepExecutions(const DescribeAutomationStepExecutionsRequest &request);
    DescribeAvailablePatchesResponse * describeAvailablePatches(const DescribeAvailablePatchesRequest &request);
    DescribeDocumentResponse * describeDocument(const DescribeDocumentRequest &request);
    DescribeDocumentPermissionResponse * describeDocumentPermission(const DescribeDocumentPermissionRequest &request);
    DescribeEffectiveInstanceAssociationsResponse * describeEffectiveInstanceAssociations(const DescribeEffectiveInstanceAssociationsRequest &request);
    DescribeEffectivePatchesForPatchBaselineResponse * describeEffectivePatchesForPatchBaseline(const DescribeEffectivePatchesForPatchBaselineRequest &request);
    DescribeInstanceAssociationsStatusResponse * describeInstanceAssociationsStatus(const DescribeInstanceAssociationsStatusRequest &request);
    DescribeInstanceInformationResponse * describeInstanceInformation(const DescribeInstanceInformationRequest &request);
    DescribeInstancePatchStatesResponse * describeInstancePatchStates(const DescribeInstancePatchStatesRequest &request);
    DescribeInstancePatchStatesForPatchGroupResponse * describeInstancePatchStatesForPatchGroup(const DescribeInstancePatchStatesForPatchGroupRequest &request);
    DescribeInstancePatchesResponse * describeInstancePatches(const DescribeInstancePatchesRequest &request);
    DescribeInventoryDeletionsResponse * describeInventoryDeletions(const DescribeInventoryDeletionsRequest &request);
    DescribeMaintenanceWindowExecutionTaskInvocationsResponse * describeMaintenanceWindowExecutionTaskInvocations(const DescribeMaintenanceWindowExecutionTaskInvocationsRequest &request);
    DescribeMaintenanceWindowExecutionTasksResponse * describeMaintenanceWindowExecutionTasks(const DescribeMaintenanceWindowExecutionTasksRequest &request);
    DescribeMaintenanceWindowExecutionsResponse * describeMaintenanceWindowExecutions(const DescribeMaintenanceWindowExecutionsRequest &request);
    DescribeMaintenanceWindowScheduleResponse * describeMaintenanceWindowSchedule(const DescribeMaintenanceWindowScheduleRequest &request);
    DescribeMaintenanceWindowTargetsResponse * describeMaintenanceWindowTargets(const DescribeMaintenanceWindowTargetsRequest &request);
    DescribeMaintenanceWindowTasksResponse * describeMaintenanceWindowTasks(const DescribeMaintenanceWindowTasksRequest &request);
    DescribeMaintenanceWindowsResponse * describeMaintenanceWindows(const DescribeMaintenanceWindowsRequest &request);
    DescribeMaintenanceWindowsForTargetResponse * describeMaintenanceWindowsForTarget(const DescribeMaintenanceWindowsForTargetRequest &request);
    DescribeOpsItemsResponse * describeOpsItems(const DescribeOpsItemsRequest &request);
    DescribeParametersResponse * describeParameters(const DescribeParametersRequest &request);
    DescribePatchBaselinesResponse * describePatchBaselines(const DescribePatchBaselinesRequest &request);
    DescribePatchGroupStateResponse * describePatchGroupState(const DescribePatchGroupStateRequest &request);
    DescribePatchGroupsResponse * describePatchGroups(const DescribePatchGroupsRequest &request);
    DescribePatchPropertiesResponse * describePatchProperties(const DescribePatchPropertiesRequest &request);
    DescribeSessionsResponse * describeSessions(const DescribeSessionsRequest &request);
    DisassociateOpsItemRelatedItemResponse * disassociateOpsItemRelatedItem(const DisassociateOpsItemRelatedItemRequest &request);
    GetAutomationExecutionResponse * getAutomationExecution(const GetAutomationExecutionRequest &request);
    GetCalendarStateResponse * getCalendarState(const GetCalendarStateRequest &request);
    GetCommandInvocationResponse * getCommandInvocation(const GetCommandInvocationRequest &request);
    GetConnectionStatusResponse * getConnectionStatus(const GetConnectionStatusRequest &request);
    GetDefaultPatchBaselineResponse * getDefaultPatchBaseline(const GetDefaultPatchBaselineRequest &request);
    GetDeployablePatchSnapshotForInstanceResponse * getDeployablePatchSnapshotForInstance(const GetDeployablePatchSnapshotForInstanceRequest &request);
    GetDocumentResponse * getDocument(const GetDocumentRequest &request);
    GetInventoryResponse * getInventory(const GetInventoryRequest &request);
    GetInventorySchemaResponse * getInventorySchema(const GetInventorySchemaRequest &request);
    GetMaintenanceWindowResponse * getMaintenanceWindow(const GetMaintenanceWindowRequest &request);
    GetMaintenanceWindowExecutionResponse * getMaintenanceWindowExecution(const GetMaintenanceWindowExecutionRequest &request);
    GetMaintenanceWindowExecutionTaskResponse * getMaintenanceWindowExecutionTask(const GetMaintenanceWindowExecutionTaskRequest &request);
    GetMaintenanceWindowExecutionTaskInvocationResponse * getMaintenanceWindowExecutionTaskInvocation(const GetMaintenanceWindowExecutionTaskInvocationRequest &request);
    GetMaintenanceWindowTaskResponse * getMaintenanceWindowTask(const GetMaintenanceWindowTaskRequest &request);
    GetOpsItemResponse * getOpsItem(const GetOpsItemRequest &request);
    GetOpsMetadataResponse * getOpsMetadata(const GetOpsMetadataRequest &request);
    GetOpsSummaryResponse * getOpsSummary(const GetOpsSummaryRequest &request);
    GetParameterResponse * getParameter(const GetParameterRequest &request);
    GetParameterHistoryResponse * getParameterHistory(const GetParameterHistoryRequest &request);
    GetParametersResponse * getParameters(const GetParametersRequest &request);
    GetParametersByPathResponse * getParametersByPath(const GetParametersByPathRequest &request);
    GetPatchBaselineResponse * getPatchBaseline(const GetPatchBaselineRequest &request);
    GetPatchBaselineForPatchGroupResponse * getPatchBaselineForPatchGroup(const GetPatchBaselineForPatchGroupRequest &request);
    GetServiceSettingResponse * getServiceSetting(const GetServiceSettingRequest &request);
    LabelParameterVersionResponse * labelParameterVersion(const LabelParameterVersionRequest &request);
    ListAssociationVersionsResponse * listAssociationVersions(const ListAssociationVersionsRequest &request);
    ListAssociationsResponse * listAssociations(const ListAssociationsRequest &request);
    ListCommandInvocationsResponse * listCommandInvocations(const ListCommandInvocationsRequest &request);
    ListCommandsResponse * listCommands(const ListCommandsRequest &request);
    ListComplianceItemsResponse * listComplianceItems(const ListComplianceItemsRequest &request);
    ListComplianceSummariesResponse * listComplianceSummaries(const ListComplianceSummariesRequest &request);
    ListDocumentMetadataHistoryResponse * listDocumentMetadataHistory(const ListDocumentMetadataHistoryRequest &request);
    ListDocumentVersionsResponse * listDocumentVersions(const ListDocumentVersionsRequest &request);
    ListDocumentsResponse * listDocuments(const ListDocumentsRequest &request);
    ListInventoryEntriesResponse * listInventoryEntries(const ListInventoryEntriesRequest &request);
    ListOpsItemEventsResponse * listOpsItemEvents(const ListOpsItemEventsRequest &request);
    ListOpsItemRelatedItemsResponse * listOpsItemRelatedItems(const ListOpsItemRelatedItemsRequest &request);
    ListOpsMetadataResponse * listOpsMetadata(const ListOpsMetadataRequest &request);
    ListResourceComplianceSummariesResponse * listResourceComplianceSummaries(const ListResourceComplianceSummariesRequest &request);
    ListResourceDataSyncResponse * listResourceDataSync(const ListResourceDataSyncRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ModifyDocumentPermissionResponse * modifyDocumentPermission(const ModifyDocumentPermissionRequest &request);
    PutComplianceItemsResponse * putComplianceItems(const PutComplianceItemsRequest &request);
    PutInventoryResponse * putInventory(const PutInventoryRequest &request);
    PutParameterResponse * putParameter(const PutParameterRequest &request);
    RegisterDefaultPatchBaselineResponse * registerDefaultPatchBaseline(const RegisterDefaultPatchBaselineRequest &request);
    RegisterPatchBaselineForPatchGroupResponse * registerPatchBaselineForPatchGroup(const RegisterPatchBaselineForPatchGroupRequest &request);
    RegisterTargetWithMaintenanceWindowResponse * registerTargetWithMaintenanceWindow(const RegisterTargetWithMaintenanceWindowRequest &request);
    RegisterTaskWithMaintenanceWindowResponse * registerTaskWithMaintenanceWindow(const RegisterTaskWithMaintenanceWindowRequest &request);
    RemoveTagsFromResourceResponse * removeTagsFromResource(const RemoveTagsFromResourceRequest &request);
    ResetServiceSettingResponse * resetServiceSetting(const ResetServiceSettingRequest &request);
    ResumeSessionResponse * resumeSession(const ResumeSessionRequest &request);
    SendAutomationSignalResponse * sendAutomationSignal(const SendAutomationSignalRequest &request);
    SendCommandResponse * sendCommand(const SendCommandRequest &request);
    StartAssociationsOnceResponse * startAssociationsOnce(const StartAssociationsOnceRequest &request);
    StartAutomationExecutionResponse * startAutomationExecution(const StartAutomationExecutionRequest &request);
    StartChangeRequestExecutionResponse * startChangeRequestExecution(const StartChangeRequestExecutionRequest &request);
    StartSessionResponse * startSession(const StartSessionRequest &request);
    StopAutomationExecutionResponse * stopAutomationExecution(const StopAutomationExecutionRequest &request);
    TerminateSessionResponse * terminateSession(const TerminateSessionRequest &request);
    UnlabelParameterVersionResponse * unlabelParameterVersion(const UnlabelParameterVersionRequest &request);
    UpdateAssociationResponse * updateAssociation(const UpdateAssociationRequest &request);
    UpdateAssociationStatusResponse * updateAssociationStatus(const UpdateAssociationStatusRequest &request);
    UpdateDocumentResponse * updateDocument(const UpdateDocumentRequest &request);
    UpdateDocumentDefaultVersionResponse * updateDocumentDefaultVersion(const UpdateDocumentDefaultVersionRequest &request);
    UpdateDocumentMetadataResponse * updateDocumentMetadata(const UpdateDocumentMetadataRequest &request);
    UpdateMaintenanceWindowResponse * updateMaintenanceWindow(const UpdateMaintenanceWindowRequest &request);
    UpdateMaintenanceWindowTargetResponse * updateMaintenanceWindowTarget(const UpdateMaintenanceWindowTargetRequest &request);
    UpdateMaintenanceWindowTaskResponse * updateMaintenanceWindowTask(const UpdateMaintenanceWindowTaskRequest &request);
    UpdateManagedInstanceRoleResponse * updateManagedInstanceRole(const UpdateManagedInstanceRoleRequest &request);
    UpdateOpsItemResponse * updateOpsItem(const UpdateOpsItemRequest &request);
    UpdateOpsMetadataResponse * updateOpsMetadata(const UpdateOpsMetadataRequest &request);
    UpdatePatchBaselineResponse * updatePatchBaseline(const UpdatePatchBaselineRequest &request);
    UpdateResourceDataSyncResponse * updateResourceDataSync(const UpdateResourceDataSyncRequest &request);
    UpdateServiceSettingResponse * updateServiceSetting(const UpdateServiceSettingRequest &request);

protected:
    /// @cond internal
    SsmClientPrivate * const d_ptr; ///< Internal d-pointer.
    SsmClient(SsmClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(SsmClient)
    Q_DISABLE_COPY(SsmClient)

};

} // namespace SSM
} // namespace QtAws

#endif
