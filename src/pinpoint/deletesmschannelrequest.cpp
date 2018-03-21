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

#include "deletesmschannelrequest.h"
#include "deletesmschannelrequest_p.h"
#include "deletesmschannelresponse.h"
#include "pinpointrequest_p.h"

namespace AWS {
namespace Pinpoint {

/**
 * @class  DeleteSmsChannelRequest
 *
 * @brief  Implements Pinpoint DeleteSmsChannel requests.
 *
 * @see    PinpointClient::deleteSmsChannel
 */

/**
 * @brief  Constructs a new DeleteSmsChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSmsChannelResponse::DeleteSmsChannelResponse(

/**
 * @brief  Constructs a new DeleteSmsChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteSmsChannelRequest::DeleteSmsChannelRequest(const DeleteSmsChannelRequest &other)
    : PinpointRequest(new DeleteSmsChannelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteSmsChannelRequest object.
 */
DeleteSmsChannelRequest::DeleteSmsChannelRequest()
    : PinpointRequest(new DeleteSmsChannelRequestPrivate(PinpointRequest::DeleteSmsChannelAction, this))
{

}

bool DeleteSmsChannelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteSmsChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteSmsChannelResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  PinpointClient::send
 */
AwsAbstractResponse * DeleteSmsChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSmsChannelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteSmsChannelRequestPrivate
 *
 * @brief  Private implementation for DeleteSmsChannelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSmsChannelRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public DeleteSmsChannelRequest instance.
 */
DeleteSmsChannelRequestPrivate::DeleteSmsChannelRequestPrivate(
    const PinpointRequest::Action action, DeleteSmsChannelRequest * const q)
    : DeleteSmsChannelPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSmsChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteSmsChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteSmsChannelRequest instance.
 */
DeleteSmsChannelRequestPrivate::DeleteSmsChannelRequestPrivate(
    const DeleteSmsChannelRequestPrivate &other, DeleteSmsChannelRequest * const q)
    : DeleteSmsChannelPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace AWS
