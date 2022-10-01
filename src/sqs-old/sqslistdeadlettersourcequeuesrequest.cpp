// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sqslistdeadlettersourcequeuesrequest.h"
#include "sqslistdeadlettersourcequeuesrequest_p.h"
#include "sqslistdeadlettersourcequeuesresponse.h"
#include "sqsrequest_p.h"

#define QUEUE_URL QLatin1String("QueueUrl")

namespace QtAws {
namespace SqsOld {

/**
 * @class  SqsListDeadLetterSourceQueuesRequest
 *
 * @brief  Implements SQS ListDeadLetterSourceQueues requests.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_ListDeadLetterSourceQueues.html
 * @see    SqsRemovePermissionRequest
 */

/**
 * @brief  Constructs a new SqsListDeadLetterSourceQueuesRequest.
 *
 * @param  queueUrl  URL of a dead letter queue.
 */
SqsListDeadLetterSourceQueuesRequest::SqsListDeadLetterSourceQueuesRequest(
    const QString &queueUrl)
    : SqsRequest(new SqsListDeadLetterSourceQueuesRequestPrivate(SqsRequest::ListDeadLetterSourceQueuesAction, this))
{
    setQueueUrl(queueUrl);
}

/**
 * @brief  Constructs a new SqsListDeadLetterSourceQueuesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SqsListDeadLetterSourceQueuesRequest::SqsListDeadLetterSourceQueuesRequest(const SqsListDeadLetterSourceQueuesRequest &other)
    : SqsRequest(new SqsListDeadLetterSourceQueuesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SqsListDeadLetterSourceQueuesRequest object.
 */
SqsListDeadLetterSourceQueuesRequest::SqsListDeadLetterSourceQueuesRequest()
    : SqsRequest(new SqsListDeadLetterSourceQueuesRequestPrivate(SqsRequest::ListDeadLetterSourceQueuesAction, this))
{

}

bool SqsListDeadLetterSourceQueuesRequest::isValid() const
{
    return (!queueUrl().isEmpty());
}

/**
 * @brief  Get the queue URL of a dead letter queue.
 *
 * @return The queue URL of a dead letter queue.
 */
QString SqsListDeadLetterSourceQueuesRequest::queueUrl() const
{
    return parameter(QUEUE_URL).toString();
}

/**
 * @brief  Set the queue URL of a dead letter queue.
 *
 * @param  queueUrl  URL of a dead letter queue.
 */
void SqsListDeadLetterSourceQueuesRequest::setQueueUrl(const QString &queueUrl)
{
    setParameter(QUEUE_URL, queueUrl);
}

/**
 * @brief  Construct an SqsListDeadLetterSourceQueuesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SqsListDeadLetterSourceQueuesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 */
AwsAbstractResponse * SqsListDeadLetterSourceQueuesRequest::response(QNetworkReply * const reply) const
{
    return new SqsListDeadLetterSourceQueuesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SqsListDeadLetterSourceQueuesRequestPrivate
 *
 * @brief  Private implementation for SqsListDeadLetterSourceQueuesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsListDeadLetterSourceQueuesResponsePrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public SqsListDeadLetterSourceQueuesRequest instance.
 */
SqsListDeadLetterSourceQueuesRequestPrivate::SqsListDeadLetterSourceQueuesRequestPrivate(
    const SqsRequest::Action action, SqsListDeadLetterSourceQueuesRequest * const q)
    : SqsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SqsListDeadLetterSourceQueuesResponsePrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SqsListDeadLetterSourceQueuesResponse
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SqsListDeadLetterSourceQueuesRequest instance.
 */
SqsListDeadLetterSourceQueuesRequestPrivate::SqsListDeadLetterSourceQueuesRequestPrivate(
    const SqsListDeadLetterSourceQueuesRequestPrivate &other, SqsListDeadLetterSourceQueuesRequest * const q)
    : SqsRequestPrivate(other, q)
{

}

} // namespace SqsOld
} // namespace QtAws
