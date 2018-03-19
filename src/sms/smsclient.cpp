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

#include "smsclient.h"
#include "smsclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace SMS {

/**
 * @class  SmsClient
 *
 * @brief  Client for AWS Server Migration Service (SMS)
 *
 */

/**
 * @brief  Constructs a new SmsClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
SmsClient::SmsClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new SmsClientPrivate(this), parent)
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

/**
 * @brief  Constructs a new SmsClient object.
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
SmsClient::SmsClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new SmsClientPrivate(this), parent)
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

/// @todo override getEndpoint() to use sms.

/**
 * The CreateReplicationJob API is used to create a ReplicationJob to replicate a server on AWS. Call this API to first
 * create a ReplicationJob, which will then schedule periodic ReplicationRuns to replicate your server to AWS. Each
 *
 * @param  request Request to send to AWS Server Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateReplicationJobResponse * SmsClient::createReplicationJob(const CreateReplicationJobRequest &request)
{

}

/**
 * The DeleteReplicationJob API is used to delete a ReplicationJob, resulting in no further ReplicationRuns. This will
 * delete the contents of the S3 bucket used to store SMS artifacts, but will not delete any AMIs created by the SMS
 *
 * @param  request Request to send to AWS Server Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteReplicationJobResponse * SmsClient::deleteReplicationJob(const DeleteReplicationJobRequest &request)
{

}

/**
 * The DeleteServerCatalog API clears all servers from your server catalog. This means that these servers will no longer be
 *
 * @param  request Request to send to AWS Server Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteServerCatalogResponse * SmsClient::deleteServerCatalog(const DeleteServerCatalogRequest &request)
{

}

/**
 * The DisassociateConnector API will disassociate a connector from the Server Migration Service, rendering it unavailable
 *
 * @param  request Request to send to AWS Server Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisassociateConnectorResponse * SmsClient::disassociateConnector(const DisassociateConnectorRequest &request)
{

}

/**
 *
 * @param  request Request to send to AWS Server Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetConnectorsResponse * SmsClient::getConnectors(const GetConnectorsRequest &request)
{

}

/**
 * The GetReplicationJobs API will return all of your ReplicationJobs and their details. This API returns a paginated list,
 *
 * @param  request Request to send to AWS Server Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetReplicationJobsResponse * SmsClient::getReplicationJobs(const GetReplicationJobsRequest &request)
{

}

/**
 * The GetReplicationRuns API will return all ReplicationRuns for a given ReplicationJob. This API returns a paginated
 *
 * @param  request Request to send to AWS Server Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetReplicationRunsResponse * SmsClient::getReplicationRuns(const GetReplicationRunsRequest &request)
{

}

/**
 * The GetServers API returns a list of all servers in your server catalog. For this call to succeed, you must previously
 *
 * @param  request Request to send to AWS Server Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetServersResponse * SmsClient::getServers(const GetServersRequest &request)
{

}

/**
 * The ImportServerCatalog API is used to gather the complete list of on-premises servers on your premises. This API call
 * requires connectors to be installed and monitoring all servers you would like imported. This API call returns
 *
 * @param  request Request to send to AWS Server Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ImportServerCatalogResponse * SmsClient::importServerCatalog(const ImportServerCatalogRequest &request)
{

}

/**
 * The StartOnDemandReplicationRun API is used to start a ReplicationRun on demand (in addition to those that are scheduled
 * based on your frequency). This ReplicationRun will start immediately. StartOnDemandReplicationRun is subject to limits
 *
 * @param  request Request to send to AWS Server Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartOnDemandReplicationRunResponse * SmsClient::startOnDemandReplicationRun(const StartOnDemandReplicationRunRequest &request)
{

}

/**
 * The UpdateReplicationJob API is used to change the settings of your existing ReplicationJob created using
 *
 * @param  request Request to send to AWS Server Migration Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateReplicationJobResponse * SmsClient::updateReplicationJob(const UpdateReplicationJobRequest &request)
{

}

/**
 * @internal
 *
 * @class  SmsClientPrivate
 *
 * @brief  Private implementation for SmsClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SmsClientPrivate object.
 *
 * @param  q  Pointer to this object's public SmsClient instance.
 */
SmsClientPrivate::SmsClientPrivate(SmsClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace SMS
} // namespace AWS
