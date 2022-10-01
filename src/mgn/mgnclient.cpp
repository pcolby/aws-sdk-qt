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

#include "mgnclient.h"
#include "mgnclient_p.h"

#include "core/awssignaturev4.h"
#include "changeserverlifecyclestaterequest.h"
#include "changeserverlifecyclestateresponse.h"
#include "createlaunchconfigurationtemplaterequest.h"
#include "createlaunchconfigurationtemplateresponse.h"
#include "createreplicationconfigurationtemplaterequest.h"
#include "createreplicationconfigurationtemplateresponse.h"
#include "deletejobrequest.h"
#include "deletejobresponse.h"
#include "deletelaunchconfigurationtemplaterequest.h"
#include "deletelaunchconfigurationtemplateresponse.h"
#include "deletereplicationconfigurationtemplaterequest.h"
#include "deletereplicationconfigurationtemplateresponse.h"
#include "deletesourceserverrequest.h"
#include "deletesourceserverresponse.h"
#include "deletevcenterclientrequest.h"
#include "deletevcenterclientresponse.h"
#include "describejoblogitemsrequest.h"
#include "describejoblogitemsresponse.h"
#include "describejobsrequest.h"
#include "describejobsresponse.h"
#include "describelaunchconfigurationtemplatesrequest.h"
#include "describelaunchconfigurationtemplatesresponse.h"
#include "describereplicationconfigurationtemplatesrequest.h"
#include "describereplicationconfigurationtemplatesresponse.h"
#include "describesourceserversrequest.h"
#include "describesourceserversresponse.h"
#include "describevcenterclientsrequest.h"
#include "describevcenterclientsresponse.h"
#include "disconnectfromservicerequest.h"
#include "disconnectfromserviceresponse.h"
#include "finalizecutoverrequest.h"
#include "finalizecutoverresponse.h"
#include "getlaunchconfigurationrequest.h"
#include "getlaunchconfigurationresponse.h"
#include "getreplicationconfigurationrequest.h"
#include "getreplicationconfigurationresponse.h"
#include "initializeservicerequest.h"
#include "initializeserviceresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "markasarchivedrequest.h"
#include "markasarchivedresponse.h"
#include "retrydatareplicationrequest.h"
#include "retrydatareplicationresponse.h"
#include "startcutoverrequest.h"
#include "startcutoverresponse.h"
#include "startreplicationrequest.h"
#include "startreplicationresponse.h"
#include "starttestrequest.h"
#include "starttestresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "terminatetargetinstancesrequest.h"
#include "terminatetargetinstancesresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatelaunchconfigurationrequest.h"
#include "updatelaunchconfigurationresponse.h"
#include "updatelaunchconfigurationtemplaterequest.h"
#include "updatelaunchconfigurationtemplateresponse.h"
#include "updatereplicationconfigurationrequest.h"
#include "updatereplicationconfigurationresponse.h"
#include "updatereplicationconfigurationtemplaterequest.h"
#include "updatereplicationconfigurationtemplateresponse.h"
#include "updatesourceserverreplicationtyperequest.h"
#include "updatesourceserverreplicationtyperesponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Mgn
 * \brief Contains classess for accessing Application Migration Service.
 *
 * \inmodule QtAwsMgn
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::MgnClient
 * \brief The MgnClient class provides access to the Application Migration Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 */

/*!
 * \brief Constructs a MgnClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
MgnClient::MgnClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MgnClientPrivate(this), parent)
{
    Q_D(MgnClient);
    d->apiVersion = QStringLiteral("2020-02-26");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Application Migration Service");
    d->serviceName = QStringLiteral("mgn");
}

/*!
 * \overload MgnClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
MgnClient::MgnClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MgnClientPrivate(this), parent)
{
    Q_D(MgnClient);
    d->apiVersion = QStringLiteral("2020-02-26");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Application Migration Service");
    d->serviceName = QStringLiteral("mgn");
}

/*!
 * Sends \a request to the MgnClient service, and returns a pointer to an
 * ChangeServerLifeCycleStateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows the user to set the SourceServer.LifeCycle.state property for specific Source Server IDs to one of the following:
 * READY_FOR_TEST or READY_FOR_CUTOVER. This command only works if the Source Server is already launchable
 * (dataReplicationInfo.lagDuration is not
 */
