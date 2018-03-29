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

#include "describedbsnapshotattributesrequest.h"
#include "describedbsnapshotattributesrequest_p.h"
#include "describedbsnapshotattributesresponse.h"
#include "rdsrequest_p.h"

namespace AWS {
namespace RDS {

/**
 * @class  DescribeDBSnapshotAttributesRequest
 *
 * @brief  Implements RDS DescribeDBSnapshotAttributes requests.
 *
 * @see    RDSClient::describeDBSnapshotAttributes
 */

/**
 * @brief  Constructs a new DescribeDBSnapshotAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeDBSnapshotAttributesRequest::DescribeDBSnapshotAttributesRequest(const DescribeDBSnapshotAttributesRequest &other)
    : RDSRequest(new DescribeDBSnapshotAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeDBSnapshotAttributesRequest object.
 */
DescribeDBSnapshotAttributesRequest::DescribeDBSnapshotAttributesRequest()
    : RDSRequest(new DescribeDBSnapshotAttributesRequestPrivate(RDSRequest::DescribeDBSnapshotAttributesAction, this))
{

}

bool DescribeDBSnapshotAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeDBSnapshotAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeDBSnapshotAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * DescribeDBSnapshotAttributesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDBSnapshotAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeDBSnapshotAttributesRequestPrivate
 *
 * @brief  Private implementation for DescribeDBSnapshotAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBSnapshotAttributesRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public DescribeDBSnapshotAttributesRequest instance.
 */
DescribeDBSnapshotAttributesRequestPrivate::DescribeDBSnapshotAttributesRequestPrivate(
    const RDSRequest::Action action, DescribeDBSnapshotAttributesRequest * const q)
    : DescribeDBSnapshotAttributesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBSnapshotAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeDBSnapshotAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeDBSnapshotAttributesRequest instance.
 */
DescribeDBSnapshotAttributesRequestPrivate::DescribeDBSnapshotAttributesRequestPrivate(
    const DescribeDBSnapshotAttributesRequestPrivate &other, DescribeDBSnapshotAttributesRequest * const q)
    : DescribeDBSnapshotAttributesPrivate(other, q)
{

}

} // namespace RDS
} // namespace AWS
