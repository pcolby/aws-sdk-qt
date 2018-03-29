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

#include "updatesubnetgrouprequest.h"
#include "updatesubnetgrouprequest_p.h"
#include "updatesubnetgroupresponse.h"
#include "daxrequest_p.h"

namespace AWS {
namespace DAX {

/**
 * @class  UpdateSubnetGroupRequest
 *
 * @brief  Implements DAX UpdateSubnetGroup requests.
 *
 * @see    DAXClient::updateSubnetGroup
 */

/**
 * @brief  Constructs a new UpdateSubnetGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateSubnetGroupRequest::UpdateSubnetGroupRequest(const UpdateSubnetGroupRequest &other)
    : DAXRequest(new UpdateSubnetGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateSubnetGroupRequest object.
 */
UpdateSubnetGroupRequest::UpdateSubnetGroupRequest()
    : DAXRequest(new UpdateSubnetGroupRequestPrivate(DAXRequest::UpdateSubnetGroupAction, this))
{

}

bool UpdateSubnetGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateSubnetGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateSubnetGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DAXClient::send
 */
AwsAbstractResponse * UpdateSubnetGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSubnetGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateSubnetGroupRequestPrivate
 *
 * @brief  Private implementation for UpdateSubnetGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSubnetGroupRequestPrivate object.
 *
 * @param  action  DAX action being performed.
 * @param  q       Pointer to this object's public UpdateSubnetGroupRequest instance.
 */
UpdateSubnetGroupRequestPrivate::UpdateSubnetGroupRequestPrivate(
    const DAXRequest::Action action, UpdateSubnetGroupRequest * const q)
    : UpdateSubnetGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSubnetGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateSubnetGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateSubnetGroupRequest instance.
 */
UpdateSubnetGroupRequestPrivate::UpdateSubnetGroupRequestPrivate(
    const UpdateSubnetGroupRequestPrivate &other, UpdateSubnetGroupRequest * const q)
    : UpdateSubnetGroupPrivate(other, q)
{

}

} // namespace DAX
} // namespace AWS
