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

#include "modifyclustersubnetgrouprequest.h"
#include "modifyclustersubnetgrouprequest_p.h"
#include "modifyclustersubnetgroupresponse.h"
#include "redshiftrequest_p.h"

namespace QtAws {
namespace Redshift {

/**
 * @class  ModifyClusterSubnetGroupRequest
 *
 * @brief  Implements Redshift ModifyClusterSubnetGroup requests.
 *
 * @see    RedshiftClient::modifyClusterSubnetGroup
 */

/**
 * @brief  Constructs a new ModifyClusterSubnetGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyClusterSubnetGroupRequest::ModifyClusterSubnetGroupRequest(const ModifyClusterSubnetGroupRequest &other)
    : RedshiftRequest(new ModifyClusterSubnetGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyClusterSubnetGroupRequest object.
 */
ModifyClusterSubnetGroupRequest::ModifyClusterSubnetGroupRequest()
    : RedshiftRequest(new ModifyClusterSubnetGroupRequestPrivate(RedshiftRequest::ModifyClusterSubnetGroupAction, this))
{

}

bool ModifyClusterSubnetGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyClusterSubnetGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyClusterSubnetGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyClusterSubnetGroupRequest::response(QNetworkReply * const reply) const
{
    return new ModifyClusterSubnetGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyClusterSubnetGroupRequestPrivate
 *
 * @brief  Private implementation for ModifyClusterSubnetGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyClusterSubnetGroupRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public ModifyClusterSubnetGroupRequest instance.
 */
ModifyClusterSubnetGroupRequestPrivate::ModifyClusterSubnetGroupRequestPrivate(
    const RedshiftRequest::Action action, ModifyClusterSubnetGroupRequest * const q)
    : ModifyClusterSubnetGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyClusterSubnetGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyClusterSubnetGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyClusterSubnetGroupRequest instance.
 */
ModifyClusterSubnetGroupRequestPrivate::ModifyClusterSubnetGroupRequestPrivate(
    const ModifyClusterSubnetGroupRequestPrivate &other, ModifyClusterSubnetGroupRequest * const q)
    : ModifyClusterSubnetGroupPrivate(other, q)
{

}

} // namespace Redshift
} // namespace QtAws
