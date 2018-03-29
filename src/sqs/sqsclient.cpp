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

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace SQS {

/**
 * @class  SqsClient
 *
 * @brief  Client for Amazon Simple Queue Service ( SQS)
 *
 * Welcome to the <i>Amazon Simple Queue Service API
 *
 * Reference</i>>
 *
 * Amazon Simple Queue Service (Amazon SQS) is a reliable, highly-scalable hosted queue for storing messages as they travel
 * between applications or microservices. Amazon SQS moves data between distributed application components and helps you
 * decouple these
 *
 * components> <note>
 *
 * <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/standard-queues.html">Standard
 * queues</a> are available in all regions. <a
 * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO queues</a> are
 * available in the US East (N. Virginia), US East (Ohio), US West (Oregon), and EU (Ireland)
 *
 * regions> </note>
 *
 * You can use <a href="http://aws.amazon.com/tools/#sdk">AWS SDKs</a> to access Amazon SQS using your favorite programming
 * language. The SDKs perform tasks such as the following
 *
 * automatically> <ul> <li>
 *
 * Cryptographically sign your service
 *
 * request> </li> <li>
 *
 * Retry
 *
 * request> </li> <li>
 *
 * Handle error
 *
 * response> </li> </ul>
 *
 * <b>Additional Information</b>
 *
 * </p <ul> <li>
 *
 * <a href="http://aws.amazon.com/sqs/">Amazon SQS Product Page</a>
 *
 * </p </li> <li>
 *
 * <i>Amazon Simple Queue Service Developer Guide</i>
 *
 * </p <ul> <li>
 *
 * <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/MakingRequestsArticle.html">Making
 * API Requests</a>
 *
 * </p </li> <li>
 *
 * <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-message-attributes.html">Using
 * Amazon SQS Message Attributes</a>
 *
 * </p </li> <li>
 *
 * <a href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">Using
 * Amazon SQS Dead-Letter Queues</a>
 *
 * </p </li> </ul> </li> <li>
 *
 * <i>Amazon Web Services General Reference</i>
 *
 * </p <ul> <li>
 *
 * <a href="http://docs.aws.amazon.com/general/latest/gr/rande.html#sqs_region">Regions and Endpoints</a>
 */

/**
 * @brief  Constructs a new SqsClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
SqsClient::SqsClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new SqsClientPrivate(this), parent)
{
    Q_D(SqsClient);
    d->apiVersion = QStringLiteral("2012-11-05");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("sqs");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Simple Queue Service");
    d->serviceName = QStringLiteral("sqs");
}

/**
 * @brief  Constructs a new SqsClient object.
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
SqsClient::SqsClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new SqsClientPrivate(this), parent)
{
    Q_D(SqsClient);
    d->apiVersion = QStringLiteral("2012-11-05");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("sqs");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Simple Queue Service");
    d->serviceName = QStringLiteral("sqs");
}

/**
 * Adds a permission to a queue for a specific <a
 * href="http://docs.aws.amazon.com/general/latest/gr/glos-chap.html#P">principal</a>. This allows sharing access to the
 *
 * queue>
 *
 * When you create a queue, you have full control access rights for the queue. Only you, the owner of the queue, can grant
 * or deny permissions to the queue. For more information about these permissions, see <a
 * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/acp-overview.html">Shared Queues</a> in
 * the <i>Amazon Simple Queue Service Developer
 *
 * Guide</i>> <note>
 *
 * <code>AddPermission</code> writes an Amazon-SQS-generated policy. If you want to write your own policy, use <code>
 * <a>SetQueueAttributes</a> </code> to upload your policy. For more information about writing your own policy, see <a
 * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/AccessPolicyLanguage.html">Using The
 * Access Policy Language</a> in the <i>Amazon Simple Queue Service Developer
 *
 * Guide</i>>
 *
 * Some actions take lists of parameters. These lists are specified using the <code>param.n</code> notation. Values of
 * <code>n</code> are integers starting from 1. For example, a parameter list with two elements looks like
 *
 * this>
 *
 * <code>&amp;Attribute.1=this</code>
 *
 * </p
 *
 * <code>&amp;Attribute.2=that</code>
 *
 * @param  request Request to send to Amazon Simple Queue Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AddPermissionResponse * SqsClient::addPermission(const AddPermissionRequest &request)
{
    return qobject_cast<AddPermissionResponse *>(send(request));
}

/**
 * Changes the visibility timeout of a specified message in a queue to a new value. The maximum allowed timeout value is 12
 * hours. Thus, you can't extend the timeout of a message in an existing queue to more than a total visibility timeout of
 * 12 hours. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-visibility-timeout.html">Visibility
 * Timeout</a> in the <i>Amazon Simple Queue Service Developer
 *
 * Guide</i>>
 *
 * For example, you have a message with a visibility timeout of 5 minutes. After 3 minutes, you call
 * <code>ChangeMessageVisiblity</code> with a timeout of 10 minutes. At that time, the timeout for the message is extended
 * by 10 minutes beyond the time of the <code>ChangeMessageVisibility</code> action. This results in a total visibility
 * timeout of 13 minutes. You can continue to call the <code>ChangeMessageVisibility</code> to extend the visibility
 * timeout to a maximum of 12 hours. If you try to extend the visibility timeout beyond 12 hours, your request is
 *
 * rejected>
 *
 * A message is considered to be <i>in flight</i> after it's received from a queue by a consumer, but not yet deleted from
 * the
 *
 * queue>
 *
 * For standard queues, there can be a maximum of 120,000 inflight messages per queue. If you reach this limit, Amazon SQS
 * returns the <code>OverLimit</code> error message. To avoid reaching the limit, you should delete messages from the queue
 * after they're processed. You can also increase the number of queues you use to process your
 *
 * messages>
 *
 * For FIFO queues, there can be a maximum of 20,000 inflight messages per queue. If you reach this limit, Amazon SQS
 * returns no error
 *
 * messages> <b>
 *
 * If you attempt to set the <code>VisibilityTimeout</code> to a value greater than the maximum time left, Amazon SQS
 * returns an error. Amazon SQS doesn't automatically recalculate and increase the timeout to the maximum remaining
 *
 * time>
 *
 * Unlike with a queue, when you change the visibility timeout for a specific message the timeout value is applied
 * immediately but isn't saved in memory for that message. If you don't delete a message after it is received, the
 * visibility timeout for the message reverts to the original timeout value (not to the value you set using the
 * <code>ChangeMessageVisibility</code> action) the next time the message is
 *
 * @param  request Request to send to Amazon Simple Queue Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ChangeMessageVisibilityResponse * SqsClient::changeMessageVisibility(const ChangeMessageVisibilityRequest &request)
{
    return qobject_cast<ChangeMessageVisibilityResponse *>(send(request));
}

/**
 * Changes the visibility timeout of multiple messages. This is a batch version of <code>
 * <a>ChangeMessageVisibility</a>.</code> The result of the action on each message is reported individually in the
 * response. You can send up to 10 <code> <a>ChangeMessageVisibility</a> </code> requests with each
 * <code>ChangeMessageVisibilityBatch</code>
 *
 * action> <b>
 *
 * Because the batch request can result in a combination of successful and unsuccessful actions, you should check for batch
 * errors even when the call returns an HTTP status code of
 *
 * <code>200</code>> </b> <note>
 *
 * Some actions take lists of parameters. These lists are specified using the <code>param.n</code> notation. Values of
 * <code>n</code> are integers starting from 1. For example, a parameter list with two elements looks like
 *
 * this>
 *
 * <code>&amp;Attribute.1=this</code>
 *
 * </p
 *
 * <code>&amp;Attribute.2=that</code>
 *
 * @param  request Request to send to Amazon Simple Queue Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ChangeMessageVisibilityBatchResponse * SqsClient::changeMessageVisibilityBatch(const ChangeMessageVisibilityBatchRequest &request)
{
    return qobject_cast<ChangeMessageVisibilityBatchResponse *>(send(request));
}

/**
 * Creates a new standard or FIFO queue. You can pass one or more attributes in the request. Keep the following caveats in
 *
 * mind> <ul> <li>
 *
 * If you don't specify the <code>FifoQueue</code> attribute, Amazon SQS creates a standard
 *
 * queue> <note>
 *
 * You can't change the queue type after you create it and you can't convert an existing standard queue into a FIFO queue.
 * You must either create a new FIFO queue for your application or delete your existing standard queue and recreate it as a
 * FIFO queue. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html#FIFO-queues-moving">
 * Moving From a Standard Queue to a FIFO Queue</a> in the <i>Amazon Simple Queue Service Developer Guide</i>.
 *
 * </p </note> </li> <li>
 *
 * If you don't provide a value for an attribute, the queue is created with the default value for the
 *
 * attribute> </li> <li>
 *
 * If you delete a queue, you must wait at least 60 seconds before creating a queue with the same
 *
 * name> </li> </ul>
 *
 * To successfully create a new queue, you must provide a queue name that adheres to the <a
 * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/limits-queues.html">limits related to
 * queues</a> and is unique within the scope of your
 *
 * queues>
 *
 * To get the queue URL, use the <code> <a>GetQueueUrl</a> </code> action. <code> <a>GetQueueUrl</a> </code> requires only
 * the <code>QueueName</code> parameter. be aware of existing queue
 *
 * names> <ul> <li>
 *
 * If you provide the name of an existing queue along with the exact names and values of all the queue's attributes,
 * <code>CreateQueue</code> returns the queue URL for the existing
 *
 * queue> </li> <li>
 *
 * If the queue name, attribute names, or attribute values don't match an existing queue, <code>CreateQueue</code> returns
 * an
 *
 * error> </li> </ul> <note>
 *
 * Some actions take lists of parameters. These lists are specified using the <code>param.n</code> notation. Values of
 * <code>n</code> are integers starting from 1. For example, a parameter list with two elements looks like
 *
 * this>
 *
 * <code>&amp;Attribute.1=this</code>
 *
 * </p
 *
 * <code>&amp;Attribute.2=that</code>
 *
 * @param  request Request to send to Amazon Simple Queue Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateQueueResponse * SqsClient::createQueue(const CreateQueueRequest &request)
{
    return qobject_cast<CreateQueueResponse *>(send(request));
}

/**
 * Deletes the specified message from the specified queue. You specify the message by using the message's <i>receipt
 * handle</i> and not the <i>MessageId</i> you receive when you send the message. Even if the message is locked by another
 * reader due to the visibility timeout setting, it is still deleted from the queue. If you leave a message in the queue
 * for longer than the queue's configured retention period, Amazon SQS automatically deletes the message.
 *
 * </p <note>
 *
 * The receipt handle is associated with a specific instance of receiving the message. If you receive a message more than
 * once, the receipt handle you get each time you receive the message is different. If you don't provide the most recently
 * received receipt handle for the message when you use the <code>DeleteMessage</code> action, the request succeeds, but
 * the message might not be
 *
 * deleted>
 *
 * For standard queues, it is possible to receive a message even after you delete it. This might happen on rare occasions
 * if one of the servers storing a copy of the message is unavailable when you send the request to delete the message. The
 * copy remains on the server and might be returned to you on a subsequent receive request. You should ensure that your
 * application is idempotent, so that receiving a message more than once does not cause
 *
 * @param  request Request to send to Amazon Simple Queue Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteMessageResponse * SqsClient::deleteMessage(const DeleteMessageRequest &request)
{
    return qobject_cast<DeleteMessageResponse *>(send(request));
}

/**
 * Deletes up to ten messages from the specified queue. This is a batch version of <code> <a>DeleteMessage</a>.</code> The
 * result of the action on each message is reported individually in the
 *
 * response> <b>
 *
 * Because the batch request can result in a combination of successful and unsuccessful actions, you should check for batch
 * errors even when the call returns an HTTP status code of
 *
 * <code>200</code>> </b> <note>
 *
 * Some actions take lists of parameters. These lists are specified using the <code>param.n</code> notation. Values of
 * <code>n</code> are integers starting from 1. For example, a parameter list with two elements looks like
 *
 * this>
 *
 * <code>&amp;Attribute.1=this</code>
 *
 * </p
 *
 * <code>&amp;Attribute.2=that</code>
 *
 * @param  request Request to send to Amazon Simple Queue Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteMessageBatchResponse * SqsClient::deleteMessageBatch(const DeleteMessageBatchRequest &request)
{
    return qobject_cast<DeleteMessageBatchResponse *>(send(request));
}

/**
 * Deletes the queue specified by the <code>QueueUrl</code>, regardless of the queue's contents. If the specified queue
 * doesn't exist, Amazon SQS returns a successful
 *
 * response> <b>
 *
 * Be careful with the <code>DeleteQueue</code> action: When you delete a queue, any messages in the queue are no longer
 * available.
 *
 * </p </b>
 *
 * When you delete a queue, the deletion process takes up to 60 seconds. Requests you send involving that queue during the
 * 60 seconds might succeed. For example, a <code> <a>SendMessage</a> </code> request might succeed, but after 60 seconds
 * the queue and the message you sent no longer
 *
 * exist>
 *
 * When you delete a queue, you must wait at least 60 seconds before creating a queue with the same name.
 *
 * @param  request Request to send to Amazon Simple Queue Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteQueueResponse * SqsClient::deleteQueue(const DeleteQueueRequest &request)
{
    return qobject_cast<DeleteQueueResponse *>(send(request));
}

/**
 * Gets attributes for the specified
 *
 * queue> <note>
 *
 * To determine whether a queue is <a
 * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues.html">FIFO</a>, you can
 * check whether <code>QueueName</code> ends with the <code>.fifo</code>
 *
 * suffix> </note> <note>
 *
 * Some actions take lists of parameters. These lists are specified using the <code>param.n</code> notation. Values of
 * <code>n</code> are integers starting from 1. For example, a parameter list with two elements looks like
 *
 * this>
 *
 * <code>&amp;Attribute.1=this</code>
 *
 * </p
 *
 * <code>&amp;Attribute.2=that</code>
 *
 * @param  request Request to send to Amazon Simple Queue Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetQueueAttributesResponse * SqsClient::getQueueAttributes(const GetQueueAttributesRequest &request)
{
    return qobject_cast<GetQueueAttributesResponse *>(send(request));
}

/**
 * Returns the URL of an existing queue. This action provides a simple way to retrieve the URL of an Amazon SQS
 *
 * queue>
 *
 * To access a queue that belongs to another AWS account, use the <code>QueueOwnerAWSAccountId</code> parameter to specify
 * the account ID of the queue's owner. The queue's owner must grant you permission to access the queue. For more
 * information about shared queue access, see <code> <a>AddPermission</a> </code> or see <a
 * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/acp-overview.html">Shared Queues</a> in
 * the <i>Amazon Simple Queue Service Developer Guide</i>.
 *
 * @param  request Request to send to Amazon Simple Queue Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetQueueUrlResponse * SqsClient::getQueueUrl(const GetQueueUrlRequest &request)
{
    return qobject_cast<GetQueueUrlResponse *>(send(request));
}

/**
 * Returns a list of your queues that have the <code>RedrivePolicy</code> queue attribute configured with a dead-letter
 *
 * queue>
 *
 * For more information about using dead-letter queues, see <a
 * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-dead-letter-queues.html">Using
 * Amazon SQS Dead-Letter Queues</a> in the <i>Amazon Simple Queue Service Developer
 *
 * @param  request Request to send to Amazon Simple Queue Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListDeadLetterSourceQueuesResponse * SqsClient::listDeadLetterSourceQueues(const ListDeadLetterSourceQueuesRequest &request)
{
    return qobject_cast<ListDeadLetterSourceQueuesResponse *>(send(request));
}

/**
 * List all cost allocation tags added to the specified Amazon SQS queue. For an overview, see <a
 * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-tagging-queues.html">Tagging Amazon
 * SQS Queues</a> in the <i>Amazon Simple Queue Service Developer
 *
 * Guide</i>>
 *
 * When you use queue tags, keep the following guidelines in
 *
 * mind> <ul> <li>
 *
 * Adding more than 50 tags to a queue isn't
 *
 * recommended> </li> <li>
 *
 * Tags don't have any semantic meaning. Amazon SQS interprets tags as character
 *
 * strings> </li> <li>
 *
 * Tags are
 *
 * case-sensitive> </li> <li>
 *
 * A new tag with a key identical to that of an existing tag overwrites the existing
 *
 * tag> </li> <li>
 *
 * Tagging API actions are limited to 5 TPS per AWS account. If your application requires a higher throughput, file a <a
 * href="https://console.aws.amazon.com/support/home#/case/create?issueType=technical">technical support
 *
 * request</a>> </li> </ul>
 *
 * For a full list of tag restrictions, see <a
 * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/limits-queues.html">Limits Related to
 * Queues</a> in the <i>Amazon Simple Queue Service Developer
 *
 * @param  request Request to send to Amazon Simple Queue Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListQueueTagsResponse * SqsClient::listQueueTags(const ListQueueTagsRequest &request)
{
    return qobject_cast<ListQueueTagsResponse *>(send(request));
}

/**
 * Returns a list of your queues. The maximum number of queues that can be returned is 1,000. If you specify a value for
 * the optional <code>QueueNamePrefix</code> parameter, only queues with a name that begins with the specified value are
 *
 * @param  request Request to send to Amazon Simple Queue Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListQueuesResponse * SqsClient::listQueues(const ListQueuesRequest &request)
{
    return qobject_cast<ListQueuesResponse *>(send(request));
}

/**
 * Deletes the messages in a queue specified by the <code>QueueURL</code>
 *
 * parameter> <b>
 *
 * When you use the <code>PurgeQueue</code> action, you can't retrieve a message deleted from a
 *
 * queue> </b>
 *
 * When you purge a queue, the message deletion process takes up to 60 seconds. All messages sent to the queue before
 * calling the <code>PurgeQueue</code> action are deleted. Messages sent to the queue while it is being purged might be
 * deleted. While the queue is being purged, messages sent to the queue before <code>PurgeQueue</code> is called might be
 * received, but are deleted within the next
 *
 * @param  request Request to send to Amazon Simple Queue Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PurgeQueueResponse * SqsClient::purgeQueue(const PurgeQueueRequest &request)
{
    return qobject_cast<PurgeQueueResponse *>(send(request));
}

/**
 * Retrieves one or more messages (up to 10), from the specified queue. Using the <code>WaitTimeSeconds</code> parameter
 * enables long-poll support. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-long-polling.html">Amazon SQS Long
 * Polling</a> in the <i>Amazon Simple Queue Service Developer Guide</i>.
 *
 * </p
 *
 * Short poll is the default behavior where a weighted random set of machines is sampled on a <code>ReceiveMessage</code>
 * call. Thus, only the messages on the sampled machines are returned. If the number of messages in the queue is small
 * (fewer than 1,000), you most likely get fewer messages than you requested per <code>ReceiveMessage</code> call. If the
 * number of messages in the queue is extremely small, you might not receive any messages in a particular
 * <code>ReceiveMessage</code> response. If this happens, repeat the request.
 *
 * </p
 *
 * For each message returned, the response includes the
 *
 * following> <ul> <li>
 *
 * The message
 *
 * body> </li> <li>
 *
 * An MD5 digest of the message body. For information about MD5, see <a
 *
 * href="https://www.ietf.org/rfc/rfc1321.txt">RFC1321</a>> </li> <li>
 *
 * The <code>MessageId</code> you received when you sent the message to the
 *
 * queue> </li> <li>
 *
 * The receipt
 *
 * handle> </li> <li>
 *
 * The message
 *
 * attributes> </li> <li>
 *
 * An MD5 digest of the message
 *
 * attributes> </li> </ul>
 *
 * The receipt handle is the identifier you must provide when deleting the message. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-queue-message-identifiers.html">Queue
 * and Message Identifiers</a> in the <i>Amazon Simple Queue Service Developer
 *
 * Guide</i>>
 *
 * You can provide the <code>VisibilityTimeout</code> parameter in your request. The parameter is applied to the messages
 * that Amazon SQS returns in the response. If you don't include the parameter, the overall visibility timeout for the
 * queue is used for the returned messages. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-visibility-timeout.html">Visibility
 * Timeout</a> in the <i>Amazon Simple Queue Service Developer
 *
 * Guide</i>>
 *
 * A message that isn't deleted or a message whose visibility isn't extended before the visibility timeout expires counts
 * as a failed receive. Depending on the configuration of the queue, the message might be sent to the dead-letter
 *
 * queue> <note>
 *
 * In the future, new attributes might be added. If you write code that calls this action, we recommend that you structure
 * your code so that it can handle new attributes
 *
 * @param  request Request to send to Amazon Simple Queue Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ReceiveMessageResponse * SqsClient::receiveMessage(const ReceiveMessageRequest &request)
{
    return qobject_cast<ReceiveMessageResponse *>(send(request));
}

/**
 * Revokes any permissions in the queue policy that matches the specified <code>Label</code> parameter. Only the owner of
 * the queue can remove
 *
 * @param  request Request to send to Amazon Simple Queue Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RemovePermissionResponse * SqsClient::removePermission(const RemovePermissionRequest &request)
{
    return qobject_cast<RemovePermissionResponse *>(send(request));
}

/**
 * Delivers a message to the specified
 *
 * queue> <b>
 *
 * A message can include only XML, JSON, and unformatted text. The following Unicode characters are
 *
 * allowed>
 *
 * <code>#x9</code> | <code>#xA</code> | <code>#xD</code> | <code>#x20</code> to <code>#xD7FF</code> | <code>#xE000</code>
 * to <code>#xFFFD</code> | <code>#x10000</code> to <code>#x10FFFF</code>
 *
 * </p
 *
 * Any characters not included in this list will be rejected. For more information, see the <a
 * href="http://www.w3.org/TR/REC-xml/#charsets">W3C specification for
 *
 * @param  request Request to send to Amazon Simple Queue Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SendMessageResponse * SqsClient::sendMessage(const SendMessageRequest &request)
{
    return qobject_cast<SendMessageResponse *>(send(request));
}

/**
 * Delivers up to ten messages to the specified queue. This is a batch version of <code> <a>SendMessage</a>.</code> For a
 * FIFO queue, multiple messages within a single batch are enqueued in the order they are
 *
 * sent>
 *
 * The result of sending each message is reported individually in the response. Because the batch request can result in a
 * combination of successful and unsuccessful actions, you should check for batch errors even when the call returns an HTTP
 * status code of
 *
 * <code>200</code>>
 *
 * The maximum allowed individual message size and the maximum total payload size (the sum of the individual lengths of all
 * of the batched messages) are both 256 KB (262,144
 *
 * bytes)> <b>
 *
 * A message can include only XML, JSON, and unformatted text. The following Unicode characters are
 *
 * allowed>
 *
 * <code>#x9</code> | <code>#xA</code> | <code>#xD</code> | <code>#x20</code> to <code>#xD7FF</code> | <code>#xE000</code>
 * to <code>#xFFFD</code> | <code>#x10000</code> to <code>#x10FFFF</code>
 *
 * </p
 *
 * Any characters not included in this list will be rejected. For more information, see the <a
 * href="http://www.w3.org/TR/REC-xml/#charsets">W3C specification for
 *
 * characters</a>> </b>
 *
 * If you don't specify the <code>DelaySeconds</code> parameter for an entry, Amazon SQS uses the default value for the
 *
 * queue> <note>
 *
 * Some actions take lists of parameters. These lists are specified using the <code>param.n</code> notation. Values of
 * <code>n</code> are integers starting from 1. For example, a parameter list with two elements looks like
 *
 * this>
 *
 * <code>&amp;Attribute.1=this</code>
 *
 * </p
 *
 * <code>&amp;Attribute.2=that</code>
 *
 * @param  request Request to send to Amazon Simple Queue Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SendMessageBatchResponse * SqsClient::sendMessageBatch(const SendMessageBatchRequest &request)
{
    return qobject_cast<SendMessageBatchResponse *>(send(request));
}

/**
 * Sets the value of one or more queue attributes. When you change a queue's attributes, the change can take up to 60
 * seconds for most of the attributes to propagate throughout the Amazon SQS system. Changes made to the
 * <code>MessageRetentionPeriod</code> attribute can take up to 15
 *
 * minutes> <note>
 *
 * In the future, new attributes might be added. If you write code that calls this action, we recommend that you structure
 * your code so that it can handle new attributes
 *
 * @param  request Request to send to Amazon Simple Queue Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SetQueueAttributesResponse * SqsClient::setQueueAttributes(const SetQueueAttributesRequest &request)
{
    return qobject_cast<SetQueueAttributesResponse *>(send(request));
}

/**
 * Add cost allocation tags to the specified Amazon SQS queue. For an overview, see <a
 * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-tagging-queues.html">Tagging Amazon
 * SQS Queues</a> in the <i>Amazon Simple Queue Service Developer
 *
 * Guide</i>>
 *
 * When you use queue tags, keep the following guidelines in
 *
 * mind> <ul> <li>
 *
 * Adding more than 50 tags to a queue isn't
 *
 * recommended> </li> <li>
 *
 * Tags don't have any semantic meaning. Amazon SQS interprets tags as character
 *
 * strings> </li> <li>
 *
 * Tags are
 *
 * case-sensitive> </li> <li>
 *
 * A new tag with a key identical to that of an existing tag overwrites the existing
 *
 * tag> </li> <li>
 *
 * Tagging API actions are limited to 5 TPS per AWS account. If your application requires a higher throughput, file a <a
 * href="https://console.aws.amazon.com/support/home#/case/create?issueType=technical">technical support
 *
 * request</a>> </li> </ul>
 *
 * For a full list of tag restrictions, see <a
 * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/limits-queues.html">Limits Related to
 * Queues</a> in the <i>Amazon Simple Queue Service Developer
 *
 * @param  request Request to send to Amazon Simple Queue Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
TagQueueResponse * SqsClient::tagQueue(const TagQueueRequest &request)
{
    return qobject_cast<TagQueueResponse *>(send(request));
}

/**
 * Remove cost allocation tags from the specified Amazon SQS queue. For an overview, see <a
 * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-tagging-queues.html">Tagging Amazon
 * SQS Queues</a> in the <i>Amazon Simple Queue Service Developer
 *
 * Guide</i>>
 *
 * When you use queue tags, keep the following guidelines in
 *
 * mind> <ul> <li>
 *
 * Adding more than 50 tags to a queue isn't
 *
 * recommended> </li> <li>
 *
 * Tags don't have any semantic meaning. Amazon SQS interprets tags as character
 *
 * strings> </li> <li>
 *
 * Tags are
 *
 * case-sensitive> </li> <li>
 *
 * A new tag with a key identical to that of an existing tag overwrites the existing
 *
 * tag> </li> <li>
 *
 * Tagging API actions are limited to 5 TPS per AWS account. If your application requires a higher throughput, file a <a
 * href="https://console.aws.amazon.com/support/home#/case/create?issueType=technical">technical support
 *
 * request</a>> </li> </ul>
 *
 * For a full list of tag restrictions, see <a
 * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/limits-queues.html">Limits Related to
 * Queues</a> in the <i>Amazon Simple Queue Service Developer
 *
 * @param  request Request to send to Amazon Simple Queue Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UntagQueueResponse * SqsClient::untagQueue(const UntagQueueRequest &request)
{
    return qobject_cast<UntagQueueResponse *>(send(request));
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

} // namespace SQS
} // namespace AWS
