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

#include "glueclient.h"
#include "glueclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace Glue {

/**
 * @class  GlueClient
 *
 * @brief  Client for AWS Glue
 *
 * <fullname>AWS Glue</fullname>
 *
 * Defines the public endpoint for the AWS Glue
 */

/**
 * @brief  Constructs a new GlueClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
GlueClient::GlueClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new GlueClientPrivate(this), parent)
{
    Q_D(GlueClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new GlueClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
GlueClient::GlueClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new GlueClientPrivate(this), parent)
{
    Q_D(GlueClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * Creates one or more partitions in a batch
 */
BatchCreatePartitionResponse * GlueClient::batchCreatePartition(const BatchCreatePartitionRequest &request)
{

}

/**
 * Deletes a list of connection definitions from the Data
 */
BatchDeleteConnectionResponse * GlueClient::batchDeleteConnection(const BatchDeleteConnectionRequest &request)
{

}

/**
 * Deletes one or more partitions in a batch
 */
BatchDeletePartitionResponse * GlueClient::batchDeletePartition(const BatchDeletePartitionRequest &request)
{

}

/**
 * Deletes multiple tables at
 */
BatchDeleteTableResponse * GlueClient::batchDeleteTable(const BatchDeleteTableRequest &request)
{

}

/**
 * Deletes a specified batch of versions of a
 */
BatchDeleteTableVersionResponse * GlueClient::batchDeleteTableVersion(const BatchDeleteTableVersionRequest &request)
{

}

/**
 * Retrieves partitions in a batch
 */
BatchGetPartitionResponse * GlueClient::batchGetPartition(const BatchGetPartitionRequest &request)
{

}

/**
 * Stops one or more job runs for a specified
 */
BatchStopJobRunResponse * GlueClient::batchStopJobRun(const BatchStopJobRunRequest &request)
{

}

/**
 * Creates a classifier in the user's account. This may be a <code>GrokClassifier</code>, an <code>XMLClassifier</code>, or
 * abbrev <code>JsonClassifier</code>, depending on which field of the request is
 */
CreateClassifierResponse * GlueClient::createClassifier(const CreateClassifierRequest &request)
{

}

/**
 * Creates a connection definition in the Data
 */
CreateConnectionResponse * GlueClient::createConnection(const CreateConnectionRequest &request)
{

}

/**
 * Creates a new crawler with specified targets, role, configuration, and optional schedule. At least one crawl target must
 * be specified, in either the <i>s3Targets</i> or the <i>jdbcTargets</i>
 */
CreateCrawlerResponse * GlueClient::createCrawler(const CreateCrawlerRequest &request)
{

}

/**
 * Creates a new database in a Data
 */
CreateDatabaseResponse * GlueClient::createDatabase(const CreateDatabaseRequest &request)
{

}

/**
 * Creates a new
 */
CreateDevEndpointResponse * GlueClient::createDevEndpoint(const CreateDevEndpointRequest &request)
{

}

/**
 * Creates a new
 */
CreateJobResponse * GlueClient::createJob(const CreateJobRequest &request)
{

}

/**
 * Creates a new
 */
CreatePartitionResponse * GlueClient::createPartition(const CreatePartitionRequest &request)
{

}

/**
 * Transforms a directed acyclic graph (DAG) into
 */
CreateScriptResponse * GlueClient::createScript(const CreateScriptRequest &request)
{

}

/**
 * Creates a new table definition in the Data
 */
CreateTableResponse * GlueClient::createTable(const CreateTableRequest &request)
{

}

/**
 * Creates a new
 */
CreateTriggerResponse * GlueClient::createTrigger(const CreateTriggerRequest &request)
{

}

/**
 * Creates a new function definition in the Data
 */
CreateUserDefinedFunctionResponse * GlueClient::createUserDefinedFunction(const CreateUserDefinedFunctionRequest &request)
{

}

/**
 * Removes a classifier from the Data
 */
DeleteClassifierResponse * GlueClient::deleteClassifier(const DeleteClassifierRequest &request)
{

}

/**
 * Deletes a connection from the Data
 */
DeleteConnectionResponse * GlueClient::deleteConnection(const DeleteConnectionRequest &request)
{

}

/**
 * Removes a specified crawler from the Data Catalog, unless the crawler state is
 */
DeleteCrawlerResponse * GlueClient::deleteCrawler(const DeleteCrawlerRequest &request)
{

}

/**
 * Removes a specified Database from a Data
 */
DeleteDatabaseResponse * GlueClient::deleteDatabase(const DeleteDatabaseRequest &request)
{

}

/**
 * Deletes a specified
 */
DeleteDevEndpointResponse * GlueClient::deleteDevEndpoint(const DeleteDevEndpointRequest &request)
{

}

/**
 * Deletes a specified job. If the job is not found, no exception is
 */
DeleteJobResponse * GlueClient::deleteJob(const DeleteJobRequest &request)
{

}

/**
 * Deletes a specified
 */
