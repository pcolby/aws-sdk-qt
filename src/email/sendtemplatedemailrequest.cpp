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

#include "sendtemplatedemailrequest.h"
#include "sendtemplatedemailrequest_p.h"
#include "sendtemplatedemailresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/**
 * @class  SendTemplatedEmailRequest
 *
 * @brief  Implements SES SendTemplatedEmail requests.
 *
 * @see    SESClient::sendTemplatedEmail
 */

/**
 * @brief  Constructs a new SendTemplatedEmailRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SendTemplatedEmailRequest::SendTemplatedEmailRequest(const SendTemplatedEmailRequest &other)
    : SESRequest(new SendTemplatedEmailRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SendTemplatedEmailRequest object.
 */
SendTemplatedEmailRequest::SendTemplatedEmailRequest()
    : SESRequest(new SendTemplatedEmailRequestPrivate(SESRequest::SendTemplatedEmailAction, this))
{

}

bool SendTemplatedEmailRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SendTemplatedEmailResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SendTemplatedEmailResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SESClient::send
 */
QtAws::Core::AwsAbstractResponse * SendTemplatedEmailRequest::response(QNetworkReply * const reply) const
{
    return new SendTemplatedEmailResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SendTemplatedEmailRequestPrivate
 *
 * @brief  Private implementation for SendTemplatedEmailRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SendTemplatedEmailRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public SendTemplatedEmailRequest instance.
 */
SendTemplatedEmailRequestPrivate::SendTemplatedEmailRequestPrivate(
    const SESRequest::Action action, SendTemplatedEmailRequest * const q)
    : SESRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SendTemplatedEmailRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SendTemplatedEmailRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SendTemplatedEmailRequest instance.
 */
SendTemplatedEmailRequestPrivate::SendTemplatedEmailRequestPrivate(
    const SendTemplatedEmailRequestPrivate &other, SendTemplatedEmailRequest * const q)
    : SESRequestPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
