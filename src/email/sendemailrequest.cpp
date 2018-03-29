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

#include "sendemailrequest.h"
#include "sendemailrequest_p.h"
#include "sendemailresponse.h"
#include "sesrequest_p.h"

namespace AWS {
namespace SES {

/**
 * @class  SendEmailRequest
 *
 * @brief  Implements SES SendEmail requests.
 *
 * @see    SESClient::sendEmail
 */

/**
 * @brief  Constructs a new SendEmailRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SendEmailRequest::SendEmailRequest(const SendEmailRequest &other)
    : SESRequest(new SendEmailRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SendEmailRequest object.
 */
SendEmailRequest::SendEmailRequest()
    : SESRequest(new SendEmailRequestPrivate(SESRequest::SendEmailAction, this))
{

}

bool SendEmailRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SendEmailResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SendEmailResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SESClient::send
 */
AwsAbstractResponse * SendEmailRequest::response(QNetworkReply * const reply) const
{
    return new SendEmailResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SendEmailRequestPrivate
 *
 * @brief  Private implementation for SendEmailRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SendEmailRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public SendEmailRequest instance.
 */
SendEmailRequestPrivate::SendEmailRequestPrivate(
    const SESRequest::Action action, SendEmailRequest * const q)
    : SendEmailPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SendEmailRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SendEmailRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SendEmailRequest instance.
 */
SendEmailRequestPrivate::SendEmailRequestPrivate(
    const SendEmailRequestPrivate &other, SendEmailRequest * const q)
    : SendEmailPrivate(other, q)
{

}

} // namespace SES
} // namespace AWS
