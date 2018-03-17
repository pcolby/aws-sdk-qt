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

#include "glacierclient.h"
#include "glacierclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace Glacier {

/**
 * @class  GlacierClient
 *
 * @brief  Client for Amazon Glacier
 *
 * Amazon Glacier is a storage solution for "cold
 *
 * data.>
 *
 * Amazon Glacier is an extremely low-cost storage service that provides secure, durable, and easy-to-use storage for data
 * backup and archival. With Amazon Glacier, customers can store their data cost effectively for months, years, or decades.
 * Amazon Glacier also enables customers to offload the administrative burdens of operating and scaling storage to AWS, so
 * they don't have to worry about capacity planning, hardware provisioning, data replication, hardware failure and
 * recovery, or time-consuming hardware
 *
 * migrations>
 *
 * Amazon Glacier is a great storage choice when low storage cost is paramount, your data is rarely retrieved, and
 * retrieval latency of several hours is acceptable. If your application requires fast or frequent access to your data,
 * consider using Amazon S3. For more information, go to <a href="http://aws.amazon.com/s3/">Amazon Simple Storage Service
 * (Amazon
 *
 * S3)</a>>
 *
 * You can store any kind of data in any format. There is no maximum limit on the total amount of data you can store in
 * Amazon Glacier.
 *
 * </p
 *
 * If you are a first-time user of Amazon Glacier, we recommend that you begin by reading the following sections in the
 * <i>Amazon Glacier Developer
 *
 * Guide</i>> <ul> <li><p><a href="http://docs.aws.amazon.com/amazonglacier/latest/dev/introduction.html">What is Amazon
 * Glacier</a> - This section of the Developer Guide describes the underlying data model, the operations it supports, and
 * the AWS SDKs that you can use to interact with the service.</p></li> <li><p><a
 * href="http://docs.aws.amazon.com/amazonglacier/latest/dev/amazon-glacier-getting-started.html">Getting Started with
 * Amazon Glacier</a> - The Getting Started section walks you through the process of creating a vault, uploading archives,
 */

/**
 * @brief  Constructs a new GlacierClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
GlacierClient::GlacierClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new GlacierClientPrivate(this), parent)
{
    Q_D(GlacierClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new GlacierClient object.
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
GlacierClient::GlacierClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new GlacierClientPrivate(this), parent)
{
    Q_D(GlacierClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  GlacierClientPrivate
 *
 * @brief  Private implementation for GlacierClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GlacierClientPrivate object.
 *
 * @param  q  Pointer to this object's public GlacierClient instance.
 */
GlacierClientPrivate::GlacierClientPrivate(GlacierClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace Glacier
} // namespace AWS
