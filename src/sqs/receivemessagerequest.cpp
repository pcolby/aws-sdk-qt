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

#include "receivemessagerequest.h"
#include "receivemessagerequest_p.h"
#include "receivemessageresponse.h"
#include "sqsrequest_p.h"

namespace AWS {
namespace SQS {

/**
 * @class  ReceiveMessageRequest
 *
 * @brief  Implements SQS ReceiveMessage requests.
 *
 * @see    SQSClient::receiveMessage
 */

/**
 * @brief  Constructs a new ReceiveMessageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ReceiveMessageRequest::ReceiveMessageRequest(const ReceiveMessageRequest &other)
    : SQSRequest(new ReceiveMessageRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ReceiveMessageRequest object.
 */
ReceiveMessageRequest::ReceiveMessageRequest()
    : SQSRequest(new ReceiveMessageRequestPrivate(SQSRequest::ReceiveMessageAction, this))
{

}

bool ReceiveMessageRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ReceiveMessageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ReceiveMessageResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SQSClient::send
 */
AwsAbstractResponse * ReceiveMessageRequest::response(QNetworkReply * const reply) const
{
    return new ReceiveMessageResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ReceiveMessageRequestPrivate
 *
 * @brief  Private implementation for ReceiveMessageRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ReceiveMessageRequestPrivate object.
 *
 * @param  action  SQS action being performed.
 * @param  q       Pointer to this object's public ReceiveMessageRequest instance.
 */
ReceiveMessageRequestPrivate::ReceiveMessageRequestPrivate(
    const SQSRequest::Action action, ReceiveMessageRequest * const q)
    : ReceiveMessagePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ReceiveMessageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ReceiveMessageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ReceiveMessageRequest instance.
 */
ReceiveMessageRequestPrivate::ReceiveMessageRequestPrivate(
    const ReceiveMessageRequestPrivate &other, ReceiveMessageRequest * const q)
    : ReceiveMessagePrivate(other, q)
{

}

} // namespace SQS
} // namespace AWS
