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

#include "listvolumeinitiatorsrequest.h"
#include "listvolumeinitiatorsrequest_p.h"
#include "listvolumeinitiatorsresponse.h"
#include "storagegatewayrequest_p.h"

namespace QtAws {
namespace StorageGateway {

/**
 * @class  ListVolumeInitiatorsRequest
 *
 * @brief  Implements StorageGateway ListVolumeInitiators requests.
 *
 * @see    StorageGatewayClient::listVolumeInitiators
 */

/**
 * @brief  Constructs a new ListVolumeInitiatorsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListVolumeInitiatorsRequest::ListVolumeInitiatorsRequest(const ListVolumeInitiatorsRequest &other)
    : StorageGatewayRequest(new ListVolumeInitiatorsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListVolumeInitiatorsRequest object.
 */
ListVolumeInitiatorsRequest::ListVolumeInitiatorsRequest()
    : StorageGatewayRequest(new ListVolumeInitiatorsRequestPrivate(StorageGatewayRequest::ListVolumeInitiatorsAction, this))
{

}

bool ListVolumeInitiatorsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListVolumeInitiatorsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListVolumeInitiatorsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * ListVolumeInitiatorsRequest::response(QNetworkReply * const reply) const
{
    return new ListVolumeInitiatorsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListVolumeInitiatorsRequestPrivate
 *
 * @brief  Private implementation for ListVolumeInitiatorsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListVolumeInitiatorsRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public ListVolumeInitiatorsRequest instance.
 */
ListVolumeInitiatorsRequestPrivate::ListVolumeInitiatorsRequestPrivate(
    const StorageGatewayRequest::Action action, ListVolumeInitiatorsRequest * const q)
    : ListVolumeInitiatorsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListVolumeInitiatorsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListVolumeInitiatorsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListVolumeInitiatorsRequest instance.
 */
ListVolumeInitiatorsRequestPrivate::ListVolumeInitiatorsRequestPrivate(
    const ListVolumeInitiatorsRequestPrivate &other, ListVolumeInitiatorsRequest * const q)
    : ListVolumeInitiatorsPrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace QtAws
