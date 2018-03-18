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

#include "batchclient.h"
#include "batchclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace Batch {

/**
 * @class  BatchClient
 *
 * @brief  Client for AWS Batch
 *
 * AWS Batch enables you to run batch computing workloads on the AWS Cloud. Batch computing is a common way for developers,
 * scientists, and engineers to access large amounts of compute resources, and AWS Batch removes the undifferentiated heavy
 * lifting of configuring and managing the required infrastructure. AWS Batch will be familiar to users of traditional
 * batch computing software. This service can efficiently provision resources in response to jobs submitted in order to
 * eliminate capacity constraints, reduce compute costs, and deliver results
 *
 * quickly>
 *
 * As a fully managed service, AWS Batch enables developers, scientists, and engineers to run batch computing workloads of
 * any scale. AWS Batch automatically provisions compute resources and optimizes the workload distribution based on the
 * quantity and scale of the workloads. With AWS Batch, there is no need to install or manage batch computing software,
 * which allows you to focus on analyzing results and solving problems. AWS Batch reduces operational complexities, saves
 * time, and reduces costs, which makes it easy for developers, scientists, and engineers to run their batch jobs in the
 * AWS
 */

/**
 * @brief  Constructs a new BatchClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
BatchClient::BatchClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new BatchClientPrivate(this), parent)
{
    Q_D(BatchClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new BatchClient object.
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
BatchClient::BatchClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new BatchClientPrivate(this), parent)
{
    Q_D(BatchClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  BatchClientPrivate
 *
 * @brief  Private implementation for BatchClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchClientPrivate object.
 *
 * @param  q  Pointer to this object's public BatchClient instance.
 */
BatchClientPrivate::BatchClientPrivate(BatchClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace Batch
} // namespace AWS
