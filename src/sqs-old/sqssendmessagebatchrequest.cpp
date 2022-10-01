// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sqssendmessagebatchrequest.h"
#include "sqssendmessagebatchrequest_p.h"
#include "sqssendmessagebatchresponse.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SqsOld {

/**
 * @class  SqsSendMessageBatchRequest
 *
 * @brief  Implements SQS SendMessageBatch requests.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_SendMessageBatch.html
 * @see    SqsRemovePermissionRequest
 */

/**
 * @brief  Constructs a new SqsSendMessageBatchRequest.
 *
 * @todo
 */
/*SqsSendMessageBatchRequest::SqsSendMessageBatchRequest(
    ...
    : SqsRequest(new SqsSendMessageBatchRequestPrivate(SqsRequest::SendMessageBatchAction, this))
{
    setLabel(label);
    setQueueUrl(queueUrl);
    setPermissions(permissions);
}*/

/**
 * @brief  Constructs a new SqsSendMessageBatchRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SqsSendMessageBatchRequest::SqsSendMessageBatchRequest(const SqsSendMessageBatchRequest &other)
    : SqsRequest(new SqsSendMessageBatchRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SqsSendMessageBatchRequest object.
 */
SqsSendMessageBatchRequest::SqsSendMessageBatchRequest()
    : SqsRequest(new SqsSendMessageBatchRequestPrivate(SqsRequest::SendMessageBatchAction, this))
{

}

bool SqsSendMessageBatchRequest::isValid() const
{
    /// @todo
    return false;
}

/**
 * @brief  Construct an SqsSendMessageBatchResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SqsSendMessageBatchResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 */
AwsAbstractResponse * SqsSendMessageBatchRequest::response(QNetworkReply * const reply) const
{
    return new SqsSendMessageBatchResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SqsSendMessageBatchRequestPrivate
 *
 * @brief  Private implementation for SqsSendMessageBatchRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsSendMessageBatchResponsePrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public SqsSendMessageBatchRequest instance.
 */
SqsSendMessageBatchRequestPrivate::SqsSendMessageBatchRequestPrivate(
    const SqsRequest::Action action, SqsSendMessageBatchRequest * const q)
    : SqsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SqsSendMessageBatchResponsePrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SqsSendMessageBatchResponse
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SqsSendMessageBatchRequest instance.
 */
SqsSendMessageBatchRequestPrivate::SqsSendMessageBatchRequestPrivate(
    const SqsSendMessageBatchRequestPrivate &other, SqsSendMessageBatchRequest * const q)
    : SqsRequestPrivate(other, q)
{

}

} // namespace SqsOld
} // namespace QtAws
