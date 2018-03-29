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

#include "describestalesecuritygroupsrequest.h"
#include "describestalesecuritygroupsrequest_p.h"
#include "describestalesecuritygroupsresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeStaleSecurityGroupsRequest
 *
 * @brief  Implements EC2 DescribeStaleSecurityGroups requests.
 *
 * @see    EC2Client::describeStaleSecurityGroups
 */

/**
 * @brief  Constructs a new DescribeStaleSecurityGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeStaleSecurityGroupsRequest::DescribeStaleSecurityGroupsRequest(const DescribeStaleSecurityGroupsRequest &other)
    : EC2Request(new DescribeStaleSecurityGroupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeStaleSecurityGroupsRequest object.
 */
DescribeStaleSecurityGroupsRequest::DescribeStaleSecurityGroupsRequest()
    : EC2Request(new DescribeStaleSecurityGroupsRequestPrivate(EC2Request::DescribeStaleSecurityGroupsAction, this))
{

}

bool DescribeStaleSecurityGroupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeStaleSecurityGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeStaleSecurityGroupsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * DescribeStaleSecurityGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeStaleSecurityGroupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeStaleSecurityGroupsRequestPrivate
 *
 * @brief  Private implementation for DescribeStaleSecurityGroupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStaleSecurityGroupsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeStaleSecurityGroupsRequest instance.
 */
DescribeStaleSecurityGroupsRequestPrivate::DescribeStaleSecurityGroupsRequestPrivate(
    const EC2Request::Action action, DescribeStaleSecurityGroupsRequest * const q)
    : DescribeStaleSecurityGroupsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStaleSecurityGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeStaleSecurityGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeStaleSecurityGroupsRequest instance.
 */
DescribeStaleSecurityGroupsRequestPrivate::DescribeStaleSecurityGroupsRequestPrivate(
    const DescribeStaleSecurityGroupsRequestPrivate &other, DescribeStaleSecurityGroupsRequest * const q)
    : DescribeStaleSecurityGroupsPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
