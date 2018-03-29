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

#include "unsubscriberequest.h"
#include "unsubscriberequest_p.h"
#include "unsubscriberesponse.h"
#include "snsrequest_p.h"

namespace AWS {
namespace SNS {

/**
 * @class  UnsubscribeRequest
 *
 * @brief  Implements SNS Unsubscribe requests.
 *
 * @see    SNSClient::unsubscribe
 */

/**
 * @brief  Constructs a new UnsubscribeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UnsubscribeRequest::UnsubscribeRequest(const UnsubscribeRequest &other)
    : SNSRequest(new UnsubscribeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UnsubscribeRequest object.
 */
UnsubscribeRequest::UnsubscribeRequest()
    : SNSRequest(new UnsubscribeRequestPrivate(SNSRequest::UnsubscribeAction, this))
{

}

bool UnsubscribeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UnsubscribeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UnsubscribeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SNSClient::send
 */
AwsAbstractResponse * UnsubscribeRequest::response(QNetworkReply * const reply) const
{
    return new UnsubscribeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UnsubscribeRequestPrivate
 *
 * @brief  Private implementation for UnsubscribeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UnsubscribeRequestPrivate object.
 *
 * @param  action  SNS action being performed.
 * @param  q       Pointer to this object's public UnsubscribeRequest instance.
 */
UnsubscribeRequestPrivate::UnsubscribeRequestPrivate(
    const SNSRequest::Action action, UnsubscribeRequest * const q)
    : UnsubscribePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UnsubscribeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UnsubscribeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UnsubscribeRequest instance.
 */
UnsubscribeRequestPrivate::UnsubscribeRequestPrivate(
    const UnsubscribeRequestPrivate &other, UnsubscribeRequest * const q)
    : UnsubscribePrivate(other, q)
{

}

} // namespace SNS
} // namespace AWS
