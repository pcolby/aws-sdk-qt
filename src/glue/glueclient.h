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

#ifndef QTAWS_GLUECLIENT_H
#define QTAWS_GLUECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace Glue {

class GlueClientPrivate;
class BatchCreatePartitionRequest;
class BatchCreatePartitionResponse;
class BatchDeleteConnectionRequest;
class BatchDeleteConnectionResponse;
class BatchDeletePartitionRequest;
class BatchDeletePartitionResponse;
class BatchDeleteTableRequest;
class BatchDeleteTableResponse;
class BatchDeleteTableVersionRequest;
class BatchDeleteTableVersionResponse;
class BatchGetPartitionRequest;
class BatchGetPartitionResponse;
class BatchStopJobRunRequest;
class BatchStopJobRunResponse;
class CreateClassifierRequest;
class CreateClassifierResponse;
class CreateConnectionRequest;
class CreateConnectionResponse;
class CreateCrawlerRequest;
class CreateCrawlerResponse;
class CreateDatabaseRequest;
class CreateDatabaseResponse;
class CreateDevEndpointRequest;
class CreateDevEndpointResponse;
class CreateJobRequest;
class CreateJobResponse;
class CreatePartitionRequest;
class CreatePartitionResponse;
class CreateScriptRequest;
class CreateScriptResponse;
class CreateSecurityConfigurationRequest;
class CreateSecurityConfigurationResponse;
class CreateTableRequest;
class CreateTableResponse;
class CreateTriggerRequest;
class CreateTriggerResponse;
class CreateUserDefinedFunctionRequest;
class CreateUserDefinedFunctionResponse;
class DeleteClassifierRequest;
class DeleteClassifierResponse;
class DeleteConnectionRequest;
class DeleteConnectionResponse;
class DeleteCrawlerRequest;
class DeleteCrawlerResponse;
class DeleteDatabaseRequest;
class DeleteDatabaseResponse;
class DeleteDevEndpointRequest;
class DeleteDevEndpointResponse;
class DeleteJobRequest;
class DeleteJobResponse;
class DeletePartitionRequest;
class DeletePartitionResponse;
class DeleteResourcePolicyRequest;
class DeleteResourcePolicyResponse;
class DeleteSecurityConfigurationRequest;
class DeleteSecurityConfigurationResponse;
class DeleteTableRequest;
class DeleteTableResponse;
class DeleteTableVersionRequest;
class DeleteTableVersionResponse;
class DeleteTriggerRequest;
class DeleteTriggerResponse;
class DeleteUserDefinedFunctionRequest;
class DeleteUserDefinedFunctionResponse;
class GetCatalogImportStatusRequest;
class GetCatalogImportStatusResponse;
class GetClassifierRequest;
class GetClassifierResponse;
class GetClassifiersRequest;
class GetClassifiersResponse;
class GetConnectionRequest;
class GetConnectionResponse;
class GetConnectionsRequest;
class GetConnectionsResponse;
class GetCrawlerRequest;
class GetCrawlerResponse;
class GetCrawlerMetricsRequest;
class GetCrawlerMetricsResponse;
class GetCrawlersRequest;
class GetCrawlersResponse;
class GetDataCatalogEncryptionSettingsRequest;
class GetDataCatalogEncryptionSettingsResponse;
class GetDatabaseRequest;
class GetDatabaseResponse;
class GetDatabasesRequest;
class GetDatabasesResponse;
class GetDataflowGraphRequest;
class GetDataflowGraphResponse;
class GetDevEndpointRequest;
class GetDevEndpointResponse;
class GetDevEndpointsRequest;
class GetDevEndpointsResponse;
class GetJobRequest;
class GetJobResponse;
class GetJobRunRequest;
class GetJobRunResponse;
class GetJobRunsRequest;
class GetJobRunsResponse;
class GetJobsRequest;
class GetJobsResponse;
class GetMappingRequest;
class GetMappingResponse;
class GetPartitionRequest;
class GetPartitionResponse;
class GetPartitionsRequest;
class GetPartitionsResponse;
class GetPlanRequest;
class GetPlanResponse;
class GetResourcePolicyRequest;
class GetResourcePolicyResponse;
class GetSecurityConfigurationRequest;
class GetSecurityConfigurationResponse;
class GetSecurityConfigurationsRequest;
class GetSecurityConfigurationsResponse;
class GetTableRequest;
class GetTableResponse;
class GetTableVersionRequest;
class GetTableVersionResponse;
class GetTableVersionsRequest;
class GetTableVersionsResponse;
class GetTablesRequest;
class GetTablesResponse;
class GetTriggerRequest;
class GetTriggerResponse;
class GetTriggersRequest;
class GetTriggersResponse;
class GetUserDefinedFunctionRequest;
class GetUserDefinedFunctionResponse;
class GetUserDefinedFunctionsRequest;
class GetUserDefinedFunctionsResponse;
class ImportCatalogToGlueRequest;
class ImportCatalogToGlueResponse;
class PutDataCatalogEncryptionSettingsRequest;
class PutDataCatalogEncryptionSettingsResponse;
class PutResourcePolicyRequest;
class PutResourcePolicyResponse;
class ResetJobBookmarkRequest;
class ResetJobBookmarkResponse;
class StartCrawlerRequest;
class StartCrawlerResponse;
class StartCrawlerScheduleRequest;
class StartCrawlerScheduleResponse;
class StartJobRunRequest;
class StartJobRunResponse;
class StartTriggerRequest;
class StartTriggerResponse;
class StopCrawlerRequest;
class StopCrawlerResponse;
class StopCrawlerScheduleRequest;
class StopCrawlerScheduleResponse;
class StopTriggerRequest;
class StopTriggerResponse;
class UpdateClassifierRequest;
class UpdateClassifierResponse;
class UpdateConnectionRequest;
class UpdateConnectionResponse;
class UpdateCrawlerRequest;
class UpdateCrawlerResponse;
class UpdateCrawlerScheduleRequest;
class UpdateCrawlerScheduleResponse;
class UpdateDatabaseRequest;
class UpdateDatabaseResponse;
class UpdateDevEndpointRequest;
class UpdateDevEndpointResponse;
class UpdateJobRequest;
class UpdateJobResponse;
class UpdatePartitionRequest;
class UpdatePartitionResponse;
class UpdateTableRequest;
class UpdateTableResponse;
class UpdateTriggerRequest;
class UpdateTriggerResponse;
class UpdateUserDefinedFunctionRequest;
class UpdateUserDefinedFunctionResponse;

