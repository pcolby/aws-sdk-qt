// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sqssendmessagerequest.h"
#include "sqssendmessagerequest_p.h"
#include "sqssendmessageresponse.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SqsOld {

/**
 * @class  SqsSendMessageRequest
 *
 * @brief  Implements SQS SendMessage requests.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_SendMessage.html
 * @see    SqsRemovePermissionRequest
 */

/**
 * @brief  Constructs a new SqsSendMessageRequest.
 *
 * @todo
 */
/*SqsSendMessageRequest::SqsSendMessageRequest(
    ...
    : SqsRequest(new SqsSendMessageRequestPrivate(SqsRequest::SendMessageAction, this))
{
    setLabel(label);
    setQueueUrl(queueUrl);
    setPermissions(permissions);
}*/

/**
 * @brief  Constructs a new SqsSendMessageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SqsSendMessageRequest::SqsSendMessageRequest(const SqsSendMessageRequest &other)
    : SqsRequest(new SqsSendMessageRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SqsSendMessageRequest object.
 */
SqsSendMessageRequest::SqsSendMessageRequest()
    : SqsRequest(new SqsSendMessageRequestPrivate(SqsRequest::SendMessageAction, this))
{

}

bool SqsSendMessageRequest::isValid() const
{
    /// @todo
    return false;
}

/**
 * @brief  Construct an SqsSendMessageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SqsSendMessageResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 */
AwsAbstractResponse * SqsSendMessageRequest::response(QNetworkReply * const reply) const
{
    return new SqsSendMessageResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SqsSendMessageRequestPrivate
 *
 * @brief  Private implementation for SqsSendMessageRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsSendMessageResponsePrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public SqsSendMessageRequest instance.
 */
SqsSendMessageRequestPrivate::SqsSendMessageRequestPrivate(
    const SqsRequest::Action action, SqsSendMessageRequest * const q)
    : SqsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SqsSendMessageResponsePrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SqsSendMessageResponse
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SqsSendMessageRequest instance.
 */
SqsSendMessageRequestPrivate::SqsSendMessageRequestPrivate(
    const SqsSendMessageRequestPrivate &other, SqsSendMessageRequest * const q)
    : SqsRequestPrivate(other, q)
{

}

} // namespace SqsOld
} // namespace QtAws
