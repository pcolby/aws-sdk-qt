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

#include "sendbonusrequest.h"
#include "sendbonusrequest_p.h"
#include "sendbonusresponse.h"
#include "mturkrequest_p.h"

namespace AWS {
namespace MTurk {

/**
 * @class  SendBonusRequest
 *
 * @brief  Implements MTurk SendBonus requests.
 *
 * @see    MTurkClient::sendBonus
 */

/**
 * @brief  Constructs a new SendBonusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SendBonusRequest::SendBonusRequest(const SendBonusRequest &other)
    : MTurkRequest(new SendBonusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SendBonusRequest object.
 */
SendBonusRequest::SendBonusRequest()
    : MTurkRequest(new SendBonusRequestPrivate(MTurkRequest::SendBonusAction, this))
{

}

bool SendBonusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SendBonusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SendBonusResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MTurkClient::send
 */
AwsAbstractResponse * SendBonusRequest::response(QNetworkReply * const reply) const
{
    return new SendBonusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SendBonusRequestPrivate
 *
 * @brief  Private implementation for SendBonusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SendBonusRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public SendBonusRequest instance.
 */
SendBonusRequestPrivate::SendBonusRequestPrivate(
    const MTurkRequest::Action action, SendBonusRequest * const q)
    : SendBonusPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SendBonusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SendBonusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SendBonusRequest instance.
 */
SendBonusRequestPrivate::SendBonusRequestPrivate(
    const SendBonusRequestPrivate &other, SendBonusRequest * const q)
    : SendBonusPrivate(other, q)
{

}

} // namespace MTurk
} // namespace AWS
