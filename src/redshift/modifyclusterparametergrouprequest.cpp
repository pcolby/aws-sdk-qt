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

#include "modifyclusterparametergrouprequest.h"
#include "modifyclusterparametergrouprequest_p.h"
#include "modifyclusterparametergroupresponse.h"
#include "redshiftrequest_p.h"

namespace AWS {
namespace Redshift {

/**
 * @class  ModifyClusterParameterGroupRequest
 *
 * @brief  Implements Redshift ModifyClusterParameterGroup requests.
 *
 * @see    RedshiftClient::modifyClusterParameterGroup
 */

/**
 * @brief  Constructs a new ModifyClusterParameterGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyClusterParameterGroupResponse::ModifyClusterParameterGroupResponse(

/**
 * @brief  Constructs a new ModifyClusterParameterGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyClusterParameterGroupRequest::ModifyClusterParameterGroupRequest(const ModifyClusterParameterGroupRequest &other)
    : RedshiftRequest(new ModifyClusterParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyClusterParameterGroupRequest object.
 */
ModifyClusterParameterGroupRequest::ModifyClusterParameterGroupRequest()
    : RedshiftRequest(new ModifyClusterParameterGroupRequestPrivate(RedshiftRequest::ModifyClusterParameterGroupAction, this))
{

}

bool ModifyClusterParameterGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyClusterParameterGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyClusterParameterGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * ModifyClusterParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new ModifyClusterParameterGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyClusterParameterGroupRequestPrivate
 *
 * @brief  Private implementation for ModifyClusterParameterGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyClusterParameterGroupRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public ModifyClusterParameterGroupRequest instance.
 */
ModifyClusterParameterGroupRequestPrivate::ModifyClusterParameterGroupRequestPrivate(
    const RedshiftRequest::Action action, ModifyClusterParameterGroupRequest * const q)
    : ModifyClusterParameterGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyClusterParameterGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyClusterParameterGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyClusterParameterGroupRequest instance.
 */
ModifyClusterParameterGroupRequestPrivate::ModifyClusterParameterGroupRequestPrivate(
    const ModifyClusterParameterGroupRequestPrivate &other, ModifyClusterParameterGroupRequest * const q)
    : ModifyClusterParameterGroupPrivate(other, q)
{

}

} // namespace Redshift
} // namespace AWS
