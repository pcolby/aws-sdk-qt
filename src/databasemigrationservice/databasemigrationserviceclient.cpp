/*
    Copyright 2013-2019 Paul Colby

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

#include "databasemigrationserviceclient.h"
#include "databasemigrationserviceclient_p.h"

#include "core/awssignaturev4.h"
#include "addtagstoresourcerequest.h"
#include "addtagstoresourceresponse.h"
#include "createendpointrequest.h"
#include "createendpointresponse.h"
#include "createeventsubscriptionrequest.h"
#include "createeventsubscriptionresponse.h"
#include "createreplicationinstancerequest.h"
#include "createreplicationinstanceresponse.h"
#include "createreplicationsubnetgrouprequest.h"
#include "createreplicationsubnetgroupresponse.h"
#include "createreplicationtaskrequest.h"
#include "createreplicationtaskresponse.h"
#include "deletecertificaterequest.h"
#include "deletecertificateresponse.h"
#include "deleteendpointrequest.h"
#include "deleteendpointresponse.h"
#include "deleteeventsubscriptionrequest.h"
#include "deleteeventsubscriptionresponse.h"
#include "deletereplicationinstancerequest.h"
#include "deletereplicationinstanceresponse.h"
#include "deletereplicationsubnetgrouprequest.h"
#include "deletereplicationsubnetgroupresponse.h"
#include "deletereplicationtaskrequest.h"
#include "deletereplicationtaskresponse.h"
#include "describeaccountattributesrequest.h"
#include "describeaccountattributesresponse.h"
#include "describecertificatesrequest.h"
#include "describecertificatesresponse.h"
#include "describeconnectionsrequest.h"
#include "describeconnectionsresponse.h"
#include "describeendpointtypesrequest.h"
#include "describeendpointtypesresponse.h"
#include "describeendpointsrequest.h"
#include "describeendpointsresponse.h"
#include "describeeventcategoriesrequest.h"
#include "describeeventcategoriesresponse.h"
#include "describeeventsubscriptionsrequest.h"
#include "describeeventsubscriptionsresponse.h"
#include "describeeventsrequest.h"
#include "describeeventsresponse.h"
#include "describeorderablereplicationinstancesrequest.h"
#include "describeorderablereplicationinstancesresponse.h"
#include "describerefreshschemasstatusrequest.h"
#include "describerefreshschemasstatusresponse.h"
#include "describereplicationinstancetasklogsrequest.h"
#include "describereplicationinstancetasklogsresponse.h"
#include "describereplicationinstancesrequest.h"
#include "describereplicationinstancesresponse.h"
#include "describereplicationsubnetgroupsrequest.h"
#include "describereplicationsubnetgroupsresponse.h"
#include "describereplicationtaskassessmentresultsrequest.h"
#include "describereplicationtaskassessmentresultsresponse.h"
#include "describereplicationtasksrequest.h"
#include "describereplicationtasksresponse.h"
#include "describeschemasrequest.h"
#include "describeschemasresponse.h"
#include "describetablestatisticsrequest.h"
#include "describetablestatisticsresponse.h"
#include "importcertificaterequest.h"
#include "importcertificateresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "modifyendpointrequest.h"
#include "modifyendpointresponse.h"
#include "modifyeventsubscriptionrequest.h"
#include "modifyeventsubscriptionresponse.h"
#include "modifyreplicationinstancerequest.h"
#include "modifyreplicationinstanceresponse.h"
#include "modifyreplicationsubnetgrouprequest.h"
#include "modifyreplicationsubnetgroupresponse.h"
#include "modifyreplicationtaskrequest.h"
#include "modifyreplicationtaskresponse.h"
#include "rebootreplicationinstancerequest.h"
#include "rebootreplicationinstanceresponse.h"
#include "refreshschemasrequest.h"
#include "refreshschemasresponse.h"
#include "reloadtablesrequest.h"
#include "reloadtablesresponse.h"
#include "removetagsfromresourcerequest.h"
#include "removetagsfromresourceresponse.h"
#include "startreplicationtaskrequest.h"
#include "startreplicationtaskresponse.h"
#include "startreplicationtaskassessmentrequest.h"
#include "startreplicationtaskassessmentresponse.h"
#include "stopreplicationtaskrequest.h"
#include "stopreplicationtaskresponse.h"
#include "testconnectionrequest.h"
#include "testconnectionresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::DatabaseMigrationService
 * \brief Contains classess for accessing AWS Database Migration Service.
 *
 * \inmodule QtAwsDatabaseMigrationService
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::DatabaseMigrationServiceClient
 * \brief The DatabaseMigrationServiceClient class provides access to the AWS Database Migration Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsDatabaseMigrationService
 *
 *  <fullname>AWS Database Migration Service</fullname>
 * 
 *  AWS Database Migration Service (AWS DMS) can migrate your data to and from the most widely used commercial and
 *  open-source databases such as Oracle, PostgreSQL, Microsoft SQL Server, Amazon Redshift, MariaDB, Amazon Aurora, MySQL,
 *  and SAP Adaptive Server Enterprise (ASE). The service supports homogeneous migrations such as Oracle to Oracle, as well
 *  as heterogeneous migrations between different database platforms, such as Oracle to MySQL or SQL Server to
 * 
 *  PostgreSQL>
 * 
 *  For more information about AWS DMS, see <a href="http://docs.aws.amazon.com/dms/latest/userguide/Welcome.html">What Is
 *  AWS Database Migration Service?</a> in the <i>AWS Database Migration User Guide.</i>
 */

