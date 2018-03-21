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

#include "deletesubnetgrouprequest.h"
#include "deletesubnetgrouprequest_p.h"
#include "deletesubnetgroupresponse.h"
#include "daxrequest_p.h"

namespace AWS {
namespace DAX {

/**
 * @class  DeleteSubnetGroupRequest
 *
 * @brief  Implements DAX DeleteSubnetGroup requests.
 *
 * @see    DAXClient::deleteSubnetGroup
 */

/**
 * @brief  Constructs a new DeleteSubnetGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteSubnetGroupRequest::DeleteSubnetGroupRequest(const DeleteSubnetGroupRequest &other)
    : DAXRequest(new DeleteSubnetGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteSubnetGroupRequest object.
 */
DeleteSubnetGroupRequest::DeleteSubnetGroupRequest()
    : DAXRequest(new DeleteSubnetGroupRequestPrivate(DAXRequest::DeleteSubnetGroupAction, this))
{

}

bool DeleteSubnetGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteSubnetGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteSubnetGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DAXClient::send
 */
AwsAbstractResponse * DeleteSubnetGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSubnetGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteSubnetGroupRequestPrivate
 *
 * @brief  Private implementation for DeleteSubnetGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSubnetGroupRequestPrivate object.
 *
 * @param  action  DAX action being performed.
 * @param  q       Pointer to this object's public DeleteSubnetGroupRequest instance.
 */
DeleteSubnetGroupRequestPrivate::DeleteSubnetGroupRequestPrivate(
    const DAXRequest::Action action, DeleteSubnetGroupRequest * const q)
    : DeleteSubnetGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSubnetGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteSubnetGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteSubnetGroupRequest instance.
 */
DeleteSubnetGroupRequestPrivate::DeleteSubnetGroupRequestPrivate(
    const DeleteSubnetGroupRequestPrivate &other, DeleteSubnetGroupRequest * const q)
    : DeleteSubnetGroupPrivate(other, q)
{

}

} // namespace DAX
} // namespace AWS
