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

#include "getapnsvoipsandboxchannelrequest.h"
#include "getapnsvoipsandboxchannelrequest_p.h"
#include "getapnsvoipsandboxchannelresponse.h"
#include "pinpointrequest_p.h"

namespace AWS {
namespace Pinpoint {

/**
 * @class  GetApnsVoipSandboxChannelRequest
 *
 * @brief  Implements Pinpoint GetApnsVoipSandboxChannel requests.
 *
 * @see    PinpointClient::getApnsVoipSandboxChannel
 */

/**
 * @brief  Constructs a new GetApnsVoipSandboxChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetApnsVoipSandboxChannelRequest::GetApnsVoipSandboxChannelRequest(const GetApnsVoipSandboxChannelRequest &other)
    : PinpointRequest(new GetApnsVoipSandboxChannelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetApnsVoipSandboxChannelRequest object.
 */
GetApnsVoipSandboxChannelRequest::GetApnsVoipSandboxChannelRequest()
    : PinpointRequest(new GetApnsVoipSandboxChannelRequestPrivate(PinpointRequest::GetApnsVoipSandboxChannelAction, this))
{

}

bool GetApnsVoipSandboxChannelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetApnsVoipSandboxChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetApnsVoipSandboxChannelResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  PinpointClient::send
 */
AwsAbstractResponse * GetApnsVoipSandboxChannelRequest::response(QNetworkReply * const reply) const
{
    return new GetApnsVoipSandboxChannelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetApnsVoipSandboxChannelRequestPrivate
 *
 * @brief  Private implementation for GetApnsVoipSandboxChannelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetApnsVoipSandboxChannelRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public GetApnsVoipSandboxChannelRequest instance.
 */
GetApnsVoipSandboxChannelRequestPrivate::GetApnsVoipSandboxChannelRequestPrivate(
    const PinpointRequest::Action action, GetApnsVoipSandboxChannelRequest * const q)
    : GetApnsVoipSandboxChannelPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetApnsVoipSandboxChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetApnsVoipSandboxChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetApnsVoipSandboxChannelRequest instance.
 */
GetApnsVoipSandboxChannelRequestPrivate::GetApnsVoipSandboxChannelRequestPrivate(
    const GetApnsVoipSandboxChannelRequestPrivate &other, GetApnsVoipSandboxChannelRequest * const q)
    : GetApnsVoipSandboxChannelPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace AWS
