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

#include "getgcmchannelrequest.h"
#include "getgcmchannelrequest_p.h"
#include "getgcmchannelresponse.h"
#include "pinpointrequest_p.h"

namespace AWS {
namespace Pinpoint {

/**
 * @class  GetGcmChannelRequest
 *
 * @brief  Implements Pinpoint GetGcmChannel requests.
 *
 * @see    PinpointClient::getGcmChannel
 */

/**
 * @brief  Constructs a new GetGcmChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetGcmChannelResponse::GetGcmChannelResponse(

/**
 * @brief  Constructs a new GetGcmChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetGcmChannelRequest::GetGcmChannelRequest(const GetGcmChannelRequest &other)
    : PinpointRequest(new GetGcmChannelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetGcmChannelRequest object.
 */
GetGcmChannelRequest::GetGcmChannelRequest()
    : PinpointRequest(new GetGcmChannelRequestPrivate(PinpointRequest::GetGcmChannelAction, this))
{

}

bool GetGcmChannelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetGcmChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetGcmChannelResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  PinpointClient::send
 */
AwsAbstractResponse * GetGcmChannelRequest::response(QNetworkReply * const reply) const
{
    return new GetGcmChannelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetGcmChannelRequestPrivate
 *
 * @brief  Private implementation for GetGcmChannelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetGcmChannelRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public GetGcmChannelRequest instance.
 */
GetGcmChannelRequestPrivate::GetGcmChannelRequestPrivate(
    const PinpointRequest::Action action, GetGcmChannelRequest * const q)
    : GetGcmChannelPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetGcmChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetGcmChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetGcmChannelRequest instance.
 */
GetGcmChannelRequestPrivate::GetGcmChannelRequestPrivate(
    const GetGcmChannelRequestPrivate &other, GetGcmChannelRequest * const q)
    : GetGcmChannelPrivate(other, q)
{

}
