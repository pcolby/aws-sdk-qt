/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_SSMCLIENT_H
#define QTAWS_SSMCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace SSM {

class SsmClientPrivate;
class AddTagsToResourceResponse;
class CancelCommandResponse;
class CreateActivationResponse;
class CreateAssociationResponse;
class CreateAssociationBatchResponse;
class CreateDocumentResponse;
class CreateMaintenanceWindowResponse;
class CreatePatchBaselineResponse;
class CreateResourceDataSyncResponse;
class DeleteActivationResponse;
class DeleteAssociationResponse;
class DeleteDocumentResponse;
class DeleteMaintenanceWindowResponse;
class DeleteParameterResponse;
class DeleteParametersResponse;
class DeletePatchBaselineResponse;
class DeleteResourceDataSyncResponse;
class DeregisterManagedInstanceResponse;
class DeregisterPatchBaselineForPatchGroupResponse;
class DeregisterTargetFromMaintenanceWindowResponse;
class DeregisterTaskFromMaintenanceWindowResponse;
class DescribeActivationsResponse;
class DescribeAssociationResponse;
class DescribeAutomationExecutionsResponse;
class DescribeAutomationStepExecutionsResponse;
class DescribeAvailablePatchesResponse;
class DescribeDocumentResponse;
class DescribeDocumentPermissionResponse;
class DescribeEffectiveInstanceAssociationsResponse;
class DescribeEffectivePatchesForPatchBaselineResponse;
class DescribeInstanceAssociationsStatusResponse;
class DescribeInstanceInformationResponse;
class DescribeInstancePatchStatesResponse;
class DescribeInstancePatchStatesForPatchGroupResponse;
class DescribeInstancePatchesResponse;
class DescribeMaintenanceWindowExecutionTaskInvocationsResponse;
class DescribeMaintenanceWindowExecutionTasksResponse;
class DescribeMaintenanceWindowExecutionsResponse;
class DescribeMaintenanceWindowTargetsResponse;
class DescribeMaintenanceWindowTasksResponse;
class DescribeMaintenanceWindowsResponse;
class DescribeParametersResponse;
class DescribePatchBaselinesResponse;
class DescribePatchGroupStateResponse;
class DescribePatchGroupsResponse;
class GetAutomationExecutionResponse;
class GetCommandInvocationResponse;
class GetDefaultPatchBaselineResponse;
class GetDeployablePatchSnapshotForInstanceResponse;
class GetDocumentResponse;
class GetInventoryResponse;
class GetInventorySchemaResponse;
class GetMaintenanceWindowResponse;
class GetMaintenanceWindowExecutionResponse;
class GetMaintenanceWindowExecutionTaskResponse;
class GetMaintenanceWindowExecutionTaskInvocationResponse;
class GetMaintenanceWindowTaskResponse;
class GetParameterResponse;
class GetParameterHistoryResponse;
class GetParametersResponse;
class GetParametersByPathResponse;
class GetPatchBaselineResponse;
class GetPatchBaselineForPatchGroupResponse;
class ListAssociationVersionsResponse;
class ListAssociationsResponse;
class ListCommandInvocationsResponse;
class ListCommandsResponse;
class ListComplianceItemsResponse;
class ListComplianceSummariesResponse;
class ListDocumentVersionsResponse;
class ListDocumentsResponse;
class ListInventoryEntriesResponse;
class ListResourceComplianceSummariesResponse;
class ListResourceDataSyncResponse;
class ListTagsForResourceResponse;
class ModifyDocumentPermissionResponse;
class PutComplianceItemsResponse;
class PutInventoryResponse;
class PutParameterResponse;
class RegisterDefaultPatchBaselineResponse;
class RegisterPatchBaselineForPatchGroupResponse;
class RegisterTargetWithMaintenanceWindowResponse;
class RegisterTaskWithMaintenanceWindowResponse;
class RemoveTagsFromResourceResponse;
class SendAutomationSignalResponse;
class SendCommandResponse;
class StartAutomationExecutionResponse;
class StopAutomationExecutionResponse;
class UpdateAssociationResponse;
class UpdateAssociationStatusResponse;
class UpdateDocumentResponse;
class UpdateDocumentDefaultVersionResponse;
class UpdateMaintenanceWindowResponse;
class UpdateMaintenanceWindowTargetResponse;
class UpdateMaintenanceWindowTaskResponse;
class UpdateManagedInstanceRoleResponse;
class UpdatePatchBaselineResponse;

