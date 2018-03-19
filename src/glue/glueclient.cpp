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
    d->apiVersion = QStringLiteral("2017-03-31");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("glue");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Glue");
    d->serviceName = QStringLiteral("glue");
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
    d->apiVersion = QStringLiteral("2017-03-31");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("glue");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Glue");
    d->serviceName = QStringLiteral("glue");
}

/**
 * Creates one or more partitions in a batch
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
BatchCreatePartitionResponse * GlueClient::batchCreatePartition(const BatchCreatePartitionRequest &request)
{

}

/**
 * Deletes a list of connection definitions from the Data
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
BatchDeleteConnectionResponse * GlueClient::batchDeleteConnection(const BatchDeleteConnectionRequest &request)
{

}

/**
 * Deletes one or more partitions in a batch
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
BatchDeletePartitionResponse * GlueClient::batchDeletePartition(const BatchDeletePartitionRequest &request)
{

}

/**
 * Deletes multiple tables at
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
BatchDeleteTableResponse * GlueClient::batchDeleteTable(const BatchDeleteTableRequest &request)
{

}

/**
 * Deletes a specified batch of versions of a
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
BatchDeleteTableVersionResponse * GlueClient::batchDeleteTableVersion(const BatchDeleteTableVersionRequest &request)
{

}

/**
 * Retrieves partitions in a batch
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
BatchGetPartitionResponse * GlueClient::batchGetPartition(const BatchGetPartitionRequest &request)
{

}

/**
 * Stops one or more job runs for a specified
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
BatchStopJobRunResponse * GlueClient::batchStopJobRun(const BatchStopJobRunRequest &request)
{

}

/**
 * Creates a classifier in the user's account. This may be a <code>GrokClassifier</code>, an <code>XMLClassifier</code>, or
 * abbrev <code>JsonClassifier</code>, depending on which field of the request is
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateClassifierResponse * GlueClient::createClassifier(const CreateClassifierRequest &request)
{

}

/**
 * Creates a connection definition in the Data
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateConnectionResponse * GlueClient::createConnection(const CreateConnectionRequest &request)
{

}

/**
 * Creates a new crawler with specified targets, role, configuration, and optional schedule. At least one crawl target must
 * be specified, in either the <i>s3Targets</i> or the <i>jdbcTargets</i>
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateCrawlerResponse * GlueClient::createCrawler(const CreateCrawlerRequest &request)
{

}

/**
 * Creates a new database in a Data
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDatabaseResponse * GlueClient::createDatabase(const CreateDatabaseRequest &request)
{

}

/**
 * Creates a new
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDevEndpointResponse * GlueClient::createDevEndpoint(const CreateDevEndpointRequest &request)
{

}

/**
 * Creates a new
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateJobResponse * GlueClient::createJob(const CreateJobRequest &request)
{

}

/**
 * Creates a new
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreatePartitionResponse * GlueClient::createPartition(const CreatePartitionRequest &request)
{

}

/**
 * Transforms a directed acyclic graph (DAG) into
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateScriptResponse * GlueClient::createScript(const CreateScriptRequest &request)
{

}

/**
 * Creates a new table definition in the Data
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateTableResponse * GlueClient::createTable(const CreateTableRequest &request)
{

}

/**
 * Creates a new
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateTriggerResponse * GlueClient::createTrigger(const CreateTriggerRequest &request)
{

}

/**
 * Creates a new function definition in the Data
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateUserDefinedFunctionResponse * GlueClient::createUserDefinedFunction(const CreateUserDefinedFunctionRequest &request)
{

}

/**
 * Removes a classifier from the Data
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteClassifierResponse * GlueClient::deleteClassifier(const DeleteClassifierRequest &request)
{

}

/**
 * Deletes a connection from the Data
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteConnectionResponse * GlueClient::deleteConnection(const DeleteConnectionRequest &request)
{

}

/**
 * Removes a specified crawler from the Data Catalog, unless the crawler state is
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteCrawlerResponse * GlueClient::deleteCrawler(const DeleteCrawlerRequest &request)
{

}

/**
 * Removes a specified Database from a Data
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDatabaseResponse * GlueClient::deleteDatabase(const DeleteDatabaseRequest &request)
{

}

/**
 * Deletes a specified
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDevEndpointResponse * GlueClient::deleteDevEndpoint(const DeleteDevEndpointRequest &request)
{

}

/**
 * Deletes a specified job. If the job is not found, no exception is
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteJobResponse * GlueClient::deleteJob(const DeleteJobRequest &request)
{

}

/**
 * Deletes a specified
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeletePartitionResponse * GlueClient::deletePartition(const DeletePartitionRequest &request)
{

}

/**
 * Removes a table definition from the Data
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteTableResponse * GlueClient::deleteTable(const DeleteTableRequest &request)
{

}

/**
 * Deletes a specified version of a
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteTableVersionResponse * GlueClient::deleteTableVersion(const DeleteTableVersionRequest &request)
{

}

/**
 * Deletes a specified trigger. If the trigger is not found, no exception is
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteTriggerResponse * GlueClient::deleteTrigger(const DeleteTriggerRequest &request)
{

}

/**
 * Deletes an existing function definition from the Data
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteUserDefinedFunctionResponse * GlueClient::deleteUserDefinedFunction(const DeleteUserDefinedFunctionRequest &request)
{

}

/**
 * Retrieves the status of a migration
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetCatalogImportStatusResponse * GlueClient::getCatalogImportStatus(const GetCatalogImportStatusRequest &request)
{

}

/**
 * Retrieve a classifier by
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetClassifierResponse * GlueClient::getClassifier(const GetClassifierRequest &request)
{

}

/**
 * Lists all classifier objects in the Data
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetClassifiersResponse * GlueClient::getClassifiers(const GetClassifiersRequest &request)
{

}

/**
 * Retrieves a connection definition from the Data
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetConnectionResponse * GlueClient::getConnection(const GetConnectionRequest &request)
{

}

/**
 * Retrieves a list of connection definitions from the Data
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetConnectionsResponse * GlueClient::getConnections(const GetConnectionsRequest &request)
{

}

/**
 * Retrieves metadata for a specified
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetCrawlerResponse * GlueClient::getCrawler(const GetCrawlerRequest &request)
{

}

/**
 * Retrieves metrics about specified
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetCrawlerMetricsResponse * GlueClient::getCrawlerMetrics(const GetCrawlerMetricsRequest &request)
{

}

/**
 * Retrieves metadata for all crawlers defined in the customer
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetCrawlersResponse * GlueClient::getCrawlers(const GetCrawlersRequest &request)
{

}

/**
 * Retrieves the definition of a specified
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDatabaseResponse * GlueClient::getDatabase(const GetDatabaseRequest &request)
{

}

/**
 * Retrieves all Databases defined in a given Data
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDatabasesResponse * GlueClient::getDatabases(const GetDatabasesRequest &request)
{

}

/**
 * Transforms a Python script into a directed acyclic graph (DAG).
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDataflowGraphResponse * GlueClient::getDataflowGraph(const GetDataflowGraphRequest &request)
{

}

/**
 * Retrieves information about a specified
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDevEndpointResponse * GlueClient::getDevEndpoint(const GetDevEndpointRequest &request)
{

}

/**
 * Retrieves all the DevEndpoints in this AWS
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDevEndpointsResponse * GlueClient::getDevEndpoints(const GetDevEndpointsRequest &request)
{

}

/**
 * Retrieves an existing job
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetJobResponse * GlueClient::getJob(const GetJobRequest &request)
{

}

/**
 * Retrieves the metadata for a given job
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetJobRunResponse * GlueClient::getJobRun(const GetJobRunRequest &request)
{

}

/**
 * Retrieves metadata for all runs of a given
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetJobRunsResponse * GlueClient::getJobRuns(const GetJobRunsRequest &request)
{

}

/**
 * Retrieves all current
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetJobsResponse * GlueClient::getJobs(const GetJobsRequest &request)
{

}

/**
 * Creates
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetMappingResponse * GlueClient::getMapping(const GetMappingRequest &request)
{

}

/**
 * Retrieves information about a specified
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetPartitionResponse * GlueClient::getPartition(const GetPartitionRequest &request)
{

}

/**
 * Retrieves information about the partitions in a
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetPartitionsResponse * GlueClient::getPartitions(const GetPartitionsRequest &request)
{

}

/**
 * Gets code to perform a specified
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetPlanResponse * GlueClient::getPlan(const GetPlanRequest &request)
{

}

/**
 * Retrieves the <code>Table</code> definition in a Data Catalog for a specified
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetTableResponse * GlueClient::getTable(const GetTableRequest &request)
{

}

/**
 * Retrieves a specified version of a
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetTableVersionResponse * GlueClient::getTableVersion(const GetTableVersionRequest &request)
{

}

/**
 * Retrieves a list of strings that identify available versions of a specified
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetTableVersionsResponse * GlueClient::getTableVersions(const GetTableVersionsRequest &request)
{

}

/**
 * Retrieves the definitions of some or all of the tables in a given
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetTablesResponse * GlueClient::getTables(const GetTablesRequest &request)
{

}

/**
 * Retrieves the definition of a
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetTriggerResponse * GlueClient::getTrigger(const GetTriggerRequest &request)
{

}

/**
 * Gets all the triggers associated with a
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetTriggersResponse * GlueClient::getTriggers(const GetTriggersRequest &request)
{

}

/**
 * Retrieves a specified function definition from the Data
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetUserDefinedFunctionResponse * GlueClient::getUserDefinedFunction(const GetUserDefinedFunctionRequest &request)
{

}

/**
 * Retrieves a multiple function definitions from the Data
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetUserDefinedFunctionsResponse * GlueClient::getUserDefinedFunctions(const GetUserDefinedFunctionsRequest &request)
{

}

/**
 * Imports an existing Athena Data Catalog to AWS
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ImportCatalogToGlueResponse * GlueClient::importCatalogToGlue(const ImportCatalogToGlueRequest &request)
{

}

/**
 * Resets a bookmark
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ResetJobBookmarkResponse * GlueClient::resetJobBookmark(const ResetJobBookmarkRequest &request)
{

}

/**
 * Starts a crawl using the specified crawler, regardless of what is scheduled. If the crawler is already running, does
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartCrawlerResponse * GlueClient::startCrawler(const StartCrawlerRequest &request)
{

}

/**
 * Changes the schedule state of the specified crawler to <code>SCHEDULED</code>, unless the crawler is already running or
 * the schedule state is already
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartCrawlerScheduleResponse * GlueClient::startCrawlerSchedule(const StartCrawlerScheduleRequest &request)
{

}

/**
 * Runs a
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartJobRunResponse * GlueClient::startJobRun(const StartJobRunRequest &request)
{

}

/**
 * Starts an existing trigger. See <a href="http://docs.aws.amazon.com/glue/latest/dg/trigger-job.html">Triggering Jobs</a>
 * for information about how different types of trigger are
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartTriggerResponse * GlueClient::startTrigger(const StartTriggerRequest &request)
{

}

/**
 * If the specified crawler is running, stops the
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StopCrawlerResponse * GlueClient::stopCrawler(const StopCrawlerRequest &request)
{

}

/**
 * Sets the schedule state of the specified crawler to <code>NOT_SCHEDULED</code>, but does not stop the crawler if it is
 * already
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StopCrawlerScheduleResponse * GlueClient::stopCrawlerSchedule(const StopCrawlerScheduleRequest &request)
{

}

/**
 * Stops a specified
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StopTriggerResponse * GlueClient::stopTrigger(const StopTriggerRequest &request)
{

}

/**
 * Modifies an existing classifier (a <code>GrokClassifier</code>, <code>XMLClassifier</code>, or
 * <code>JsonClassifier</code>, depending on which field is
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateClassifierResponse * GlueClient::updateClassifier(const UpdateClassifierRequest &request)
{

}

/**
 * Updates a connection definition in the Data
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateConnectionResponse * GlueClient::updateConnection(const UpdateConnectionRequest &request)
{

}

/**
 * Updates a crawler. If a crawler is running, you must stop it using <code>StopCrawler</code> before updating
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateCrawlerResponse * GlueClient::updateCrawler(const UpdateCrawlerRequest &request)
{

}

/**
 * Updates the schedule of a crawler using a <code>cron</code> expression.
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateCrawlerScheduleResponse * GlueClient::updateCrawlerSchedule(const UpdateCrawlerScheduleRequest &request)
{

}

/**
 * Updates an existing database definition in a Data
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateDatabaseResponse * GlueClient::updateDatabase(const UpdateDatabaseRequest &request)
{

}

/**
 * Updates a specified
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateDevEndpointResponse * GlueClient::updateDevEndpoint(const UpdateDevEndpointRequest &request)
{

}

/**
 * Updates an existing job
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateJobResponse * GlueClient::updateJob(const UpdateJobRequest &request)
{

}

/**
 * Updates a
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdatePartitionResponse * GlueClient::updatePartition(const UpdatePartitionRequest &request)
{

}

/**
 * Updates a metadata table in the Data
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateTableResponse * GlueClient::updateTable(const UpdateTableRequest &request)
{

}

/**
 * Updates a trigger
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateTriggerResponse * GlueClient::updateTrigger(const UpdateTriggerRequest &request)
{

}

/**
 * Updates an existing function definition in the Data
 *
 * @param  request Request to send to AWS Glue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
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
