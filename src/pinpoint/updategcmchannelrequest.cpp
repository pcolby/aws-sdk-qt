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

#include "updategcmchannelrequest.h"
#include "updategcmchannelrequest_p.h"
#include "updategcmchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/**
 * @class  UpdateGcmChannelRequest
 *
 * @brief  Implements Pinpoint UpdateGcmChannel requests.
 *
 * @see    PinpointClient::updateGcmChannel
 */

/**
 * @brief  Constructs a new UpdateGcmChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateGcmChannelRequest::UpdateGcmChannelRequest(const UpdateGcmChannelRequest &other)
    : PinpointRequest(new UpdateGcmChannelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateGcmChannelRequest object.
 */
UpdateGcmChannelRequest::UpdateGcmChannelRequest()
    : PinpointRequest(new UpdateGcmChannelRequestPrivate(PinpointRequest::UpdateGcmChannelAction, this))
{

}

bool UpdateGcmChannelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateGcmChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateGcmChannelResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PinpointClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateGcmChannelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateGcmChannelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateGcmChannelRequestPrivate
 *
 * @brief  Private implementation for UpdateGcmChannelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateGcmChannelRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public UpdateGcmChannelRequest instance.
 */
UpdateGcmChannelRequestPrivate::UpdateGcmChannelRequestPrivate(
    const PinpointRequest::Action action, UpdateGcmChannelRequest * const q)
    : UpdateGcmChannelPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateGcmChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateGcmChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateGcmChannelRequest instance.
 */
UpdateGcmChannelRequestPrivate::UpdateGcmChannelRequestPrivate(
    const UpdateGcmChannelRequestPrivate &other, UpdateGcmChannelRequest * const q)
    : UpdateGcmChannelPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
