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

#include "describedbclusterparametergroupsrequest.h"
#include "describedbclusterparametergroupsrequest_p.h"
#include "describedbclusterparametergroupsresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  DescribeDBClusterParameterGroupsRequest
 *
 * @brief  Implements RDS DescribeDBClusterParameterGroups requests.
 *
 * @see    RDSClient::describeDBClusterParameterGroups
 */

/**
 * @brief  Constructs a new DescribeDBClusterParameterGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeDBClusterParameterGroupsRequest::DescribeDBClusterParameterGroupsRequest(const DescribeDBClusterParameterGroupsRequest &other)
    : RDSRequest(new DescribeDBClusterParameterGroupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeDBClusterParameterGroupsRequest object.
 */
DescribeDBClusterParameterGroupsRequest::DescribeDBClusterParameterGroupsRequest()
    : RDSRequest(new DescribeDBClusterParameterGroupsRequestPrivate(RDSRequest::DescribeDBClusterParameterGroupsAction, this))
{

}

bool DescribeDBClusterParameterGroupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeDBClusterParameterGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeDBClusterParameterGroupsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RDSClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDBClusterParameterGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDBClusterParameterGroupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeDBClusterParameterGroupsRequestPrivate
 *
 * @brief  Private implementation for DescribeDBClusterParameterGroupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBClusterParameterGroupsRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public DescribeDBClusterParameterGroupsRequest instance.
 */
DescribeDBClusterParameterGroupsRequestPrivate::DescribeDBClusterParameterGroupsRequestPrivate(
    const RDSRequest::Action action, DescribeDBClusterParameterGroupsRequest * const q)
    : RDSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBClusterParameterGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeDBClusterParameterGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeDBClusterParameterGroupsRequest instance.
 */
DescribeDBClusterParameterGroupsRequestPrivate::DescribeDBClusterParameterGroupsRequestPrivate(
    const DescribeDBClusterParameterGroupsRequestPrivate &other, DescribeDBClusterParameterGroupsRequest * const q)
    : RDSRequestPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
