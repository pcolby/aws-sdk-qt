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

#include "sendbulktemplatedemailrequest.h"
#include "sendbulktemplatedemailrequest_p.h"
#include "sendbulktemplatedemailresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/**
 * @class  SendBulkTemplatedEmailRequest
 *
 * @brief  Implements SES SendBulkTemplatedEmail requests.
 *
 * @see    SESClient::sendBulkTemplatedEmail
 */

/**
 * @brief  Constructs a new SendBulkTemplatedEmailRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SendBulkTemplatedEmailRequest::SendBulkTemplatedEmailRequest(const SendBulkTemplatedEmailRequest &other)
    : SESRequest(new SendBulkTemplatedEmailRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SendBulkTemplatedEmailRequest object.
 */
SendBulkTemplatedEmailRequest::SendBulkTemplatedEmailRequest()
    : SESRequest(new SendBulkTemplatedEmailRequestPrivate(SESRequest::SendBulkTemplatedEmailAction, this))
{

}

bool SendBulkTemplatedEmailRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SendBulkTemplatedEmailResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SendBulkTemplatedEmailResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SESClient::send
 */
QtAws::Core::AwsAbstractResponse * SendBulkTemplatedEmailRequest::response(QNetworkReply * const reply) const
{
    return new SendBulkTemplatedEmailResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SendBulkTemplatedEmailRequestPrivate
 *
 * @brief  Private implementation for SendBulkTemplatedEmailRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SendBulkTemplatedEmailRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public SendBulkTemplatedEmailRequest instance.
 */
SendBulkTemplatedEmailRequestPrivate::SendBulkTemplatedEmailRequestPrivate(
    const SESRequest::Action action, SendBulkTemplatedEmailRequest * const q)
    : SESRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SendBulkTemplatedEmailRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SendBulkTemplatedEmailRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SendBulkTemplatedEmailRequest instance.
 */
SendBulkTemplatedEmailRequestPrivate::SendBulkTemplatedEmailRequestPrivate(
    const SendBulkTemplatedEmailRequestPrivate &other, SendBulkTemplatedEmailRequest * const q)
    : SESRequestPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
