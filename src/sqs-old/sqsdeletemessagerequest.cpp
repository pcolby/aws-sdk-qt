// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sqsdeletemessagerequest.h"
#include "sqsdeletemessagerequest_p.h"
#include "sqsdeletemessageresponse.h"
#include "sqsrequest_p.h"

#define QUEUE_URL      QLatin1String("QueueUrl")
#define RECEIPT_HANDLE QLatin1String("ReceiptHandle")

namespace QtAws {
namespace SqsOld {

/**
 * @class  SqsDeleteMessageRequest
 *
 * @brief  Implements SQS DeleteMessage requests.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_DeleteMessage.html
 * @see    SqsRemovePermissionRequest
 */

/**
 * @brief  Constructs a new SqsDeleteMessageRequest.
 *
 * @param  queueUrl       URL of the Amazon SQS queue to take action on.
 * @param  receiptHandle  Receipt handle associated with the message to delete.
 */
SqsDeleteMessageRequest::SqsDeleteMessageRequest(const QString &queueUrl,
                                                 const QString &receiptHandle)
        : SqsRequest(new SqsDeleteMessageRequestPrivate(SqsRequest::DeleteMessageAction, this))
{
    setQueueUrl(queueUrl);
    setReceiptHandle(receiptHandle);
}

/**
 * @brief  Constructs a new SqsDeleteMessageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SqsDeleteMessageRequest::SqsDeleteMessageRequest(const SqsDeleteMessageRequest &other)
    : SqsRequest(new SqsDeleteMessageRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SqsDeleteMessageRequest object.
 */
SqsDeleteMessageRequest::SqsDeleteMessageRequest()
    : SqsRequest(new SqsDeleteMessageRequestPrivate(SqsRequest::DeleteMessageAction, this))
{

}

bool SqsDeleteMessageRequest::isValid() const
{
    return ((!queueUrl().isEmpty()) &&
            (!receiptHandle().isEmpty()));
}

/**
 * @brief  Get the URL of the Amazon SQS queue to take action on.
 *
 * @return The queue URL, or an empty string if not set.
 */
QString SqsDeleteMessageRequest::queueUrl() const
{
    return parameter(QUEUE_URL).toString();
}

/**
 * @brief  Get the receipt handle associated with the message whose visibility
 *         timeout should be changed.
 *
 * @return The receipt handle, or an empty string if not set.
 */
QString SqsDeleteMessageRequest::receiptHandle() const
{
    return parameter(RECEIPT_HANDLE).toString();
}

/**
 * @brief  Set the URL of the Amazon SQS queue to take action on.
 *
 * @param  queueUrl  URL of the Amazon SQS queue to take action on.
 */
void SqsDeleteMessageRequest::setQueueUrl(const QString &queueUrl)
{
    setParameter(QUEUE_URL, queueUrl);
}

/**
 * @brief  Set the receipt handle associated with the message whose visibility
 *         timeout should be changed.
 *
 * @param  receiptHandle  Handle of the message to change.
 */
void SqsDeleteMessageRequest::setReceiptHandle(const QString &receiptHandle)
{
    setParameter(RECEIPT_HANDLE, receiptHandle);
}

/**
 * @brief  Construct an SqsDeleteMessageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SqsDeleteMessageResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 */
AwsAbstractResponse * SqsDeleteMessageRequest::response(QNetworkReply * const reply) const
{
    return new SqsDeleteMessageResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SqsDeleteMessageRequestPrivate
 *
 * @brief  Private implementation for SqsDeleteMessageRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsDeleteMessageResponsePrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public SqsDeleteMessageRequest instance.
 */
SqsDeleteMessageRequestPrivate::SqsDeleteMessageRequestPrivate(
    const SqsRequest::Action action, SqsDeleteMessageRequest * const q)
    : SqsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SqsDeleteMessageResponsePrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SqsDeleteMessageResponse
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SqsDeleteMessageRequest instance.
 */
SqsDeleteMessageRequestPrivate::SqsDeleteMessageRequestPrivate(
    const SqsDeleteMessageRequestPrivate &other, SqsDeleteMessageRequest * const q)
    : SqsRequestPrivate(other, q)
{

}

} // namespace SqsOld
} // namespace QtAws
