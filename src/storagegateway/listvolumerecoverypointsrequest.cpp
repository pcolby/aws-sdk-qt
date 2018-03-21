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

#include "listvolumerecoverypointsrequest.h"
#include "listvolumerecoverypointsrequest_p.h"
#include "listvolumerecoverypointsresponse.h"
#include "storagegatewayrequest_p.h"

namespace AWS {
namespace StorageGateway {

/**
 * @class  ListVolumeRecoveryPointsRequest
 *
 * @brief  Implements StorageGateway ListVolumeRecoveryPoints requests.
 *
 * @see    StorageGatewayClient::listVolumeRecoveryPoints
 */

/**
 * @brief  Constructs a new ListVolumeRecoveryPointsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListVolumeRecoveryPointsRequest::ListVolumeRecoveryPointsRequest(const ListVolumeRecoveryPointsRequest &other)
    : StorageGatewayRequest(new ListVolumeRecoveryPointsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListVolumeRecoveryPointsRequest object.
 */
ListVolumeRecoveryPointsRequest::ListVolumeRecoveryPointsRequest()
    : StorageGatewayRequest(new ListVolumeRecoveryPointsRequestPrivate(StorageGatewayRequest::ListVolumeRecoveryPointsAction, this))
{

}

bool ListVolumeRecoveryPointsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListVolumeRecoveryPointsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListVolumeRecoveryPointsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * ListVolumeRecoveryPointsRequest::response(QNetworkReply * const reply) const
{
    return new ListVolumeRecoveryPointsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListVolumeRecoveryPointsRequestPrivate
 *
 * @brief  Private implementation for ListVolumeRecoveryPointsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListVolumeRecoveryPointsRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public ListVolumeRecoveryPointsRequest instance.
 */
ListVolumeRecoveryPointsRequestPrivate::ListVolumeRecoveryPointsRequestPrivate(
    const StorageGatewayRequest::Action action, ListVolumeRecoveryPointsRequest * const q)
    : ListVolumeRecoveryPointsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListVolumeRecoveryPointsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListVolumeRecoveryPointsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListVolumeRecoveryPointsRequest instance.
 */
ListVolumeRecoveryPointsRequestPrivate::ListVolumeRecoveryPointsRequestPrivate(
    const ListVolumeRecoveryPointsRequestPrivate &other, ListVolumeRecoveryPointsRequest * const q)
    : ListVolumeRecoveryPointsPrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace AWS
