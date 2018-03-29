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

#include "sendbouncerequest.h"
#include "sendbouncerequest_p.h"
#include "sendbounceresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/**
 * @class  SendBounceRequest
 *
 * @brief  Implements SES SendBounce requests.
 *
 * @see    SESClient::sendBounce
 */

/**
 * @brief  Constructs a new SendBounceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SendBounceRequest::SendBounceRequest(const SendBounceRequest &other)
    : SESRequest(new SendBounceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SendBounceRequest object.
 */
SendBounceRequest::SendBounceRequest()
    : SESRequest(new SendBounceRequestPrivate(SESRequest::SendBounceAction, this))
{

}

bool SendBounceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SendBounceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SendBounceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SESClient::send
 */
QtAws::Core::AwsAbstractResponse * SendBounceRequest::response(QNetworkReply * const reply) const
{
    return new SendBounceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SendBounceRequestPrivate
 *
 * @brief  Private implementation for SendBounceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SendBounceRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public SendBounceRequest instance.
 */
SendBounceRequestPrivate::SendBounceRequestPrivate(
    const SESRequest::Action action, SendBounceRequest * const q)
    : SESRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SendBounceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SendBounceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SendBounceRequest instance.
 */
SendBounceRequestPrivate::SendBounceRequestPrivate(
    const SendBounceRequestPrivate &other, SendBounceRequest * const q)
    : SESRequestPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
