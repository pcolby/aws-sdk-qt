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

#include "createsecuritygrouprequest.h"
#include "createsecuritygrouprequest_p.h"
#include "createsecuritygroupresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  CreateSecurityGroupRequest
 *
 * @brief  Implements EC2 CreateSecurityGroup requests.
 *
 * @see    EC2Client::createSecurityGroup
 */

/**
 * @brief  Constructs a new CreateSecurityGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateSecurityGroupResponse::CreateSecurityGroupResponse(

/**
 * @brief  Constructs a new CreateSecurityGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateSecurityGroupRequest::CreateSecurityGroupRequest(const CreateSecurityGroupRequest &other)
    : EC2Request(new CreateSecurityGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateSecurityGroupRequest object.
 */
CreateSecurityGroupRequest::CreateSecurityGroupRequest()
    : EC2Request(new CreateSecurityGroupRequestPrivate(EC2Request::CreateSecurityGroupAction, this))
{

}

bool CreateSecurityGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateSecurityGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateSecurityGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * CreateSecurityGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateSecurityGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateSecurityGroupRequestPrivate
 *
 * @brief  Private implementation for CreateSecurityGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSecurityGroupRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public CreateSecurityGroupRequest instance.
 */
CreateSecurityGroupRequestPrivate::CreateSecurityGroupRequestPrivate(
    const EC2Request::Action action, CreateSecurityGroupRequest * const q)
    : CreateSecurityGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateSecurityGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateSecurityGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateSecurityGroupRequest instance.
 */
CreateSecurityGroupRequestPrivate::CreateSecurityGroupRequestPrivate(
    const CreateSecurityGroupRequestPrivate &other, CreateSecurityGroupRequest * const q)
    : CreateSecurityGroupPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
