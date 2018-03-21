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

#include "modifymounttargetsecuritygroupsrequest.h"
#include "modifymounttargetsecuritygroupsrequest_p.h"
#include "modifymounttargetsecuritygroupsresponse.h"
#include "efsrequest_p.h"

namespace AWS {
namespace EFS {

/**
 * @class  ModifyMountTargetSecurityGroupsRequest
 *
 * @brief  Implements EFS ModifyMountTargetSecurityGroups requests.
 *
 * @see    EFSClient::modifyMountTargetSecurityGroups
 */

/**
 * @brief  Constructs a new ModifyMountTargetSecurityGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyMountTargetSecurityGroupsResponse::ModifyMountTargetSecurityGroupsResponse(

/**
 * @brief  Constructs a new ModifyMountTargetSecurityGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyMountTargetSecurityGroupsRequest::ModifyMountTargetSecurityGroupsRequest(const ModifyMountTargetSecurityGroupsRequest &other)
    : EFSRequest(new ModifyMountTargetSecurityGroupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyMountTargetSecurityGroupsRequest object.
 */
ModifyMountTargetSecurityGroupsRequest::ModifyMountTargetSecurityGroupsRequest()
    : EFSRequest(new ModifyMountTargetSecurityGroupsRequestPrivate(EFSRequest::ModifyMountTargetSecurityGroupsAction, this))
{

}

bool ModifyMountTargetSecurityGroupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyMountTargetSecurityGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyMountTargetSecurityGroupsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EFSClient::send
 */
AwsAbstractResponse * ModifyMountTargetSecurityGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ModifyMountTargetSecurityGroupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyMountTargetSecurityGroupsRequestPrivate
 *
 * @brief  Private implementation for ModifyMountTargetSecurityGroupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyMountTargetSecurityGroupsRequestPrivate object.
 *
 * @param  action  EFS action being performed.
 * @param  q       Pointer to this object's public ModifyMountTargetSecurityGroupsRequest instance.
 */
ModifyMountTargetSecurityGroupsRequestPrivate::ModifyMountTargetSecurityGroupsRequestPrivate(
    const EFSRequest::Action action, ModifyMountTargetSecurityGroupsRequest * const q)
    : ModifyMountTargetSecurityGroupsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyMountTargetSecurityGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyMountTargetSecurityGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyMountTargetSecurityGroupsRequest instance.
 */
ModifyMountTargetSecurityGroupsRequestPrivate::ModifyMountTargetSecurityGroupsRequestPrivate(
    const ModifyMountTargetSecurityGroupsRequestPrivate &other, ModifyMountTargetSecurityGroupsRequest * const q)
    : ModifyMountTargetSecurityGroupsPrivate(other, q)
{

}

} // namespace EFS
} // namespace AWS
