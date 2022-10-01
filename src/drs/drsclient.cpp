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

#include "drsclient.h"
#include "drsclient_p.h"

#include "core/awssignaturev4.h"
#include "createextendedsourceserverrequest.h"
#include "createextendedsourceserverresponse.h"
#include "createreplicationconfigurationtemplaterequest.h"
#include "createreplicationconfigurationtemplateresponse.h"
#include "deletejobrequest.h"
#include "deletejobresponse.h"
#include "deleterecoveryinstancerequest.h"
#include "deleterecoveryinstanceresponse.h"
#include "deletereplicationconfigurationtemplaterequest.h"
#include "deletereplicationconfigurationtemplateresponse.h"
#include "deletesourceserverrequest.h"
#include "deletesourceserverresponse.h"
#include "describejoblogitemsrequest.h"
#include "describejoblogitemsresponse.h"
#include "describejobsrequest.h"
#include "describejobsresponse.h"
#include "describerecoveryinstancesrequest.h"
#include "describerecoveryinstancesresponse.h"
#include "describerecoverysnapshotsrequest.h"
#include "describerecoverysnapshotsresponse.h"
#include "describereplicationconfigurationtemplatesrequest.h"
#include "describereplicationconfigurationtemplatesresponse.h"
#include "describesourceserversrequest.h"
#include "describesourceserversresponse.h"
#include "disconnectrecoveryinstancerequest.h"
#include "disconnectrecoveryinstanceresponse.h"
#include "disconnectsourceserverrequest.h"
#include "disconnectsourceserverresponse.h"
#include "getfailbackreplicationconfigurationrequest.h"
#include "getfailbackreplicationconfigurationresponse.h"
#include "getlaunchconfigurationrequest.h"
#include "getlaunchconfigurationresponse.h"
#include "getreplicationconfigurationrequest.h"
#include "getreplicationconfigurationresponse.h"
#include "initializeservicerequest.h"
#include "initializeserviceresponse.h"
#include "listextensiblesourceserversrequest.h"
#include "listextensiblesourceserversresponse.h"
#include "liststagingaccountsrequest.h"
#include "liststagingaccountsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "retrydatareplicationrequest.h"
#include "retrydatareplicationresponse.h"
#include "startfailbacklaunchrequest.h"
#include "startfailbacklaunchresponse.h"
#include "startrecoveryrequest.h"
#include "startrecoveryresponse.h"
#include "stopfailbackrequest.h"
#include "stopfailbackresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "terminaterecoveryinstancesrequest.h"
#include "terminaterecoveryinstancesresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatefailbackreplicationconfigurationrequest.h"
#include "updatefailbackreplicationconfigurationresponse.h"
#include "updatelaunchconfigurationrequest.h"
#include "updatelaunchconfigurationresponse.h"
#include "updatereplicationconfigurationrequest.h"
#include "updatereplicationconfigurationresponse.h"
#include "updatereplicationconfigurationtemplaterequest.h"
#include "updatereplicationconfigurationtemplateresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Drs
 * \brief Contains classess for accessing Elastic Disaster Recovery Service.
 *
 * \inmodule QtAwsDrs
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::DrsClient
 * \brief The DrsClient class provides access to the Elastic Disaster Recovery Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 */

/*!
 * \brief Constructs a DrsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
DrsClient::DrsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new DrsClientPrivate(this), parent)
{
    Q_D(DrsClient);
    d->apiVersion = QStringLiteral("2020-02-26");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Elastic Disaster Recovery Service");
    d->serviceName = QStringLiteral("drs");
}

/*!
 * \overload DrsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
DrsClient::DrsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new DrsClientPrivate(this), parent)
{
    Q_D(DrsClient);
    d->apiVersion = QStringLiteral("2020-02-26");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Elastic Disaster Recovery Service");
    d->serviceName = QStringLiteral("drs");
}

/*!
 * Sends \a request to the DrsClient service, and returns a pointer to an
 * CreateExtendedSourceServerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create an extended source server in the target Account based on the source server in staging
 */
CreateExtendedSourceServerResponse * DrsClient::createExtendedSourceServer(const CreateExtendedSourceServerRequest &request)
{
    return qobject_cast<CreateExtendedSourceServerResponse *>(send(request));
}

/*!
 * Sends \a request to the DrsClient service, and returns a pointer to an
 * CreateReplicationConfigurationTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new
 */
