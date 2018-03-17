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

#include "servicecatalogclient.h"
#include "servicecatalogclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  ServiceCatalogClient
 *
 * @brief  Client for AWS Service Catalog
 *
 * <fullname>AWS Service Catalog</fullname>
 *
 * <b>Overview</b>
 *
 * </p
 *
 * <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> allows organizations to create and manage
 * catalogs of IT services that are approved for use on AWS. This documentation provides reference material for the AWS
 * Service Catalog end user API. To get the most out of this documentation, you need to be familiar with the terminology
 * discussed in <a href="http://docs.aws.amazon.com/servicecatalog/latest/userguide/what-is_concepts.html">AWS Service
 * Catalog
 *
 * Concepts</a>>
 *
 * <i>Additional Resources</i>
 *
 * </p <ul> <li>
 *
 * <a href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/introduction.html">AWS Service Catalog
 * Administrator Guide</a>
 *
 * </p </li> <li>
 *
 * <a href="http://docs.aws.amazon.com/servicecatalog/latest/userguide/introduction.html">AWS Service Catalog User
 * Guide</a>
 */

/**
 * @brief  Constructs a new ServiceCatalogClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
ServiceCatalogClient::ServiceCatalogClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ServiceCatalogClientPrivate(this), parent)
{
    Q_D(ServiceCatalogClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new ServiceCatalogClient object.
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
ServiceCatalogClient::ServiceCatalogClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ServiceCatalogClientPrivate(this), parent)
{
    Q_D(ServiceCatalogClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  ServiceCatalogClientPrivate
 *
 * @brief  Private implementation for ServiceCatalogClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ServiceCatalogClientPrivate object.
 *
 * @param  q  Pointer to this object's public ServiceCatalogClient instance.
 */
ServiceCatalogClientPrivate::ServiceCatalogClientPrivate(ServiceCatalogClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace ServiceCatalog
} // namespace AWS
