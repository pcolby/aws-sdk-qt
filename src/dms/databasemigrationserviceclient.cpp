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

#include "databasemigrationserviceclient.h"
#include "databasemigrationserviceclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  DatabaseMigrationServiceClient
 *
 * @brief  Client for AWS Database Migration Service
 *
 * <fullname>AWS Database Migration Service</fullname>
 *
 * AWS Database Migration Service (AWS DMS) can migrate your data to and from the most widely used commercial and
 * open-source databases such as Oracle, PostgreSQL, Microsoft SQL Server, Amazon Redshift, MariaDB, Amazon Aurora, MySQL,
 * and SAP Adaptive Server Enterprise (ASE). The service supports homogeneous migrations such as Oracle to Oracle, as well
 * as heterogeneous migrations between different database platforms, such as Oracle to MySQL or SQL Server to
 *
 * PostgreSQL>
 *
 * For more information about AWS DMS, see the AWS DMS user guide at <a
 * href="http://docs.aws.amazon.com/dms/latest/userguide/Welcome.html"> What Is AWS Database Migration Service? </a>
 */

/**
 * @brief  Constructs a new DatabaseMigrationServiceClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
DatabaseMigrationServiceClient::DatabaseMigrationServiceClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new DatabaseMigrationServiceClientPrivate(this), parent)
{
    Q_D(DatabaseMigrationServiceClient);
    d->apiVersion = QStringLiteral("2016-01-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("dms");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Database Migration Service");
    d->serviceName = QStringLiteral("dms");
}

/**
 * @brief  Constructs a new DatabaseMigrationServiceClient object.
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
DatabaseMigrationServiceClient::DatabaseMigrationServiceClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new DatabaseMigrationServiceClientPrivate(this), parent)
{
    Q_D(DatabaseMigrationServiceClient);
    d->apiVersion = QStringLiteral("2016-01-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("dms");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Database Migration Service");
    d->serviceName = QStringLiteral("dms");
}

/**
 * Adds metadata tags to a DMS resource, including replication instance, endpoint, security group, and migration task.
 * These tags can also be used with cost allocation reporting to track cost associated with DMS resources, or used in a
 * Condition statement in an IAM policy for
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AddTagsToResourceResponse * DatabaseMigrationServiceClient::addTagsToResource(const AddTagsToResourceRequest &request)
{
    return qobject_cast<AddTagsToResourceResponse *>(send(request));
}

/**
 * Creates an endpoint using the provided
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateEndpointResponse * DatabaseMigrationServiceClient::createEndpoint(const CreateEndpointRequest &request)
{
    return qobject_cast<CreateEndpointResponse *>(send(request));
}

/**
 * Creates an AWS DMS event notification subscription.
 *
 * </p
 *
 * You can specify the type of source (<code>SourceType</code>) you want to be notified of, provide a list of AWS DMS
 * source IDs (<code>SourceIds</code>) that triggers the events, and provide a list of event categories
 * (<code>EventCategories</code>) for events you want to be notified of. If you specify both the <code>SourceType</code>
 * and <code>SourceIds</code>, such as <code>SourceType = replication-instance</code> and <code>SourceIdentifier =
 * my-replinstance</code>, you will be notified of all the replication instance events for the specified source. If you
 * specify a <code>SourceType</code> but don't specify a <code>SourceIdentifier</code>, you receive notice of the events
 * for that source type for all your AWS DMS sources. If you don't specify either <code>SourceType</code> nor
 * <code>SourceIdentifier</code>, you will be notified of events generated from all AWS DMS sources belonging to your
 * customer
 *
 * account>
 *
 * For more information about AWS DMS events, see <a
 * href="http://docs.aws.amazon.com/dms/latest/userguide/CHAP_Events.html"> Working with Events and Notifications </a> in
 * the AWS Database MIgration Service User
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateEventSubscriptionResponse * DatabaseMigrationServiceClient::createEventSubscription(const CreateEventSubscriptionRequest &request)
{
    return qobject_cast<CreateEventSubscriptionResponse *>(send(request));
}

/**
 * Creates the replication instance using the specified
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateReplicationInstanceResponse * DatabaseMigrationServiceClient::createReplicationInstance(const CreateReplicationInstanceRequest &request)
{
    return qobject_cast<CreateReplicationInstanceResponse *>(send(request));
}

/**
 * Creates a replication subnet group given a list of the subnet IDs in a
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateReplicationSubnetGroupResponse * DatabaseMigrationServiceClient::createReplicationSubnetGroup(const CreateReplicationSubnetGroupRequest &request)
{
    return qobject_cast<CreateReplicationSubnetGroupResponse *>(send(request));
}

/**
 * Creates a replication task using the specified
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateReplicationTaskResponse * DatabaseMigrationServiceClient::createReplicationTask(const CreateReplicationTaskRequest &request)
{
    return qobject_cast<CreateReplicationTaskResponse *>(send(request));
}

/**
 * Deletes the specified certificate.
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteCertificateResponse * DatabaseMigrationServiceClient::deleteCertificate(const DeleteCertificateRequest &request)
{
    return qobject_cast<DeleteCertificateResponse *>(send(request));
}

/**
 * Deletes the specified
 *
 * endpoint> <note>
 *
 * All tasks associated with the endpoint must be deleted before you can delete the
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteEndpointResponse * DatabaseMigrationServiceClient::deleteEndpoint(const DeleteEndpointRequest &request)
{
    return qobject_cast<DeleteEndpointResponse *>(send(request));
}

/**
 * Deletes an AWS DMS event subscription.
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteEventSubscriptionResponse * DatabaseMigrationServiceClient::deleteEventSubscription(const DeleteEventSubscriptionRequest &request)
{
    return qobject_cast<DeleteEventSubscriptionResponse *>(send(request));
}

/**
 * Deletes the specified replication
 *
 * instance> <note>
 *
 * You must delete any migration tasks that are associated with the replication instance before you can delete
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteReplicationInstanceResponse * DatabaseMigrationServiceClient::deleteReplicationInstance(const DeleteReplicationInstanceRequest &request)
{
    return qobject_cast<DeleteReplicationInstanceResponse *>(send(request));
}

/**
 * Deletes a subnet
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteReplicationSubnetGroupResponse * DatabaseMigrationServiceClient::deleteReplicationSubnetGroup(const DeleteReplicationSubnetGroupRequest &request)
{
    return qobject_cast<DeleteReplicationSubnetGroupResponse *>(send(request));
}

/**
 * Deletes the specified replication
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteReplicationTaskResponse * DatabaseMigrationServiceClient::deleteReplicationTask(const DeleteReplicationTaskRequest &request)
{
    return qobject_cast<DeleteReplicationTaskResponse *>(send(request));
}

/**
 * Lists all of the AWS DMS attributes for a customer account. The attributes include AWS DMS quotas for the account, such
 * as the number of replication instances allowed. The description for a quota includes the quota name, current usage
 * toward that quota, and the quota's maximum
 *
 * value>
 *
 * This command does not take any
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeAccountAttributesResponse * DatabaseMigrationServiceClient::describeAccountAttributes(const DescribeAccountAttributesRequest &request)
{
    return qobject_cast<DescribeAccountAttributesResponse *>(send(request));
}

/**
 * Provides a description of the
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeCertificatesResponse * DatabaseMigrationServiceClient::describeCertificates(const DescribeCertificatesRequest &request)
{
    return qobject_cast<DescribeCertificatesResponse *>(send(request));
}

/**
 * Describes the status of the connections that have been made between the replication instance and an endpoint.
 * Connections are created when you test an
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeConnectionsResponse * DatabaseMigrationServiceClient::describeConnections(const DescribeConnectionsRequest &request)
{
    return qobject_cast<DescribeConnectionsResponse *>(send(request));
}

/**
 * Returns information about the type of endpoints
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeEndpointTypesResponse * DatabaseMigrationServiceClient::describeEndpointTypes(const DescribeEndpointTypesRequest &request)
{
    return qobject_cast<DescribeEndpointTypesResponse *>(send(request));
}

/**
 * Returns information about the endpoints for your account in the current
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeEndpointsResponse * DatabaseMigrationServiceClient::describeEndpoints(const DescribeEndpointsRequest &request)
{
    return qobject_cast<DescribeEndpointsResponse *>(send(request));
}

/**
 * Lists categories for all event source types, or, if specified, for a specified source type. You can see a list of the
 * event categories and source types in <a href="http://docs.aws.amazon.com/dms/latest/userguide/CHAP_Events.html"> Working
 * with Events and Notifications </a> in the AWS Database Migration Service User Guide.
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeEventCategoriesResponse * DatabaseMigrationServiceClient::describeEventCategories(const DescribeEventCategoriesRequest &request)
{
    return qobject_cast<DescribeEventCategoriesResponse *>(send(request));
}

/**
 * Lists all the event subscriptions for a customer account. The description of a subscription includes
 * <code>SubscriptionName</code>, <code>SNSTopicARN</code>, <code>CustomerID</code>, <code>SourceType</code>,
 * <code>SourceID</code>, <code>CreationTime</code>, and <code>Status</code>.
 *
 * </p
 *
 * If you specify <code>SubscriptionName</code>, this action lists the description for that
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeEventSubscriptionsResponse * DatabaseMigrationServiceClient::describeEventSubscriptions(const DescribeEventSubscriptionsRequest &request)
{
    return qobject_cast<DescribeEventSubscriptionsResponse *>(send(request));
}

/**
 * Lists events for a given source identifier and source type. You can also specify a start and end time. For more
 * information on AWS DMS events, see <a href="http://docs.aws.amazon.com/dms/latest/userguide/CHAP_Events.html"> Working
 * with Events and Notifications </a>.
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeEventsResponse * DatabaseMigrationServiceClient::describeEvents(const DescribeEventsRequest &request)
{
    return qobject_cast<DescribeEventsResponse *>(send(request));
}

/**
 * Returns information about the replication instance types that can be created in the specified
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeOrderableReplicationInstancesResponse * DatabaseMigrationServiceClient::describeOrderableReplicationInstances(const DescribeOrderableReplicationInstancesRequest &request)
{
    return qobject_cast<DescribeOrderableReplicationInstancesResponse *>(send(request));
}

/**
 * Returns the status of the RefreshSchemas
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeRefreshSchemasStatusResponse * DatabaseMigrationServiceClient::describeRefreshSchemasStatus(const DescribeRefreshSchemasStatusRequest &request)
{
    return qobject_cast<DescribeRefreshSchemasStatusResponse *>(send(request));
}

/**
 * Returns information about the task logs for the specified
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeReplicationInstanceTaskLogsResponse * DatabaseMigrationServiceClient::describeReplicationInstanceTaskLogs(const DescribeReplicationInstanceTaskLogsRequest &request)
{
    return qobject_cast<DescribeReplicationInstanceTaskLogsResponse *>(send(request));
}

/**
 * Returns information about replication instances for your account in the current
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeReplicationInstancesResponse * DatabaseMigrationServiceClient::describeReplicationInstances(const DescribeReplicationInstancesRequest &request)
{
    return qobject_cast<DescribeReplicationInstancesResponse *>(send(request));
}

/**
 * Returns information about the replication subnet
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeReplicationSubnetGroupsResponse * DatabaseMigrationServiceClient::describeReplicationSubnetGroups(const DescribeReplicationSubnetGroupsRequest &request)
{
    return qobject_cast<DescribeReplicationSubnetGroupsResponse *>(send(request));
}

/**
 * Returns the task assessment results from Amazon S3. This action always returns the latest
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeReplicationTaskAssessmentResultsResponse * DatabaseMigrationServiceClient::describeReplicationTaskAssessmentResults(const DescribeReplicationTaskAssessmentResultsRequest &request)
{
    return qobject_cast<DescribeReplicationTaskAssessmentResultsResponse *>(send(request));
}

/**
 * Returns information about replication tasks for your account in the current
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeReplicationTasksResponse * DatabaseMigrationServiceClient::describeReplicationTasks(const DescribeReplicationTasksRequest &request)
{
    return qobject_cast<DescribeReplicationTasksResponse *>(send(request));
}

/**
 * Returns information about the schema for the specified
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeSchemasResponse * DatabaseMigrationServiceClient::describeSchemas(const DescribeSchemasRequest &request)
{
    return qobject_cast<DescribeSchemasResponse *>(send(request));
}

/**
 * Returns table statistics on the database migration task, including table name, rows inserted, rows updated, and rows
 *
 * deleted>
 *
 * Note that the "last updated" column the DMS console only indicates the time that AWS DMS last updated the table
 * statistics record for a table. It does not indicate the time of the last update to the
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeTableStatisticsResponse * DatabaseMigrationServiceClient::describeTableStatistics(const DescribeTableStatisticsRequest &request)
{
    return qobject_cast<DescribeTableStatisticsResponse *>(send(request));
}

/**
 * Uploads the specified
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ImportCertificateResponse * DatabaseMigrationServiceClient::importCertificate(const ImportCertificateRequest &request)
{
    return qobject_cast<ImportCertificateResponse *>(send(request));
}

/**
 * Lists all tags for an AWS DMS
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListTagsForResourceResponse * DatabaseMigrationServiceClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/**
 * Modifies the specified
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ModifyEndpointResponse * DatabaseMigrationServiceClient::modifyEndpoint(const ModifyEndpointRequest &request)
{
    return qobject_cast<ModifyEndpointResponse *>(send(request));
}

/**
 * Modifies an existing AWS DMS event notification subscription.
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ModifyEventSubscriptionResponse * DatabaseMigrationServiceClient::modifyEventSubscription(const ModifyEventSubscriptionRequest &request)
{
    return qobject_cast<ModifyEventSubscriptionResponse *>(send(request));
}

/**
 * Modifies the replication instance to apply new settings. You can change one or more parameters by specifying these
 * parameters and the new values in the
 *
 * request>
 *
 * Some settings are applied during the maintenance
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ModifyReplicationInstanceResponse * DatabaseMigrationServiceClient::modifyReplicationInstance(const ModifyReplicationInstanceRequest &request)
{
    return qobject_cast<ModifyReplicationInstanceResponse *>(send(request));
}

/**
 * Modifies the settings for the specified replication subnet
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ModifyReplicationSubnetGroupResponse * DatabaseMigrationServiceClient::modifyReplicationSubnetGroup(const ModifyReplicationSubnetGroupRequest &request)
{
    return qobject_cast<ModifyReplicationSubnetGroupResponse *>(send(request));
}

/**
 * Modifies the specified replication
 *
 * task>
 *
 * You can't modify the task endpoints. The task must be stopped before you can modify it.
 *
 * </p
 *
 * For more information about AWS DMS tasks, see the AWS DMS user guide at <a
 * href="http://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.html"> Working with Migration Tasks </a>
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ModifyReplicationTaskResponse * DatabaseMigrationServiceClient::modifyReplicationTask(const ModifyReplicationTaskRequest &request)
{
    return qobject_cast<ModifyReplicationTaskResponse *>(send(request));
}

/**
 * Reboots a replication instance. Rebooting results in a momentary outage, until the replication instance becomes
 * available
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RebootReplicationInstanceResponse * DatabaseMigrationServiceClient::rebootReplicationInstance(const RebootReplicationInstanceRequest &request)
{
    return qobject_cast<RebootReplicationInstanceResponse *>(send(request));
}

/**
 * Populates the schema for the specified endpoint. This is an asynchronous operation and can take several minutes. You can
 * check the status of this operation by calling the DescribeRefreshSchemasStatus
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RefreshSchemasResponse * DatabaseMigrationServiceClient::refreshSchemas(const RefreshSchemasRequest &request)
{
    return qobject_cast<RefreshSchemasResponse *>(send(request));
}

/**
 * Reloads the target database table with the source data.
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ReloadTablesResponse * DatabaseMigrationServiceClient::reloadTables(const ReloadTablesRequest &request)
{
    return qobject_cast<ReloadTablesResponse *>(send(request));
}

/**
 * Removes metadata tags from a DMS
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RemoveTagsFromResourceResponse * DatabaseMigrationServiceClient::removeTagsFromResource(const RemoveTagsFromResourceRequest &request)
{
    return qobject_cast<RemoveTagsFromResourceResponse *>(send(request));
}

/**
 * Starts the replication
 *
 * task>
 *
 * For more information about AWS DMS tasks, see the AWS DMS user guide at <a
 * href="http://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.html"> Working with Migration Tasks </a>
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartReplicationTaskResponse * DatabaseMigrationServiceClient::startReplicationTask(const StartReplicationTaskRequest &request)
{
    return qobject_cast<StartReplicationTaskResponse *>(send(request));
}

/**
 * Starts the replication task assessment for unsupported data types in the source database.
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartReplicationTaskAssessmentResponse * DatabaseMigrationServiceClient::startReplicationTaskAssessment(const StartReplicationTaskAssessmentRequest &request)
{
    return qobject_cast<StartReplicationTaskAssessmentResponse *>(send(request));
}

/**
 * Stops the replication
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StopReplicationTaskResponse * DatabaseMigrationServiceClient::stopReplicationTask(const StopReplicationTaskRequest &request)
{
    return qobject_cast<StopReplicationTaskResponse *>(send(request));
}

/**
 * Tests the connection between the replication instance and the
 *
 * @param  request Request to send to AWS Database Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
TestConnectionResponse * DatabaseMigrationServiceClient::testConnection(const TestConnectionRequest &request)
{
    return qobject_cast<TestConnectionResponse *>(send(request));
}

/**
 * @internal
 *
 * @class  DatabaseMigrationServiceClientPrivate
 *
 * @brief  Private implementation for DatabaseMigrationServiceClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DatabaseMigrationServiceClientPrivate object.
 *
 * @param  q  Pointer to this object's public DatabaseMigrationServiceClient instance.
 */
DatabaseMigrationServiceClientPrivate::DatabaseMigrationServiceClientPrivate(DatabaseMigrationServiceClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace DatabaseMigrationService
} // namespace AWS
