/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "sqsclient.h"
#include "sqsclient_p.h"

#include "core/awssignaturev4.h"
#include "sqsaddpermissionrequest.h"
#include "sqsaddpermissionresponse.h"
#include "sqschangemessagevisibilitybatchrequest.h"
#include "sqschangemessagevisibilitybatchresponse.h"
#include "sqschangemessagevisibilityrequest.h"
#include "sqschangemessagevisibilityresponse.h"
#include "sqscreatequeuerequest.h"
#include "sqscreatequeueresponse.h"
#include "sqsdeletemessagebatchrequest.h"
#include "sqsdeletemessagebatchresponse.h"
#include "sqsdeletemessagerequest.h"
#include "sqsdeletemessageresponse.h"
#include "sqsdeletequeuerequest.h"
#include "sqsdeletequeueresponse.h"
#include "sqsgetqueueattributesrequest.h"
#include "sqsgetqueueattributesresponse.h"
#include "sqsgetqueueurlrequest.h"
#include "sqsgetqueueurlresponse.h"
#include "sqslistdeadlettersourcequeuesrequest.h"
#include "sqslistdeadlettersourcequeuesresponse.h"
#include "sqslistqueuesrequest.h"
#include "sqslistqueuesresponse.h"
#include "sqspurgequeuerequest.h"
#include "sqspurgequeueresponse.h"
#include "sqsreceivemessagerequest.h"
#include "sqsreceivemessageresponse.h"
#include "sqsremovepermissionrequest.h"
#include "sqsremovepermissionresponse.h"
#include "sqssendmessagebatchrequest.h"
#include "sqssendmessagebatchresponse.h"
#include "sqssendmessagerequest.h"
#include "sqssendmessageresponse.h"
#include "sqssetqueueattributesrequest.h"
#include "sqssetqueueattributesresponse.h"

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
 * @param  request  Request to send to SQS.
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
 * @brief  Change the visibility timeout of a received SQS message.
 *
 * @param  request  Request to send to SQS.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SqsChangeMessageVisibilityResponse * SqsClient::changeMessageVisibility(
    const SqsChangeMessageVisibilityRequest &request)
{
    return qobject_cast<SqsChangeMessageVisibilityResponse *>(send(request));
}

/**
 * @brief  Change the visibility timeout of a received SQS message.
 *
 * @param  queueUrl          URL of the queue \a receiptHandle relates to.
 * @param  receiptHandle     Handle for the message to set the timeout for.
 * @param  visbilityTimeout  New value (in seconds) for the message's visibility timeout.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SqsChangeMessageVisibilityResponse * SqsClient::changeMessageVisibility(
    const QString &queueUrl, const QString &receiptHandle,
    const int visbilityTimeout)
{
    const SqsChangeMessageVisibilityRequest request(
        queueUrl, receiptHandle, visbilityTimeout);
    return changeMessageVisibility(request);
}

/**
 * @brief  Create an SQS queue.
 *
 * @param  request  Request to send to SQS.
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
 * @brief  Deletes the specified message from the specified queue.
 *
 * @param  request  Request to send to SQS.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SqsDeleteMessageResponse * SqsClient::deleteMessage(
    const SqsDeleteMessageRequest &request)
{
    return qobject_cast<SqsDeleteMessageResponse *>(send(request));
}

/**
 * @brief  Deletes the specified message from the specified queue.
 *
 * @param  queueUrl       URL of the Amazon SQS queue to take action on.
 * @param  receiptHandle  Receipt handle associated with the message to delete.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 *
 * @see    SqsDeleteMessageRequest
 */
SqsDeleteMessageResponse * SqsClient::deleteMessage(
    const QString &queueUrl, const QString &receiptHandle)
{
    const SqsDeleteMessageRequest request(queueUrl, receiptHandle);
    return deleteMessage(request);
}

/**
 * @brief  Deletes the queue specified by the queue URL.
 *
 * @param  request  Request to send to SQS.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 *
 * @see    SqsDeleteQueueRequest
 */
SqsDeleteQueueResponse * SqsClient::deleteQueue(const SqsDeleteQueueRequest &request)
{
    return qobject_cast<SqsDeleteQueueResponse *>(send(request));
}

/**
 * @brief  Deletes the queue specified by the queue URL.
 *
 * @param  queueUrl  URL of the Amazon SQS queue to take action on.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 *
 * @see    SqsDeleteQueueRequest
 */
