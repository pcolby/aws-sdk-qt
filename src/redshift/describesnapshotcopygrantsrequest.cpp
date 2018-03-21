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

#include "describesnapshotcopygrantsrequest.h"
#include "describesnapshotcopygrantsrequest_p.h"
#include "describesnapshotcopygrantsresponse.h"
#include "redshiftrequest_p.h"

namespace AWS {
namespace Redshift {

/**
 * @class  DescribeSnapshotCopyGrantsRequest
 *
 * @brief  Implements Redshift DescribeSnapshotCopyGrants requests.
 *
 * @see    RedshiftClient::describeSnapshotCopyGrants
 */

/**
 * @brief  Constructs a new DescribeSnapshotCopyGrantsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeSnapshotCopyGrantsResponse::DescribeSnapshotCopyGrantsResponse(

/**
 * @brief  Constructs a new DescribeSnapshotCopyGrantsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeSnapshotCopyGrantsRequest::DescribeSnapshotCopyGrantsRequest(const DescribeSnapshotCopyGrantsRequest &other)
    : RedshiftRequest(new DescribeSnapshotCopyGrantsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeSnapshotCopyGrantsRequest object.
 */
DescribeSnapshotCopyGrantsRequest::DescribeSnapshotCopyGrantsRequest()
    : RedshiftRequest(new DescribeSnapshotCopyGrantsRequestPrivate(RedshiftRequest::DescribeSnapshotCopyGrantsAction, this))
{

}

bool DescribeSnapshotCopyGrantsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeSnapshotCopyGrantsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeSnapshotCopyGrantsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * DescribeSnapshotCopyGrantsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSnapshotCopyGrantsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeSnapshotCopyGrantsRequestPrivate
 *
 * @brief  Private implementation for DescribeSnapshotCopyGrantsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSnapshotCopyGrantsRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public DescribeSnapshotCopyGrantsRequest instance.
 */
DescribeSnapshotCopyGrantsRequestPrivate::DescribeSnapshotCopyGrantsRequestPrivate(
    const RedshiftRequest::Action action, DescribeSnapshotCopyGrantsRequest * const q)
    : DescribeSnapshotCopyGrantsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSnapshotCopyGrantsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeSnapshotCopyGrantsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeSnapshotCopyGrantsRequest instance.
 */
DescribeSnapshotCopyGrantsRequestPrivate::DescribeSnapshotCopyGrantsRequestPrivate(
    const DescribeSnapshotCopyGrantsRequestPrivate &other, DescribeSnapshotCopyGrantsRequest * const q)
    : DescribeSnapshotCopyGrantsPrivate(other, q)
{

}

} // namespace Redshift
} // namespace AWS
