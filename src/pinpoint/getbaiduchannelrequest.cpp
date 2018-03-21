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

#include "getbaiduchannelrequest.h"
#include "getbaiduchannelrequest_p.h"
#include "getbaiduchannelresponse.h"
#include "pinpointrequest_p.h"

namespace AWS {
namespace Pinpoint {

/**
 * @class  GetBaiduChannelRequest
 *
 * @brief  Implements Pinpoint GetBaiduChannel requests.
 *
 * @see    PinpointClient::getBaiduChannel
 */

/**
 * @brief  Constructs a new GetBaiduChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBaiduChannelRequest::GetBaiduChannelRequest(const GetBaiduChannelRequest &other)
    : PinpointRequest(new GetBaiduChannelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetBaiduChannelRequest object.
 */
GetBaiduChannelRequest::GetBaiduChannelRequest()
    : PinpointRequest(new GetBaiduChannelRequestPrivate(PinpointRequest::GetBaiduChannelAction, this))
{

}

bool GetBaiduChannelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetBaiduChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBaiduChannelResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  PinpointClient::send
 */
AwsAbstractResponse * GetBaiduChannelRequest::response(QNetworkReply * const reply) const
{
    return new GetBaiduChannelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetBaiduChannelRequestPrivate
 *
 * @brief  Private implementation for GetBaiduChannelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBaiduChannelRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public GetBaiduChannelRequest instance.
 */
GetBaiduChannelRequestPrivate::GetBaiduChannelRequestPrivate(
    const PinpointRequest::Action action, GetBaiduChannelRequest * const q)
    : GetBaiduChannelPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetBaiduChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBaiduChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBaiduChannelRequest instance.
 */
GetBaiduChannelRequestPrivate::GetBaiduChannelRequestPrivate(
    const GetBaiduChannelRequestPrivate &other, GetBaiduChannelRequest * const q)
    : GetBaiduChannelPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace AWS
