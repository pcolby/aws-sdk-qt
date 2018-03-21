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

#include "describedbclustersnapshotattributesrequest.h"
#include "describedbclustersnapshotattributesrequest_p.h"
#include "describedbclustersnapshotattributesresponse.h"
#include "rdsrequest_p.h"

namespace AWS {
namespace RDS {

/**
 * @class  DescribeDBClusterSnapshotAttributesRequest
 *
 * @brief  Implements RDS DescribeDBClusterSnapshotAttributes requests.
 *
 * @see    RDSClient::describeDBClusterSnapshotAttributes
 */

/**
 * @brief  Constructs a new DescribeDBClusterSnapshotAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDBClusterSnapshotAttributesResponse::DescribeDBClusterSnapshotAttributesResponse(

/**
 * @brief  Constructs a new DescribeDBClusterSnapshotAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeDBClusterSnapshotAttributesRequest::DescribeDBClusterSnapshotAttributesRequest(const DescribeDBClusterSnapshotAttributesRequest &other)
    : RDSRequest(new DescribeDBClusterSnapshotAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeDBClusterSnapshotAttributesRequest object.
 */
DescribeDBClusterSnapshotAttributesRequest::DescribeDBClusterSnapshotAttributesRequest()
    : RDSRequest(new DescribeDBClusterSnapshotAttributesRequestPrivate(RDSRequest::DescribeDBClusterSnapshotAttributesAction, this))
{

}

bool DescribeDBClusterSnapshotAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeDBClusterSnapshotAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeDBClusterSnapshotAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * DescribeDBClusterSnapshotAttributesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDBClusterSnapshotAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeDBClusterSnapshotAttributesRequestPrivate
 *
 * @brief  Private implementation for DescribeDBClusterSnapshotAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBClusterSnapshotAttributesRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public DescribeDBClusterSnapshotAttributesRequest instance.
 */
DescribeDBClusterSnapshotAttributesRequestPrivate::DescribeDBClusterSnapshotAttributesRequestPrivate(
    const RDSRequest::Action action, DescribeDBClusterSnapshotAttributesRequest * const q)
    : DescribeDBClusterSnapshotAttributesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBClusterSnapshotAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeDBClusterSnapshotAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeDBClusterSnapshotAttributesRequest instance.
 */
DescribeDBClusterSnapshotAttributesRequestPrivate::DescribeDBClusterSnapshotAttributesRequestPrivate(
    const DescribeDBClusterSnapshotAttributesRequestPrivate &other, DescribeDBClusterSnapshotAttributesRequest * const q)
    : DescribeDBClusterSnapshotAttributesPrivate(other, q)
{

}
