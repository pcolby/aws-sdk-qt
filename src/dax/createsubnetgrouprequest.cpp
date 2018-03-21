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

#include "createsubnetgrouprequest.h"
#include "createsubnetgrouprequest_p.h"
#include "createsubnetgroupresponse.h"
#include "daxrequest_p.h"

namespace AWS {
namespace DAX {

/**
 * @class  CreateSubnetGroupRequest
 *
 * @brief  Implements DAX CreateSubnetGroup requests.
 *
 * @see    DAXClient::createSubnetGroup
 */

/**
 * @brief  Constructs a new CreateSubnetGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateSubnetGroupResponse::CreateSubnetGroupResponse(

/**
 * @brief  Constructs a new CreateSubnetGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateSubnetGroupRequest::CreateSubnetGroupRequest(const CreateSubnetGroupRequest &other)
    : DAXRequest(new CreateSubnetGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateSubnetGroupRequest object.
 */
CreateSubnetGroupRequest::CreateSubnetGroupRequest()
    : DAXRequest(new CreateSubnetGroupRequestPrivate(DAXRequest::CreateSubnetGroupAction, this))
{

}

bool CreateSubnetGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateSubnetGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateSubnetGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DAXClient::send
 */
AwsAbstractResponse * CreateSubnetGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateSubnetGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateSubnetGroupRequestPrivate
 *
 * @brief  Private implementation for CreateSubnetGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSubnetGroupRequestPrivate object.
 *
 * @param  action  DAX action being performed.
 * @param  q       Pointer to this object's public CreateSubnetGroupRequest instance.
 */
CreateSubnetGroupRequestPrivate::CreateSubnetGroupRequestPrivate(
    const DAXRequest::Action action, CreateSubnetGroupRequest * const q)
    : CreateSubnetGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateSubnetGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateSubnetGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateSubnetGroupRequest instance.
 */
CreateSubnetGroupRequestPrivate::CreateSubnetGroupRequestPrivate(
    const CreateSubnetGroupRequestPrivate &other, CreateSubnetGroupRequest * const q)
    : CreateSubnetGroupPrivate(other, q)
{

}
