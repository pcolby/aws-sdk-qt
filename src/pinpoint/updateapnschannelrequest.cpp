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

#include "updateapnschannelrequest.h"
#include "updateapnschannelrequest_p.h"
#include "updateapnschannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/**
 * @class  UpdateApnsChannelRequest
 *
 * @brief  Implements Pinpoint UpdateApnsChannel requests.
 *
 * @see    PinpointClient::updateApnsChannel
 */

/**
 * @brief  Constructs a new UpdateApnsChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateApnsChannelRequest::UpdateApnsChannelRequest(const UpdateApnsChannelRequest &other)
    : PinpointRequest(new UpdateApnsChannelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateApnsChannelRequest object.
 */
UpdateApnsChannelRequest::UpdateApnsChannelRequest()
    : PinpointRequest(new UpdateApnsChannelRequestPrivate(PinpointRequest::UpdateApnsChannelAction, this))
{

}

bool UpdateApnsChannelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateApnsChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateApnsChannelResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  PinpointClient::send
 */
AwsAbstractResponse * UpdateApnsChannelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateApnsChannelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateApnsChannelRequestPrivate
 *
 * @brief  Private implementation for UpdateApnsChannelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateApnsChannelRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public UpdateApnsChannelRequest instance.
 */
UpdateApnsChannelRequestPrivate::UpdateApnsChannelRequestPrivate(
    const PinpointRequest::Action action, UpdateApnsChannelRequest * const q)
    : UpdateApnsChannelPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateApnsChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateApnsChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateApnsChannelRequest instance.
 */
UpdateApnsChannelRequestPrivate::UpdateApnsChannelRequestPrivate(
    const UpdateApnsChannelRequestPrivate &other, UpdateApnsChannelRequest * const q)
    : UpdateApnsChannelPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