SqsDeleteQueueResponse * SqsClient::deleteQueue(const QString &queueUrl)
{
    const SqsDeleteQueueRequest request(queueUrl);
    return deleteQueue(request);
}

/**
 * @brief  Gets the URL of an existing queue.
 *
 * @param  request  Request to send to SQS.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SqsGetQueueUrlResponse * SqsClient::getQueueUrl(const SqsGetQueueUrlRequest &request)
{
    return qobject_cast<SqsGetQueueUrlResponse *>(send(request));
}

/**
 * @brief  Gets the URL of an existing queue.
 *
 * @param  queueName               Name of the queue whose URL must be fetched.
 * @param  queueOwnerAWSAccountId  The AWS account ID of the account that created the queue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 *
 * @see    SqsGetQueueUrlRequest
 */
SqsGetQueueUrlResponse * SqsClient::getQueueUrl(
    const QString &queueName, const QString &queueOwnerAWSAccountId)
{
    const SqsGetQueueUrlRequest request(queueName, queueOwnerAWSAccountId);
    return getQueueUrl(request);
}

/**
 * @brief  Get a list of queues that have the RedrivePolicy queue attribute
 *         configured with a dead letter queue.
 *
 * @param  request  Request to send to SQS.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SqsListDeadLetterSourceQueuesResponse * SqsClient::listDeadLetterSourceQueues(
    const SqsListDeadLetterSourceQueuesRequest &request)
{
    return qobject_cast<SqsListDeadLetterSourceQueuesResponse *>(send(request));
}

/**
 * @brief  Get a list of queues that have the RedrivePolicy queue attribute
 *         configured with a dead letter queue.
 *
 * @param  queueUrl  URL of a dead letter queue.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 *
 * @see    SqsListDeadLetterSourceQueuesRequest
 */
SqsListDeadLetterSourceQueuesResponse * SqsClient::listDeadLetterSourceQueues(
    const QString &queueUrl)
{
    const SqsListDeadLetterSourceQueuesRequest request(queueUrl);
    return listDeadLetterSourceQueues(request);
}

/**
 * @brief  Get a list of queues belonging to the authorized account.
 *
 * @param  request  Request to send to SQS.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SqsListQueuesResponse * SqsClient::listQueues(const SqsListQueuesRequest &request)
{
    return qobject_cast<SqsListQueuesResponse *>(send(request));
}

/**
 * @brief  Get a list of queues belonging to the authorized account.
 *
 * @param  queueNamePrefix  String to use for filtering the list results.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 *
 * @see    SqsListQueuesRequest
 */
SqsListQueuesResponse * SqsClient::listQueues(const QString &queueNamePrefix)
{
    const SqsListQueuesRequest request(queueNamePrefix);
    return listQueues(request);
}

/**
 * @brief  Deletes the messages in a queue specified by the queue URL.
 *
 * @param  request  Request to send to SQS.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SqsPurgeQueueResponse * SqsClient::purgeQueue(const SqsPurgeQueueRequest &request)
{
    return qobject_cast<SqsPurgeQueueResponse *>(send(request));
}

/**
 * @brief  Deletes the messages in a queue specified by the queue URL.
 *
 * @param  queueUrl  URL of the Amazon SQS queue to take action on.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 *
 * @see    SqsPurgeQueueResponse
 */
SqsPurgeQueueResponse * SqsClient::purgeQueue(const QString &queueUrl)
{
    const SqsPurgeQueueRequest request(queueUrl);
    return purgeQueue(request);
}

/**
 * @brief  Revokes any permissions in the queue policy that matches the
 *         specified \a label.
 *
 * @param  request  Request to send to SQS.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SqsRemovePermissionResponse * SqsClient::removePermission(
    const SqsRemovePermissionRequest &request)
{
    return qobject_cast<SqsRemovePermissionResponse *>(send(request));
}

/**
 * @brief  Revokes any permissions in the queue policy that matches the
 *         specified \a label.
 *
 * @param  queueUrl  URL of the Amazon SQS queue to take action on.
 * @param  label     Identification of the permission to remove.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 *
 * @see    SqsRemovePermissionRequest
 */
SqsRemovePermissionResponse * SqsClient::removePermission(
    const QString &queueUrl, const QString &label)
{
    const SqsRemovePermissionRequest request(queueUrl, label);
    return removePermission(request);
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
