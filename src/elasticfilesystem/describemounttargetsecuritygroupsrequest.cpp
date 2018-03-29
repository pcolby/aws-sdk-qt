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

#include "describemounttargetsecuritygroupsrequest.h"
#include "describemounttargetsecuritygroupsrequest_p.h"
#include "describemounttargetsecuritygroupsresponse.h"
#include "efsrequest_p.h"

namespace QtAws {
namespace EFS {

/**
 * @class  DescribeMountTargetSecurityGroupsRequest
 *
 * @brief  Implements EFS DescribeMountTargetSecurityGroups requests.
 *
 * @see    EFSClient::describeMountTargetSecurityGroups
 */

/**
 * @brief  Constructs a new DescribeMountTargetSecurityGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeMountTargetSecurityGroupsRequest::DescribeMountTargetSecurityGroupsRequest(const DescribeMountTargetSecurityGroupsRequest &other)
    : EFSRequest(new DescribeMountTargetSecurityGroupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeMountTargetSecurityGroupsRequest object.
 */
DescribeMountTargetSecurityGroupsRequest::DescribeMountTargetSecurityGroupsRequest()
    : EFSRequest(new DescribeMountTargetSecurityGroupsRequestPrivate(EFSRequest::DescribeMountTargetSecurityGroupsAction, this))
{

}

bool DescribeMountTargetSecurityGroupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeMountTargetSecurityGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeMountTargetSecurityGroupsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EFSClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeMountTargetSecurityGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeMountTargetSecurityGroupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeMountTargetSecurityGroupsRequestPrivate
 *
 * @brief  Private implementation for DescribeMountTargetSecurityGroupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMountTargetSecurityGroupsRequestPrivate object.
 *
 * @param  action  EFS action being performed.
 * @param  q       Pointer to this object's public DescribeMountTargetSecurityGroupsRequest instance.
 */
DescribeMountTargetSecurityGroupsRequestPrivate::DescribeMountTargetSecurityGroupsRequestPrivate(
    const EFSRequest::Action action, DescribeMountTargetSecurityGroupsRequest * const q)
    : DescribeMountTargetSecurityGroupsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMountTargetSecurityGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeMountTargetSecurityGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeMountTargetSecurityGroupsRequest instance.
 */
DescribeMountTargetSecurityGroupsRequestPrivate::DescribeMountTargetSecurityGroupsRequestPrivate(
    const DescribeMountTargetSecurityGroupsRequestPrivate &other, DescribeMountTargetSecurityGroupsRequest * const q)
    : DescribeMountTargetSecurityGroupsPrivate(other, q)
{

}

} // namespace EFS
} // namespace QtAws
