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

#include "putinventoryrequest.h"
#include "putinventoryrequest_p.h"
#include "putinventoryresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  PutInventoryRequest
 *
 * @brief  Implements SSM PutInventory requests.
 *
 * @see    SSMClient::putInventory
 */

/**
 * @brief  Constructs a new PutInventoryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutInventoryResponse::PutInventoryResponse(

/**
 * @brief  Constructs a new PutInventoryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutInventoryRequest::PutInventoryRequest(const PutInventoryRequest &other)
    : SSMRequest(new PutInventoryRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutInventoryRequest object.
 */
PutInventoryRequest::PutInventoryRequest()
    : SSMRequest(new PutInventoryRequestPrivate(SSMRequest::PutInventoryAction, this))
{

}

bool PutInventoryRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutInventoryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutInventoryResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * PutInventoryRequest::response(QNetworkReply * const reply) const
{
    return new PutInventoryResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutInventoryRequestPrivate
 *
 * @brief  Private implementation for PutInventoryRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutInventoryRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public PutInventoryRequest instance.
 */
PutInventoryRequestPrivate::PutInventoryRequestPrivate(
    const SSMRequest::Action action, PutInventoryRequest * const q)
    : PutInventoryPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutInventoryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutInventoryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutInventoryRequest instance.
 */
PutInventoryRequestPrivate::PutInventoryRequestPrivate(
    const PutInventoryRequestPrivate &other, PutInventoryRequest * const q)
    : PutInventoryPrivate(other, q)
{

}
