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

#include "updateapnsvoipchannelrequest.h"
#include "updateapnsvoipchannelrequest_p.h"
#include "updateapnsvoipchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/**
 * @class  UpdateApnsVoipChannelRequest
 *
 * @brief  Implements Pinpoint UpdateApnsVoipChannel requests.
 *
 * @see    PinpointClient::updateApnsVoipChannel
 */

/**
 * @brief  Constructs a new UpdateApnsVoipChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateApnsVoipChannelRequest::UpdateApnsVoipChannelRequest(const UpdateApnsVoipChannelRequest &other)
    : PinpointRequest(new UpdateApnsVoipChannelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateApnsVoipChannelRequest object.
 */
UpdateApnsVoipChannelRequest::UpdateApnsVoipChannelRequest()
    : PinpointRequest(new UpdateApnsVoipChannelRequestPrivate(PinpointRequest::UpdateApnsVoipChannelAction, this))
{

}

bool UpdateApnsVoipChannelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateApnsVoipChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateApnsVoipChannelResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PinpointClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateApnsVoipChannelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateApnsVoipChannelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateApnsVoipChannelRequestPrivate
 *
 * @brief  Private implementation for UpdateApnsVoipChannelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateApnsVoipChannelRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public UpdateApnsVoipChannelRequest instance.
 */
UpdateApnsVoipChannelRequestPrivate::UpdateApnsVoipChannelRequestPrivate(
    const PinpointRequest::Action action, UpdateApnsVoipChannelRequest * const q)
    : UpdateApnsVoipChannelPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateApnsVoipChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateApnsVoipChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateApnsVoipChannelRequest instance.
 */
UpdateApnsVoipChannelRequestPrivate::UpdateApnsVoipChannelRequestPrivate(
    const UpdateApnsVoipChannelRequestPrivate &other, UpdateApnsVoipChannelRequest * const q)
    : UpdateApnsVoipChannelPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
