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

#include "createdbsubnetgrouprequest.h"
#include "createdbsubnetgrouprequest_p.h"
#include "createdbsubnetgroupresponse.h"
#include "rdsrequest_p.h"

namespace AWS {
namespace RDS {

/**
 * @class  CreateDBSubnetGroupRequest
 *
 * @brief  Implements RDS CreateDBSubnetGroup requests.
 *
 * @see    RDSClient::createDBSubnetGroup
 */

/**
 * @brief  Constructs a new CreateDBSubnetGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDBSubnetGroupRequest::CreateDBSubnetGroupRequest(const CreateDBSubnetGroupRequest &other)
    : RDSRequest(new CreateDBSubnetGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateDBSubnetGroupRequest object.
 */
CreateDBSubnetGroupRequest::CreateDBSubnetGroupRequest()
    : RDSRequest(new CreateDBSubnetGroupRequestPrivate(RDSRequest::CreateDBSubnetGroupAction, this))
{

}

bool CreateDBSubnetGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateDBSubnetGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDBSubnetGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * CreateDBSubnetGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateDBSubnetGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateDBSubnetGroupRequestPrivate
 *
 * @brief  Private implementation for CreateDBSubnetGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDBSubnetGroupRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public CreateDBSubnetGroupRequest instance.
 */
CreateDBSubnetGroupRequestPrivate::CreateDBSubnetGroupRequestPrivate(
    const RDSRequest::Action action, CreateDBSubnetGroupRequest * const q)
    : CreateDBSubnetGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateDBSubnetGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDBSubnetGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDBSubnetGroupRequest instance.
 */
CreateDBSubnetGroupRequestPrivate::CreateDBSubnetGroupRequestPrivate(
    const CreateDBSubnetGroupRequestPrivate &other, CreateDBSubnetGroupRequest * const q)
    : CreateDBSubnetGroupPrivate(other, q)
{

}

} // namespace RDS
} // namespace AWS
