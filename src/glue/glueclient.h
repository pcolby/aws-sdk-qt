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

#ifndef QTAWS_GLUECLIENT_H
#define QTAWS_GLUECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace Glue {

class GlueClientPrivate;
class BatchCreatePartitionResponse;
class BatchDeleteConnectionResponse;
class BatchDeletePartitionResponse;
class BatchDeleteTableResponse;
class BatchDeleteTableVersionResponse;
class BatchGetPartitionResponse;
class BatchStopJobRunResponse;
class CreateClassifierResponse;
class CreateConnectionResponse;
class CreateCrawlerResponse;
class CreateDatabaseResponse;
class CreateDevEndpointResponse;
class CreateJobResponse;
class CreatePartitionResponse;
class CreateScriptResponse;
class CreateTableResponse;
class CreateTriggerResponse;
class CreateUserDefinedFunctionResponse;
class DeleteClassifierResponse;
class DeleteConnectionResponse;
class DeleteCrawlerResponse;
class DeleteDatabaseResponse;
class DeleteDevEndpointResponse;
class DeleteJobResponse;
class DeletePartitionResponse;
class DeleteTableResponse;
class DeleteTableVersionResponse;
class DeleteTriggerResponse;
class DeleteUserDefinedFunctionResponse;
class GetCatalogImportStatusResponse;
class GetClassifierResponse;
class GetClassifiersResponse;
class GetConnectionResponse;
class GetConnectionsResponse;
class GetCrawlerResponse;
class GetCrawlerMetricsResponse;
class GetCrawlersResponse;
class GetDatabaseResponse;
class GetDatabasesResponse;
class GetDataflowGraphResponse;
class GetDevEndpointResponse;
class GetDevEndpointsResponse;
class GetJobResponse;
class GetJobRunResponse;
class GetJobRunsResponse;
class GetJobsResponse;
class GetMappingResponse;
class GetPartitionResponse;
class GetPartitionsResponse;
class GetPlanResponse;
class GetTableResponse;
class GetTableVersionResponse;
class GetTableVersionsResponse;
class GetTablesResponse;
class GetTriggerResponse;
class GetTriggersResponse;
class GetUserDefinedFunctionResponse;
class GetUserDefinedFunctionsResponse;
class ImportCatalogToGlueResponse;
class ResetJobBookmarkResponse;
class StartCrawlerResponse;
class StartCrawlerScheduleResponse;
class StartJobRunResponse;
class StartTriggerResponse;
class StopCrawlerResponse;
class StopCrawlerScheduleResponse;
class StopTriggerResponse;
class UpdateClassifierResponse;
class UpdateConnectionResponse;
class UpdateCrawlerResponse;
class UpdateCrawlerScheduleResponse;
class UpdateDatabaseResponse;
class UpdateDevEndpointResponse;
class UpdateJobResponse;
class UpdatePartitionResponse;
class UpdateTableResponse;
class UpdateTriggerResponse;
class UpdateUserDefinedFunctionResponse;

class QTAWS_EXPORT GlueClient : public AwsAbstractClient {
    Q_OBJECT

public:
    GlueClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    GlueClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
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
    GetTableResponse * getTable(const GetTableRequest &request);
    GetTableVersionResponse * getTableVersion(const GetTableVersionRequest &request);
    GetTableVersionsResponse * getTableVersions(const GetTableVersionsRequest &request);
    GetTablesResponse * getTables(const GetTablesRequest &request);
    GetTriggerResponse * getTrigger(const GetTriggerRequest &request);
    GetTriggersResponse * getTriggers(const GetTriggersRequest &request);
    GetUserDefinedFunctionResponse * getUserDefinedFunction(const GetUserDefinedFunctionRequest &request);
    GetUserDefinedFunctionsResponse * getUserDefinedFunctions(const GetUserDefinedFunctionsRequest &request);
    ImportCatalogToGlueResponse * importCatalogToGlue(const ImportCatalogToGlueRequest &request);
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
} // namespace AWS

#endif
