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

#include "getinventoryrequest.h"
#include "getinventoryrequest_p.h"
#include "getinventoryresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  GetInventoryRequest
 *
 * @brief  Implements SSM GetInventory requests.
 *
 * @see    SSMClient::getInventory
 */

/**
 * @brief  Constructs a new GetInventoryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetInventoryRequest::GetInventoryRequest(const GetInventoryRequest &other)
    : SSMRequest(new GetInventoryRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetInventoryRequest object.
 */
GetInventoryRequest::GetInventoryRequest()
    : SSMRequest(new GetInventoryRequestPrivate(SSMRequest::GetInventoryAction, this))
{

}

bool GetInventoryRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetInventoryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetInventoryResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SSMClient::send
 */
QtAws::Core::AwsAbstractResponse * GetInventoryRequest::response(QNetworkReply * const reply) const
{
    return new GetInventoryResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetInventoryRequestPrivate
 *
 * @brief  Private implementation for GetInventoryRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetInventoryRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public GetInventoryRequest instance.
 */
GetInventoryRequestPrivate::GetInventoryRequestPrivate(
    const SSMRequest::Action action, GetInventoryRequest * const q)
    : SSMRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetInventoryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetInventoryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetInventoryRequest instance.
 */
GetInventoryRequestPrivate::GetInventoryRequestPrivate(
    const GetInventoryRequestPrivate &other, GetInventoryRequest * const q)
    : SSMRequestPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
