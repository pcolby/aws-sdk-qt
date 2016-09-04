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

#include "sqspurgequeuerequest.h"
#include "sqspurgequeuerequest_p.h"
#include "sqspurgequeueresponse.h"
#include "sqsrequest_p.h"

#define QUEUE_URL QLatin1String("QueueUrl")

QTAWS_BEGIN_NAMESPACE

/**
 * @class  SqsPurgeQueueRequest
 *
 * @brief  Implements SQS PurgeQueue requests.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_PurgeQueue.html
 * @see    SqsRemovePermissionRequest
 */

/**
 * @brief  Constructs a new SqsPurgeQueueRequest.
 *
 * @param  queueUrl  URL of the Amazon SQS queue to take action on.
 */
SqsPurgeQueueRequest::SqsPurgeQueueRequest(const QString &queueUrl)
    : SqsRequest(new SqsPurgeQueueRequestPrivate(SqsRequest::PurgeQueueAction, this))
{
    setQueueUrl(queueUrl);
}

/**
 * @brief  Constructs a new SqsPurgeQueueRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SqsPurgeQueueRequest::SqsPurgeQueueRequest(const SqsPurgeQueueRequest &other)
    : SqsRequest(new SqsPurgeQueueRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SqsPurgeQueueRequest object.
 */
SqsPurgeQueueRequest::SqsPurgeQueueRequest()
    : SqsRequest(new SqsPurgeQueueRequestPrivate(SqsRequest::PurgeQueueAction, this))
{

}

bool SqsPurgeQueueRequest::isValid() const
{
    return (!queueUrl().isEmpty());
}

/**
 * @brief  Get the URL of the Amazon SQS queue to take action on.
 *
 * @return The queue URL, or an empty string if not set.
 */
QString SqsPurgeQueueRequest::queueUrl() const
{
    return parameter(QUEUE_URL).toString();
}

/**
 * @brief  Set the URL of the Amazon SQS queue to take action on.
 *
 * @param  queueUrl  URL of the Amazon SQS queue to take action on.
 */
void SqsPurgeQueueRequest::setQueueUrl(const QString &queueUrl)
{
    setParameter(QUEUE_URL, queueUrl);
}

/**
 * @brief  Construct an SqsPurgeQueueResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SqsPurgeQueueResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 */
AwsAbstractResponse * SqsPurgeQueueRequest::response(QNetworkReply * const reply) const
{
    return new SqsPurgeQueueResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SqsPurgeQueueRequestPrivate
 *
 * @brief  Private implementation for SqsPurgeQueueRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsPurgeQueueResponsePrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public SqsPurgeQueueRequest instance.
 */
SqsPurgeQueueRequestPrivate::SqsPurgeQueueRequestPrivate(
    const SqsRequest::Action action, SqsPurgeQueueRequest * const q)
    : SqsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SqsPurgeQueueResponsePrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SqsPurgeQueueResponse
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SqsPurgeQueueRequest instance.
 */
SqsPurgeQueueRequestPrivate::SqsPurgeQueueRequestPrivate(
    const SqsPurgeQueueRequestPrivate &other, SqsPurgeQueueRequest * const q)
    : SqsRequestPrivate(other, q)
{

}

QTAWS_END_NAMESPACE