class QTAWS_EXPORT SsmClient : public AwsAbstractClient {
    Q_OBJECT

public:
    SsmClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    SsmClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddTagsToResourceResponse * addTagsToResource(const AddTagsToResourceRequest &request);
    CancelCommandResponse * cancelCommand(const CancelCommandRequest &request);
    CreateActivationResponse * createActivation(const CreateActivationRequest &request);
    CreateAssociationResponse * createAssociation(const CreateAssociationRequest &request);
    CreateAssociationBatchResponse * createAssociationBatch(const CreateAssociationBatchRequest &request);
    CreateDocumentResponse * createDocument(const CreateDocumentRequest &request);
    CreateMaintenanceWindowResponse * createMaintenanceWindow(const CreateMaintenanceWindowRequest &request);
    CreatePatchBaselineResponse * createPatchBaseline(const CreatePatchBaselineRequest &request);
    CreateResourceDataSyncResponse * createResourceDataSync(const CreateResourceDataSyncRequest &request);
    DeleteActivationResponse * deleteActivation(const DeleteActivationRequest &request);
    DeleteAssociationResponse * deleteAssociation(const DeleteAssociationRequest &request);
    DeleteDocumentResponse * deleteDocument(const DeleteDocumentRequest &request);
    DeleteMaintenanceWindowResponse * deleteMaintenanceWindow(const DeleteMaintenanceWindowRequest &request);
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
    DescribeMaintenanceWindowExecutionTaskInvocationsResponse * describeMaintenanceWindowExecutionTaskInvocations(const DescribeMaintenanceWindowExecutionTaskInvocationsRequest &request);
    DescribeMaintenanceWindowExecutionTasksResponse * describeMaintenanceWindowExecutionTasks(const DescribeMaintenanceWindowExecutionTasksRequest &request);
    DescribeMaintenanceWindowExecutionsResponse * describeMaintenanceWindowExecutions(const DescribeMaintenanceWindowExecutionsRequest &request);
    DescribeMaintenanceWindowTargetsResponse * describeMaintenanceWindowTargets(const DescribeMaintenanceWindowTargetsRequest &request);
    DescribeMaintenanceWindowTasksResponse * describeMaintenanceWindowTasks(const DescribeMaintenanceWindowTasksRequest &request);
    DescribeMaintenanceWindowsResponse * describeMaintenanceWindows(const DescribeMaintenanceWindowsRequest &request);
    DescribeParametersResponse * describeParameters(const DescribeParametersRequest &request);
    DescribePatchBaselinesResponse * describePatchBaselines(const DescribePatchBaselinesRequest &request);
    DescribePatchGroupStateResponse * describePatchGroupState(const DescribePatchGroupStateRequest &request);
    DescribePatchGroupsResponse * describePatchGroups(const DescribePatchGroupsRequest &request);
    GetAutomationExecutionResponse * getAutomationExecution(const GetAutomationExecutionRequest &request);
    GetCommandInvocationResponse * getCommandInvocation(const GetCommandInvocationRequest &request);
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
    GetParameterResponse * getParameter(const GetParameterRequest &request);
    GetParameterHistoryResponse * getParameterHistory(const GetParameterHistoryRequest &request);
    GetParametersResponse * getParameters(const GetParametersRequest &request);
    GetParametersByPathResponse * getParametersByPath(const GetParametersByPathRequest &request);
    GetPatchBaselineResponse * getPatchBaseline(const GetPatchBaselineRequest &request);
    GetPatchBaselineForPatchGroupResponse * getPatchBaselineForPatchGroup(const GetPatchBaselineForPatchGroupRequest &request);
    ListAssociationVersionsResponse * listAssociationVersions(const ListAssociationVersionsRequest &request);
    ListAssociationsResponse * listAssociations(const ListAssociationsRequest &request);
    ListCommandInvocationsResponse * listCommandInvocations(const ListCommandInvocationsRequest &request);
    ListCommandsResponse * listCommands(const ListCommandsRequest &request);
    ListComplianceItemsResponse * listComplianceItems(const ListComplianceItemsRequest &request);
    ListComplianceSummariesResponse * listComplianceSummaries(const ListComplianceSummariesRequest &request);
    ListDocumentVersionsResponse * listDocumentVersions(const ListDocumentVersionsRequest &request);
    ListDocumentsResponse * listDocuments(const ListDocumentsRequest &request);
    ListInventoryEntriesResponse * listInventoryEntries(const ListInventoryEntriesRequest &request);
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
    SendAutomationSignalResponse * sendAutomationSignal(const SendAutomationSignalRequest &request);
    SendCommandResponse * sendCommand(const SendCommandRequest &request);
    StartAutomationExecutionResponse * startAutomationExecution(const StartAutomationExecutionRequest &request);
    StopAutomationExecutionResponse * stopAutomationExecution(const StopAutomationExecutionRequest &request);
    UpdateAssociationResponse * updateAssociation(const UpdateAssociationRequest &request);
    UpdateAssociationStatusResponse * updateAssociationStatus(const UpdateAssociationStatusRequest &request);
    UpdateDocumentResponse * updateDocument(const UpdateDocumentRequest &request);
    UpdateDocumentDefaultVersionResponse * updateDocumentDefaultVersion(const UpdateDocumentDefaultVersionRequest &request);
    UpdateMaintenanceWindowResponse * updateMaintenanceWindow(const UpdateMaintenanceWindowRequest &request);
    UpdateMaintenanceWindowTargetResponse * updateMaintenanceWindowTarget(const UpdateMaintenanceWindowTargetRequest &request);
    UpdateMaintenanceWindowTaskResponse * updateMaintenanceWindowTask(const UpdateMaintenanceWindowTaskRequest &request);
    UpdateManagedInstanceRoleResponse * updateManagedInstanceRole(const UpdateManagedInstanceRoleRequest &request);
    UpdatePatchBaselineResponse * updatePatchBaseline(const UpdatePatchBaselineRequest &request);

private:
    Q_DECLARE_PRIVATE(SsmClient)
    Q_DISABLE_COPY(SsmClient)

};

} // namespace SSM
} // namespace AWS

#endif
