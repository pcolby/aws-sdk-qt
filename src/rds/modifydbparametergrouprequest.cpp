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

#include "modifydbparametergrouprequest.h"
#include "modifydbparametergrouprequest_p.h"
#include "modifydbparametergroupresponse.h"
#include "rdsrequest_p.h"

namespace AWS {
namespace RDS {

/**
 * @class  ModifyDBParameterGroupRequest
 *
 * @brief  Implements RDS ModifyDBParameterGroup requests.
 *
 * @see    RDSClient::modifyDBParameterGroup
 */

/**
 * @brief  Constructs a new ModifyDBParameterGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyDBParameterGroupResponse::ModifyDBParameterGroupResponse(

/**
 * @brief  Constructs a new ModifyDBParameterGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyDBParameterGroupRequest::ModifyDBParameterGroupRequest(const ModifyDBParameterGroupRequest &other)
    : RDSRequest(new ModifyDBParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyDBParameterGroupRequest object.
 */
ModifyDBParameterGroupRequest::ModifyDBParameterGroupRequest()
    : RDSRequest(new ModifyDBParameterGroupRequestPrivate(RDSRequest::ModifyDBParameterGroupAction, this))
{

}

bool ModifyDBParameterGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyDBParameterGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyDBParameterGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * ModifyDBParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new ModifyDBParameterGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyDBParameterGroupRequestPrivate
 *
 * @brief  Private implementation for ModifyDBParameterGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyDBParameterGroupRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public ModifyDBParameterGroupRequest instance.
 */
ModifyDBParameterGroupRequestPrivate::ModifyDBParameterGroupRequestPrivate(
    const RDSRequest::Action action, ModifyDBParameterGroupRequest * const q)
    : ModifyDBParameterGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyDBParameterGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyDBParameterGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyDBParameterGroupRequest instance.
 */
ModifyDBParameterGroupRequestPrivate::ModifyDBParameterGroupRequestPrivate(
    const ModifyDBParameterGroupRequestPrivate &other, ModifyDBParameterGroupRequest * const q)
    : ModifyDBParameterGroupPrivate(other, q)
{

}