ChangeServerLifeCycleStateResponse * MgnClient::changeServerLifeCycleState(const ChangeServerLifeCycleStateRequest &request)
{
    return qobject_cast<ChangeServerLifeCycleStateResponse *>(send(request));
}

/*!
 * Sends \a request to the MgnClient service, and returns a pointer to an
 * CreateLaunchConfigurationTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new
 */
CreateLaunchConfigurationTemplateResponse * MgnClient::createLaunchConfigurationTemplate(const CreateLaunchConfigurationTemplateRequest &request)
{
    return qobject_cast<CreateLaunchConfigurationTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the MgnClient service, and returns a pointer to an
 * CreateReplicationConfigurationTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new
 */
CreateReplicationConfigurationTemplateResponse * MgnClient::createReplicationConfigurationTemplate(const CreateReplicationConfigurationTemplateRequest &request)
{
    return qobject_cast<CreateReplicationConfigurationTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the MgnClient service, and returns a pointer to an
 * DeleteJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a single Job by
 */
DeleteJobResponse * MgnClient::deleteJob(const DeleteJobRequest &request)
{
    return qobject_cast<DeleteJobResponse *>(send(request));
}

/*!
 * Sends \a request to the MgnClient service, and returns a pointer to an
 * DeleteLaunchConfigurationTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new
 */
DeleteLaunchConfigurationTemplateResponse * MgnClient::deleteLaunchConfigurationTemplate(const DeleteLaunchConfigurationTemplateRequest &request)
{
    return qobject_cast<DeleteLaunchConfigurationTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the MgnClient service, and returns a pointer to an
 * DeleteReplicationConfigurationTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a single Replication Configuration Template by
 */
DeleteReplicationConfigurationTemplateResponse * MgnClient::deleteReplicationConfigurationTemplate(const DeleteReplicationConfigurationTemplateRequest &request)
{
    return qobject_cast<DeleteReplicationConfigurationTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the MgnClient service, and returns a pointer to an
 * DeleteSourceServerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a single source server by
 */
DeleteSourceServerResponse * MgnClient::deleteSourceServer(const DeleteSourceServerRequest &request)
{
    return qobject_cast<DeleteSourceServerResponse *>(send(request));
}

/*!
 * Sends \a request to the MgnClient service, and returns a pointer to an
 * DeleteVcenterClientResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a given vCenter client by
 */
DeleteVcenterClientResponse * MgnClient::deleteVcenterClient(const DeleteVcenterClientRequest &request)
{
    return qobject_cast<DeleteVcenterClientResponse *>(send(request));
}

/*!
 * Sends \a request to the MgnClient service, and returns a pointer to an
 * DescribeJobLogItemsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves detailed job log items with
 */
DescribeJobLogItemsResponse * MgnClient::describeJobLogItems(const DescribeJobLogItemsRequest &request)
{
    return qobject_cast<DescribeJobLogItemsResponse *>(send(request));
}

/*!
 * Sends \a request to the MgnClient service, and returns a pointer to an
 * DescribeJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of Jobs. Use the JobsID and fromDate and toData filters to limit which jobs are returned. The response is
 * sorted by creationDataTime - latest date first. Jobs are normally created by the StartTest, StartCutover, and
 * TerminateTargetInstances APIs. Jobs are also created by DiagnosticLaunch and TerminateDiagnosticInstances, which are
 * APIs available only to *Support* and only used in response to relevant support
 */
DescribeJobsResponse * MgnClient::describeJobs(const DescribeJobsRequest &request)
{
    return qobject_cast<DescribeJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the MgnClient service, and returns a pointer to an
 * DescribeLaunchConfigurationTemplatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new
 */
DescribeLaunchConfigurationTemplatesResponse * MgnClient::describeLaunchConfigurationTemplates(const DescribeLaunchConfigurationTemplatesRequest &request)
{
    return qobject_cast<DescribeLaunchConfigurationTemplatesResponse *>(send(request));
}

/*!
 * Sends \a request to the MgnClient service, and returns a pointer to an
 * DescribeReplicationConfigurationTemplatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all ReplicationConfigurationTemplates, filtered by Source Server
 */
DescribeReplicationConfigurationTemplatesResponse * MgnClient::describeReplicationConfigurationTemplates(const DescribeReplicationConfigurationTemplatesRequest &request)
{
    return qobject_cast<DescribeReplicationConfigurationTemplatesResponse *>(send(request));
}

/*!
 * Sends \a request to the MgnClient service, and returns a pointer to an
 * DescribeSourceServersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves all SourceServers or multiple SourceServers by
 */
DescribeSourceServersResponse * MgnClient::describeSourceServers(const DescribeSourceServersRequest &request)
{
    return qobject_cast<DescribeSourceServersResponse *>(send(request));
}

/*!
 * Sends \a request to the MgnClient service, and returns a pointer to an
 * DescribeVcenterClientsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the installed vCenter
 */
DescribeVcenterClientsResponse * MgnClient::describeVcenterClients(const DescribeVcenterClientsRequest &request)
{
    return qobject_cast<DescribeVcenterClientsResponse *>(send(request));
}

/*!
 * Sends \a request to the MgnClient service, and returns a pointer to an
 * DisconnectFromServiceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disconnects specific Source Servers from Application Migration Service. Data replication is stopped immediately. All AWS
 * resources created by Application Migration Service for enabling the replication of these source servers will be
 * terminated / deleted within 90 minutes. Launched Test or Cutover instances will NOT be terminated. If the agent on the
 * source server has not been prevented from communicating with the Application Migration Service service, then it will
 * receive a command to uninstall itself (within approximately 10 minutes). The following properties of the SourceServer
 * will be changed immediately: dataReplicationInfo.dataReplicationState will be set to DISCONNECTED; The totalStorageBytes
 * property for each of dataReplicationInfo.replicatedDisks will be set to zero; dataReplicationInfo.lagDuration and
 * dataReplicationInfo.lagDuration will be
 */
DisconnectFromServiceResponse * MgnClient::disconnectFromService(const DisconnectFromServiceRequest &request)
{
    return qobject_cast<DisconnectFromServiceResponse *>(send(request));
}

/*!
 * Sends \a request to the MgnClient service, and returns a pointer to an
 * FinalizeCutoverResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Finalizes the cutover immediately for specific Source Servers. All AWS resources created by Application Migration
 * Service for enabling the replication of these source servers will be terminated / deleted within 90 minutes. Launched
 * Test or Cutover instances will NOT be terminated. The AWS Replication Agent will receive a command to uninstall itself
 * (within 10 minutes). The following properties of the SourceServer will be changed immediately:
 * dataReplicationInfo.dataReplicationState will be changed to DISCONNECTED; The SourceServer.lifeCycle.state will be
 * changed to CUTOVER; The totalStorageBytes property fo each of dataReplicationInfo.replicatedDisks will be set to zero;
 * dataReplicationInfo.lagDuration and dataReplicationInfo.lagDuration will be
 */
FinalizeCutoverResponse * MgnClient::finalizeCutover(const FinalizeCutoverRequest &request)
{
    return qobject_cast<FinalizeCutoverResponse *>(send(request));
}

/*!
 * Sends \a request to the MgnClient service, and returns a pointer to an
 * GetLaunchConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all LaunchConfigurations available, filtered by Source Server
 */
GetLaunchConfigurationResponse * MgnClient::getLaunchConfiguration(const GetLaunchConfigurationRequest &request)
{
    return qobject_cast<GetLaunchConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the MgnClient service, and returns a pointer to an
 * GetReplicationConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all ReplicationConfigurations, filtered by Source Server
 */
GetReplicationConfigurationResponse * MgnClient::getReplicationConfiguration(const GetReplicationConfigurationRequest &request)
{
    return qobject_cast<GetReplicationConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the MgnClient service, and returns a pointer to an
 * InitializeServiceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Initialize Application Migration
 */
InitializeServiceResponse * MgnClient::initializeService(const InitializeServiceRequest &request)
{
    return qobject_cast<InitializeServiceResponse *>(send(request));
}

/*!
 * Sends \a request to the MgnClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List all tags for your Application Migration Service
 */
ListTagsForResourceResponse * MgnClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the MgnClient service, and returns a pointer to an
 * MarkAsArchivedResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Archives specific Source Servers by setting the SourceServer.isArchived property to true for specified SourceServers by
 * ID. This command only works for SourceServers with a lifecycle. state which equals DISCONNECTED or
 */
MarkAsArchivedResponse * MgnClient::markAsArchived(const MarkAsArchivedRequest &request)
{
    return qobject_cast<MarkAsArchivedResponse *>(send(request));
}

/*!
 * Sends \a request to the MgnClient service, and returns a pointer to an
 * RetryDataReplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Causes the data replication initiation sequence to begin immediately upon next Handshake for specified SourceServer IDs,
 * regardless of when the previous initiation started. This command will not work if the SourceServer is not stalled or is
 * in a DISCONNECTED or STOPPED
 */
RetryDataReplicationResponse * MgnClient::retryDataReplication(const RetryDataReplicationRequest &request)
{
    return qobject_cast<RetryDataReplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the MgnClient service, and returns a pointer to an
 * StartCutoverResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Launches a Cutover Instance for specific Source Servers. This command starts a LAUNCH job whose initiatedBy property is
 * StartCutover and changes the SourceServer.lifeCycle.state property to
 */
StartCutoverResponse * MgnClient::startCutover(const StartCutoverRequest &request)
{
    return qobject_cast<StartCutoverResponse *>(send(request));
}

/*!
 * Sends \a request to the MgnClient service, and returns a pointer to an
 * StartReplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts replication for SNAPSHOT_SHIPPING
 */
StartReplicationResponse * MgnClient::startReplication(const StartReplicationRequest &request)
{
    return qobject_cast<StartReplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the MgnClient service, and returns a pointer to an
 * StartTestResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Launches a Test Instance for specific Source Servers. This command starts a LAUNCH job whose initiatedBy property is
 * StartTest and changes the SourceServer.lifeCycle.state property to
 */
StartTestResponse * MgnClient::startTest(const StartTestRequest &request)
{
    return qobject_cast<StartTestResponse *>(send(request));
}

/*!
 * Sends \a request to the MgnClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or overwrites only the specified tags for the specified Application Migration Service resource or resources. When
 * you specify an existing tag key, the value is overwritten with the new value. Each resource can have a maximum of 50
 * tags. Each tag consists of a key and optional
 */
TagResourceResponse * MgnClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the MgnClient service, and returns a pointer to an
 * TerminateTargetInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a job that terminates specific launched EC2 Test and Cutover instances. This command will not work for any Source
 * Server with a lifecycle.state of TESTING, CUTTING_OVER, or
 */
TerminateTargetInstancesResponse * MgnClient::terminateTargetInstances(const TerminateTargetInstancesRequest &request)
{
    return qobject_cast<TerminateTargetInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the MgnClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified set of tags from the specified set of Application Migration Service
 */
UntagResourceResponse * MgnClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the MgnClient service, and returns a pointer to an
 * UpdateLaunchConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates multiple LaunchConfigurations by Source Server
 */
UpdateLaunchConfigurationResponse * MgnClient::updateLaunchConfiguration(const UpdateLaunchConfigurationRequest &request)
{
    return qobject_cast<UpdateLaunchConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the MgnClient service, and returns a pointer to an
 * UpdateLaunchConfigurationTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new
 */
UpdateLaunchConfigurationTemplateResponse * MgnClient::updateLaunchConfigurationTemplate(const UpdateLaunchConfigurationTemplateRequest &request)
{
    return qobject_cast<UpdateLaunchConfigurationTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the MgnClient service, and returns a pointer to an
 * UpdateReplicationConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows you to update multiple ReplicationConfigurations by Source Server
 */
UpdateReplicationConfigurationResponse * MgnClient::updateReplicationConfiguration(const UpdateReplicationConfigurationRequest &request)
{
    return qobject_cast<UpdateReplicationConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the MgnClient service, and returns a pointer to an
 * UpdateReplicationConfigurationTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates multiple ReplicationConfigurationTemplates by
 */
UpdateReplicationConfigurationTemplateResponse * MgnClient::updateReplicationConfigurationTemplate(const UpdateReplicationConfigurationTemplateRequest &request)
{
    return qobject_cast<UpdateReplicationConfigurationTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the MgnClient service, and returns a pointer to an
 * UpdateSourceServerReplicationTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows you to change between the AGENT_BASED replication type and the SNAPSHOT_SHIPPING replication
 */
UpdateSourceServerReplicationTypeResponse * MgnClient::updateSourceServerReplicationType(const UpdateSourceServerReplicationTypeRequest &request)
{
    return qobject_cast<UpdateSourceServerReplicationTypeResponse *>(send(request));
}

/*!
 * \class QtAws::Mgn::MgnClientPrivate
 * \brief The MgnClientPrivate class provides private implementation for MgnClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a MgnClientPrivate object with public implementation \a q.
 */
MgnClientPrivate::MgnClientPrivate(MgnClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Mgn
} // namespace QtAws
