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

#include "smsclient.h"
#include "smsclient_p.h"

#include "core/awssignaturev4.h"
#include "createapprequest.h"
#include "createappresponse.h"
#include "createreplicationjobrequest.h"
#include "createreplicationjobresponse.h"
#include "deleteapprequest.h"
#include "deleteappresponse.h"
#include "deleteapplaunchconfigurationrequest.h"
#include "deleteapplaunchconfigurationresponse.h"
#include "deleteappreplicationconfigurationrequest.h"
#include "deleteappreplicationconfigurationresponse.h"
#include "deletereplicationjobrequest.h"
#include "deletereplicationjobresponse.h"
#include "deleteservercatalogrequest.h"
#include "deleteservercatalogresponse.h"
#include "disassociateconnectorrequest.h"
#include "disassociateconnectorresponse.h"
#include "generatechangesetrequest.h"
#include "generatechangesetresponse.h"
#include "generatetemplaterequest.h"
#include "generatetemplateresponse.h"
#include "getapprequest.h"
#include "getappresponse.h"
#include "getapplaunchconfigurationrequest.h"
#include "getapplaunchconfigurationresponse.h"
#include "getappreplicationconfigurationrequest.h"
#include "getappreplicationconfigurationresponse.h"
#include "getconnectorsrequest.h"
#include "getconnectorsresponse.h"
#include "getreplicationjobsrequest.h"
#include "getreplicationjobsresponse.h"
#include "getreplicationrunsrequest.h"
#include "getreplicationrunsresponse.h"
#include "getserversrequest.h"
#include "getserversresponse.h"
#include "importservercatalogrequest.h"
#include "importservercatalogresponse.h"
#include "launchapprequest.h"
#include "launchappresponse.h"
#include "listappsrequest.h"
#include "listappsresponse.h"
#include "putapplaunchconfigurationrequest.h"
#include "putapplaunchconfigurationresponse.h"
#include "putappreplicationconfigurationrequest.h"
#include "putappreplicationconfigurationresponse.h"
#include "startappreplicationrequest.h"
#include "startappreplicationresponse.h"
#include "startondemandreplicationrunrequest.h"
#include "startondemandreplicationrunresponse.h"
#include "stopappreplicationrequest.h"
#include "stopappreplicationresponse.h"
#include "terminateapprequest.h"
#include "terminateappresponse.h"
#include "updateapprequest.h"
#include "updateappresponse.h"
#include "updatereplicationjobrequest.h"
#include "updatereplicationjobresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::SMS
 * \brief Contains classess for accessing AWS Server Migration Service (SMS).
 *
 * \inmodule QtAwsSms
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::SmsClient
 * \brief The SmsClient class provides access to the AWS Server Migration Service (SMS) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSMS
 *
 *  <fullname>AAWS Sever Migration Service</fullname>
 * 
 *  This is the <i>AWS Sever Migration Service API Reference</i>. It provides descriptions, syntax, and usage examples for
 *  each of the actions and data types for the AWS Sever Migration Service (AWS SMS). The topic for each action shows the
 *  Query API request parameters and the XML response. You can also view the XML request elements in the
 * 
 *  WSDL>
 * 
 *  Alternatively, you can use one of the AWS SDKs to access an API that's tailored to the programming language or platform
 *  that you're using. For more information, see <a href="http://aws.amazon.com/tools/#SDKs">AWS
 * 
 *  SDKs</a>>
 * 
 *  To learn more about the Server Migration Service, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="https://aws.amazon.com/server-migration-service/">AWS Sever Migration Service product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/server-migration-service/latest/userguide/server-migration.html">AWS Sever
 *  Migration Service User Guide</a>
 */

/*!
 * \brief Constructs a SmsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
SmsClient::SmsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SmsClientPrivate(this), parent)
{
    Q_D(SmsClient);
    d->apiVersion = QStringLiteral("2016-10-24");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("sms");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Server Migration Service");
    d->serviceName = QStringLiteral("sms");
}

/*!
 * \overload SmsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
SmsClient::SmsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SmsClientPrivate(this), parent)
{
    Q_D(SmsClient);
    d->apiVersion = QStringLiteral("2016-10-24");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("sms");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Server Migration Service");
    d->serviceName = QStringLiteral("sms");
}

/*!
 * Sends \a request to the SmsClient service, and returns a pointer to an
 * CreateAppResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an application. An application consists of one or more server groups. Each server group contain one or more
 */
CreateAppResponse * SmsClient::createApp(const CreateAppRequest &request)
{
    return qobject_cast<CreateAppResponse *>(send(request));
}

/*!
 * Sends \a request to the SmsClient service, and returns a pointer to an
 * CreateReplicationJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a replication job. The replication job schedules periodic replication runs to replicate your server to AWS. Each
 * replication run creates an Amazon Machine Image
 */
