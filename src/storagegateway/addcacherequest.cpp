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

#include "addcacherequest.h"
#include "addcacherequest_p.h"
#include "addcacheresponse.h"
#include "storagegatewayrequest_p.h"

namespace QtAws {
namespace StorageGateway {

/**
 * @class  AddCacheRequest
 *
 * @brief  Implements StorageGateway AddCache requests.
 *
 * @see    StorageGatewayClient::addCache
 */

/**
 * @brief  Constructs a new AddCacheRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AddCacheRequest::AddCacheRequest(const AddCacheRequest &other)
    : StorageGatewayRequest(new AddCacheRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AddCacheRequest object.
 */
AddCacheRequest::AddCacheRequest()
    : StorageGatewayRequest(new AddCacheRequestPrivate(StorageGatewayRequest::AddCacheAction, this))
{

}

bool AddCacheRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AddCacheResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AddCacheResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * AddCacheRequest::response(QNetworkReply * const reply) const
{
    return new AddCacheResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AddCacheRequestPrivate
 *
 * @brief  Private implementation for AddCacheRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddCacheRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public AddCacheRequest instance.
 */
AddCacheRequestPrivate::AddCacheRequestPrivate(
    const StorageGatewayRequest::Action action, AddCacheRequest * const q)
    : AddCachePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AddCacheRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AddCacheRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AddCacheRequest instance.
 */
AddCacheRequestPrivate::AddCacheRequestPrivate(
    const AddCacheRequestPrivate &other, AddCacheRequest * const q)
    : AddCachePrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace QtAws