class QTAWS_EXPORT GlueClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    GlueClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    GlueClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchCreatePartitionResponse * batchCreatePartition(const BatchCreatePartitionRequest &request);
    BatchDeleteConnectionResponse * batchDeleteConnection(const BatchDeleteConnectionRequest &request);
    BatchDeletePartitionResponse * batchDeletePartition(const BatchDeletePartitionRequest &request);
    BatchDeleteTableResponse * batchDeleteTable(const BatchDeleteTableRequest &request);
    BatchDeleteTableVersionResponse * batchDeleteTableVersion(const BatchDeleteTableVersionRequest &request);
    BatchGetPartitionResponse * batchGetPartition(const BatchGetPartitionRequest &request);
    BatchStopJobRunResponse * batchStopJobRun(const BatchStopJobRunRequest &request);
    CreateClassifierResponse * createClassifier(const CreateClassifierRequest &request);
    CreateConnectionResponse * createConnection(const CreateConnectionRequest &request);
    CreateCrawlerResponse * createCrawler(const CreateCrawlerRequest &request);
    CreateDatabaseResponse * createDatabase(const CreateDatabaseRequest &request);
    CreateDevEndpointResponse * createDevEndpoint(const CreateDevEndpointRequest &request);
    CreateJobResponse * createJob(const CreateJobRequest &request);
    CreatePartitionResponse * createPartition(const CreatePartitionRequest &request);
    CreateScriptResponse * createScript(const CreateScriptRequest &request);
    CreateSecurityConfigurationResponse * createSecurityConfiguration(const CreateSecurityConfigurationRequest &request);
    CreateTableResponse * createTable(const CreateTableRequest &request);
    CreateTriggerResponse * createTrigger(const CreateTriggerRequest &request);
    CreateUserDefinedFunctionResponse * createUserDefinedFunction(const CreateUserDefinedFunctionRequest &request);
    DeleteClassifierResponse * deleteClassifier(const DeleteClassifierRequest &request);
    DeleteConnectionResponse * deleteConnection(const DeleteConnectionRequest &request);
    DeleteCrawlerResponse * deleteCrawler(const DeleteCrawlerRequest &request);
    DeleteDatabaseResponse * deleteDatabase(const DeleteDatabaseRequest &request);
    DeleteDevEndpointResponse * deleteDevEndpoint(const DeleteDevEndpointRequest &request);
    DeleteJobResponse * deleteJob(const DeleteJobRequest &request);
    DeletePartitionResponse * deletePartition(const DeletePartitionRequest &request);
    DeleteResourcePolicyResponse * deleteResourcePolicy(const DeleteResourcePolicyRequest &request);
    DeleteSecurityConfigurationResponse * deleteSecurityConfiguration(const DeleteSecurityConfigurationRequest &request);
    DeleteTableResponse * deleteTable(const DeleteTableRequest &request);
    DeleteTableVersionResponse * deleteTableVersion(const DeleteTableVersionRequest &request);
    DeleteTriggerResponse * deleteTrigger(const DeleteTriggerRequest &request);
    DeleteUserDefinedFunctionResponse * deleteUserDefinedFunction(const DeleteUserDefinedFunctionRequest &request);
    GetCatalogImportStatusResponse * getCatalogImportStatus(const GetCatalogImportStatusRequest &request);
    GetClassifierResponse * getClassifier(const GetClassifierRequest &request);
    GetClassifiersResponse * getClassifiers(const GetClassifiersRequest &request);
    GetConnectionResponse * getConnection(const GetConnectionRequest &request);
    GetConnectionsResponse * getConnections(const GetConnectionsRequest &request);
    GetCrawlerResponse * getCrawler(const GetCrawlerRequest &request);
    GetCrawlerMetricsResponse * getCrawlerMetrics(const GetCrawlerMetricsRequest &request);
    GetCrawlersResponse * getCrawlers(const GetCrawlersRequest &request);
    GetDataCatalogEncryptionSettingsResponse * getDataCatalogEncryptionSettings(const GetDataCatalogEncryptionSettingsRequest &request);
    GetDatabaseResponse * getDatabase(const GetDatabaseRequest &request);
    GetDatabasesResponse * getDatabases(const GetDatabasesRequest &request);
    GetDataflowGraphResponse * getDataflowGraph(const GetDataflowGraphRequest &request);
    GetDevEndpointResponse * getDevEndpoint(const GetDevEndpointRequest &request);
    GetDevEndpointsResponse * getDevEndpoints(const GetDevEndpointsRequest &request);
    GetJobResponse * getJob(const GetJobRequest &request);
    GetJobRunResponse * getJobRun(const GetJobRunRequest &request);
    GetJobRunsResponse * getJobRuns(const GetJobRunsRequest &request);
    GetJobsResponse * getJobs(const GetJobsRequest &request);
    GetMappingResponse * getMapping(const GetMappingRequest &request);
    GetPartitionResponse * getPartition(const GetPartitionRequest &request);
    GetPartitionsResponse * getPartitions(const GetPartitionsRequest &request);
    GetPlanResponse * getPlan(const GetPlanRequest &request);
    GetResourcePolicyResponse * getResourcePolicy(const GetResourcePolicyRequest &request);
    GetSecurityConfigurationResponse * getSecurityConfiguration(const GetSecurityConfigurationRequest &request);
    GetSecurityConfigurationsResponse * getSecurityConfigurations(const GetSecurityConfigurationsRequest &request);
    GetTableResponse * getTable(const GetTableRequest &request);
    GetTableVersionResponse * getTableVersion(const GetTableVersionRequest &request);
    GetTableVersionsResponse * getTableVersions(const GetTableVersionsRequest &request);
    GetTablesResponse * getTables(const GetTablesRequest &request);
    GetTriggerResponse * getTrigger(const GetTriggerRequest &request);
    GetTriggersResponse * getTriggers(const GetTriggersRequest &request);
    GetUserDefinedFunctionResponse * getUserDefinedFunction(const GetUserDefinedFunctionRequest &request);
    GetUserDefinedFunctionsResponse * getUserDefinedFunctions(const GetUserDefinedFunctionsRequest &request);
    ImportCatalogToGlueResponse * importCatalogToGlue(const ImportCatalogToGlueRequest &request);
    PutDataCatalogEncryptionSettingsResponse * putDataCatalogEncryptionSettings(const PutDataCatalogEncryptionSettingsRequest &request);
    PutResourcePolicyResponse * putResourcePolicy(const PutResourcePolicyRequest &request);
    ResetJobBookmarkResponse * resetJobBookmark(const ResetJobBookmarkRequest &request);
    StartCrawlerResponse * startCrawler(const StartCrawlerRequest &request);
    StartCrawlerScheduleResponse * startCrawlerSchedule(const StartCrawlerScheduleRequest &request);
    StartJobRunResponse * startJobRun(const StartJobRunRequest &request);
    StartTriggerResponse * startTrigger(const StartTriggerRequest &request);
    StopCrawlerResponse * stopCrawler(const StopCrawlerRequest &request);
    StopCrawlerScheduleResponse * stopCrawlerSchedule(const StopCrawlerScheduleRequest &request);
    StopTriggerResponse * stopTrigger(const StopTriggerRequest &request);
    UpdateClassifierResponse * updateClassifier(const UpdateClassifierRequest &request);
    UpdateConnectionResponse * updateConnection(const UpdateConnectionRequest &request);
    UpdateCrawlerResponse * updateCrawler(const UpdateCrawlerRequest &request);
    UpdateCrawlerScheduleResponse * updateCrawlerSchedule(const UpdateCrawlerScheduleRequest &request);
    UpdateDatabaseResponse * updateDatabase(const UpdateDatabaseRequest &request);
    UpdateDevEndpointResponse * updateDevEndpoint(const UpdateDevEndpointRequest &request);
    UpdateJobResponse * updateJob(const UpdateJobRequest &request);
    UpdatePartitionResponse * updatePartition(const UpdatePartitionRequest &request);
    UpdateTableResponse * updateTable(const UpdateTableRequest &request);
    UpdateTriggerResponse * updateTrigger(const UpdateTriggerRequest &request);
    UpdateUserDefinedFunctionResponse * updateUserDefinedFunction(const UpdateUserDefinedFunctionRequest &request);

private:
    Q_DECLARE_PRIVATE(GlueClient)
    Q_DISABLE_COPY(GlueClient)

};

} // namespace Glue
} // namespace QtAws

#endif
