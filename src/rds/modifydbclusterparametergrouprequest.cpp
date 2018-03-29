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

#include "modifydbclusterparametergrouprequest.h"
#include "modifydbclusterparametergrouprequest_p.h"
#include "modifydbclusterparametergroupresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  ModifyDBClusterParameterGroupRequest
 *
 * @brief  Implements RDS ModifyDBClusterParameterGroup requests.
 *
 * @see    RDSClient::modifyDBClusterParameterGroup
 */

/**
 * @brief  Constructs a new ModifyDBClusterParameterGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyDBClusterParameterGroupRequest::ModifyDBClusterParameterGroupRequest(const ModifyDBClusterParameterGroupRequest &other)
    : RDSRequest(new ModifyDBClusterParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyDBClusterParameterGroupRequest object.
 */
ModifyDBClusterParameterGroupRequest::ModifyDBClusterParameterGroupRequest()
    : RDSRequest(new ModifyDBClusterParameterGroupRequestPrivate(RDSRequest::ModifyDBClusterParameterGroupAction, this))
{

}

bool ModifyDBClusterParameterGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyDBClusterParameterGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyDBClusterParameterGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RDSClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyDBClusterParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new ModifyDBClusterParameterGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyDBClusterParameterGroupRequestPrivate
 *
 * @brief  Private implementation for ModifyDBClusterParameterGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyDBClusterParameterGroupRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public ModifyDBClusterParameterGroupRequest instance.
 */
ModifyDBClusterParameterGroupRequestPrivate::ModifyDBClusterParameterGroupRequestPrivate(
    const RDSRequest::Action action, ModifyDBClusterParameterGroupRequest * const q)
    : ModifyDBClusterParameterGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyDBClusterParameterGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyDBClusterParameterGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyDBClusterParameterGroupRequest instance.
 */
ModifyDBClusterParameterGroupRequestPrivate::ModifyDBClusterParameterGroupRequestPrivate(
    const ModifyDBClusterParameterGroupRequestPrivate &other, ModifyDBClusterParameterGroupRequest * const q)
    : ModifyDBClusterParameterGroupPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
