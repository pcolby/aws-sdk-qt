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

#include "describedbsubnetgroupsrequest.h"
#include "describedbsubnetgroupsrequest_p.h"
#include "describedbsubnetgroupsresponse.h"
#include "rdsrequest_p.h"

namespace AWS {
namespace RDS {

/**
 * @class  DescribeDBSubnetGroupsRequest
 *
 * @brief  Implements RDS DescribeDBSubnetGroups requests.
 *
 * @see    RDSClient::describeDBSubnetGroups
 */

/**
 * @brief  Constructs a new DescribeDBSubnetGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeDBSubnetGroupsRequest::DescribeDBSubnetGroupsRequest(const DescribeDBSubnetGroupsRequest &other)
    : RDSRequest(new DescribeDBSubnetGroupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeDBSubnetGroupsRequest object.
 */
DescribeDBSubnetGroupsRequest::DescribeDBSubnetGroupsRequest()
    : RDSRequest(new DescribeDBSubnetGroupsRequestPrivate(RDSRequest::DescribeDBSubnetGroupsAction, this))
{

}

bool DescribeDBSubnetGroupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeDBSubnetGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeDBSubnetGroupsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * DescribeDBSubnetGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDBSubnetGroupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeDBSubnetGroupsRequestPrivate
 *
 * @brief  Private implementation for DescribeDBSubnetGroupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBSubnetGroupsRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public DescribeDBSubnetGroupsRequest instance.
 */
DescribeDBSubnetGroupsRequestPrivate::DescribeDBSubnetGroupsRequestPrivate(
    const RDSRequest::Action action, DescribeDBSubnetGroupsRequest * const q)
    : DescribeDBSubnetGroupsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBSubnetGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeDBSubnetGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeDBSubnetGroupsRequest instance.
 */
DescribeDBSubnetGroupsRequestPrivate::DescribeDBSubnetGroupsRequestPrivate(
    const DescribeDBSubnetGroupsRequestPrivate &other, DescribeDBSubnetGroupsRequest * const q)
    : DescribeDBSubnetGroupsPrivate(other, q)
{

}

} // namespace RDS
} // namespace AWS
