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

#include "createchannelrequest.h"
#include "createchannelrequest_p.h"
#include "createchannelresponse.h"
#include "medialiverequest_p.h"

namespace AWS {
namespace MediaLive {

/**
 * @class  CreateChannelRequest
 *
 * @brief  Implements MediaLive CreateChannel requests.
 *
 * @see    MediaLiveClient::createChannel
 */

/**
 * @brief  Constructs a new CreateChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateChannelResponse::CreateChannelResponse(

/**
 * @brief  Constructs a new CreateChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateChannelRequest::CreateChannelRequest(const CreateChannelRequest &other)
    : MediaLiveRequest(new CreateChannelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateChannelRequest object.
 */
CreateChannelRequest::CreateChannelRequest()
    : MediaLiveRequest(new CreateChannelRequestPrivate(MediaLiveRequest::CreateChannelAction, this))
{

}

bool CreateChannelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateChannelResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MediaLiveClient::send
 */
AwsAbstractResponse * CreateChannelRequest::response(QNetworkReply * const reply) const
{
    return new CreateChannelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateChannelRequestPrivate
 *
 * @brief  Private implementation for CreateChannelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateChannelRequestPrivate object.
 *
 * @param  action  MediaLive action being performed.
 * @param  q       Pointer to this object's public CreateChannelRequest instance.
 */
CreateChannelRequestPrivate::CreateChannelRequestPrivate(
    const MediaLiveRequest::Action action, CreateChannelRequest * const q)
    : CreateChannelPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateChannelRequest instance.
 */
CreateChannelRequestPrivate::CreateChannelRequestPrivate(
    const CreateChannelRequestPrivate &other, CreateChannelRequest * const q)
    : CreateChannelPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace AWS
