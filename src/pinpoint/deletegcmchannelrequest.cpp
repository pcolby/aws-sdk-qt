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

#include "deletegcmchannelrequest.h"
#include "deletegcmchannelrequest_p.h"
#include "deletegcmchannelresponse.h"
#include "pinpointrequest_p.h"

namespace AWS {
namespace Pinpoint {

/**
 * @class  DeleteGcmChannelRequest
 *
 * @brief  Implements Pinpoint DeleteGcmChannel requests.
 *
 * @see    PinpointClient::deleteGcmChannel
 */

/**
 * @brief  Constructs a new DeleteGcmChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteGcmChannelResponse::DeleteGcmChannelResponse(

/**
 * @brief  Constructs a new DeleteGcmChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteGcmChannelRequest::DeleteGcmChannelRequest(const DeleteGcmChannelRequest &other)
    : PinpointRequest(new DeleteGcmChannelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteGcmChannelRequest object.
 */
DeleteGcmChannelRequest::DeleteGcmChannelRequest()
    : PinpointRequest(new DeleteGcmChannelRequestPrivate(PinpointRequest::DeleteGcmChannelAction, this))
{

}

bool DeleteGcmChannelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteGcmChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteGcmChannelResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  PinpointClient::send
 */
AwsAbstractResponse * DeleteGcmChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteGcmChannelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteGcmChannelRequestPrivate
 *
 * @brief  Private implementation for DeleteGcmChannelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteGcmChannelRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public DeleteGcmChannelRequest instance.
 */
DeleteGcmChannelRequestPrivate::DeleteGcmChannelRequestPrivate(
    const PinpointRequest::Action action, DeleteGcmChannelRequest * const q)
    : DeleteGcmChannelPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteGcmChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteGcmChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteGcmChannelRequest instance.
 */
DeleteGcmChannelRequestPrivate::DeleteGcmChannelRequestPrivate(
    const DeleteGcmChannelRequestPrivate &other, DeleteGcmChannelRequest * const q)
    : DeleteGcmChannelPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace AWS
