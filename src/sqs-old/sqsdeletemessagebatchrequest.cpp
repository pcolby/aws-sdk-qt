// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sqsdeletemessagebatchrequest.h"
#include "sqsdeletemessagebatchrequest_p.h"
#include "sqsdeletemessagebatchresponse.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SqsOld {

/**
 * @class  SqsDeleteMessageBatchRequest
 *
 * @brief  Implements SQS DeleteMessageBatch requests.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_DeleteMessageBatch.html
 * @see    SqsRemovePermissionRequest
 */

/**
 * @brief  Constructs a new SqsDeleteMessageBatchRequest.
 *
 * @todo
 */
/*SqsDeleteMessageBatchRequest::SqsDeleteMessageBatchRequest(
    ...
    : SqsRequest(new SqsDeleteMessageBatchRequestPrivate(SqsRequest::DeleteMessageBatchAction, this))
{
    setLabel(label);
    setQueueUrl(queueUrl);
    setPermissions(permissions);
}*/

/**
 * @brief  Constructs a new SqsDeleteMessageBatchRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SqsDeleteMessageBatchRequest::SqsDeleteMessageBatchRequest(const SqsDeleteMessageBatchRequest &other)
    : SqsRequest(new SqsDeleteMessageBatchRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SqsDeleteMessageBatchRequest object.
 */
SqsDeleteMessageBatchRequest::SqsDeleteMessageBatchRequest()
    : SqsRequest(new SqsDeleteMessageBatchRequestPrivate(SqsRequest::DeleteMessageBatchAction, this))
{

}

bool SqsDeleteMessageBatchRequest::isValid() const
{
    /// @todo
    return false;
}

/**
 * @brief  Construct an SqsDeleteMessageBatchResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SqsDeleteMessageBatchResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 */
AwsAbstractResponse * SqsDeleteMessageBatchRequest::response(QNetworkReply * const reply) const
{
    return new SqsDeleteMessageBatchResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SqsDeleteMessageBatchRequestPrivate
 *
 * @brief  Private implementation for SqsDeleteMessageBatchRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsDeleteMessageBatchResponsePrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public SqsDeleteMessageBatchRequest instance.
 */
SqsDeleteMessageBatchRequestPrivate::SqsDeleteMessageBatchRequestPrivate(
    const SqsRequest::Action action, SqsDeleteMessageBatchRequest * const q)
    : SqsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SqsDeleteMessageBatchResponsePrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SqsDeleteMessageBatchResponse
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SqsDeleteMessageBatchRequest instance.
 */
SqsDeleteMessageBatchRequestPrivate::SqsDeleteMessageBatchRequestPrivate(
    const SqsDeleteMessageBatchRequestPrivate &other, SqsDeleteMessageBatchRequest * const q)
    : SqsRequestPrivate(other, q)
{

}

} // namespace SqsOld
} // namespace QtAws
