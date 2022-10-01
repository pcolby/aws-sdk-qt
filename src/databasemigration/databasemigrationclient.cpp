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

#include "databasemigrationclient.h"
#include "databasemigrationclient_p.h"

#include "core/awssignaturev4.h"
#include "addtagstoresourcerequest.h"
#include "addtagstoresourceresponse.h"
#include "applypendingmaintenanceactionrequest.h"
#include "applypendingmaintenanceactionresponse.h"
#include "cancelreplicationtaskassessmentrunrequest.h"
#include "cancelreplicationtaskassessmentrunresponse.h"
#include "createendpointrequest.h"
#include "createendpointresponse.h"
#include "createeventsubscriptionrequest.h"
#include "createeventsubscriptionresponse.h"
#include "createfleetadvisorcollectorrequest.h"
#include "createfleetadvisorcollectorresponse.h"
#include "createreplicationinstancerequest.h"
#include "createreplicationinstanceresponse.h"
#include "createreplicationsubnetgrouprequest.h"
#include "createreplicationsubnetgroupresponse.h"
#include "createreplicationtaskrequest.h"
#include "createreplicationtaskresponse.h"
#include "deletecertificaterequest.h"
#include "deletecertificateresponse.h"
#include "deleteconnectionrequest.h"
#include "deleteconnectionresponse.h"
#include "deleteendpointrequest.h"
#include "deleteendpointresponse.h"
#include "deleteeventsubscriptionrequest.h"
#include "deleteeventsubscriptionresponse.h"
#include "deletefleetadvisorcollectorrequest.h"
#include "deletefleetadvisorcollectorresponse.h"
#include "deletefleetadvisordatabasesrequest.h"
#include "deletefleetadvisordatabasesresponse.h"
#include "deletereplicationinstancerequest.h"
#include "deletereplicationinstanceresponse.h"
#include "deletereplicationsubnetgrouprequest.h"
#include "deletereplicationsubnetgroupresponse.h"
#include "deletereplicationtaskrequest.h"
#include "deletereplicationtaskresponse.h"
#include "deletereplicationtaskassessmentrunrequest.h"
#include "deletereplicationtaskassessmentrunresponse.h"
#include "describeaccountattributesrequest.h"
#include "describeaccountattributesresponse.h"
#include "describeapplicableindividualassessmentsrequest.h"
#include "describeapplicableindividualassessmentsresponse.h"
#include "describecertificatesrequest.h"
#include "describecertificatesresponse.h"
#include "describeconnectionsrequest.h"
#include "describeconnectionsresponse.h"
#include "describeendpointsettingsrequest.h"
#include "describeendpointsettingsresponse.h"
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
#include "describefleetadvisorcollectorsrequest.h"
#include "describefleetadvisorcollectorsresponse.h"
#include "describefleetadvisordatabasesrequest.h"
#include "describefleetadvisordatabasesresponse.h"
#include "describefleetadvisorlsaanalysisrequest.h"
#include "describefleetadvisorlsaanalysisresponse.h"
#include "describefleetadvisorschemaobjectsummaryrequest.h"
#include "describefleetadvisorschemaobjectsummaryresponse.h"
#include "describefleetadvisorschemasrequest.h"
#include "describefleetadvisorschemasresponse.h"
#include "describeorderablereplicationinstancesrequest.h"
#include "describeorderablereplicationinstancesresponse.h"
#include "describependingmaintenanceactionsrequest.h"
#include "describependingmaintenanceactionsresponse.h"
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
#include "describereplicationtaskassessmentrunsrequest.h"
#include "describereplicationtaskassessmentrunsresponse.h"
#include "describereplicationtaskindividualassessmentsrequest.h"
#include "describereplicationtaskindividualassessmentsresponse.h"
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
#include "movereplicationtaskrequest.h"
#include "movereplicationtaskresponse.h"
#include "rebootreplicationinstancerequest.h"
#include "rebootreplicationinstanceresponse.h"
#include "refreshschemasrequest.h"
#include "refreshschemasresponse.h"
#include "reloadtablesrequest.h"
#include "reloadtablesresponse.h"
#include "removetagsfromresourcerequest.h"
#include "removetagsfromresourceresponse.h"
#include "runfleetadvisorlsaanalysisrequest.h"
#include "runfleetadvisorlsaanalysisresponse.h"
#include "startreplicationtaskrequest.h"
#include "startreplicationtaskresponse.h"
#include "startreplicationtaskassessmentrequest.h"
#include "startreplicationtaskassessmentresponse.h"
#include "startreplicationtaskassessmentrunrequest.h"
#include "startreplicationtaskassessmentrunresponse.h"
#include "stopreplicationtaskrequest.h"
#include "stopreplicationtaskresponse.h"
#include "testconnectionrequest.h"
#include "testconnectionresponse.h"
#include "updatesubscriptionstoeventbridgerequest.h"
#include "updatesubscriptionstoeventbridgeresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::DatabaseMigration
 * \brief Contains classess for accessing AWS Database Migration Service.
 *
 * \inmodule QtAwsDatabaseMigration
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DatabaseMigrationClient
 * \brief The DatabaseMigrationClient class provides access to the AWS Database Migration Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsDatabaseMigration
 *
 *  <fullname>Database Migration Service</fullname>
 * 
 *  Database Migration Service (DMS) can migrate your data to and from the most widely used commercial and open-source
 *  databases such as Oracle, PostgreSQL, Microsoft SQL Server, Amazon Redshift, MariaDB, Amazon Aurora, MySQL, and SAP
 *  Adaptive Server Enterprise (ASE). The service supports homogeneous migrations such as Oracle to Oracle, as well as
 *  heterogeneous migrations between different database platforms, such as Oracle to MySQL or SQL Server to
 * 
 *  PostgreSQL>
 * 
 *  For more information about DMS, see <a href="https://docs.aws.amazon.com/dms/latest/userguide/Welcome.html">What Is
 *  Database Migration Service?</a> in the <i>Database Migration Service User Guide.</i>
 */