CreateReplicationJobResponse * SmsClient::createReplicationJob(const CreateReplicationJobRequest &request)
{
    return qobject_cast<CreateReplicationJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SmsClient service, and returns a pointer to an
 * DeleteAppResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing application. Optionally deletes the launched stack associated with the application and all AWS SMS
 * replication jobs for servers in the
 */
DeleteAppResponse * SmsClient::deleteApp(const DeleteAppRequest &request)
{
    return qobject_cast<DeleteAppResponse *>(send(request));
}

/*!
 * Sends \a request to the SmsClient service, and returns a pointer to an
 * DeleteAppLaunchConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes existing launch configuration for an
 */
DeleteAppLaunchConfigurationResponse * SmsClient::deleteAppLaunchConfiguration(const DeleteAppLaunchConfigurationRequest &request)
{
    return qobject_cast<DeleteAppLaunchConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the SmsClient service, and returns a pointer to an
 * DeleteAppReplicationConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes existing replication configuration for an
 */
DeleteAppReplicationConfigurationResponse * SmsClient::deleteAppReplicationConfiguration(const DeleteAppReplicationConfigurationRequest &request)
{
    return qobject_cast<DeleteAppReplicationConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the SmsClient service, and returns a pointer to an
 * DeleteReplicationJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified replication
 *
 * job>
 *
 * After you delete a replication job, there are no further replication runs. AWS deletes the contents of the Amazon S3
 * bucket used to store AWS SMS artifacts. The AMIs created by the replication runs are not
 */
DeleteReplicationJobResponse * SmsClient::deleteReplicationJob(const DeleteReplicationJobRequest &request)
{
    return qobject_cast<DeleteReplicationJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SmsClient service, and returns a pointer to an
 * DeleteServerCatalogResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes all servers from your server
 */
DeleteServerCatalogResponse * SmsClient::deleteServerCatalog(const DeleteServerCatalogRequest &request)
{
    return qobject_cast<DeleteServerCatalogResponse *>(send(request));
}

/*!
 * Sends \a request to the SmsClient service, and returns a pointer to an
 * DisassociateConnectorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates the specified connector from AWS
 *
 * SMS>
 *
 * After you disassociate a connector, it is no longer available to support replication
 */
DisassociateConnectorResponse * SmsClient::disassociateConnector(const DisassociateConnectorRequest &request)
{
    return qobject_cast<DisassociateConnectorResponse *>(send(request));
}

/*!
 * Sends \a request to the SmsClient service, and returns a pointer to an
 * GenerateChangeSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates a target change set for a currently launched stack and writes it to an Amazon S3 object in the customer’s
 * Amazon S3
 */
GenerateChangeSetResponse * SmsClient::generateChangeSet(const GenerateChangeSetRequest &request)
{
    return qobject_cast<GenerateChangeSetResponse *>(send(request));
}

/*!
 * Sends \a request to the SmsClient service, and returns a pointer to an
 * GenerateTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates an Amazon CloudFormation template based on the current launch configuration and writes it to an Amazon S3
 * object in the customer’s Amazon S3
 */
GenerateTemplateResponse * SmsClient::generateTemplate(const GenerateTemplateRequest &request)
{
    return qobject_cast<GenerateTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the SmsClient service, and returns a pointer to an
 * GetAppResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve information about an
 */
GetAppResponse * SmsClient::getApp(const GetAppRequest &request)
{
    return qobject_cast<GetAppResponse *>(send(request));
}

/*!
 * Sends \a request to the SmsClient service, and returns a pointer to an
 * GetAppLaunchConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the application launch configuration associated with an
 */
GetAppLaunchConfigurationResponse * SmsClient::getAppLaunchConfiguration(const GetAppLaunchConfigurationRequest &request)
{
    return qobject_cast<GetAppLaunchConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the SmsClient service, and returns a pointer to an
 * GetAppReplicationConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves an application replication configuration associatd with an
 */
GetAppReplicationConfigurationResponse * SmsClient::getAppReplicationConfiguration(const GetAppReplicationConfigurationRequest &request)
{
    return qobject_cast<GetAppReplicationConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the SmsClient service, and returns a pointer to an
 * GetConnectorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the connectors registered with the AWS
 */
GetConnectorsResponse * SmsClient::getConnectors(const GetConnectorsRequest &request)
{
    return qobject_cast<GetConnectorsResponse *>(send(request));
}

/*!
 * Sends \a request to the SmsClient service, and returns a pointer to an
 * GetReplicationJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified replication job or all of your replication
 */
GetReplicationJobsResponse * SmsClient::getReplicationJobs(const GetReplicationJobsRequest &request)
{
    return qobject_cast<GetReplicationJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the SmsClient service, and returns a pointer to an
 * GetReplicationRunsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the replication runs for the specified replication
 */
GetReplicationRunsResponse * SmsClient::getReplicationRuns(const GetReplicationRunsRequest &request)
{
    return qobject_cast<GetReplicationRunsResponse *>(send(request));
}

/*!
 * Sends \a request to the SmsClient service, and returns a pointer to an
 * GetServersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the servers in your server
 *
 * catalog>
 *
 * Before you can describe your servers, you must import them using
 */
GetServersResponse * SmsClient::getServers(const GetServersRequest &request)
{
    return qobject_cast<GetServersResponse *>(send(request));
}

/*!
 * Sends \a request to the SmsClient service, and returns a pointer to an
 * ImportServerCatalogResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gathers a complete list of on-premises servers. Connectors must be installed and monitoring all servers that you want to
 *
 * import>
 *
 * This call returns immediately, but might take additional time to retrieve all the
 */
ImportServerCatalogResponse * SmsClient::importServerCatalog(const ImportServerCatalogRequest &request)
{
    return qobject_cast<ImportServerCatalogResponse *>(send(request));
}

/*!
 * Sends \a request to the SmsClient service, and returns a pointer to an
 * LaunchAppResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Launches an application
 */
LaunchAppResponse * SmsClient::launchApp(const LaunchAppRequest &request)
{
    return qobject_cast<LaunchAppResponse *>(send(request));
}

/*!
 * Sends \a request to the SmsClient service, and returns a pointer to an
 * ListAppsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of summaries for all
 */
ListAppsResponse * SmsClient::listApps(const ListAppsRequest &request)
{
    return qobject_cast<ListAppsResponse *>(send(request));
}

/*!
 * Sends \a request to the SmsClient service, and returns a pointer to an
 * PutAppLaunchConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a launch configuration for an
 */
PutAppLaunchConfigurationResponse * SmsClient::putAppLaunchConfiguration(const PutAppLaunchConfigurationRequest &request)
{
    return qobject_cast<PutAppLaunchConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the SmsClient service, and returns a pointer to an
 * PutAppReplicationConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates a replication configuration for an
 */
PutAppReplicationConfigurationResponse * SmsClient::putAppReplicationConfiguration(const PutAppReplicationConfigurationRequest &request)
{
    return qobject_cast<PutAppReplicationConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the SmsClient service, and returns a pointer to an
 * StartAppReplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts replicating an
 */
StartAppReplicationResponse * SmsClient::startAppReplication(const StartAppReplicationRequest &request)
{
    return qobject_cast<StartAppReplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the SmsClient service, and returns a pointer to an
 * StartOnDemandReplicationRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts an on-demand replication run for the specified replication job. This replication run starts immediately. This
 * replication run is in addition to the ones already
 *
 * scheduled>
 *
 * There is a limit on the number of on-demand replications runs you can request in a 24-hour
 */
StartOnDemandReplicationRunResponse * SmsClient::startOnDemandReplicationRun(const StartOnDemandReplicationRunRequest &request)
{
    return qobject_cast<StartOnDemandReplicationRunResponse *>(send(request));
}

/*!
 * Sends \a request to the SmsClient service, and returns a pointer to an
 * StopAppReplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops replicating an
 */
StopAppReplicationResponse * SmsClient::stopAppReplication(const StopAppReplicationRequest &request)
{
    return qobject_cast<StopAppReplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the SmsClient service, and returns a pointer to an
 * TerminateAppResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Terminates the stack for an
 */
TerminateAppResponse * SmsClient::terminateApp(const TerminateAppRequest &request)
{
    return qobject_cast<TerminateAppResponse *>(send(request));
}

/*!
 * Sends \a request to the SmsClient service, and returns a pointer to an
 * UpdateAppResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an
 */
UpdateAppResponse * SmsClient::updateApp(const UpdateAppRequest &request)
{
    return qobject_cast<UpdateAppResponse *>(send(request));
}

/*!
 * Sends \a request to the SmsClient service, and returns a pointer to an
 * UpdateReplicationJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified settings for the specified replication
 */
UpdateReplicationJobResponse * SmsClient::updateReplicationJob(const UpdateReplicationJobRequest &request)
{
    return qobject_cast<UpdateReplicationJobResponse *>(send(request));
}

/*!
 * \class QtAws::SMS::SmsClientPrivate
 * \brief The SmsClientPrivate class provides private implementation for SmsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSMS
 */

/*!
 * Constructs a SmsClientPrivate object with public implementation \a q.
 */
SmsClientPrivate::SmsClientPrivate(SmsClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace SMS
} // namespace QtAws
