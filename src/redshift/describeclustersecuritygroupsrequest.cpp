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

#include "describeclustersecuritygroupsrequest.h"
#include "describeclustersecuritygroupsrequest_p.h"
#include "describeclustersecuritygroupsresponse.h"
#include "redshiftrequest_p.h"

namespace AWS {
namespace Redshift {

/**
 * @class  DescribeClusterSecurityGroupsRequest
 *
 * @brief  Implements Redshift DescribeClusterSecurityGroups requests.
 *
 * @see    RedshiftClient::describeClusterSecurityGroups
 */

/**
 * @brief  Constructs a new DescribeClusterSecurityGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeClusterSecurityGroupsRequest::DescribeClusterSecurityGroupsRequest(const DescribeClusterSecurityGroupsRequest &other)
    : RedshiftRequest(new DescribeClusterSecurityGroupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeClusterSecurityGroupsRequest object.
 */
DescribeClusterSecurityGroupsRequest::DescribeClusterSecurityGroupsRequest()
    : RedshiftRequest(new DescribeClusterSecurityGroupsRequestPrivate(RedshiftRequest::DescribeClusterSecurityGroupsAction, this))
{

}

bool DescribeClusterSecurityGroupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeClusterSecurityGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeClusterSecurityGroupsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * DescribeClusterSecurityGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeClusterSecurityGroupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeClusterSecurityGroupsRequestPrivate
 *
 * @brief  Private implementation for DescribeClusterSecurityGroupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeClusterSecurityGroupsRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public DescribeClusterSecurityGroupsRequest instance.
 */
DescribeClusterSecurityGroupsRequestPrivate::DescribeClusterSecurityGroupsRequestPrivate(
    const RedshiftRequest::Action action, DescribeClusterSecurityGroupsRequest * const q)
    : DescribeClusterSecurityGroupsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeClusterSecurityGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeClusterSecurityGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeClusterSecurityGroupsRequest instance.
 */
DescribeClusterSecurityGroupsRequestPrivate::DescribeClusterSecurityGroupsRequestPrivate(
    const DescribeClusterSecurityGroupsRequestPrivate &other, DescribeClusterSecurityGroupsRequest * const q)
    : DescribeClusterSecurityGroupsPrivate(other, q)
{

}

} // namespace Redshift
} // namespace AWS
