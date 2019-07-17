/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "sqsreceivemessagerequest.h"
#include "sqsreceivemessagerequest_p.h"
#include "sqsreceivemessageresponse.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SqsOld {

/**
 * @class  SqsReceiveMessageRequest
 *
 * @brief  Implements SQS ReceiveMessage requests.
 *
 * @see    http://docs.aws.amazon.com/AWSSimpleQueueService/latest/APIReference/API_ReceiveMessage.html
 * @see    SqsRemovePermissionRequest
 */

/**
 * @brief  Constructs a new SqsReceiveMessageRequest.
 *
 * @todo
 */
/*SqsReceiveMessageRequest::SqsReceiveMessageRequest(
    ...
    : SqsRequest(new SqsReceiveMessageRequestPrivate(SqsRequest::ReceiveMessageAction, this))
{
    setLabel(label);
    setQueueUrl(queueUrl);
    setPermissions(permissions);
}*/

/**
 * @brief  Constructs a new SqsReceiveMessageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SqsReceiveMessageRequest::SqsReceiveMessageRequest(const SqsReceiveMessageRequest &other)
    : SqsRequest(new SqsReceiveMessageRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SqsReceiveMessageRequest object.
 */
SqsReceiveMessageRequest::SqsReceiveMessageRequest()
    : SqsRequest(new SqsReceiveMessageRequestPrivate(SqsRequest::ReceiveMessageAction, this))
{

}

bool SqsReceiveMessageRequest::isValid() const
{
    /// @todo
    return false;
}

/**
 * @brief  Construct an SqsReceiveMessageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SqsReceiveMessageResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 */
AwsAbstractResponse * SqsReceiveMessageRequest::response(QNetworkReply * const reply) const
{
    return new SqsReceiveMessageResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SqsReceiveMessageRequestPrivate
 *
 * @brief  Private implementation for SqsReceiveMessageRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsReceiveMessageResponsePrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public SqsReceiveMessageRequest instance.
 */
SqsReceiveMessageRequestPrivate::SqsReceiveMessageRequestPrivate(
    const SqsRequest::Action action, SqsReceiveMessageRequest * const q)
    : SqsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SqsReceiveMessageResponsePrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SqsReceiveMessageResponse
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SqsReceiveMessageRequest instance.
 */
SqsReceiveMessageRequestPrivate::SqsReceiveMessageRequestPrivate(
    const SqsReceiveMessageRequestPrivate &other, SqsReceiveMessageRequest * const q)
    : SqsRequestPrivate(other, q)
{

}

} // namespace SqsOld
} // namespace QtAws
