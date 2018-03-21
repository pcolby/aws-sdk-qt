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

#include "listchannelsrequest.h"
#include "listchannelsrequest_p.h"
#include "listchannelsresponse.h"
#include "medialiverequest_p.h"

namespace AWS {
namespace MediaLive {

/**
 * @class  ListChannelsRequest
 *
 * @brief  Implements MediaLive ListChannels requests.
 *
 * @see    MediaLiveClient::listChannels
 */

/**
 * @brief  Constructs a new ListChannelsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListChannelsRequest::ListChannelsRequest(const ListChannelsRequest &other)
    : MediaLiveRequest(new ListChannelsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListChannelsRequest object.
 */
ListChannelsRequest::ListChannelsRequest()
    : MediaLiveRequest(new ListChannelsRequestPrivate(MediaLiveRequest::ListChannelsAction, this))
{

}

bool ListChannelsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListChannelsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListChannelsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MediaLiveClient::send
 */
AwsAbstractResponse * ListChannelsRequest::response(QNetworkReply * const reply) const
{
    return new ListChannelsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListChannelsRequestPrivate
 *
 * @brief  Private implementation for ListChannelsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListChannelsRequestPrivate object.
 *
 * @param  action  MediaLive action being performed.
 * @param  q       Pointer to this object's public ListChannelsRequest instance.
 */
ListChannelsRequestPrivate::ListChannelsRequestPrivate(
    const MediaLiveRequest::Action action, ListChannelsRequest * const q)
    : ListChannelsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListChannelsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListChannelsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListChannelsRequest instance.
 */
ListChannelsRequestPrivate::ListChannelsRequestPrivate(
    const ListChannelsRequestPrivate &other, ListChannelsRequest * const q)
    : ListChannelsPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace AWS
