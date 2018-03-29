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

#include "deletechannelrequest.h"
#include "deletechannelrequest_p.h"
#include "deletechannelresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/**
 * @class  DeleteChannelRequest
 *
 * @brief  Implements MediaLive DeleteChannel requests.
 *
 * @see    MediaLiveClient::deleteChannel
 */

/**
 * @brief  Constructs a new DeleteChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteChannelRequest::DeleteChannelRequest(const DeleteChannelRequest &other)
    : MediaLiveRequest(new DeleteChannelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteChannelRequest object.
 */
DeleteChannelRequest::DeleteChannelRequest()
    : MediaLiveRequest(new DeleteChannelRequestPrivate(MediaLiveRequest::DeleteChannelAction, this))
{

}

bool DeleteChannelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteChannelResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MediaLiveClient::send
 */
AwsAbstractResponse * DeleteChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteChannelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteChannelRequestPrivate
 *
 * @brief  Private implementation for DeleteChannelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteChannelRequestPrivate object.
 *
 * @param  action  MediaLive action being performed.
 * @param  q       Pointer to this object's public DeleteChannelRequest instance.
 */
DeleteChannelRequestPrivate::DeleteChannelRequestPrivate(
    const MediaLiveRequest::Action action, DeleteChannelRequest * const q)
    : DeleteChannelPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteChannelRequest instance.
 */
DeleteChannelRequestPrivate::DeleteChannelRequestPrivate(
    const DeleteChannelRequestPrivate &other, DeleteChannelRequest * const q)
    : DeleteChannelPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
