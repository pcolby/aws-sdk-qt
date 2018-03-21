/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "sendrawemailrequest.h"
#include "sendrawemailrequest_p.h"
#include "sendrawemailresponse.h"
#include "sesrequest_p.h"

namespace AWS {
namespace SES {

/**
 * @class  SendRawEmailRequest
 *
 * @brief  Implements SES SendRawEmail requests.
 *
 * @see    SESClient::sendRawEmail
 */

/**
 * @brief  Constructs a new SendRawEmailRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SendRawEmailRequest::SendRawEmailRequest(const SendRawEmailRequest &other)
    : SESRequest(new SendRawEmailRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SendRawEmailRequest object.
 */
SendRawEmailRequest::SendRawEmailRequest()
    : SESRequest(new SendRawEmailRequestPrivate(SESRequest::SendRawEmailAction, this))
{

}

bool SendRawEmailRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SendRawEmailResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SendRawEmailResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SESClient::send
 */
AwsAbstractResponse * SendRawEmailRequest::response(QNetworkReply * const reply) const
{
    return new SendRawEmailResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SendRawEmailRequestPrivate
 *
 * @brief  Private implementation for SendRawEmailRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SendRawEmailRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public SendRawEmailRequest instance.
 */
SendRawEmailRequestPrivate::SendRawEmailRequestPrivate(
    const SESRequest::Action action, SendRawEmailRequest * const q)
    : SendRawEmailPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SendRawEmailRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SendRawEmailRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SendRawEmailRequest instance.
 */
SendRawEmailRequestPrivate::SendRawEmailRequestPrivate(
    const SendRawEmailRequestPrivate &other, SendRawEmailRequest * const q)
    : SendRawEmailPrivate(other, q)
{

}

} // namespace SES
} // namespace AWS