/*!
 * \brief Constructs a DatabaseMigrationClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
DatabaseMigrationClient::DatabaseMigrationClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new DatabaseMigrationClientPrivate(this), parent)
{
    Q_D(DatabaseMigrationClient);
    d->apiVersion = QStringLiteral("2016-01-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("dms");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Database Migration Service");
    d->serviceName = QStringLiteral("dms");
}

/*!
 * \overload DatabaseMigrationClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
DatabaseMigrationClient::DatabaseMigrationClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new DatabaseMigrationClientPrivate(this), parent)
{
    Q_D(DatabaseMigrationClient);
    d->apiVersion = QStringLiteral("2016-01-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("dms");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Database Migration Service");
    d->serviceName = QStringLiteral("dms");
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * AddTagsToResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds metadata tags to an DMS resource, including replication instance, endpoint, security group, and migration task.
 * These tags can also be used with cost allocation reporting to track cost associated with DMS resources, or used in a
 * Condition statement in an IAM policy for DMS. For more information, see <a
 * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_Tag.html"> <code>Tag</code> </a> data type
 */
AddTagsToResourceResponse * DatabaseMigrationClient::addTagsToResource(const AddTagsToResourceRequest &request)
{
    return qobject_cast<AddTagsToResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * ApplyPendingMaintenanceActionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Applies a pending maintenance action to a resource (for example, to a replication
 */
ApplyPendingMaintenanceActionResponse * DatabaseMigrationClient::applyPendingMaintenanceAction(const ApplyPendingMaintenanceActionRequest &request)
{
    return qobject_cast<ApplyPendingMaintenanceActionResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * CancelReplicationTaskAssessmentRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels a single premigration assessment
 *
 * run>
 *
 * This operation prevents any individual assessments from running if they haven't started running. It also attempts to
 * cancel any individual assessments that are currently
 */
CancelReplicationTaskAssessmentRunResponse * DatabaseMigrationClient::cancelReplicationTaskAssessmentRun(const CancelReplicationTaskAssessmentRunRequest &request)
{
    return qobject_cast<CancelReplicationTaskAssessmentRunResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * CreateEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an endpoint using the provided
 *
 * settings> <note>
 *
 * For a MySQL source or target endpoint, don't explicitly specify the database using the <code>DatabaseName</code> request
 * parameter on the <code>CreateEndpoint</code> API call. Specifying <code>DatabaseName</code> when you create a MySQL
 * endpoint replicates all the task tables to this single database. For MySQL endpoints, you specify the database only when
 * you specify the schema in the table-mapping rules of the DMS
 */
CreateEndpointResponse * DatabaseMigrationClient::createEndpoint(const CreateEndpointRequest &request)
{
    return qobject_cast<CreateEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * CreateEventSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an DMS event notification subscription.
 *
 * </p
 *
 * You can specify the type of source (<code>SourceType</code>) you want to be notified of, provide a list of DMS source
 * IDs (<code>SourceIds</code>) that triggers the events, and provide a list of event categories
 * (<code>EventCategories</code>) for events you want to be notified of. If you specify both the <code>SourceType</code>
 * and <code>SourceIds</code>, such as <code>SourceType = replication-instance</code> and <code>SourceIdentifier =
 * my-replinstance</code>, you will be notified of all the replication instance events for the specified source. If you
 * specify a <code>SourceType</code> but don't specify a <code>SourceIdentifier</code>, you receive notice of the events
 * for that source type for all your DMS sources. If you don't specify either <code>SourceType</code> nor
 * <code>SourceIdentifier</code>, you will be notified of events generated from all DMS sources belonging to your customer
 *
 * account>
 *
 * For more information about DMS events, see <a
 * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Events.html">Working with Events and Notifications</a> in
 * the <i>Database Migration Service User Guide.</i>
 */
CreateEventSubscriptionResponse * DatabaseMigrationClient::createEventSubscription(const CreateEventSubscriptionRequest &request)
{
    return qobject_cast<CreateEventSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * CreateFleetAdvisorCollectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Fleet Advisor collector using the specified
 */
CreateFleetAdvisorCollectorResponse * DatabaseMigrationClient::createFleetAdvisorCollector(const CreateFleetAdvisorCollectorRequest &request)
{
    return qobject_cast<CreateFleetAdvisorCollectorResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * CreateReplicationInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates the replication instance using the specified
 *
 * parameters>
 *
 * DMS requires that your account have certain roles with appropriate permissions before you can create a replication
 * instance. For information on the required roles, see <a
 * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Security.html#CHAP_Security.APIRole">Creating the IAM Roles
 * to Use With the CLI and DMS API</a>. For information on the required permissions, see <a
 * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Security.html#CHAP_Security.IAMPermissions">IAM Permissions
 * Needed to Use
 */
CreateReplicationInstanceResponse * DatabaseMigrationClient::createReplicationInstance(const CreateReplicationInstanceRequest &request)
{
    return qobject_cast<CreateReplicationInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * CreateReplicationSubnetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a replication subnet group given a list of the subnet IDs in a
 *
 * VPC>
 *
 * The VPC needs to have at least one subnet in at least two availability zones in the Amazon Web Services Region,
 * otherwise the service will throw a <code>ReplicationSubnetGroupDoesNotCoverEnoughAZs</code>
 */
CreateReplicationSubnetGroupResponse * DatabaseMigrationClient::createReplicationSubnetGroup(const CreateReplicationSubnetGroupRequest &request)
{
    return qobject_cast<CreateReplicationSubnetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * CreateReplicationTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a replication task using the specified
 */
CreateReplicationTaskResponse * DatabaseMigrationClient::createReplicationTask(const CreateReplicationTaskRequest &request)
{
    return qobject_cast<CreateReplicationTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * DeleteCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified certificate.
 */
DeleteCertificateResponse * DatabaseMigrationClient::deleteCertificate(const DeleteCertificateRequest &request)
{
    return qobject_cast<DeleteCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * DeleteConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the connection between a replication instance and an
 */
DeleteConnectionResponse * DatabaseMigrationClient::deleteConnection(const DeleteConnectionRequest &request)
{
    return qobject_cast<DeleteConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * DeleteEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 *
 * endpoint> <note>
 *
 * All tasks associated with the endpoint must be deleted before you can delete the
 *
 * endpoint> </note>
 */
DeleteEndpointResponse * DatabaseMigrationClient::deleteEndpoint(const DeleteEndpointRequest &request)
{
    return qobject_cast<DeleteEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * DeleteEventSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an DMS event subscription.
 */
DeleteEventSubscriptionResponse * DatabaseMigrationClient::deleteEventSubscription(const DeleteEventSubscriptionRequest &request)
{
    return qobject_cast<DeleteEventSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * DeleteFleetAdvisorCollectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified Fleet Advisor
 */
DeleteFleetAdvisorCollectorResponse * DatabaseMigrationClient::deleteFleetAdvisorCollector(const DeleteFleetAdvisorCollectorRequest &request)
{
    return qobject_cast<DeleteFleetAdvisorCollectorResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * DeleteFleetAdvisorDatabasesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified Fleet Advisor collector
 */
DeleteFleetAdvisorDatabasesResponse * DatabaseMigrationClient::deleteFleetAdvisorDatabases(const DeleteFleetAdvisorDatabasesRequest &request)
{
    return qobject_cast<DeleteFleetAdvisorDatabasesResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * DeleteReplicationInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified replication
 *
 * instance> <note>
 *
 * You must delete any migration tasks that are associated with the replication instance before you can delete
 *
 * it> </note>
 */
DeleteReplicationInstanceResponse * DatabaseMigrationClient::deleteReplicationInstance(const DeleteReplicationInstanceRequest &request)
{
    return qobject_cast<DeleteReplicationInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * DeleteReplicationSubnetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a subnet
 */
DeleteReplicationSubnetGroupResponse * DatabaseMigrationClient::deleteReplicationSubnetGroup(const DeleteReplicationSubnetGroupRequest &request)
{
    return qobject_cast<DeleteReplicationSubnetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * DeleteReplicationTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified replication
 */
DeleteReplicationTaskResponse * DatabaseMigrationClient::deleteReplicationTask(const DeleteReplicationTaskRequest &request)
{
    return qobject_cast<DeleteReplicationTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * DeleteReplicationTaskAssessmentRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the record of a single premigration assessment
 *
 * run>
 *
 * This operation removes all metadata that DMS maintains about this assessment run. However, the operation leaves
 * untouched all information about this assessment run that is stored in your Amazon S3
 */
DeleteReplicationTaskAssessmentRunResponse * DatabaseMigrationClient::deleteReplicationTaskAssessmentRun(const DeleteReplicationTaskAssessmentRunRequest &request)
{
    return qobject_cast<DeleteReplicationTaskAssessmentRunResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * DescribeAccountAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all of the DMS attributes for a customer account. These attributes include DMS quotas for the account and a unique
 * account identifier in a particular DMS region. DMS quotas include a list of resource quotas supported by the account,
 * such as the number of replication instances allowed. The description for each resource quota, includes the quota name,
 * current usage toward that quota, and the quota's maximum value. DMS uses the unique account identifier to name each
 * artifact used by DMS in the given
 *
 * region>
 *
 * This command does not take any
 */
DescribeAccountAttributesResponse * DatabaseMigrationClient::describeAccountAttributes(const DescribeAccountAttributesRequest &request)
{
    return qobject_cast<DescribeAccountAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * DescribeApplicableIndividualAssessmentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a list of individual assessments that you can specify for a new premigration assessment run, given one or more
 *
 * parameters>
 *
 * If you specify an existing migration task, this operation provides the default individual assessments you can specify
 * for that task. Otherwise, the specified parameters model elements of a possible migration task on which to base a
 * premigration assessment
 *
 * run>
 *
 * To use these migration task modeling parameters, you must specify an existing replication instance, a source database
 * engine, a target database engine, and a migration type. This combination of parameters potentially limits the default
 * individual assessments available for an assessment run created for a corresponding migration
 *
 * task>
 *
 * If you specify no parameters, this operation provides a list of all possible individual assessments that you can specify
 * for an assessment run. If you specify any one of the task modeling parameters, you must specify all of them or the
 * operation cannot provide a list of individual assessments. The only parameter that you can specify alone is for an
 * existing migration task. The specified task definition then determines the default list of individual assessments that
 * you can specify in an assessment run for the
 */
DescribeApplicableIndividualAssessmentsResponse * DatabaseMigrationClient::describeApplicableIndividualAssessments(const DescribeApplicableIndividualAssessmentsRequest &request)
{
    return qobject_cast<DescribeApplicableIndividualAssessmentsResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * DescribeCertificatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a description of the
 */
DescribeCertificatesResponse * DatabaseMigrationClient::describeCertificates(const DescribeCertificatesRequest &request)
{
    return qobject_cast<DescribeCertificatesResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * DescribeConnectionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the status of the connections that have been made between the replication instance and an endpoint.
 * Connections are created when you test an
 */
DescribeConnectionsResponse * DatabaseMigrationClient::describeConnections(const DescribeConnectionsRequest &request)
{
    return qobject_cast<DescribeConnectionsResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * DescribeEndpointSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the possible endpoint settings available when you create an endpoint for a specific database
 */
DescribeEndpointSettingsResponse * DatabaseMigrationClient::describeEndpointSettings(const DescribeEndpointSettingsRequest &request)
{
    return qobject_cast<DescribeEndpointSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * DescribeEndpointTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the type of endpoints
 */
DescribeEndpointTypesResponse * DatabaseMigrationClient::describeEndpointTypes(const DescribeEndpointTypesRequest &request)
{
    return qobject_cast<DescribeEndpointTypesResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * DescribeEndpointsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the endpoints for your account in the current
 */
DescribeEndpointsResponse * DatabaseMigrationClient::describeEndpoints(const DescribeEndpointsRequest &request)
{
    return qobject_cast<DescribeEndpointsResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * DescribeEventCategoriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists categories for all event source types, or, if specified, for a specified source type. You can see a list of the
 * event categories and source types in <a href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Events.html">Working
 * with Events and Notifications</a> in the <i>Database Migration Service User Guide.</i>
 */
DescribeEventCategoriesResponse * DatabaseMigrationClient::describeEventCategories(const DescribeEventCategoriesRequest &request)
{
    return qobject_cast<DescribeEventCategoriesResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
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
DescribeEventSubscriptionsResponse * DatabaseMigrationClient::describeEventSubscriptions(const DescribeEventSubscriptionsRequest &request)
{
    return qobject_cast<DescribeEventSubscriptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * DescribeEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists events for a given source identifier and source type. You can also specify a start and end time. For more
 * information on DMS events, see <a href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Events.html">Working with
 * Events and Notifications</a> in the <i>Database Migration Service User Guide.</i>
 */
DescribeEventsResponse * DatabaseMigrationClient::describeEvents(const DescribeEventsRequest &request)
{
    return qobject_cast<DescribeEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * DescribeFleetAdvisorCollectorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the Fleet Advisor collectors in your
 */
DescribeFleetAdvisorCollectorsResponse * DatabaseMigrationClient::describeFleetAdvisorCollectors(const DescribeFleetAdvisorCollectorsRequest &request)
{
    return qobject_cast<DescribeFleetAdvisorCollectorsResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * DescribeFleetAdvisorDatabasesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of Fleet Advisor databases in your
 */
DescribeFleetAdvisorDatabasesResponse * DatabaseMigrationClient::describeFleetAdvisorDatabases(const DescribeFleetAdvisorDatabasesRequest &request)
{
    return qobject_cast<DescribeFleetAdvisorDatabasesResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * DescribeFleetAdvisorLsaAnalysisResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides descriptions of large-scale assessment (LSA) analyses produced by your Fleet Advisor collectors.
 */
DescribeFleetAdvisorLsaAnalysisResponse * DatabaseMigrationClient::describeFleetAdvisorLsaAnalysis(const DescribeFleetAdvisorLsaAnalysisRequest &request)
{
    return qobject_cast<DescribeFleetAdvisorLsaAnalysisResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * DescribeFleetAdvisorSchemaObjectSummaryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides descriptions of the schemas discovered by your Fleet Advisor
 */
DescribeFleetAdvisorSchemaObjectSummaryResponse * DatabaseMigrationClient::describeFleetAdvisorSchemaObjectSummary(const DescribeFleetAdvisorSchemaObjectSummaryRequest &request)
{
    return qobject_cast<DescribeFleetAdvisorSchemaObjectSummaryResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * DescribeFleetAdvisorSchemasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of schemas detected by Fleet Advisor Collectors in your
 */
DescribeFleetAdvisorSchemasResponse * DatabaseMigrationClient::describeFleetAdvisorSchemas(const DescribeFleetAdvisorSchemasRequest &request)
{
    return qobject_cast<DescribeFleetAdvisorSchemasResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * DescribeOrderableReplicationInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the replication instance types that can be created in the specified
 */
DescribeOrderableReplicationInstancesResponse * DatabaseMigrationClient::describeOrderableReplicationInstances(const DescribeOrderableReplicationInstancesRequest &request)
{
    return qobject_cast<DescribeOrderableReplicationInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * DescribePendingMaintenanceActionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * For internal use
 */
DescribePendingMaintenanceActionsResponse * DatabaseMigrationClient::describePendingMaintenanceActions(const DescribePendingMaintenanceActionsRequest &request)
{
    return qobject_cast<DescribePendingMaintenanceActionsResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * DescribeRefreshSchemasStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the status of the RefreshSchemas
 */
DescribeRefreshSchemasStatusResponse * DatabaseMigrationClient::describeRefreshSchemasStatus(const DescribeRefreshSchemasStatusRequest &request)
{
    return qobject_cast<DescribeRefreshSchemasStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * DescribeReplicationInstanceTaskLogsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the task logs for the specified
 */
DescribeReplicationInstanceTaskLogsResponse * DatabaseMigrationClient::describeReplicationInstanceTaskLogs(const DescribeReplicationInstanceTaskLogsRequest &request)
{
    return qobject_cast<DescribeReplicationInstanceTaskLogsResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * DescribeReplicationInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about replication instances for your account in the current
 */
DescribeReplicationInstancesResponse * DatabaseMigrationClient::describeReplicationInstances(const DescribeReplicationInstancesRequest &request)
{
    return qobject_cast<DescribeReplicationInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * DescribeReplicationSubnetGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the replication subnet
 */
DescribeReplicationSubnetGroupsResponse * DatabaseMigrationClient::describeReplicationSubnetGroups(const DescribeReplicationSubnetGroupsRequest &request)
{
    return qobject_cast<DescribeReplicationSubnetGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * DescribeReplicationTaskAssessmentResultsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the task assessment results from the Amazon S3 bucket that DMS creates in your Amazon Web Services account. This
 * action always returns the latest
 *
 * results>
 *
 * For more information about DMS task assessments, see <a
 * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.AssessmentReport.html">Creating a task assessment
 * report</a> in the <i>Database Migration Service User
 */
DescribeReplicationTaskAssessmentResultsResponse * DatabaseMigrationClient::describeReplicationTaskAssessmentResults(const DescribeReplicationTaskAssessmentResultsRequest &request)
{
    return qobject_cast<DescribeReplicationTaskAssessmentResultsResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * DescribeReplicationTaskAssessmentRunsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a paginated list of premigration assessment runs based on filter
 *
 * settings>
 *
 * These filter settings can specify a combination of premigration assessment runs, migration tasks, replication instances,
 * and assessment run status
 *
 * values> <note>
 *
 * This operation doesn't return information about individual assessments. For this information, see the
 * <code>DescribeReplicationTaskIndividualAssessments</code> operation.
 */
DescribeReplicationTaskAssessmentRunsResponse * DatabaseMigrationClient::describeReplicationTaskAssessmentRuns(const DescribeReplicationTaskAssessmentRunsRequest &request)
{
    return qobject_cast<DescribeReplicationTaskAssessmentRunsResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * DescribeReplicationTaskIndividualAssessmentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a paginated list of individual assessments based on filter
 *
 * settings>
 *
 * These filter settings can specify a combination of premigration assessment runs, migration tasks, and assessment status
 */
DescribeReplicationTaskIndividualAssessmentsResponse * DatabaseMigrationClient::describeReplicationTaskIndividualAssessments(const DescribeReplicationTaskIndividualAssessmentsRequest &request)
{
    return qobject_cast<DescribeReplicationTaskIndividualAssessmentsResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * DescribeReplicationTasksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about replication tasks for your account in the current
 */
DescribeReplicationTasksResponse * DatabaseMigrationClient::describeReplicationTasks(const DescribeReplicationTasksRequest &request)
{
    return qobject_cast<DescribeReplicationTasksResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * DescribeSchemasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the schema for the specified
 *
 * endpoint>
 */
DescribeSchemasResponse * DatabaseMigrationClient::describeSchemas(const DescribeSchemasRequest &request)
{
    return qobject_cast<DescribeSchemasResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * DescribeTableStatisticsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns table statistics on the database migration task, including table name, rows inserted, rows updated, and rows
 *
 * deleted>
 *
 * Note that the "last updated" column the DMS console only indicates the time that DMS last updated the table statistics
 * record for a table. It does not indicate the time of the last update to the
 */
DescribeTableStatisticsResponse * DatabaseMigrationClient::describeTableStatistics(const DescribeTableStatisticsRequest &request)
{
    return qobject_cast<DescribeTableStatisticsResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * ImportCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Uploads the specified
 */
ImportCertificateResponse * DatabaseMigrationClient::importCertificate(const ImportCertificateRequest &request)
{
    return qobject_cast<ImportCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all metadata tags attached to an DMS resource, including replication instance, endpoint, security group, and
 * migration task. For more information, see <a href="https://docs.aws.amazon.com/dms/latest/APIReference/API_Tag.html">
 * <code>Tag</code> </a> data type
 */
ListTagsForResourceResponse * DatabaseMigrationClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * ModifyEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the specified
 *
 * endpoint> <note>
 *
 * For a MySQL source or target endpoint, don't explicitly specify the database using the <code>DatabaseName</code> request
 * parameter on the <code>ModifyEndpoint</code> API call. Specifying <code>DatabaseName</code> when you modify a MySQL
 * endpoint replicates all the task tables to this single database. For MySQL endpoints, you specify the database only when
 * you specify the schema in the table-mapping rules of the DMS
 */
ModifyEndpointResponse * DatabaseMigrationClient::modifyEndpoint(const ModifyEndpointRequest &request)
{
    return qobject_cast<ModifyEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * ModifyEventSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies an existing DMS event notification subscription.
 */
ModifyEventSubscriptionResponse * DatabaseMigrationClient::modifyEventSubscription(const ModifyEventSubscriptionRequest &request)
{
    return qobject_cast<ModifyEventSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
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
 *
 * window>
 */
ModifyReplicationInstanceResponse * DatabaseMigrationClient::modifyReplicationInstance(const ModifyReplicationInstanceRequest &request)
{
    return qobject_cast<ModifyReplicationInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * ModifyReplicationSubnetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the settings for the specified replication subnet
 */
ModifyReplicationSubnetGroupResponse * DatabaseMigrationClient::modifyReplicationSubnetGroup(const ModifyReplicationSubnetGroupRequest &request)
{
    return qobject_cast<ModifyReplicationSubnetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
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
 * For more information about DMS tasks, see <a
 * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.html">Working with Migration Tasks</a> in the
 * <i>Database Migration Service User
 */
ModifyReplicationTaskResponse * DatabaseMigrationClient::modifyReplicationTask(const ModifyReplicationTaskRequest &request)
{
    return qobject_cast<ModifyReplicationTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * MoveReplicationTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Moves a replication task from its current replication instance to a different target replication instance using the
 * specified parameters. The target replication instance must be created with the same or later DMS version as the current
 * replication
 */
MoveReplicationTaskResponse * DatabaseMigrationClient::moveReplicationTask(const MoveReplicationTaskRequest &request)
{
    return qobject_cast<MoveReplicationTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * RebootReplicationInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Reboots a replication instance. Rebooting results in a momentary outage, until the replication instance becomes
 * available
 */
RebootReplicationInstanceResponse * DatabaseMigrationClient::rebootReplicationInstance(const RebootReplicationInstanceRequest &request)
{
    return qobject_cast<RebootReplicationInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * RefreshSchemasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Populates the schema for the specified endpoint. This is an asynchronous operation and can take several minutes. You can
 * check the status of this operation by calling the DescribeRefreshSchemasStatus
 */
RefreshSchemasResponse * DatabaseMigrationClient::refreshSchemas(const RefreshSchemasRequest &request)
{
    return qobject_cast<RefreshSchemasResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * ReloadTablesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Reloads the target database table with the source data.
 *
 * </p
 *
 * You can only use this operation with a task in the <code>RUNNING</code> state, otherwise the service will throw an
 * <code>InvalidResourceStateFault</code>
 */
ReloadTablesResponse * DatabaseMigrationClient::reloadTables(const ReloadTablesRequest &request)
{
    return qobject_cast<ReloadTablesResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * RemoveTagsFromResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes metadata tags from an DMS resource, including replication instance, endpoint, security group, and migration
 * task. For more information, see <a href="https://docs.aws.amazon.com/dms/latest/APIReference/API_Tag.html">
 * <code>Tag</code> </a> data type
 */
RemoveTagsFromResourceResponse * DatabaseMigrationClient::removeTagsFromResource(const RemoveTagsFromResourceRequest &request)
{
    return qobject_cast<RemoveTagsFromResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * RunFleetAdvisorLsaAnalysisResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Runs large-scale assessment (LSA) analysis on every Fleet Advisor collector in your
 */
RunFleetAdvisorLsaAnalysisResponse * DatabaseMigrationClient::runFleetAdvisorLsaAnalysis(const RunFleetAdvisorLsaAnalysisRequest &request)
{
    return qobject_cast<RunFleetAdvisorLsaAnalysisResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * StartReplicationTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts the replication
 *
 * task>
 *
 * For more information about DMS tasks, see <a
 * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.html">Working with Migration Tasks </a> in the
 * <i>Database Migration Service User Guide.</i>
 */
StartReplicationTaskResponse * DatabaseMigrationClient::startReplicationTask(const StartReplicationTaskRequest &request)
{
    return qobject_cast<StartReplicationTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * StartReplicationTaskAssessmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts the replication task assessment for unsupported data types in the source database.
 *
 * </p
 *
 * You can only use this operation for a task if the following conditions are
 *
 * true> <ul> <li>
 *
 * The task must be in the <code>stopped</code>
 *
 * state> </li> <li>
 *
 * The task must have successful connections to the source and
 *
 * target> </li> </ul>
 *
 * If either of these conditions are not met, an <code>InvalidResourceStateFault</code> error will result.
 *
 * </p
 *
 * For information about DMS task assessments, see <a
 * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.AssessmentReport.html">Creating a task assessment
 * report</a> in the <i>Database Migration Service User
 */
StartReplicationTaskAssessmentResponse * DatabaseMigrationClient::startReplicationTaskAssessment(const StartReplicationTaskAssessmentRequest &request)
{
    return qobject_cast<StartReplicationTaskAssessmentResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * StartReplicationTaskAssessmentRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a new premigration assessment run for one or more individual assessments of a migration
 *
 * task>
 *
 * The assessments that you can specify depend on the source and target database engine and the migration type defined for
 * the given task. To run this operation, your migration task must already be created. After you run this operation, you
 * can review the status of each individual assessment. You can also run the migration task manually after the assessment
 * run and its individual assessments
 */
StartReplicationTaskAssessmentRunResponse * DatabaseMigrationClient::startReplicationTaskAssessmentRun(const StartReplicationTaskAssessmentRunRequest &request)
{
    return qobject_cast<StartReplicationTaskAssessmentRunResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * StopReplicationTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops the replication
 */
StopReplicationTaskResponse * DatabaseMigrationClient::stopReplicationTask(const StopReplicationTaskRequest &request)
{
    return qobject_cast<StopReplicationTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * TestConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Tests the connection between the replication instance and the
 */
TestConnectionResponse * DatabaseMigrationClient::testConnection(const TestConnectionRequest &request)
{
    return qobject_cast<TestConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the DatabaseMigrationClient service, and returns a pointer to an
 * UpdateSubscriptionsToEventBridgeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Migrates 10 active and enabled Amazon SNS subscriptions at a time and converts them to corresponding Amazon EventBridge
 * rules. By default, this operation migrates subscriptions only when all your replication instance versions are 3.4.6 or
 * higher. If any replication instances are from versions earlier than 3.4.6, the operation raises an error and tells you
 * to upgrade these instances to version 3.4.6 or higher. To enable migration regardless of version, set the
 * <code>Force</code> option to true. However, if you don't upgrade instances earlier than version 3.4.6, some types of
 * events might not be available when you use Amazon
 *
 * EventBridge>
 *
 * To call this operation, make sure that you have certain permissions added to your user account. For more information,
 * see <a
 * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Events.html#CHAP_Events-migrate-to-eventbridge">Migrating
 * event subscriptions to Amazon EventBridge</a> in the <i>Amazon Web Services Database Migration Service User
 */
UpdateSubscriptionsToEventBridgeResponse * DatabaseMigrationClient::updateSubscriptionsToEventBridge(const UpdateSubscriptionsToEventBridgeRequest &request)
{
    return qobject_cast<UpdateSubscriptionsToEventBridgeResponse *>(send(request));
}

/*!
 * \class QtAws::DatabaseMigration::DatabaseMigrationClientPrivate
 * \brief The DatabaseMigrationClientPrivate class provides private implementation for DatabaseMigrationClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DatabaseMigrationClientPrivate object with public implementation \a q.
 */
DatabaseMigrationClientPrivate::DatabaseMigrationClientPrivate(DatabaseMigrationClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace DatabaseMigration
} // namespace QtAws
