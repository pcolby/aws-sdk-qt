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

#include "sendtaskheartbeatrequest.h"
#include "sendtaskheartbeatrequest_p.h"
#include "sendtaskheartbeatresponse.h"
#include "sfnrequest_p.h"

namespace AWS {
namespace SFN {

/**
 * @class  SendTaskHeartbeatRequest
 *
 * @brief  Implements SFN SendTaskHeartbeat requests.
 *
 * @see    SFNClient::sendTaskHeartbeat
 */

/**
 * @brief  Constructs a new SendTaskHeartbeatResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SendTaskHeartbeatResponse::SendTaskHeartbeatResponse(

/**
 * @brief  Constructs a new SendTaskHeartbeatRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SendTaskHeartbeatRequest::SendTaskHeartbeatRequest(const SendTaskHeartbeatRequest &other)
    : SFNRequest(new SendTaskHeartbeatRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SendTaskHeartbeatRequest object.
 */
SendTaskHeartbeatRequest::SendTaskHeartbeatRequest()
    : SFNRequest(new SendTaskHeartbeatRequestPrivate(SFNRequest::SendTaskHeartbeatAction, this))
{

}

bool SendTaskHeartbeatRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SendTaskHeartbeatResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SendTaskHeartbeatResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SFNClient::send
 */
AwsAbstractResponse * SendTaskHeartbeatRequest::response(QNetworkReply * const reply) const
{
    return new SendTaskHeartbeatResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SendTaskHeartbeatRequestPrivate
 *
 * @brief  Private implementation for SendTaskHeartbeatRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SendTaskHeartbeatRequestPrivate object.
 *
 * @param  action  SFN action being performed.
 * @param  q       Pointer to this object's public SendTaskHeartbeatRequest instance.
 */
SendTaskHeartbeatRequestPrivate::SendTaskHeartbeatRequestPrivate(
    const SFNRequest::Action action, SendTaskHeartbeatRequest * const q)
    : SendTaskHeartbeatPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SendTaskHeartbeatRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SendTaskHeartbeatRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SendTaskHeartbeatRequest instance.
 */
SendTaskHeartbeatRequestPrivate::SendTaskHeartbeatRequestPrivate(
    const SendTaskHeartbeatRequestPrivate &other, SendTaskHeartbeatRequest * const q)
    : SendTaskHeartbeatPrivate(other, q)
{

}

} // namespace SFN
} // namespace AWS
