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

#include "updateemailchannelrequest.h"
#include "updateemailchannelrequest_p.h"
#include "updateemailchannelresponse.h"
#include "pinpointrequest_p.h"

namespace AWS {
namespace Pinpoint {

/**
 * @class  UpdateEmailChannelRequest
 *
 * @brief  Implements Pinpoint UpdateEmailChannel requests.
 *
 * @see    PinpointClient::updateEmailChannel
 */

/**
 * @brief  Constructs a new UpdateEmailChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateEmailChannelRequest::UpdateEmailChannelRequest(const UpdateEmailChannelRequest &other)
    : PinpointRequest(new UpdateEmailChannelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateEmailChannelRequest object.
 */
UpdateEmailChannelRequest::UpdateEmailChannelRequest()
    : PinpointRequest(new UpdateEmailChannelRequestPrivate(PinpointRequest::UpdateEmailChannelAction, this))
{

}

bool UpdateEmailChannelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateEmailChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateEmailChannelResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  PinpointClient::send
 */
AwsAbstractResponse * UpdateEmailChannelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateEmailChannelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateEmailChannelRequestPrivate
 *
 * @brief  Private implementation for UpdateEmailChannelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateEmailChannelRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public UpdateEmailChannelRequest instance.
 */
UpdateEmailChannelRequestPrivate::UpdateEmailChannelRequestPrivate(
    const PinpointRequest::Action action, UpdateEmailChannelRequest * const q)
    : UpdateEmailChannelPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateEmailChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateEmailChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateEmailChannelRequest instance.
 */
UpdateEmailChannelRequestPrivate::UpdateEmailChannelRequestPrivate(
    const UpdateEmailChannelRequestPrivate &other, UpdateEmailChannelRequest * const q)
    : UpdateEmailChannelPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace AWS
