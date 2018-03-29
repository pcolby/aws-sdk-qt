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

#include "describeclustersnapshotsrequest.h"
#include "describeclustersnapshotsrequest_p.h"
#include "describeclustersnapshotsresponse.h"
#include "redshiftrequest_p.h"

namespace AWS {
namespace Redshift {

/**
 * @class  DescribeClusterSnapshotsRequest
 *
 * @brief  Implements Redshift DescribeClusterSnapshots requests.
 *
 * @see    RedshiftClient::describeClusterSnapshots
 */

/**
 * @brief  Constructs a new DescribeClusterSnapshotsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeClusterSnapshotsRequest::DescribeClusterSnapshotsRequest(const DescribeClusterSnapshotsRequest &other)
    : RedshiftRequest(new DescribeClusterSnapshotsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeClusterSnapshotsRequest object.
 */
DescribeClusterSnapshotsRequest::DescribeClusterSnapshotsRequest()
    : RedshiftRequest(new DescribeClusterSnapshotsRequestPrivate(RedshiftRequest::DescribeClusterSnapshotsAction, this))
{

}

bool DescribeClusterSnapshotsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeClusterSnapshotsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeClusterSnapshotsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * DescribeClusterSnapshotsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeClusterSnapshotsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeClusterSnapshotsRequestPrivate
 *
 * @brief  Private implementation for DescribeClusterSnapshotsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeClusterSnapshotsRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public DescribeClusterSnapshotsRequest instance.
 */
DescribeClusterSnapshotsRequestPrivate::DescribeClusterSnapshotsRequestPrivate(
    const RedshiftRequest::Action action, DescribeClusterSnapshotsRequest * const q)
    : DescribeClusterSnapshotsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeClusterSnapshotsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeClusterSnapshotsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeClusterSnapshotsRequest instance.
 */
DescribeClusterSnapshotsRequestPrivate::DescribeClusterSnapshotsRequestPrivate(
    const DescribeClusterSnapshotsRequestPrivate &other, DescribeClusterSnapshotsRequest * const q)
    : DescribeClusterSnapshotsPrivate(other, q)
{

}

} // namespace Redshift
} // namespace AWS
