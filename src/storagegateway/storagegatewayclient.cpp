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

#include "storagegatewayclient.h"
#include "storagegatewayclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

QTAWS_BEGIN_NAMESPACE

/**
 * @class  StorageGatewayClient
 *
 * @brief  Client for AWS Storage Gateway
 *
 * <fullname>AWS Storage Gateway Service</fullname>
 *
 + AWS Storage Gateway is the service that connects an on-premises software appliance with cloud-based storage to provide seamless and secure integration between an organization's on-premises IT environment and AWS's storage infrastructure. The service enables you to securely upload data to the AWS cloud for cost effective backup and rapid disaster recovery.
 *
 + Use the following links to get started using the <i>AWS Storage Gateway Service API Reference</i>:
 *
 +  <ul> <li>
 *
 +  <a href="http://docs.aws.amazon.com/storagegateway/latest/userguide/AWSStorageGatewayHTTPRequestsHeaders.html">AWS Storage Gateway Required Request Headers</a>: Describes the required headers that you must send with every POST request to AWS Storage Gateway.
 *
 +  </li> <li>
 *
 +  <a href="http://docs.aws.amazon.com/storagegateway/latest/userguide/AWSStorageGatewaySigningRequests.html">Signing Requests</a>: AWS Storage Gateway requires that you authenticate every request you send; this topic describes how sign such a request.
 *
 +  </li> <li>
 *
 +  <a href="http://docs.aws.amazon.com/storagegateway/latest/userguide/APIErrorResponses.html">Error Responses</a>: Provides reference information about AWS Storage Gateway errors.
 *
 +  </li> <li>
 *
 +  <a href="http://docs.aws.amazon.com/storagegateway/latest/userguide/AWSStorageGatewayAPIOperations.html">Operations in AWS Storage Gateway</a>: Contains detailed descriptions of all AWS Storage Gateway operations, their request parameters, response elements, possible errors, and examples of requests and responses.
 *
 +  </li> <li>
 *
 +  <a href="http://docs.aws.amazon.com/general/latest/gr/index.html?rande.html">AWS Storage Gateway Regions and Endpoints</a>: Provides a list of each of the s and endpoints available for use with AWS Storage Gateway.
 *
 +  </li> </ul> <note>
 *
 + AWS Storage Gateway resource IDs are in uppercase. When you use these resource IDs with the Amazon EC2 API, EC2 expects resource IDs in lowercase. You must change your resource ID to lowercase to use it with the EC2 API. For example, in Storage Gateway the ID for a volume might be <code>vol-1122AABB</code>. When you use this ID with the EC2 API, you must change it to <code>vol-1122aabb</code>. Otherwise, the EC2 API might not behave as expected.
 *
 +  </note> <important>
 *
 + IDs for Storage Gateway volumes and Amazon EBS snapshots created from gateway volumes are changing to a longer format. Starting in December 2016, all new volumes and snapshots will be created with a 17-character string. Starting in April 2016, you will be able to use these longer IDs so you can test your systems with the new format. For more information, see <a href="https://aws.amazon.com/ec2/faqs/#longer-ids">Longer EC2 and EBS Resource IDs</a>.
 *
 +  For example, a volume ARN with the longer volume ID format will look like this:
 *
 +  <code>arn:aws:storagegateway:us-west-2:111122223333:gateway/sgw-12A3456B/volume/vol-1122AABBCCDDEEFFG</code>.
 *
 + A snapshot ID with the longer ID format will look like this: <code>snap-78e226633445566ee</code>.
 *
 + For more information, see <a href="https://forums.aws.amazon.com/ann.jspa?annID=3557">Announcement: Heads-up – Longer AWS Storage Gateway volume and snapshot IDs coming in 2016</a>.
 *
 +  </important>
 */

/**
 * @brief  Constructs a new StorageGatewayClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
StorageGatewayClient::StorageGatewayClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new StorageGatewayClientPrivate(this), parent)
{
    Q_D(StorageGatewayClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new StorageGatewayClient object.
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
StorageGatewayClient::StorageGatewayClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new StorageGatewayClientPrivate(this), parent)
{
    Q_D(StorageGatewayClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  StorageGatewayClientPrivate
 *
 * @brief  Private implementation for StorageGatewayClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StorageGatewayClientPrivate object.
 *
 * @param  q  Pointer to this object's public StorageGatewayClient instance.
 */
StorageGatewayClientPrivate::StorageGatewayClientPrivate(StorageGatewayClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

QTAWS_END_NAMESPACE
