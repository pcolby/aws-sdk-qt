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

#include "deleteapnsvoipsandboxchannelrequest.h"
#include "deleteapnsvoipsandboxchannelrequest_p.h"
#include "deleteapnsvoipsandboxchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/**
 * @class  DeleteApnsVoipSandboxChannelRequest
 *
 * @brief  Implements Pinpoint DeleteApnsVoipSandboxChannel requests.
 *
 * @see    PinpointClient::deleteApnsVoipSandboxChannel
 */

/**
 * @brief  Constructs a new DeleteApnsVoipSandboxChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteApnsVoipSandboxChannelRequest::DeleteApnsVoipSandboxChannelRequest(const DeleteApnsVoipSandboxChannelRequest &other)
    : PinpointRequest(new DeleteApnsVoipSandboxChannelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteApnsVoipSandboxChannelRequest object.
 */
DeleteApnsVoipSandboxChannelRequest::DeleteApnsVoipSandboxChannelRequest()
    : PinpointRequest(new DeleteApnsVoipSandboxChannelRequestPrivate(PinpointRequest::DeleteApnsVoipSandboxChannelAction, this))
{

}

bool DeleteApnsVoipSandboxChannelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteApnsVoipSandboxChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteApnsVoipSandboxChannelResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PinpointClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApnsVoipSandboxChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApnsVoipSandboxChannelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteApnsVoipSandboxChannelRequestPrivate
 *
 * @brief  Private implementation for DeleteApnsVoipSandboxChannelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteApnsVoipSandboxChannelRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public DeleteApnsVoipSandboxChannelRequest instance.
 */
DeleteApnsVoipSandboxChannelRequestPrivate::DeleteApnsVoipSandboxChannelRequestPrivate(
    const PinpointRequest::Action action, DeleteApnsVoipSandboxChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteApnsVoipSandboxChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteApnsVoipSandboxChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteApnsVoipSandboxChannelRequest instance.
 */
DeleteApnsVoipSandboxChannelRequestPrivate::DeleteApnsVoipSandboxChannelRequestPrivate(
    const DeleteApnsVoipSandboxChannelRequestPrivate &other, DeleteApnsVoipSandboxChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