/*!
 * \brief Constructs a DatabaseMigrationServiceClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
DatabaseMigrationServiceClient::DatabaseMigrationServiceClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new DatabaseMigrationServiceClientPrivate(this), parent)
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

/*!
 * \overload DatabaseMigrationServiceClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
DatabaseMigrationServiceClient::DatabaseMigrationServiceClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new DatabaseMigrationServiceClientPrivate(this), parent)
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

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * AddTagsToResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds metadata tags to an AWS DMS resource, including replication instance, endpoint, security group, and migration task.
 * These tags can also be used with cost allocation reporting to track cost associated with DMS resources, or used in a
 * Condition statement in an IAM policy for
 */
AddTagsToResourceResponse * DatabaseMigrationServiceClient::addTagsToResource(const AddTagsToResourceRequest &request)
{
    return qobject_cast<AddTagsToResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * CreateEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an endpoint using the provided
 */
CreateEndpointResponse * DatabaseMigrationServiceClient::createEndpoint(const CreateEndpointRequest &request)
{
    return qobject_cast<CreateEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * CreateEventSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 * href="http://docs.aws.amazon.com/dms/latest/userguide/CHAP_Events.html">Working with Events and Notifications</a> in the
 * <i>AWS Database Migration Service User Guide.</i>
 */
CreateEventSubscriptionResponse * DatabaseMigrationServiceClient::createEventSubscription(const CreateEventSubscriptionRequest &request)
{
    return qobject_cast<CreateEventSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * CreateReplicationInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates the replication instance using the specified
 */
CreateReplicationInstanceResponse * DatabaseMigrationServiceClient::createReplicationInstance(const CreateReplicationInstanceRequest &request)
{
    return qobject_cast<CreateReplicationInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * CreateReplicationSubnetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a replication subnet group given a list of the subnet IDs in a
 */
CreateReplicationSubnetGroupResponse * DatabaseMigrationServiceClient::createReplicationSubnetGroup(const CreateReplicationSubnetGroupRequest &request)
{
    return qobject_cast<CreateReplicationSubnetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * CreateReplicationTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a replication task using the specified
 */
CreateReplicationTaskResponse * DatabaseMigrationServiceClient::createReplicationTask(const CreateReplicationTaskRequest &request)
{
    return qobject_cast<CreateReplicationTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * DeleteCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified certificate.
 */
DeleteCertificateResponse * DatabaseMigrationServiceClient::deleteCertificate(const DeleteCertificateRequest &request)
{
    return qobject_cast<DeleteCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * DeleteEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 *
 * endpoint> <note>
 *
 * All tasks associated with the endpoint must be deleted before you can delete the
 */
DeleteEndpointResponse * DatabaseMigrationServiceClient::deleteEndpoint(const DeleteEndpointRequest &request)
{
    return qobject_cast<DeleteEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * DeleteEventSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an AWS DMS event subscription.
 */
DeleteEventSubscriptionResponse * DatabaseMigrationServiceClient::deleteEventSubscription(const DeleteEventSubscriptionRequest &request)
{
    return qobject_cast<DeleteEventSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * DeleteReplicationInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified replication
 *
 * instance> <note>
 *
 * You must delete any migration tasks that are associated with the replication instance before you can delete
 */
DeleteReplicationInstanceResponse * DatabaseMigrationServiceClient::deleteReplicationInstance(const DeleteReplicationInstanceRequest &request)
{
    return qobject_cast<DeleteReplicationInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * DeleteReplicationSubnetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a subnet
 */
DeleteReplicationSubnetGroupResponse * DatabaseMigrationServiceClient::deleteReplicationSubnetGroup(const DeleteReplicationSubnetGroupRequest &request)
{
    return qobject_cast<DeleteReplicationSubnetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * DeleteReplicationTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified replication
 */
DeleteReplicationTaskResponse * DatabaseMigrationServiceClient::deleteReplicationTask(const DeleteReplicationTaskRequest &request)
{
    return qobject_cast<DeleteReplicationTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * DescribeAccountAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all of the AWS DMS attributes for a customer account. The attributes include AWS DMS quotas for the account, such
 * as the number of replication instances allowed. The description for a quota includes the quota name, current usage
 * toward that quota, and the quota's maximum
 *
 * value>
 *
 * This command does not take any
 */
DescribeAccountAttributesResponse * DatabaseMigrationServiceClient::describeAccountAttributes(const DescribeAccountAttributesRequest &request)
{
    return qobject_cast<DescribeAccountAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * DescribeCertificatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a description of the
 */
DescribeCertificatesResponse * DatabaseMigrationServiceClient::describeCertificates(const DescribeCertificatesRequest &request)
{
    return qobject_cast<DescribeCertificatesResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * DescribeConnectionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the status of the connections that have been made between the replication instance and an endpoint.
 * Connections are created when you test an
 */
DescribeConnectionsResponse * DatabaseMigrationServiceClient::describeConnections(const DescribeConnectionsRequest &request)
{
    return qobject_cast<DescribeConnectionsResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * DescribeEndpointTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the type of endpoints
 */
DescribeEndpointTypesResponse * DatabaseMigrationServiceClient::describeEndpointTypes(const DescribeEndpointTypesRequest &request)
{
    return qobject_cast<DescribeEndpointTypesResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * DescribeEndpointsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the endpoints for your account in the current
 */
DescribeEndpointsResponse * DatabaseMigrationServiceClient::describeEndpoints(const DescribeEndpointsRequest &request)
{
    return qobject_cast<DescribeEndpointsResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * DescribeEventCategoriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists categories for all event source types, or, if specified, for a specified source type. You can see a list of the
 * event categories and source types in <a href="http://docs.aws.amazon.com/dms/latest/userguide/CHAP_Events.html">Working
 * with Events and Notifications</a> in the <i>AWS Database Migration Service User Guide.</i>
 */
DescribeEventCategoriesResponse * DatabaseMigrationServiceClient::describeEventCategories(const DescribeEventCategoriesRequest &request)
{
    return qobject_cast<DescribeEventCategoriesResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * DescribeEventSubscriptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the event subscriptions for a customer account. The description of a subscription includes
 * <code>SubscriptionName</code>, <code>SNSTopicARN</code>, <code>CustomerID</code>, <code>SourceType</code>,
 * <code>SourceID</code>, <code>CreationTime</code>, and <code>Status</code>.
 *
 * </p
 *
 * If you specify <code>SubscriptionName</code>, this action lists the description for that
 */
DescribeEventSubscriptionsResponse * DatabaseMigrationServiceClient::describeEventSubscriptions(const DescribeEventSubscriptionsRequest &request)
{
    return qobject_cast<DescribeEventSubscriptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * DescribeEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists events for a given source identifier and source type. You can also specify a start and end time. For more
 * information on AWS DMS events, see <a href="http://docs.aws.amazon.com/dms/latest/userguide/CHAP_Events.html">Working
 * with Events and Notifications</a> in the <i>AWS Database Migration User Guide.</i>
 */
DescribeEventsResponse * DatabaseMigrationServiceClient::describeEvents(const DescribeEventsRequest &request)
{
    return qobject_cast<DescribeEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * DescribeOrderableReplicationInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the replication instance types that can be created in the specified
 */
DescribeOrderableReplicationInstancesResponse * DatabaseMigrationServiceClient::describeOrderableReplicationInstances(const DescribeOrderableReplicationInstancesRequest &request)
{
    return qobject_cast<DescribeOrderableReplicationInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * DescribeRefreshSchemasStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the status of the RefreshSchemas
 */
DescribeRefreshSchemasStatusResponse * DatabaseMigrationServiceClient::describeRefreshSchemasStatus(const DescribeRefreshSchemasStatusRequest &request)
{
    return qobject_cast<DescribeRefreshSchemasStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * DescribeReplicationInstanceTaskLogsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the task logs for the specified
 */
DescribeReplicationInstanceTaskLogsResponse * DatabaseMigrationServiceClient::describeReplicationInstanceTaskLogs(const DescribeReplicationInstanceTaskLogsRequest &request)
{
    return qobject_cast<DescribeReplicationInstanceTaskLogsResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * DescribeReplicationInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about replication instances for your account in the current
 */
DescribeReplicationInstancesResponse * DatabaseMigrationServiceClient::describeReplicationInstances(const DescribeReplicationInstancesRequest &request)
{
    return qobject_cast<DescribeReplicationInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * DescribeReplicationSubnetGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the replication subnet
 */
DescribeReplicationSubnetGroupsResponse * DatabaseMigrationServiceClient::describeReplicationSubnetGroups(const DescribeReplicationSubnetGroupsRequest &request)
{
    return qobject_cast<DescribeReplicationSubnetGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * DescribeReplicationTaskAssessmentResultsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the task assessment results from Amazon S3. This action always returns the latest
 */
DescribeReplicationTaskAssessmentResultsResponse * DatabaseMigrationServiceClient::describeReplicationTaskAssessmentResults(const DescribeReplicationTaskAssessmentResultsRequest &request)
{
    return qobject_cast<DescribeReplicationTaskAssessmentResultsResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * DescribeReplicationTasksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about replication tasks for your account in the current
 */
DescribeReplicationTasksResponse * DatabaseMigrationServiceClient::describeReplicationTasks(const DescribeReplicationTasksRequest &request)
{
    return qobject_cast<DescribeReplicationTasksResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * DescribeSchemasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the schema for the specified
 */
DescribeSchemasResponse * DatabaseMigrationServiceClient::describeSchemas(const DescribeSchemasRequest &request)
{
    return qobject_cast<DescribeSchemasResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * DescribeTableStatisticsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns table statistics on the database migration task, including table name, rows inserted, rows updated, and rows
 *
 * deleted>
 *
 * Note that the "last updated" column the DMS console only indicates the time that AWS DMS last updated the table
 * statistics record for a table. It does not indicate the time of the last update to the
 */
DescribeTableStatisticsResponse * DatabaseMigrationServiceClient::describeTableStatistics(const DescribeTableStatisticsRequest &request)
{
    return qobject_cast<DescribeTableStatisticsResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * ImportCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Uploads the specified
 */
ImportCertificateResponse * DatabaseMigrationServiceClient::importCertificate(const ImportCertificateRequest &request)
{
    return qobject_cast<ImportCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all tags for an AWS DMS
 */
ListTagsForResourceResponse * DatabaseMigrationServiceClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * ModifyEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the specified
 */
ModifyEndpointResponse * DatabaseMigrationServiceClient::modifyEndpoint(const ModifyEndpointRequest &request)
{
    return qobject_cast<ModifyEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * ModifyEventSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies an existing AWS DMS event notification subscription.
 */
ModifyEventSubscriptionResponse * DatabaseMigrationServiceClient::modifyEventSubscription(const ModifyEventSubscriptionRequest &request)
{
    return qobject_cast<ModifyEventSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * ModifyReplicationInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the replication instance to apply new settings. You can change one or more parameters by specifying these
 * parameters and the new values in the
 *
 * request>
 *
 * Some settings are applied during the maintenance
 */
ModifyReplicationInstanceResponse * DatabaseMigrationServiceClient::modifyReplicationInstance(const ModifyReplicationInstanceRequest &request)
{
    return qobject_cast<ModifyReplicationInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * ModifyReplicationSubnetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the settings for the specified replication subnet
 */
ModifyReplicationSubnetGroupResponse * DatabaseMigrationServiceClient::modifyReplicationSubnetGroup(const ModifyReplicationSubnetGroupRequest &request)
{
    return qobject_cast<ModifyReplicationSubnetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * ModifyReplicationTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the specified replication
 *
 * task>
 *
 * You can't modify the task endpoints. The task must be stopped before you can modify it.
 *
 * </p
 *
 * For more information about AWS DMS tasks, see <a
 * href="http://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.html">Working with Migration Tasks</a> in the <i>AWS
 * Database Migration Service User
 */
ModifyReplicationTaskResponse * DatabaseMigrationServiceClient::modifyReplicationTask(const ModifyReplicationTaskRequest &request)
{
    return qobject_cast<ModifyReplicationTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * RebootReplicationInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Reboots a replication instance. Rebooting results in a momentary outage, until the replication instance becomes
 * available
 */
RebootReplicationInstanceResponse * DatabaseMigrationServiceClient::rebootReplicationInstance(const RebootReplicationInstanceRequest &request)
{
    return qobject_cast<RebootReplicationInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * RefreshSchemasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Populates the schema for the specified endpoint. This is an asynchronous operation and can take several minutes. You can
 * check the status of this operation by calling the DescribeRefreshSchemasStatus
 */
RefreshSchemasResponse * DatabaseMigrationServiceClient::refreshSchemas(const RefreshSchemasRequest &request)
{
    return qobject_cast<RefreshSchemasResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * ReloadTablesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Reloads the target database table with the source data.
 */
ReloadTablesResponse * DatabaseMigrationServiceClient::reloadTables(const ReloadTablesRequest &request)
{
    return qobject_cast<ReloadTablesResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * RemoveTagsFromResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes metadata tags from a DMS
 */
RemoveTagsFromResourceResponse * DatabaseMigrationServiceClient::removeTagsFromResource(const RemoveTagsFromResourceRequest &request)
{
    return qobject_cast<RemoveTagsFromResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * StartReplicationTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts the replication
 *
 * task>
 *
 * For more information about AWS DMS tasks, see <a
 * href="http://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.html">Working with Migration Tasks </a> in the <i>AWS
 * Database Migration Service User Guide.</i>
 */
StartReplicationTaskResponse * DatabaseMigrationServiceClient::startReplicationTask(const StartReplicationTaskRequest &request)
{
    return qobject_cast<StartReplicationTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * StartReplicationTaskAssessmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts the replication task assessment for unsupported data types in the source database.
 */
StartReplicationTaskAssessmentResponse * DatabaseMigrationServiceClient::startReplicationTaskAssessment(const StartReplicationTaskAssessmentRequest &request)
{
    return qobject_cast<StartReplicationTaskAssessmentResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * StopReplicationTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops the replication
 */
StopReplicationTaskResponse * DatabaseMigrationServiceClient::stopReplicationTask(const StopReplicationTaskRequest &request)
{
    return qobject_cast<StopReplicationTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationServiceClient service, and returns a pointer to an
 * TestConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Tests the connection between the replication instance and the
 */
TestConnectionResponse * DatabaseMigrationServiceClient::testConnection(const TestConnectionRequest &request)
{
    return qobject_cast<TestConnectionResponse *>(send(request));
}

/*!
 * \class QtAws::DatabaseMigrationService::DatabaseMigrationServiceClientPrivate
 * \brief The DatabaseMigrationServiceClientPrivate class provides private implementation for DatabaseMigrationServiceClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsDatabaseMigrationService
 */

/*!
 * Constructs a DatabaseMigrationServiceClientPrivate object with public implementation \a q.
 */
DatabaseMigrationServiceClientPrivate::DatabaseMigrationServiceClientPrivate(DatabaseMigrationServiceClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace DatabaseMigrationService
} // namespace QtAws
