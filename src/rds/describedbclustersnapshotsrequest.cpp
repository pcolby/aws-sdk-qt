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

#include "describedbclustersnapshotsrequest.h"
#include "describedbclustersnapshotsrequest_p.h"
#include "describedbclustersnapshotsresponse.h"
#include "rdsrequest_p.h"

namespace AWS {
namespace RDS {

/**
 * @class  DescribeDBClusterSnapshotsRequest
 *
 * @brief  Implements RDS DescribeDBClusterSnapshots requests.
 *
 * @see    RDSClient::describeDBClusterSnapshots
 */

/**
 * @brief  Constructs a new DescribeDBClusterSnapshotsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeDBClusterSnapshotsRequest::DescribeDBClusterSnapshotsRequest(const DescribeDBClusterSnapshotsRequest &other)
    : RDSRequest(new DescribeDBClusterSnapshotsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeDBClusterSnapshotsRequest object.
 */
DescribeDBClusterSnapshotsRequest::DescribeDBClusterSnapshotsRequest()
    : RDSRequest(new DescribeDBClusterSnapshotsRequestPrivate(RDSRequest::DescribeDBClusterSnapshotsAction, this))
{

}

bool DescribeDBClusterSnapshotsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeDBClusterSnapshotsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeDBClusterSnapshotsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * DescribeDBClusterSnapshotsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDBClusterSnapshotsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeDBClusterSnapshotsRequestPrivate
 *
 * @brief  Private implementation for DescribeDBClusterSnapshotsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBClusterSnapshotsRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public DescribeDBClusterSnapshotsRequest instance.
 */
DescribeDBClusterSnapshotsRequestPrivate::DescribeDBClusterSnapshotsRequestPrivate(
    const RDSRequest::Action action, DescribeDBClusterSnapshotsRequest * const q)
    : DescribeDBClusterSnapshotsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBClusterSnapshotsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeDBClusterSnapshotsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeDBClusterSnapshotsRequest instance.
 */
DescribeDBClusterSnapshotsRequestPrivate::DescribeDBClusterSnapshotsRequestPrivate(
    const DescribeDBClusterSnapshotsRequestPrivate &other, DescribeDBClusterSnapshotsRequest * const q)
    : DescribeDBClusterSnapshotsPrivate(other, q)
{

}

} // namespace RDS
} // namespace AWS
