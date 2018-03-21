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

#include "deletedbsubnetgrouprequest.h"
#include "deletedbsubnetgrouprequest_p.h"
#include "deletedbsubnetgroupresponse.h"
#include "rdsrequest_p.h"

namespace AWS {
namespace RDS {

/**
 * @class  DeleteDBSubnetGroupRequest
 *
 * @brief  Implements RDS DeleteDBSubnetGroup requests.
 *
 * @see    RDSClient::deleteDBSubnetGroup
 */

/**
 * @brief  Constructs a new DeleteDBSubnetGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteDBSubnetGroupRequest::DeleteDBSubnetGroupRequest(const DeleteDBSubnetGroupRequest &other)
    : RDSRequest(new DeleteDBSubnetGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteDBSubnetGroupRequest object.
 */
DeleteDBSubnetGroupRequest::DeleteDBSubnetGroupRequest()
    : RDSRequest(new DeleteDBSubnetGroupRequestPrivate(RDSRequest::DeleteDBSubnetGroupAction, this))
{

}

bool DeleteDBSubnetGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteDBSubnetGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteDBSubnetGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * DeleteDBSubnetGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDBSubnetGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteDBSubnetGroupRequestPrivate
 *
 * @brief  Private implementation for DeleteDBSubnetGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDBSubnetGroupRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public DeleteDBSubnetGroupRequest instance.
 */
DeleteDBSubnetGroupRequestPrivate::DeleteDBSubnetGroupRequestPrivate(
    const RDSRequest::Action action, DeleteDBSubnetGroupRequest * const q)
    : DeleteDBSubnetGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDBSubnetGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteDBSubnetGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteDBSubnetGroupRequest instance.
 */
DeleteDBSubnetGroupRequestPrivate::DeleteDBSubnetGroupRequestPrivate(
    const DeleteDBSubnetGroupRequestPrivate &other, DeleteDBSubnetGroupRequest * const q)
    : DeleteDBSubnetGroupPrivate(other, q)
{

}

} // namespace RDS
} // namespace AWS
