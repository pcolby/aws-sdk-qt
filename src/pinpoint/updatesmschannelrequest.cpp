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

#include "updatesmschannelrequest.h"
#include "updatesmschannelrequest_p.h"
#include "updatesmschannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/**
 * @class  UpdateSmsChannelRequest
 *
 * @brief  Implements Pinpoint UpdateSmsChannel requests.
 *
 * @see    PinpointClient::updateSmsChannel
 */

/**
 * @brief  Constructs a new UpdateSmsChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateSmsChannelRequest::UpdateSmsChannelRequest(const UpdateSmsChannelRequest &other)
    : PinpointRequest(new UpdateSmsChannelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateSmsChannelRequest object.
 */
UpdateSmsChannelRequest::UpdateSmsChannelRequest()
    : PinpointRequest(new UpdateSmsChannelRequestPrivate(PinpointRequest::UpdateSmsChannelAction, this))
{

}

bool UpdateSmsChannelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateSmsChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateSmsChannelResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PinpointClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSmsChannelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSmsChannelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateSmsChannelRequestPrivate
 *
 * @brief  Private implementation for UpdateSmsChannelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSmsChannelRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public UpdateSmsChannelRequest instance.
 */
UpdateSmsChannelRequestPrivate::UpdateSmsChannelRequestPrivate(
    const PinpointRequest::Action action, UpdateSmsChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSmsChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateSmsChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateSmsChannelRequest instance.
 */
UpdateSmsChannelRequestPrivate::UpdateSmsChannelRequestPrivate(
    const UpdateSmsChannelRequestPrivate &other, UpdateSmsChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
