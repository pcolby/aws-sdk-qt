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

#include "updatechannelrequest.h"
#include "updatechannelrequest_p.h"
#include "updatechannelresponse.h"
#include "mediapackagerequest_p.h"

namespace AWS {
namespace MediaPackage {

/**
 * @class  UpdateChannelRequest
 *
 * @brief  Implements MediaPackage UpdateChannel requests.
 *
 * @see    MediaPackageClient::updateChannel
 */

/**
 * @brief  Constructs a new UpdateChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateChannelResponse::UpdateChannelResponse(

/**
 * @brief  Constructs a new UpdateChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateChannelRequest::UpdateChannelRequest(const UpdateChannelRequest &other)
    : MediaPackageRequest(new UpdateChannelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateChannelRequest object.
 */
UpdateChannelRequest::UpdateChannelRequest()
    : MediaPackageRequest(new UpdateChannelRequestPrivate(MediaPackageRequest::UpdateChannelAction, this))
{

}

bool UpdateChannelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateChannelResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MediaPackageClient::send
 */
AwsAbstractResponse * UpdateChannelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateChannelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateChannelRequestPrivate
 *
 * @brief  Private implementation for UpdateChannelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateChannelRequestPrivate object.
 *
 * @param  action  MediaPackage action being performed.
 * @param  q       Pointer to this object's public UpdateChannelRequest instance.
 */
UpdateChannelRequestPrivate::UpdateChannelRequestPrivate(
    const MediaPackageRequest::Action action, UpdateChannelRequest * const q)
    : UpdateChannelPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateChannelRequest instance.
 */
UpdateChannelRequestPrivate::UpdateChannelRequestPrivate(
    const UpdateChannelRequestPrivate &other, UpdateChannelRequest * const q)
    : UpdateChannelPrivate(other, q)
{

}

} // namespace MediaPackage
} // namespace AWS
