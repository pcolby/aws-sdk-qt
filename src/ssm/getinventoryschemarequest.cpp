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

#include "getinventoryschemarequest.h"
#include "getinventoryschemarequest_p.h"
#include "getinventoryschemaresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  GetInventorySchemaRequest
 *
 * @brief  Implements SSM GetInventorySchema requests.
 *
 * @see    SSMClient::getInventorySchema
 */

/**
 * @brief  Constructs a new GetInventorySchemaRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetInventorySchemaRequest::GetInventorySchemaRequest(const GetInventorySchemaRequest &other)
    : SSMRequest(new GetInventorySchemaRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetInventorySchemaRequest object.
 */
GetInventorySchemaRequest::GetInventorySchemaRequest()
    : SSMRequest(new GetInventorySchemaRequestPrivate(SSMRequest::GetInventorySchemaAction, this))
{

}

bool GetInventorySchemaRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetInventorySchemaResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetInventorySchemaResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * GetInventorySchemaRequest::response(QNetworkReply * const reply) const
{
    return new GetInventorySchemaResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetInventorySchemaRequestPrivate
 *
 * @brief  Private implementation for GetInventorySchemaRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetInventorySchemaRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public GetInventorySchemaRequest instance.
 */
GetInventorySchemaRequestPrivate::GetInventorySchemaRequestPrivate(
    const SSMRequest::Action action, GetInventorySchemaRequest * const q)
    : GetInventorySchemaPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetInventorySchemaRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetInventorySchemaRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetInventorySchemaRequest instance.
 */
GetInventorySchemaRequestPrivate::GetInventorySchemaRequestPrivate(
    const GetInventorySchemaRequestPrivate &other, GetInventorySchemaRequest * const q)
    : GetInventorySchemaPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
