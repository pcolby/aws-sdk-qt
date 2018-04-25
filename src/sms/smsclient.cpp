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
#include "createreplicationjobrequest.h"
#include "createreplicationjobresponse.h"
#include "deletereplicationjobrequest.h"
#include "deletereplicationjobresponse.h"
#include "deleteservercatalogrequest.h"
#include "deleteservercatalogresponse.h"
#include "disassociateconnectorrequest.h"
#include "disassociateconnectorresponse.h"
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
#include "startondemandreplicationrunrequest.h"
#include "startondemandreplicationrunresponse.h"
#include "updatereplicationjobrequest.h"
#include "updatereplicationjobresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::SMS
 * \brief The QtAws::SMS contains stuff...
 *
 * \inmodule QtAwsSMS
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
 * CreateReplicationJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The CreateReplicationJob API is used to create a ReplicationJob to replicate a server on AWS. Call this API to first
 * create a ReplicationJob, which will then schedule periodic ReplicationRuns to replicate your server to AWS. Each
 */
CreateReplicationJobResponse * SmsClient::createReplicationJob(const CreateReplicationJobRequest &request)
{
    return qobject_cast<CreateReplicationJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SmsClient service, and returns a pointer to an
 * DeleteReplicationJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The DeleteReplicationJob API is used to delete a ReplicationJob, resulting in no further ReplicationRuns. This will
 * delete the contents of the S3 bucket used to store SMS artifacts, but will not delete any AMIs created by the SMS
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
 * The DeleteServerCatalog API clears all servers from your server catalog. This means that these servers will no longer be
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
 * The DisassociateConnector API will disassociate a connector from the Server Migration Service, rendering it unavailable
 */
DisassociateConnectorResponse * SmsClient::disassociateConnector(const DisassociateConnectorRequest &request)
{
    return qobject_cast<DisassociateConnectorResponse *>(send(request));
}

/*!
 * Sends \a request to the SmsClient service, and returns a pointer to an
 * GetConnectorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 * The GetReplicationJobs API will return all of your ReplicationJobs and their details. This API returns a paginated list,
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
 * The GetReplicationRuns API will return all ReplicationRuns for a given ReplicationJob. This API returns a paginated
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
 * The GetServers API returns a list of all servers in your server catalog. For this call to succeed, you must previously
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
 * The ImportServerCatalog API is used to gather the complete list of on-premises servers on your premises. This API call
 * requires connectors to be installed and monitoring all servers you would like imported. This API call returns
 */
ImportServerCatalogResponse * SmsClient::importServerCatalog(const ImportServerCatalogRequest &request)
{
    return qobject_cast<ImportServerCatalogResponse *>(send(request));
}

/*!
 * Sends \a request to the SmsClient service, and returns a pointer to an
 * StartOnDemandReplicationRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The StartOnDemandReplicationRun API is used to start a ReplicationRun on demand (in addition to those that are scheduled
 * based on your frequency). This ReplicationRun will start immediately. StartOnDemandReplicationRun is subject to limits
 */
StartOnDemandReplicationRunResponse * SmsClient::startOnDemandReplicationRun(const StartOnDemandReplicationRunRequest &request)
{
    return qobject_cast<StartOnDemandReplicationRunResponse *>(send(request));
}

/*!
 * Sends \a request to the SmsClient service, and returns a pointer to an
 * UpdateReplicationJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The UpdateReplicationJob API is used to change the settings of your existing ReplicationJob created using
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
