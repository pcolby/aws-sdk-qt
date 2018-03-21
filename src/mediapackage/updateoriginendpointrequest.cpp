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

#include "updateoriginendpointrequest.h"
#include "updateoriginendpointrequest_p.h"
#include "updateoriginendpointresponse.h"
#include "mediapackagerequest_p.h"

namespace AWS {
namespace MediaPackage {

/**
 * @class  UpdateOriginEndpointRequest
 *
 * @brief  Implements MediaPackage UpdateOriginEndpoint requests.
 *
 * @see    MediaPackageClient::updateOriginEndpoint
 */

/**
 * @brief  Constructs a new UpdateOriginEndpointRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateOriginEndpointRequest::UpdateOriginEndpointRequest(const UpdateOriginEndpointRequest &other)
    : MediaPackageRequest(new UpdateOriginEndpointRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateOriginEndpointRequest object.
 */
UpdateOriginEndpointRequest::UpdateOriginEndpointRequest()
    : MediaPackageRequest(new UpdateOriginEndpointRequestPrivate(MediaPackageRequest::UpdateOriginEndpointAction, this))
{

}

bool UpdateOriginEndpointRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateOriginEndpointResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateOriginEndpointResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MediaPackageClient::send
 */
AwsAbstractResponse * UpdateOriginEndpointRequest::response(QNetworkReply * const reply) const
{
    return new UpdateOriginEndpointResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateOriginEndpointRequestPrivate
 *
 * @brief  Private implementation for UpdateOriginEndpointRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateOriginEndpointRequestPrivate object.
 *
 * @param  action  MediaPackage action being performed.
 * @param  q       Pointer to this object's public UpdateOriginEndpointRequest instance.
 */
UpdateOriginEndpointRequestPrivate::UpdateOriginEndpointRequestPrivate(
    const MediaPackageRequest::Action action, UpdateOriginEndpointRequest * const q)
    : UpdateOriginEndpointPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateOriginEndpointRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateOriginEndpointRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateOriginEndpointRequest instance.
 */
UpdateOriginEndpointRequestPrivate::UpdateOriginEndpointRequestPrivate(
    const UpdateOriginEndpointRequestPrivate &other, UpdateOriginEndpointRequest * const q)
    : UpdateOriginEndpointPrivate(other, q)
{

}

} // namespace MediaPackage
} // namespace AWS
