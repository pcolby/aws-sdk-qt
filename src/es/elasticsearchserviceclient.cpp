/*
    Copyright 2013-2016 Paul Colby

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

#include "elasticsearchserviceclient.h"
#include "elasticsearchserviceclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

QTAWS_BEGIN_NAMESPACE

/**
 * @class  ElasticsearchServiceClient
 *
 * @brief  Client for Amazon Elasticsearch Service
 *
 * <fullname>Amazon Elasticsearch Configuration Service</fullname>
 *
 + Use the Amazon Elasticsearch configuration API to create, configure, and manage Elasticsearch domains.
 *
 + The endpoint for configuration service requests is region-specific: es.<i>region</i>.amazonaws.com. For example, es.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a href="http://docs.aws.amazon.com/general/latest/gr/rande.html#elasticsearch-service-regions" target="_blank">Regions and Endpoints</a>.
 */

/**
 * @brief  Constructs a new ElasticsearchServiceClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
ElasticsearchServiceClient::ElasticsearchServiceClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ElasticsearchServiceClientPrivate(this), parent)
{
    Q_D(ElasticsearchServiceClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new ElasticsearchServiceClient object.
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
ElasticsearchServiceClient::ElasticsearchServiceClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ElasticsearchServiceClientPrivate(this), parent)
{
    Q_D(ElasticsearchServiceClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  ElasticsearchServiceClientPrivate
 *
 * @brief  Private implementation for ElasticsearchServiceClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ElasticsearchServiceClientPrivate object.
 *
 * @param  q  Pointer to this object's public ElasticsearchServiceClient instance.
 */
ElasticsearchServiceClientPrivate::ElasticsearchServiceClientPrivate(ElasticsearchServiceClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

QTAWS_END_NAMESPACE
