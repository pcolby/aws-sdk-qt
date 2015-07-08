/*
    Copyright 2013-2015 Paul Colby

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

#include "sqsclient.h"
#include "sqsclient_p.h"

#include "core/awssignaturev4.h"
#include "sqsaddpermissionrequest.h"
#include "sqsaddpermissionresponse.h"
#include "sqscreatequeuerequest.h"
#include "sqscreatequeueresponse.h"
#include "sqsrequest.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

#define SQS_SERVICE_NAME QLatin1String("sqs") // As used in endpoints.xml

QTAWS_BEGIN_NAMESPACE

/**
 * @class  SqsClient
 *
 * @brief  Client for Amazon's Simple Queue Service (SQS)
 *
 * @see    http://aws.amazon.com/sqs/
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/
 * @see    http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */

/**
 * @brief  Constructs a new SqsClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
SqsClient::SqsClient(const AwsRegion::Region region,
                     AwsAbstractCredentials * credentials,
                     QNetworkAccessManager * const manager,
                     QObject * const parent)
    : AwsAbstractClient(new SqsClientPrivate(this), parent)
{
    Q_D(SqsClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = SQS_SERVICE_NAME;
}

/**
 * @brief  Constructs a new SqsClient object.
 *
 * This overload allows the caller to specify the specific SQS endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct SQS endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     SQS endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
SqsClient::SqsClient(const QUrl &endpoint,
                     AwsAbstractCredentials * credentials,
                     QNetworkAccessManager * const manager,
                     QObject * const parent)
    : AwsAbstractClient(new SqsClientPrivate(this), parent)
{
    Q_D(SqsClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = SQS_SERVICE_NAME;
}

/**
 * @brief  Add permissions to an SQS queue.
 *
 * @param  request  The request to send to SQS.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SqsAddPermissionResponse * SqsClient::addPermission(const SqsAddPermissionRequest &request)
{
    return qobject_cast<SqsAddPermissionResponse *>(send(request));
}

/**
 * @brief  Create an SQS queue.
 *
 * @param  request  The request to send to SQS.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SqsCreateQueueResponse * SqsClient::createQueue(const SqsCreateQueueRequest &request)
{
    return qobject_cast<SqsCreateQueueResponse *>(send(request));
}

/**
 * @brief  Create an SQS queue.
 *
 * This convenience overload simply allows callers to skip creating the required
 * SqsCreateQueueRequest object.
 *
 * @param  queueName   Name of the queue to create.
 * @param  attributes  Optional attributes to include with the request. See the
 *                     SqsCreateQueueRequest documentation for valid attributes.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 *
 * @see    SqsCreateQueueRequest
 */
SqsCreateQueueResponse * SqsClient::createQueue(const QString &queueName,
                                                const QVariantMap &attributes)
{
    SqsCreateQueueRequest request(queueName);
    request.setAttributes(attributes);
    return createQueue(request);
}

/**
 * @internal
 *
 * @class  SqsClientPrivate
 *
 * @brief  Private implementation for SqsClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsClientPrivate object.
 *
 * @param  q  Pointer to this object's public SqsClient instance.
 */
SqsClientPrivate::SqsClientPrivate(SqsClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

QTAWS_END_NAMESPACE