CreateReplicationConfigurationTemplateResponse * DrsClient::createReplicationConfigurationTemplate(const CreateReplicationConfigurationTemplateRequest &request)
{
    return qobject_cast<CreateReplicationConfigurationTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the DrsClient service, and returns a pointer to an
 * DeleteJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a single Job by
 */
DeleteJobResponse * DrsClient::deleteJob(const DeleteJobRequest &request)
{
    return qobject_cast<DeleteJobResponse *>(send(request));
}

/*!
 * Sends \a request to the DrsClient service, and returns a pointer to an
 * DeleteRecoveryInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a single Recovery Instance by ID. This deletes the Recovery Instance resource from Elastic Disaster Recovery.
 * The Recovery Instance must be disconnected first in order to delete
 */
DeleteRecoveryInstanceResponse * DrsClient::deleteRecoveryInstance(const DeleteRecoveryInstanceRequest &request)
{
    return qobject_cast<DeleteRecoveryInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the DrsClient service, and returns a pointer to an
 * DeleteReplicationConfigurationTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a single Replication Configuration Template by
 */
DeleteReplicationConfigurationTemplateResponse * DrsClient::deleteReplicationConfigurationTemplate(const DeleteReplicationConfigurationTemplateRequest &request)
{
    return qobject_cast<DeleteReplicationConfigurationTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the DrsClient service, and returns a pointer to an
 * DeleteSourceServerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a single Source Server by ID. The Source Server must be disconnected
 */
DeleteSourceServerResponse * DrsClient::deleteSourceServer(const DeleteSourceServerRequest &request)
{
    return qobject_cast<DeleteSourceServerResponse *>(send(request));
}

/*!
 * Sends \a request to the DrsClient service, and returns a pointer to an
 * DescribeJobLogItemsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a detailed Job log with
 */
DescribeJobLogItemsResponse * DrsClient::describeJobLogItems(const DescribeJobLogItemsRequest &request)
{
    return qobject_cast<DescribeJobLogItemsResponse *>(send(request));
}

/*!
 * Sends \a request to the DrsClient service, and returns a pointer to an
 * DescribeJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of Jobs. Use the JobsID and fromDate and toDate filters to limit which jobs are returned. The response is
 * sorted by creationDataTime - latest date first. Jobs are created by the StartRecovery, TerminateRecoveryInstances and
 * StartFailbackLaunch APIs. Jobs are also created by DiagnosticLaunch and TerminateDiagnosticInstances, which are APIs
 * available only to *Support* and only used in response to relevant support
 */
DescribeJobsResponse * DrsClient::describeJobs(const DescribeJobsRequest &request)
{
    return qobject_cast<DescribeJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the DrsClient service, and returns a pointer to an
 * DescribeRecoveryInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all Recovery Instances or multiple Recovery Instances by
 */
DescribeRecoveryInstancesResponse * DrsClient::describeRecoveryInstances(const DescribeRecoveryInstancesRequest &request)
{
    return qobject_cast<DescribeRecoveryInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the DrsClient service, and returns a pointer to an
 * DescribeRecoverySnapshotsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all Recovery Snapshots for a single Source
 */
DescribeRecoverySnapshotsResponse * DrsClient::describeRecoverySnapshots(const DescribeRecoverySnapshotsRequest &request)
{
    return qobject_cast<DescribeRecoverySnapshotsResponse *>(send(request));
}

/*!
 * Sends \a request to the DrsClient service, and returns a pointer to an
 * DescribeReplicationConfigurationTemplatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all ReplicationConfigurationTemplates, filtered by Source Server
 */
DescribeReplicationConfigurationTemplatesResponse * DrsClient::describeReplicationConfigurationTemplates(const DescribeReplicationConfigurationTemplatesRequest &request)
{
    return qobject_cast<DescribeReplicationConfigurationTemplatesResponse *>(send(request));
}

/*!
 * Sends \a request to the DrsClient service, and returns a pointer to an
 * DescribeSourceServersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all Source Servers or multiple Source Servers filtered by
 */
DescribeSourceServersResponse * DrsClient::describeSourceServers(const DescribeSourceServersRequest &request)
{
    return qobject_cast<DescribeSourceServersResponse *>(send(request));
}

/*!
 * Sends \a request to the DrsClient service, and returns a pointer to an
 * DisconnectRecoveryInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disconnect a Recovery Instance from Elastic Disaster Recovery. Data replication is stopped immediately. All AWS
 * resources created by Elastic Disaster Recovery for enabling the replication of the Recovery Instance will be terminated
 * / deleted within 90 minutes. If the agent on the Recovery Instance has not been prevented from communicating with the
 * Elastic Disaster Recovery service, then it will receive a command to uninstall itself (within approximately 10 minutes).
 * The following properties of the Recovery Instance will be changed immediately: dataReplicationInfo.dataReplicationState
 * will be set to DISCONNECTED; The totalStorageBytes property for each of dataReplicationInfo.replicatedDisks will be set
 * to zero; dataReplicationInfo.lagDuration and dataReplicationInfo.lagDuration will be
 */
DisconnectRecoveryInstanceResponse * DrsClient::disconnectRecoveryInstance(const DisconnectRecoveryInstanceRequest &request)
{
    return qobject_cast<DisconnectRecoveryInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the DrsClient service, and returns a pointer to an
 * DisconnectSourceServerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disconnects a specific Source Server from Elastic Disaster Recovery. Data replication is stopped immediately. All AWS
 * resources created by Elastic Disaster Recovery for enabling the replication of the Source Server will be terminated /
 * deleted within 90 minutes. You cannot disconnect a Source Server if it has a Recovery Instance. If the agent on the
 * Source Server has not been prevented from communicating with the Elastic Disaster Recovery service, then it will receive
 * a command to uninstall itself (within approximately 10 minutes). The following properties of the SourceServer will be
 * changed immediately: dataReplicationInfo.dataReplicationState will be set to DISCONNECTED; The totalStorageBytes
 * property for each of dataReplicationInfo.replicatedDisks will be set to zero; dataReplicationInfo.lagDuration and
 * dataReplicationInfo.lagDuration will be
 */
DisconnectSourceServerResponse * DrsClient::disconnectSourceServer(const DisconnectSourceServerRequest &request)
{
    return qobject_cast<DisconnectSourceServerResponse *>(send(request));
}

/*!
 * Sends \a request to the DrsClient service, and returns a pointer to an
 * GetFailbackReplicationConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all Failback ReplicationConfigurations, filtered by Recovery Instance
 */
GetFailbackReplicationConfigurationResponse * DrsClient::getFailbackReplicationConfiguration(const GetFailbackReplicationConfigurationRequest &request)
{
    return qobject_cast<GetFailbackReplicationConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the DrsClient service, and returns a pointer to an
 * GetLaunchConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a LaunchConfiguration, filtered by Source Server
 */
GetLaunchConfigurationResponse * DrsClient::getLaunchConfiguration(const GetLaunchConfigurationRequest &request)
{
    return qobject_cast<GetLaunchConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the DrsClient service, and returns a pointer to an
 * GetReplicationConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a ReplicationConfiguration, filtered by Source Server
 */
GetReplicationConfigurationResponse * DrsClient::getReplicationConfiguration(const GetReplicationConfigurationRequest &request)
{
    return qobject_cast<GetReplicationConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the DrsClient service, and returns a pointer to an
 * InitializeServiceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Initialize Elastic Disaster
 */
InitializeServiceResponse * DrsClient::initializeService(const InitializeServiceRequest &request)
{
    return qobject_cast<InitializeServiceResponse *>(send(request));
}

/*!
 * Sends \a request to the DrsClient service, and returns a pointer to an
 * ListExtensibleSourceServersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of source servers on a staging account that are extensible, which means that: a. The source server is not
 * already extended into this Account. b. The source server on the Account we’re reading from is not an extension of
 * another source server.
 */
ListExtensibleSourceServersResponse * DrsClient::listExtensibleSourceServers(const ListExtensibleSourceServersRequest &request)
{
    return qobject_cast<ListExtensibleSourceServersResponse *>(send(request));
}

/*!
 * Sends \a request to the DrsClient service, and returns a pointer to an
 * ListStagingAccountsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an array of staging accounts for existing extended source
 */
ListStagingAccountsResponse * DrsClient::listStagingAccounts(const ListStagingAccountsRequest &request)
{
    return qobject_cast<ListStagingAccountsResponse *>(send(request));
}

/*!
 * Sends \a request to the DrsClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List all tags for your Elastic Disaster Recovery
 */
ListTagsForResourceResponse * DrsClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the DrsClient service, and returns a pointer to an
 * RetryDataReplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Causes the data replication initiation sequence to begin immediately upon next Handshake for the specified Source Server
 * ID, regardless of when the previous initiation started. This command will work only if the Source Server is stalled or
 * is in a DISCONNECTED or STOPPED
 */
RetryDataReplicationResponse * DrsClient::retryDataReplication(const RetryDataReplicationRequest &request)
{
    return qobject_cast<RetryDataReplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the DrsClient service, and returns a pointer to an
 * StartFailbackLaunchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Initiates a Job for launching the machine that is being failed back to from the specified Recovery Instance. This will
 * run conversion on the failback client and will reboot your machine, thus completing the failback
 */
StartFailbackLaunchResponse * DrsClient::startFailbackLaunch(const StartFailbackLaunchRequest &request)
{
    return qobject_cast<StartFailbackLaunchResponse *>(send(request));
}

/*!
 * Sends \a request to the DrsClient service, and returns a pointer to an
 * StartRecoveryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Launches Recovery Instances for the specified Source Servers. For each Source Server you may choose a point in time
 * snapshot to launch from, or use an on demand
 */
StartRecoveryResponse * DrsClient::startRecovery(const StartRecoveryRequest &request)
{
    return qobject_cast<StartRecoveryResponse *>(send(request));
}

/*!
 * Sends \a request to the DrsClient service, and returns a pointer to an
 * StopFailbackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops the failback process for a specified Recovery Instance. This changes the Failback State of the Recovery Instance
 * back to
 */
StopFailbackResponse * DrsClient::stopFailback(const StopFailbackRequest &request)
{
    return qobject_cast<StopFailbackResponse *>(send(request));
}

/*!
 * Sends \a request to the DrsClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or overwrites only the specified tags for the specified Elastic Disaster Recovery resource or resources. When you
 * specify an existing tag key, the value is overwritten with the new value. Each resource can have a maximum of 50 tags.
 * Each tag consists of a key and optional
 */
TagResourceResponse * DrsClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the DrsClient service, and returns a pointer to an
 * TerminateRecoveryInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Initiates a Job for terminating the EC2 resources associated with the specified Recovery Instances, and then will delete
 * the Recovery Instances from the Elastic Disaster Recovery
 */
TerminateRecoveryInstancesResponse * DrsClient::terminateRecoveryInstances(const TerminateRecoveryInstancesRequest &request)
{
    return qobject_cast<TerminateRecoveryInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the DrsClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified set of tags from the specified set of Elastic Disaster Recovery
 */
UntagResourceResponse * DrsClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the DrsClient service, and returns a pointer to an
 * UpdateFailbackReplicationConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows you to update the failback replication configuration of a Recovery Instance by
 */
UpdateFailbackReplicationConfigurationResponse * DrsClient::updateFailbackReplicationConfiguration(const UpdateFailbackReplicationConfigurationRequest &request)
{
    return qobject_cast<UpdateFailbackReplicationConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the DrsClient service, and returns a pointer to an
 * UpdateLaunchConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a LaunchConfiguration by Source Server
 */
UpdateLaunchConfigurationResponse * DrsClient::updateLaunchConfiguration(const UpdateLaunchConfigurationRequest &request)
{
    return qobject_cast<UpdateLaunchConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the DrsClient service, and returns a pointer to an
 * UpdateReplicationConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Allows you to update a ReplicationConfiguration by Source Server
 */
UpdateReplicationConfigurationResponse * DrsClient::updateReplicationConfiguration(const UpdateReplicationConfigurationRequest &request)
{
    return qobject_cast<UpdateReplicationConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the DrsClient service, and returns a pointer to an
 * UpdateReplicationConfigurationTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a ReplicationConfigurationTemplate by
 */
UpdateReplicationConfigurationTemplateResponse * DrsClient::updateReplicationConfigurationTemplate(const UpdateReplicationConfigurationTemplateRequest &request)
{
    return qobject_cast<UpdateReplicationConfigurationTemplateResponse *>(send(request));
}

/*!
 * \class QtAws::Drs::DrsClientPrivate
 * \brief The DrsClientPrivate class provides private implementation for DrsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a DrsClientPrivate object with public implementation \a q.
 */
DrsClientPrivate::DrsClientPrivate(DrsClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Drs
} // namespace QtAws
