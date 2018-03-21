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

#include "createoptiongrouprequest.h"
#include "createoptiongrouprequest_p.h"
#include "createoptiongroupresponse.h"
#include "rdsrequest_p.h"

namespace AWS {
namespace RDS {

/**
 * @class  CreateOptionGroupRequest
 *
 * @brief  Implements RDS CreateOptionGroup requests.
 *
 * @see    RDSClient::createOptionGroup
 */

/**
 * @brief  Constructs a new CreateOptionGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateOptionGroupResponse::CreateOptionGroupResponse(

/**
 * @brief  Constructs a new CreateOptionGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateOptionGroupRequest::CreateOptionGroupRequest(const CreateOptionGroupRequest &other)
    : RDSRequest(new CreateOptionGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateOptionGroupRequest object.
 */
CreateOptionGroupRequest::CreateOptionGroupRequest()
    : RDSRequest(new CreateOptionGroupRequestPrivate(RDSRequest::CreateOptionGroupAction, this))
{

}

bool CreateOptionGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateOptionGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateOptionGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * CreateOptionGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateOptionGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateOptionGroupRequestPrivate
 *
 * @brief  Private implementation for CreateOptionGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateOptionGroupRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public CreateOptionGroupRequest instance.
 */
CreateOptionGroupRequestPrivate::CreateOptionGroupRequestPrivate(
    const RDSRequest::Action action, CreateOptionGroupRequest * const q)
    : CreateOptionGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateOptionGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateOptionGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateOptionGroupRequest instance.
 */
CreateOptionGroupRequestPrivate::CreateOptionGroupRequestPrivate(
    const CreateOptionGroupRequestPrivate &other, CreateOptionGroupRequest * const q)
    : CreateOptionGroupPrivate(other, q)
{

}
