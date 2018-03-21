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

#include "describeclusterparametergroupsrequest.h"
#include "describeclusterparametergroupsrequest_p.h"
#include "describeclusterparametergroupsresponse.h"
#include "redshiftrequest_p.h"

namespace AWS {
namespace Redshift {

/**
 * @class  DescribeClusterParameterGroupsRequest
 *
 * @brief  Implements Redshift DescribeClusterParameterGroups requests.
 *
 * @see    RedshiftClient::describeClusterParameterGroups
 */

/**
 * @brief  Constructs a new DescribeClusterParameterGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeClusterParameterGroupsRequest::DescribeClusterParameterGroupsRequest(const DescribeClusterParameterGroupsRequest &other)
    : RedshiftRequest(new DescribeClusterParameterGroupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeClusterParameterGroupsRequest object.
 */
DescribeClusterParameterGroupsRequest::DescribeClusterParameterGroupsRequest()
    : RedshiftRequest(new DescribeClusterParameterGroupsRequestPrivate(RedshiftRequest::DescribeClusterParameterGroupsAction, this))
{

}

bool DescribeClusterParameterGroupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeClusterParameterGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeClusterParameterGroupsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * DescribeClusterParameterGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeClusterParameterGroupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeClusterParameterGroupsRequestPrivate
 *
 * @brief  Private implementation for DescribeClusterParameterGroupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeClusterParameterGroupsRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public DescribeClusterParameterGroupsRequest instance.
 */
DescribeClusterParameterGroupsRequestPrivate::DescribeClusterParameterGroupsRequestPrivate(
    const RedshiftRequest::Action action, DescribeClusterParameterGroupsRequest * const q)
    : DescribeClusterParameterGroupsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeClusterParameterGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeClusterParameterGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeClusterParameterGroupsRequest instance.
 */
DescribeClusterParameterGroupsRequestPrivate::DescribeClusterParameterGroupsRequestPrivate(
    const DescribeClusterParameterGroupsRequestPrivate &other, DescribeClusterParameterGroupsRequest * const q)
    : DescribeClusterParameterGroupsPrivate(other, q)
{

}

} // namespace Redshift
} // namespace AWS
