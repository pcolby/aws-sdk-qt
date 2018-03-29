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

#include "sendtasksuccessrequest.h"
#include "sendtasksuccessrequest_p.h"
#include "sendtasksuccessresponse.h"
#include "sfnrequest_p.h"

namespace QtAws {
namespace SFN {

/**
 * @class  SendTaskSuccessRequest
 *
 * @brief  Implements SFN SendTaskSuccess requests.
 *
 * @see    SFNClient::sendTaskSuccess
 */

/**
 * @brief  Constructs a new SendTaskSuccessRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SendTaskSuccessRequest::SendTaskSuccessRequest(const SendTaskSuccessRequest &other)
    : SFNRequest(new SendTaskSuccessRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SendTaskSuccessRequest object.
 */
SendTaskSuccessRequest::SendTaskSuccessRequest()
    : SFNRequest(new SendTaskSuccessRequestPrivate(SFNRequest::SendTaskSuccessAction, this))
{

}

bool SendTaskSuccessRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SendTaskSuccessResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SendTaskSuccessResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SFNClient::send
 */
AwsAbstractResponse * SendTaskSuccessRequest::response(QNetworkReply * const reply) const
{
    return new SendTaskSuccessResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SendTaskSuccessRequestPrivate
 *
 * @brief  Private implementation for SendTaskSuccessRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SendTaskSuccessRequestPrivate object.
 *
 * @param  action  SFN action being performed.
 * @param  q       Pointer to this object's public SendTaskSuccessRequest instance.
 */
SendTaskSuccessRequestPrivate::SendTaskSuccessRequestPrivate(
    const SFNRequest::Action action, SendTaskSuccessRequest * const q)
    : SendTaskSuccessPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SendTaskSuccessRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SendTaskSuccessRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SendTaskSuccessRequest instance.
 */
SendTaskSuccessRequestPrivate::SendTaskSuccessRequestPrivate(
    const SendTaskSuccessRequestPrivate &other, SendTaskSuccessRequest * const q)
    : SendTaskSuccessPrivate(other, q)
{

}

} // namespace SFN
} // namespace QtAws
