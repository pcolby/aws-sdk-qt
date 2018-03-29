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

#include "associateroletogrouprequest.h"
#include "associateroletogrouprequest_p.h"
#include "associateroletogroupresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/**
 * @class  AssociateRoleToGroupRequest
 *
 * @brief  Implements Greengrass AssociateRoleToGroup requests.
 *
 * @see    GreengrassClient::associateRoleToGroup
 */

/**
 * @brief  Constructs a new AssociateRoleToGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssociateRoleToGroupRequest::AssociateRoleToGroupRequest(const AssociateRoleToGroupRequest &other)
    : GreengrassRequest(new AssociateRoleToGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AssociateRoleToGroupRequest object.
 */
AssociateRoleToGroupRequest::AssociateRoleToGroupRequest()
    : GreengrassRequest(new AssociateRoleToGroupRequestPrivate(GreengrassRequest::AssociateRoleToGroupAction, this))
{

}

bool AssociateRoleToGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AssociateRoleToGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssociateRoleToGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateRoleToGroupRequest::response(QNetworkReply * const reply) const
{
    return new AssociateRoleToGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AssociateRoleToGroupRequestPrivate
 *
 * @brief  Private implementation for AssociateRoleToGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateRoleToGroupRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public AssociateRoleToGroupRequest instance.
 */
AssociateRoleToGroupRequestPrivate::AssociateRoleToGroupRequestPrivate(
    const GreengrassRequest::Action action, AssociateRoleToGroupRequest * const q)
    : AssociateRoleToGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AssociateRoleToGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssociateRoleToGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssociateRoleToGroupRequest instance.
 */
AssociateRoleToGroupRequestPrivate::AssociateRoleToGroupRequestPrivate(
    const AssociateRoleToGroupRequestPrivate &other, AssociateRoleToGroupRequest * const q)
    : AssociateRoleToGroupPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
