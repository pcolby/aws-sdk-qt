// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sqsdeletequeuerequest.h"
#include "sqsdeletequeuerequest_p.h"
#include "sqsdeletequeueresponse.h"
#include "sqsrequest_p.h"

#define QUEUE_URL QLatin1String("QueueUrl")

namespace QtAws {
namespace SqsOld {

/**
 * @class  SqsDeleteQueueRequest
 *
 * @brief  Implements SQS DeleteQueue requests.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_DeleteQueue.html
 * @see    SqsRemovePermissionRequest
 */

/**
 * @brief  Constructs a new SqsDeleteQueueRequest.
 *
 * @param  queueUrl  URL of the Amazon SQS queue to take action on.
 */
SqsDeleteQueueRequest::SqsDeleteQueueRequest(const QString &queueUrl)
    : SqsRequest(new SqsDeleteQueueRequestPrivate(SqsRequest::DeleteQueueAction, this))
{
    setQueueUrl(queueUrl);
}

/**
 * @brief  Constructs a new SqsDeleteQueueRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SqsDeleteQueueRequest::SqsDeleteQueueRequest(const SqsDeleteQueueRequest &other)
    : SqsRequest(new SqsDeleteQueueRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SqsDeleteQueueRequest object.
 */
SqsDeleteQueueRequest::SqsDeleteQueueRequest()
    : SqsRequest(new SqsDeleteQueueRequestPrivate(SqsRequest::DeleteQueueAction, this))
{

}

bool SqsDeleteQueueRequest::isValid() const
{
    return (!queueUrl().isEmpty());
}

/**
 * @brief  Get the URL of the Amazon SQS queue to take action on.
 *
 * @return The queue URL, or an empty string if not set.
 */
QString SqsDeleteQueueRequest::queueUrl() const
{
    return parameter(QUEUE_URL).toString();
}

/**
 * @brief  Set the URL of the Amazon SQS queue to take action on.
 *
 * @param  queueUrl  URL of the Amazon SQS queue to take action on.
 */
void SqsDeleteQueueRequest::setQueueUrl(const QString &queueUrl)
{
    setParameter(QUEUE_URL, queueUrl);
}

/**
 * @brief  Construct an SqsDeleteQueueResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SqsDeleteQueueResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 */
AwsAbstractResponse * SqsDeleteQueueRequest::response(QNetworkReply * const reply) const
{
    return new SqsDeleteQueueResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SqsDeleteQueueRequestPrivate
 *
 * @brief  Private implementation for SqsDeleteQueueRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsDeleteQueueResponsePrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public SqsDeleteQueueRequest instance.
 */
SqsDeleteQueueRequestPrivate::SqsDeleteQueueRequestPrivate(
    const SqsRequest::Action action, SqsDeleteQueueRequest * const q)
    : SqsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SqsDeleteQueueResponsePrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SqsDeleteQueueResponse
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SqsDeleteQueueRequest instance.
 */
SqsDeleteQueueRequestPrivate::SqsDeleteQueueRequestPrivate(
    const SqsDeleteQueueRequestPrivate &other, SqsDeleteQueueRequest * const q)
    : SqsRequestPrivate(other, q)
{

}

} // namespace SqsOld
} // namespace QtAws
