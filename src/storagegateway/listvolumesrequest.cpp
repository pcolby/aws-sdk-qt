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

#include "listvolumesrequest.h"
#include "listvolumesrequest_p.h"
#include "listvolumesresponse.h"
#include "storagegatewayrequest_p.h"

namespace AWS {
namespace StorageGateway {

/**
 * @class  ListVolumesRequest
 *
 * @brief  Implements StorageGateway ListVolumes requests.
 *
 * @see    StorageGatewayClient::listVolumes
 */

/**
 * @brief  Constructs a new ListVolumesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListVolumesRequest::ListVolumesRequest(const ListVolumesRequest &other)
    : StorageGatewayRequest(new ListVolumesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListVolumesRequest object.
 */
ListVolumesRequest::ListVolumesRequest()
    : StorageGatewayRequest(new ListVolumesRequestPrivate(StorageGatewayRequest::ListVolumesAction, this))
{

}

bool ListVolumesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListVolumesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListVolumesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * ListVolumesRequest::response(QNetworkReply * const reply) const
{
    return new ListVolumesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListVolumesRequestPrivate
 *
 * @brief  Private implementation for ListVolumesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListVolumesRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public ListVolumesRequest instance.
 */
ListVolumesRequestPrivate::ListVolumesRequestPrivate(
    const StorageGatewayRequest::Action action, ListVolumesRequest * const q)
    : ListVolumesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListVolumesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListVolumesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListVolumesRequest instance.
 */
ListVolumesRequestPrivate::ListVolumesRequestPrivate(
    const ListVolumesRequestPrivate &other, ListVolumesRequest * const q)
    : ListVolumesPrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace AWS
