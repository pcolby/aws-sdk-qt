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

#include "describeclustersubnetgroupsrequest.h"
#include "describeclustersubnetgroupsrequest_p.h"
#include "describeclustersubnetgroupsresponse.h"
#include "redshiftrequest_p.h"

namespace QtAws {
namespace Redshift {

/**
 * @class  DescribeClusterSubnetGroupsRequest
 *
 * @brief  Implements Redshift DescribeClusterSubnetGroups requests.
 *
 * @see    RedshiftClient::describeClusterSubnetGroups
 */

/**
 * @brief  Constructs a new DescribeClusterSubnetGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeClusterSubnetGroupsRequest::DescribeClusterSubnetGroupsRequest(const DescribeClusterSubnetGroupsRequest &other)
    : RedshiftRequest(new DescribeClusterSubnetGroupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeClusterSubnetGroupsRequest object.
 */
DescribeClusterSubnetGroupsRequest::DescribeClusterSubnetGroupsRequest()
    : RedshiftRequest(new DescribeClusterSubnetGroupsRequestPrivate(RedshiftRequest::DescribeClusterSubnetGroupsAction, this))
{

}

bool DescribeClusterSubnetGroupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeClusterSubnetGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeClusterSubnetGroupsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * DescribeClusterSubnetGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeClusterSubnetGroupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeClusterSubnetGroupsRequestPrivate
 *
 * @brief  Private implementation for DescribeClusterSubnetGroupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeClusterSubnetGroupsRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public DescribeClusterSubnetGroupsRequest instance.
 */
DescribeClusterSubnetGroupsRequestPrivate::DescribeClusterSubnetGroupsRequestPrivate(
    const RedshiftRequest::Action action, DescribeClusterSubnetGroupsRequest * const q)
    : DescribeClusterSubnetGroupsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeClusterSubnetGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeClusterSubnetGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeClusterSubnetGroupsRequest instance.
 */
DescribeClusterSubnetGroupsRequestPrivate::DescribeClusterSubnetGroupsRequestPrivate(
    const DescribeClusterSubnetGroupsRequestPrivate &other, DescribeClusterSubnetGroupsRequest * const q)
    : DescribeClusterSubnetGroupsPrivate(other, q)
{

}

} // namespace Redshift
} // namespace QtAws
