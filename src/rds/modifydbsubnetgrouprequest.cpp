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

#include "modifydbsubnetgrouprequest.h"
#include "modifydbsubnetgrouprequest_p.h"
#include "modifydbsubnetgroupresponse.h"
#include "rdsrequest_p.h"

namespace AWS {
namespace RDS {

/**
 * @class  ModifyDBSubnetGroupRequest
 *
 * @brief  Implements RDS ModifyDBSubnetGroup requests.
 *
 * @see    RDSClient::modifyDBSubnetGroup
 */

/**
 * @brief  Constructs a new ModifyDBSubnetGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyDBSubnetGroupRequest::ModifyDBSubnetGroupRequest(const ModifyDBSubnetGroupRequest &other)
    : RDSRequest(new ModifyDBSubnetGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyDBSubnetGroupRequest object.
 */
ModifyDBSubnetGroupRequest::ModifyDBSubnetGroupRequest()
    : RDSRequest(new ModifyDBSubnetGroupRequestPrivate(RDSRequest::ModifyDBSubnetGroupAction, this))
{

}

bool ModifyDBSubnetGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyDBSubnetGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyDBSubnetGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * ModifyDBSubnetGroupRequest::response(QNetworkReply * const reply) const
{
    return new ModifyDBSubnetGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyDBSubnetGroupRequestPrivate
 *
 * @brief  Private implementation for ModifyDBSubnetGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyDBSubnetGroupRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public ModifyDBSubnetGroupRequest instance.
 */
ModifyDBSubnetGroupRequestPrivate::ModifyDBSubnetGroupRequestPrivate(
    const RDSRequest::Action action, ModifyDBSubnetGroupRequest * const q)
    : ModifyDBSubnetGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyDBSubnetGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyDBSubnetGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyDBSubnetGroupRequest instance.
 */
ModifyDBSubnetGroupRequestPrivate::ModifyDBSubnetGroupRequestPrivate(
    const ModifyDBSubnetGroupRequestPrivate &other, ModifyDBSubnetGroupRequest * const q)
    : ModifyDBSubnetGroupPrivate(other, q)
{

}

} // namespace RDS
} // namespace AWS
