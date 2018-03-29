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

#include "describedbclustersrequest.h"
#include "describedbclustersrequest_p.h"
#include "describedbclustersresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  DescribeDBClustersRequest
 *
 * @brief  Implements RDS DescribeDBClusters requests.
 *
 * @see    RDSClient::describeDBClusters
 */

/**
 * @brief  Constructs a new DescribeDBClustersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeDBClustersRequest::DescribeDBClustersRequest(const DescribeDBClustersRequest &other)
    : RDSRequest(new DescribeDBClustersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeDBClustersRequest object.
 */
DescribeDBClustersRequest::DescribeDBClustersRequest()
    : RDSRequest(new DescribeDBClustersRequestPrivate(RDSRequest::DescribeDBClustersAction, this))
{

}

bool DescribeDBClustersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeDBClustersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeDBClustersResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RDSClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDBClustersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDBClustersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeDBClustersRequestPrivate
 *
 * @brief  Private implementation for DescribeDBClustersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBClustersRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public DescribeDBClustersRequest instance.
 */
DescribeDBClustersRequestPrivate::DescribeDBClustersRequestPrivate(
    const RDSRequest::Action action, DescribeDBClustersRequest * const q)
    : RDSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBClustersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeDBClustersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeDBClustersRequest instance.
 */
DescribeDBClustersRequestPrivate::DescribeDBClustersRequestPrivate(
    const DescribeDBClustersRequestPrivate &other, DescribeDBClustersRequest * const q)
    : RDSRequestPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
