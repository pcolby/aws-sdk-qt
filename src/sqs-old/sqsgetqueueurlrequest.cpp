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

#include "sqsgetqueueurlrequest.h"
#include "sqsgetqueueurlrequest_p.h"
#include "sqsgetqueueurlresponse.h"
#include "sqsrequest_p.h"

#define QUEUE_NAME                 QLatin1String("QueueName")
#define QUEUE_OWNER_AWS_ACCOUNT_ID QLatin1String("QueueOwnerAWSAccountId")

namespace QtAws {
namespace SqsOld {

/**
 * @class  SqsGetQueueUrlRequest
 *
 * @brief  Implements SQS GetQueueUrl requests.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_GetQueueUrl.html
 */

/**
 * @brief  Constructs a new SqsGetQueueUrlRequest.
 *
 * @param  queueName               Name of the queue whose URL must be fetched.
 * @param  queueOwnerAWSAccountId  The AWS account ID of the account that created the queue.
 *
 * @see    setQueueOwnerAWSAccountId
 */
SqsGetQueueUrlRequest::SqsGetQueueUrlRequest(
    const QString &queueName, const QString &queueOwnerAWSAccountId)
    : SqsRequest(new SqsGetQueueUrlRequestPrivate(SqsRequest::GetQueueUrlAction, this))
{
    setQueueName(queueName);
    setQueueOwnerAWSAccountId(queueOwnerAWSAccountId);
}

/**
 * @brief  Constructs a new SqsGetQueueUrlRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SqsGetQueueUrlRequest::SqsGetQueueUrlRequest(const SqsGetQueueUrlRequest &other)
    : SqsRequest(new SqsGetQueueUrlRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SqsGetQueueUrlRequest object.
 */
SqsGetQueueUrlRequest::SqsGetQueueUrlRequest()
    : SqsRequest(new SqsGetQueueUrlRequestPrivate(SqsRequest::GetQueueUrlAction, this))
{

}

bool SqsGetQueueUrlRequest::isValid() const
{
    return isValidQueueName(queueName());
}

/**
 * @brief  Get the name of the queue whose URL must be fetched.
 *
 * @return The name of the queue whose URL must be fetched.
 */
QString SqsGetQueueUrlRequest::queueName() const
{
    return parameter(QUEUE_NAME).toString();
}

/**
 * @brief  Get the AWS account ID of the account that created the queue.
 *
 * @return The AWS account ID of the account that created the queue
 *
 * @see setQueueOwnerAWSAccountId
 */
QString SqsGetQueueUrlRequest::queueOwnerAWSAccountId() const
{
    return parameter(QUEUE_OWNER_AWS_ACCOUNT_ID).toString();
}

/**
 * @brief  Set the name of the queue whose URL must be fetched.
 *
 * @param  queueName  Name of the queue whose URL must be fetched.
 */
void SqsGetQueueUrlRequest::setQueueName(const QString &queueName)
{
    setParameter(QUEUE_NAME, queueName);
}

/**
 * @brief Set the AWS account ID of the account that created the queue.
 *
 * Use this method to access a queue that belongs another AWS account.
 *
 * @param  queueOwnerAWSAccountId  AWS account ID of the account that created the queue.
 */
void SqsGetQueueUrlRequest::setQueueOwnerAWSAccountId(
    const QString &queueOwnerAWSAccountId)
{
    if (queueOwnerAWSAccountId.isNull()) {
        clearParameter(QUEUE_OWNER_AWS_ACCOUNT_ID);
    } else {
        setParameter(QUEUE_OWNER_AWS_ACCOUNT_ID, queueOwnerAWSAccountId);
    }
}

/**
 * @brief  Construct an SqsGetQueueUrlResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SqsGetQueueUrlResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 */
AwsAbstractResponse * SqsGetQueueUrlRequest::response(QNetworkReply * const reply) const
{
    return new SqsGetQueueUrlResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SqsGetQueueUrlRequestPrivate
 *
 * @brief  Private implementation for SqsGetQueueUrlRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsGetQueueUrlResponsePrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public SqsGetQueueUrlRequest instance.
 */
SqsGetQueueUrlRequestPrivate::SqsGetQueueUrlRequestPrivate(
    const SqsRequest::Action action, SqsGetQueueUrlRequest * const q)
    : SqsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SqsGetQueueUrlResponsePrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SqsGetQueueUrlResponse
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SqsGetQueueUrlRequest instance.
 */
SqsGetQueueUrlRequestPrivate::SqsGetQueueUrlRequestPrivate(
    const SqsGetQueueUrlRequestPrivate &other, SqsGetQueueUrlRequest * const q)
    : SqsRequestPrivate(other, q)
{

}

} // namespace SqsOld
} // namespace QtAws
