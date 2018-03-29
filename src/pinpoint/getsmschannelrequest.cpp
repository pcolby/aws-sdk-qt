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

#include "getsmschannelrequest.h"
#include "getsmschannelrequest_p.h"
#include "getsmschannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/**
 * @class  GetSmsChannelRequest
 *
 * @brief  Implements Pinpoint GetSmsChannel requests.
 *
 * @see    PinpointClient::getSmsChannel
 */

/**
 * @brief  Constructs a new GetSmsChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetSmsChannelRequest::GetSmsChannelRequest(const GetSmsChannelRequest &other)
    : PinpointRequest(new GetSmsChannelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetSmsChannelRequest object.
 */
GetSmsChannelRequest::GetSmsChannelRequest()
    : PinpointRequest(new GetSmsChannelRequestPrivate(PinpointRequest::GetSmsChannelAction, this))
{

}

bool GetSmsChannelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetSmsChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetSmsChannelResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  PinpointClient::send
 */
AwsAbstractResponse * GetSmsChannelRequest::response(QNetworkReply * const reply) const
{
    return new GetSmsChannelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetSmsChannelRequestPrivate
 *
 * @brief  Private implementation for GetSmsChannelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSmsChannelRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public GetSmsChannelRequest instance.
 */
GetSmsChannelRequestPrivate::GetSmsChannelRequestPrivate(
    const PinpointRequest::Action action, GetSmsChannelRequest * const q)
    : GetSmsChannelPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetSmsChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetSmsChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetSmsChannelRequest instance.
 */
GetSmsChannelRequestPrivate::GetSmsChannelRequestPrivate(
    const GetSmsChannelRequestPrivate &other, GetSmsChannelRequest * const q)
    : GetSmsChannelPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
