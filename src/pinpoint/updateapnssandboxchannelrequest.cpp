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

#include "updateapnssandboxchannelrequest.h"
#include "updateapnssandboxchannelrequest_p.h"
#include "updateapnssandboxchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/**
 * @class  UpdateApnsSandboxChannelRequest
 *
 * @brief  Implements Pinpoint UpdateApnsSandboxChannel requests.
 *
 * @see    PinpointClient::updateApnsSandboxChannel
 */

/**
 * @brief  Constructs a new UpdateApnsSandboxChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateApnsSandboxChannelRequest::UpdateApnsSandboxChannelRequest(const UpdateApnsSandboxChannelRequest &other)
    : PinpointRequest(new UpdateApnsSandboxChannelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateApnsSandboxChannelRequest object.
 */
UpdateApnsSandboxChannelRequest::UpdateApnsSandboxChannelRequest()
    : PinpointRequest(new UpdateApnsSandboxChannelRequestPrivate(PinpointRequest::UpdateApnsSandboxChannelAction, this))
{

}

bool UpdateApnsSandboxChannelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateApnsSandboxChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateApnsSandboxChannelResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PinpointClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateApnsSandboxChannelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateApnsSandboxChannelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateApnsSandboxChannelRequestPrivate
 *
 * @brief  Private implementation for UpdateApnsSandboxChannelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateApnsSandboxChannelRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public UpdateApnsSandboxChannelRequest instance.
 */
UpdateApnsSandboxChannelRequestPrivate::UpdateApnsSandboxChannelRequestPrivate(
    const PinpointRequest::Action action, UpdateApnsSandboxChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateApnsSandboxChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateApnsSandboxChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateApnsSandboxChannelRequest instance.
 */
UpdateApnsSandboxChannelRequestPrivate::UpdateApnsSandboxChannelRequestPrivate(
    const UpdateApnsSandboxChannelRequestPrivate &other, UpdateApnsSandboxChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
