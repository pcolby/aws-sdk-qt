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

#include "describedbsnapshotsrequest.h"
#include "describedbsnapshotsrequest_p.h"
#include "describedbsnapshotsresponse.h"
#include "rdsrequest_p.h"

namespace AWS {
namespace RDS {

/**
 * @class  DescribeDBSnapshotsRequest
 *
 * @brief  Implements RDS DescribeDBSnapshots requests.
 *
 * @see    RDSClient::describeDBSnapshots
 */

/**
 * @brief  Constructs a new DescribeDBSnapshotsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeDBSnapshotsRequest::DescribeDBSnapshotsRequest(const DescribeDBSnapshotsRequest &other)
    : RDSRequest(new DescribeDBSnapshotsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeDBSnapshotsRequest object.
 */
DescribeDBSnapshotsRequest::DescribeDBSnapshotsRequest()
    : RDSRequest(new DescribeDBSnapshotsRequestPrivate(RDSRequest::DescribeDBSnapshotsAction, this))
{

}

bool DescribeDBSnapshotsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeDBSnapshotsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeDBSnapshotsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * DescribeDBSnapshotsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDBSnapshotsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeDBSnapshotsRequestPrivate
 *
 * @brief  Private implementation for DescribeDBSnapshotsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBSnapshotsRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public DescribeDBSnapshotsRequest instance.
 */
DescribeDBSnapshotsRequestPrivate::DescribeDBSnapshotsRequestPrivate(
    const RDSRequest::Action action, DescribeDBSnapshotsRequest * const q)
    : DescribeDBSnapshotsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBSnapshotsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeDBSnapshotsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeDBSnapshotsRequest instance.
 */
DescribeDBSnapshotsRequestPrivate::DescribeDBSnapshotsRequestPrivate(
    const DescribeDBSnapshotsRequestPrivate &other, DescribeDBSnapshotsRequest * const q)
    : DescribeDBSnapshotsPrivate(other, q)
{

}

} // namespace RDS
} // namespace AWS