DeletePartitionResponse * GlueClient::deletePartition(const DeletePartitionRequest &request)
{

}

/**
 * Removes a table definition from the Data
 */
DeleteTableResponse * GlueClient::deleteTable(const DeleteTableRequest &request)
{

}

/**
 * Deletes a specified version of a
 */
DeleteTableVersionResponse * GlueClient::deleteTableVersion(const DeleteTableVersionRequest &request)
{

}

/**
 * Deletes a specified trigger. If the trigger is not found, no exception is
 */
DeleteTriggerResponse * GlueClient::deleteTrigger(const DeleteTriggerRequest &request)
{

}

/**
 * Deletes an existing function definition from the Data
 */
DeleteUserDefinedFunctionResponse * GlueClient::deleteUserDefinedFunction(const DeleteUserDefinedFunctionRequest &request)
{

}

/**
 * Retrieves the status of a migration
 */
GetCatalogImportStatusResponse * GlueClient::getCatalogImportStatus(const GetCatalogImportStatusRequest &request)
{

}

/**
 * Retrieve a classifier by
 */
GetClassifierResponse * GlueClient::getClassifier(const GetClassifierRequest &request)
{

}

/**
 * Lists all classifier objects in the Data
 */
GetClassifiersResponse * GlueClient::getClassifiers(const GetClassifiersRequest &request)
{

}

/**
 * Retrieves a connection definition from the Data
 */
GetConnectionResponse * GlueClient::getConnection(const GetConnectionRequest &request)
{

}

/**
 * Retrieves a list of connection definitions from the Data
 */
GetConnectionsResponse * GlueClient::getConnections(const GetConnectionsRequest &request)
{

}

/**
 * Retrieves metadata for a specified
 */
GetCrawlerResponse * GlueClient::getCrawler(const GetCrawlerRequest &request)
{

}

/**
 * Retrieves metrics about specified
 */
GetCrawlerMetricsResponse * GlueClient::getCrawlerMetrics(const GetCrawlerMetricsRequest &request)
{

}

/**
 * Retrieves metadata for all crawlers defined in the customer
 */
GetCrawlersResponse * GlueClient::getCrawlers(const GetCrawlersRequest &request)
{

}

/**
 * Retrieves the definition of a specified
 */
GetDatabaseResponse * GlueClient::getDatabase(const GetDatabaseRequest &request)
{

}

/**
 * Retrieves all Databases defined in a given Data
 */
GetDatabasesResponse * GlueClient::getDatabases(const GetDatabasesRequest &request)
{

}

/**
 * Transforms a Python script into a directed acyclic graph (DAG).
 */
GetDataflowGraphResponse * GlueClient::getDataflowGraph(const GetDataflowGraphRequest &request)
{

}

/**
 * Retrieves information about a specified
 */
GetDevEndpointResponse * GlueClient::getDevEndpoint(const GetDevEndpointRequest &request)
{

}

/**
 * Retrieves all the DevEndpoints in this AWS
 */
GetDevEndpointsResponse * GlueClient::getDevEndpoints(const GetDevEndpointsRequest &request)
{

}

/**
 * Retrieves an existing job
 */
GetJobResponse * GlueClient::getJob(const GetJobRequest &request)
{

}

/**
 * Retrieves the metadata for a given job
 */
GetJobRunResponse * GlueClient::getJobRun(const GetJobRunRequest &request)
{

}

/**
 * Retrieves metadata for all runs of a given
 */
GetJobRunsResponse * GlueClient::getJobRuns(const GetJobRunsRequest &request)
{

}

/**
 * Retrieves all current
 */
GetJobsResponse * GlueClient::getJobs(const GetJobsRequest &request)
{

}

/**
 * Creates
 */
GetMappingResponse * GlueClient::getMapping(const GetMappingRequest &request)
{

}

/**
 * Retrieves information about a specified
 */
GetPartitionResponse * GlueClient::getPartition(const GetPartitionRequest &request)
{

}

/**
 * Retrieves information about the partitions in a
 */
GetPartitionsResponse * GlueClient::getPartitions(const GetPartitionsRequest &request)
{

}

/**
 * Gets code to perform a specified
 */
GetPlanResponse * GlueClient::getPlan(const GetPlanRequest &request)
{

}

/**
 * Retrieves the <code>Table</code> definition in a Data Catalog for a specified
 */
GetTableResponse * GlueClient::getTable(const GetTableRequest &request)
{

}

/**
 * Retrieves a specified version of a
 */
GetTableVersionResponse * GlueClient::getTableVersion(const GetTableVersionRequest &request)
{

}

/**
 * Retrieves a list of strings that identify available versions of a specified
 */
GetTableVersionsResponse * GlueClient::getTableVersions(const GetTableVersionsRequest &request)
{

}

/**
 * Retrieves the definitions of some or all of the tables in a given
 */
GetTablesResponse * GlueClient::getTables(const GetTablesRequest &request)
{

}

/**
 * Retrieves the definition of a
 */
