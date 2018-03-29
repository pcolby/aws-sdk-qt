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

#include "stopchannelrequest.h"
#include "stopchannelrequest_p.h"
#include "stopchannelresponse.h"
#include "medialiverequest_p.h"

namespace AWS {
namespace MediaLive {

/**
 * @class  StopChannelRequest
 *
 * @brief  Implements MediaLive StopChannel requests.
 *
 * @see    MediaLiveClient::stopChannel
 */

/**
 * @brief  Constructs a new StopChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StopChannelRequest::StopChannelRequest(const StopChannelRequest &other)
    : MediaLiveRequest(new StopChannelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StopChannelRequest object.
 */
StopChannelRequest::StopChannelRequest()
    : MediaLiveRequest(new StopChannelRequestPrivate(MediaLiveRequest::StopChannelAction, this))
{

}

bool StopChannelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StopChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StopChannelResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MediaLiveClient::send
 */
AwsAbstractResponse * StopChannelRequest::response(QNetworkReply * const reply) const
{
    return new StopChannelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StopChannelRequestPrivate
 *
 * @brief  Private implementation for StopChannelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopChannelRequestPrivate object.
 *
 * @param  action  MediaLive action being performed.
 * @param  q       Pointer to this object's public StopChannelRequest instance.
 */
StopChannelRequestPrivate::StopChannelRequestPrivate(
    const MediaLiveRequest::Action action, StopChannelRequest * const q)
    : StopChannelPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StopChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StopChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StopChannelRequest instance.
 */
StopChannelRequestPrivate::StopChannelRequestPrivate(
    const StopChannelRequestPrivate &other, StopChannelRequest * const q)
    : StopChannelPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace AWS
