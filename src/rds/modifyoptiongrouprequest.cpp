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

#include "modifyoptiongrouprequest.h"
#include "modifyoptiongrouprequest_p.h"
#include "modifyoptiongroupresponse.h"
#include "rdsrequest_p.h"

namespace AWS {
namespace RDS {

/**
 * @class  ModifyOptionGroupRequest
 *
 * @brief  Implements RDS ModifyOptionGroup requests.
 *
 * @see    RDSClient::modifyOptionGroup
 */

/**
 * @brief  Constructs a new ModifyOptionGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyOptionGroupResponse::ModifyOptionGroupResponse(

/**
 * @brief  Constructs a new ModifyOptionGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyOptionGroupRequest::ModifyOptionGroupRequest(const ModifyOptionGroupRequest &other)
    : RDSRequest(new ModifyOptionGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyOptionGroupRequest object.
 */
ModifyOptionGroupRequest::ModifyOptionGroupRequest()
    : RDSRequest(new ModifyOptionGroupRequestPrivate(RDSRequest::ModifyOptionGroupAction, this))
{

}

bool ModifyOptionGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyOptionGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyOptionGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * ModifyOptionGroupRequest::response(QNetworkReply * const reply) const
{
    return new ModifyOptionGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyOptionGroupRequestPrivate
 *
 * @brief  Private implementation for ModifyOptionGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyOptionGroupRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public ModifyOptionGroupRequest instance.
 */
ModifyOptionGroupRequestPrivate::ModifyOptionGroupRequestPrivate(
    const RDSRequest::Action action, ModifyOptionGroupRequest * const q)
    : ModifyOptionGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyOptionGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyOptionGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyOptionGroupRequest instance.
 */
ModifyOptionGroupRequestPrivate::ModifyOptionGroupRequestPrivate(
    const ModifyOptionGroupRequestPrivate &other, ModifyOptionGroupRequest * const q)
    : ModifyOptionGroupPrivate(other, q)
{

}
