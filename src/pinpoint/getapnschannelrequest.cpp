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

#include "getapnschannelrequest.h"
#include "getapnschannelrequest_p.h"
#include "getapnschannelresponse.h"
#include "pinpointrequest_p.h"

namespace AWS {
namespace Pinpoint {

/**
 * @class  GetApnsChannelRequest
 *
 * @brief  Implements Pinpoint GetApnsChannel requests.
 *
 * @see    PinpointClient::getApnsChannel
 */

/**
 * @brief  Constructs a new GetApnsChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetApnsChannelResponse::GetApnsChannelResponse(

/**
 * @brief  Constructs a new GetApnsChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetApnsChannelRequest::GetApnsChannelRequest(const GetApnsChannelRequest &other)
    : PinpointRequest(new GetApnsChannelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetApnsChannelRequest object.
 */
GetApnsChannelRequest::GetApnsChannelRequest()
    : PinpointRequest(new GetApnsChannelRequestPrivate(PinpointRequest::GetApnsChannelAction, this))
{

}

bool GetApnsChannelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetApnsChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetApnsChannelResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  PinpointClient::send
 */
AwsAbstractResponse * GetApnsChannelRequest::response(QNetworkReply * const reply) const
{
    return new GetApnsChannelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetApnsChannelRequestPrivate
 *
 * @brief  Private implementation for GetApnsChannelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetApnsChannelRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public GetApnsChannelRequest instance.
 */
GetApnsChannelRequestPrivate::GetApnsChannelRequestPrivate(
    const PinpointRequest::Action action, GetApnsChannelRequest * const q)
    : GetApnsChannelPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetApnsChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetApnsChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetApnsChannelRequest instance.
 */
GetApnsChannelRequestPrivate::GetApnsChannelRequestPrivate(
    const GetApnsChannelRequestPrivate &other, GetApnsChannelRequest * const q)
    : GetApnsChannelPrivate(other, q)
{

}
