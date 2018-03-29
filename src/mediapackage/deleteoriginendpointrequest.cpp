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

#include "deleteoriginendpointrequest.h"
#include "deleteoriginendpointrequest_p.h"
#include "deleteoriginendpointresponse.h"
#include "mediapackagerequest_p.h"

namespace AWS {
namespace MediaPackage {

/**
 * @class  DeleteOriginEndpointRequest
 *
 * @brief  Implements MediaPackage DeleteOriginEndpoint requests.
 *
 * @see    MediaPackageClient::deleteOriginEndpoint
 */

/**
 * @brief  Constructs a new DeleteOriginEndpointRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteOriginEndpointRequest::DeleteOriginEndpointRequest(const DeleteOriginEndpointRequest &other)
    : MediaPackageRequest(new DeleteOriginEndpointRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteOriginEndpointRequest object.
 */
DeleteOriginEndpointRequest::DeleteOriginEndpointRequest()
    : MediaPackageRequest(new DeleteOriginEndpointRequestPrivate(MediaPackageRequest::DeleteOriginEndpointAction, this))
{

}

bool DeleteOriginEndpointRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteOriginEndpointResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteOriginEndpointResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MediaPackageClient::send
 */
AwsAbstractResponse * DeleteOriginEndpointRequest::response(QNetworkReply * const reply) const
{
    return new DeleteOriginEndpointResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteOriginEndpointRequestPrivate
 *
 * @brief  Private implementation for DeleteOriginEndpointRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteOriginEndpointRequestPrivate object.
 *
 * @param  action  MediaPackage action being performed.
 * @param  q       Pointer to this object's public DeleteOriginEndpointRequest instance.
 */
DeleteOriginEndpointRequestPrivate::DeleteOriginEndpointRequestPrivate(
    const MediaPackageRequest::Action action, DeleteOriginEndpointRequest * const q)
    : DeleteOriginEndpointPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteOriginEndpointRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteOriginEndpointRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteOriginEndpointRequest instance.
 */
DeleteOriginEndpointRequestPrivate::DeleteOriginEndpointRequestPrivate(
    const DeleteOriginEndpointRequestPrivate &other, DeleteOriginEndpointRequest * const q)
    : DeleteOriginEndpointPrivate(other, q)
{

}

} // namespace MediaPackage
} // namespace AWS
