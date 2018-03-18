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

#include "costexplorerclient.h"
#include "costexplorerclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace CostExplorer {

/**
 * @class  CostExplorerClient
 *
 * @brief  Client for AWS Cost Explorer Service
 *
 * The Cost Explorer API allows you to programmatically query your cost and usage data. You can query for aggregated data
 * such as total monthly costs or total daily usage. You can also query for granular data, such as the number of daily
 * write operations for DynamoDB database tables in your production environment.
 *
 * </p
 *
 * Service
 *
 * Endpoin>
 *
 * The Cost Explorer API provides the following
 *
 * endpoint> <ul> <li>
 */

/**
 * @brief  Constructs a new CostExplorerClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
CostExplorerClient::CostExplorerClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CostExplorerClientPrivate(this), parent)
{
    Q_D(CostExplorerClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new CostExplorerClient object.
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
CostExplorerClient::CostExplorerClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CostExplorerClientPrivate(this), parent)
{
    Q_D(CostExplorerClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  CostExplorerClientPrivate
 *
 * @brief  Private implementation for CostExplorerClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CostExplorerClientPrivate object.
 *
 * @param  q  Pointer to this object's public CostExplorerClient instance.
 */
CostExplorerClientPrivate::CostExplorerClientPrivate(CostExplorerClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace CostExplorer
} // namespace AWS
