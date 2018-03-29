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

#include "getapnssandboxchannelrequest.h"
#include "getapnssandboxchannelrequest_p.h"
#include "getapnssandboxchannelresponse.h"
#include "pinpointrequest_p.h"

namespace AWS {
namespace Pinpoint {

/**
 * @class  GetApnsSandboxChannelRequest
 *
 * @brief  Implements Pinpoint GetApnsSandboxChannel requests.
 *
 * @see    PinpointClient::getApnsSandboxChannel
 */

/**
 * @brief  Constructs a new GetApnsSandboxChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetApnsSandboxChannelRequest::GetApnsSandboxChannelRequest(const GetApnsSandboxChannelRequest &other)
    : PinpointRequest(new GetApnsSandboxChannelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetApnsSandboxChannelRequest object.
 */
GetApnsSandboxChannelRequest::GetApnsSandboxChannelRequest()
    : PinpointRequest(new GetApnsSandboxChannelRequestPrivate(PinpointRequest::GetApnsSandboxChannelAction, this))
{

}

bool GetApnsSandboxChannelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetApnsSandboxChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetApnsSandboxChannelResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  PinpointClient::send
 */
AwsAbstractResponse * GetApnsSandboxChannelRequest::response(QNetworkReply * const reply) const
{
    return new GetApnsSandboxChannelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetApnsSandboxChannelRequestPrivate
 *
 * @brief  Private implementation for GetApnsSandboxChannelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetApnsSandboxChannelRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public GetApnsSandboxChannelRequest instance.
 */
GetApnsSandboxChannelRequestPrivate::GetApnsSandboxChannelRequestPrivate(
    const PinpointRequest::Action action, GetApnsSandboxChannelRequest * const q)
    : GetApnsSandboxChannelPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetApnsSandboxChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetApnsSandboxChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetApnsSandboxChannelRequest instance.
 */
GetApnsSandboxChannelRequestPrivate::GetApnsSandboxChannelRequestPrivate(
    const GetApnsSandboxChannelRequestPrivate &other, GetApnsSandboxChannelRequest * const q)
    : GetApnsSandboxChannelPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace AWS
