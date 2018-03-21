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

#include "deletesecuritygrouprequest.h"
#include "deletesecuritygrouprequest_p.h"
#include "deletesecuritygroupresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DeleteSecurityGroupRequest
 *
 * @brief  Implements EC2 DeleteSecurityGroup requests.
 *
 * @see    EC2Client::deleteSecurityGroup
 */

/**
 * @brief  Constructs a new DeleteSecurityGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSecurityGroupResponse::DeleteSecurityGroupResponse(

/**
 * @brief  Constructs a new DeleteSecurityGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteSecurityGroupRequest::DeleteSecurityGroupRequest(const DeleteSecurityGroupRequest &other)
    : EC2Request(new DeleteSecurityGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteSecurityGroupRequest object.
 */
DeleteSecurityGroupRequest::DeleteSecurityGroupRequest()
    : EC2Request(new DeleteSecurityGroupRequestPrivate(EC2Request::DeleteSecurityGroupAction, this))
{

}

bool DeleteSecurityGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteSecurityGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteSecurityGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DeleteSecurityGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSecurityGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteSecurityGroupRequestPrivate
 *
 * @brief  Private implementation for DeleteSecurityGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSecurityGroupRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DeleteSecurityGroupRequest instance.
 */
DeleteSecurityGroupRequestPrivate::DeleteSecurityGroupRequestPrivate(
    const EC2Request::Action action, DeleteSecurityGroupRequest * const q)
    : DeleteSecurityGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSecurityGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteSecurityGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteSecurityGroupRequest instance.
 */
DeleteSecurityGroupRequestPrivate::DeleteSecurityGroupRequestPrivate(
    const DeleteSecurityGroupRequestPrivate &other, DeleteSecurityGroupRequest * const q)
    : DeleteSecurityGroupPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
