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

#include "getemailchannelrequest.h"
#include "getemailchannelrequest_p.h"
#include "getemailchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/**
 * @class  GetEmailChannelRequest
 *
 * @brief  Implements Pinpoint GetEmailChannel requests.
 *
 * @see    PinpointClient::getEmailChannel
 */

/**
 * @brief  Constructs a new GetEmailChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetEmailChannelRequest::GetEmailChannelRequest(const GetEmailChannelRequest &other)
    : PinpointRequest(new GetEmailChannelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetEmailChannelRequest object.
 */
GetEmailChannelRequest::GetEmailChannelRequest()
    : PinpointRequest(new GetEmailChannelRequestPrivate(PinpointRequest::GetEmailChannelAction, this))
{

}

bool GetEmailChannelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetEmailChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetEmailChannelResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PinpointClient::send
 */
QtAws::Core::AwsAbstractResponse * GetEmailChannelRequest::response(QNetworkReply * const reply) const
{
    return new GetEmailChannelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetEmailChannelRequestPrivate
 *
 * @brief  Private implementation for GetEmailChannelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetEmailChannelRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public GetEmailChannelRequest instance.
 */
GetEmailChannelRequestPrivate::GetEmailChannelRequestPrivate(
    const PinpointRequest::Action action, GetEmailChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetEmailChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetEmailChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetEmailChannelRequest instance.
 */
GetEmailChannelRequestPrivate::GetEmailChannelRequestPrivate(
    const GetEmailChannelRequestPrivate &other, GetEmailChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