GetTriggerResponse * GlueClient::getTrigger(const GetTriggerRequest &request)
{

}

/**
 * Gets all the triggers associated with a
 */
GetTriggersResponse * GlueClient::getTriggers(const GetTriggersRequest &request)
{

}

/**
 * Retrieves a specified function definition from the Data
 */
GetUserDefinedFunctionResponse * GlueClient::getUserDefinedFunction(const GetUserDefinedFunctionRequest &request)
{

}

/**
 * Retrieves a multiple function definitions from the Data
 */
GetUserDefinedFunctionsResponse * GlueClient::getUserDefinedFunctions(const GetUserDefinedFunctionsRequest &request)
{

}

/**
 * Imports an existing Athena Data Catalog to AWS
 */
ImportCatalogToGlueResponse * GlueClient::importCatalogToGlue(const ImportCatalogToGlueRequest &request)
{

}

/**
 * Resets a bookmark
 */
ResetJobBookmarkResponse * GlueClient::resetJobBookmark(const ResetJobBookmarkRequest &request)
{

}

/**
 * Starts a crawl using the specified crawler, regardless of what is scheduled. If the crawler is already running, does
 */
StartCrawlerResponse * GlueClient::startCrawler(const StartCrawlerRequest &request)
{

}

/**
 * Changes the schedule state of the specified crawler to <code>SCHEDULED</code>, unless the crawler is already running or
 * the schedule state is already
 */
StartCrawlerScheduleResponse * GlueClient::startCrawlerSchedule(const StartCrawlerScheduleRequest &request)
{

}

/**
 * Runs a
 */
StartJobRunResponse * GlueClient::startJobRun(const StartJobRunRequest &request)
{

}

/**
 * Starts an existing trigger. See <a href="http://docs.aws.amazon.com/glue/latest/dg/trigger-job.html">Triggering Jobs</a>
 * for information about how different types of trigger are
 */
StartTriggerResponse * GlueClient::startTrigger(const StartTriggerRequest &request)
{

}

/**
 * If the specified crawler is running, stops the
 */
StopCrawlerResponse * GlueClient::stopCrawler(const StopCrawlerRequest &request)
{

}

/**
 * Sets the schedule state of the specified crawler to <code>NOT_SCHEDULED</code>, but does not stop the crawler if it is
 * already
 */
StopCrawlerScheduleResponse * GlueClient::stopCrawlerSchedule(const StopCrawlerScheduleRequest &request)
{

}

/**
 * Stops a specified
 */
StopTriggerResponse * GlueClient::stopTrigger(const StopTriggerRequest &request)
{

}

/**
 * Modifies an existing classifier (a <code>GrokClassifier</code>, <code>XMLClassifier</code>, or
 * <code>JsonClassifier</code>, depending on which field is
 */
UpdateClassifierResponse * GlueClient::updateClassifier(const UpdateClassifierRequest &request)
{

}

/**
 * Updates a connection definition in the Data
 */
UpdateConnectionResponse * GlueClient::updateConnection(const UpdateConnectionRequest &request)
{

}

/**
 * Updates a crawler. If a crawler is running, you must stop it using <code>StopCrawler</code> before updating
 */
UpdateCrawlerResponse * GlueClient::updateCrawler(const UpdateCrawlerRequest &request)
{

}

/**
 * Updates the schedule of a crawler using a <code>cron</code> expression.
 */
UpdateCrawlerScheduleResponse * GlueClient::updateCrawlerSchedule(const UpdateCrawlerScheduleRequest &request)
{

}

/**
 * Updates an existing database definition in a Data
 */
UpdateDatabaseResponse * GlueClient::updateDatabase(const UpdateDatabaseRequest &request)
{

}

/**
 * Updates a specified
 */
UpdateDevEndpointResponse * GlueClient::updateDevEndpoint(const UpdateDevEndpointRequest &request)
{

}

/**
 * Updates an existing job
 */
UpdateJobResponse * GlueClient::updateJob(const UpdateJobRequest &request)
{

}

/**
 * Updates a
 */
UpdatePartitionResponse * GlueClient::updatePartition(const UpdatePartitionRequest &request)
{

}

/**
 * Updates a metadata table in the Data
 */
UpdateTableResponse * GlueClient::updateTable(const UpdateTableRequest &request)
{

}

/**
 * Updates a trigger
 */
UpdateTriggerResponse * GlueClient::updateTrigger(const UpdateTriggerRequest &request)
{

}

/**
 * Updates an existing function definition in the Data
 */
UpdateUserDefinedFunctionResponse * GlueClient::updateUserDefinedFunction(const UpdateUserDefinedFunctionRequest &request)
{

}

/**
 * @internal
 *
 * @class  GlueClientPrivate
 *
 * @brief  Private implementation for GlueClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GlueClientPrivate object.
 *
 * @param  q  Pointer to this object's public GlueClient instance.
 */
GlueClientPrivate::GlueClientPrivate(GlueClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace Glue
} // namespace AWS
