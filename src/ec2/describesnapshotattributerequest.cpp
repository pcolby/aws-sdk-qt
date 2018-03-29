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

#include "describesnapshotattributerequest.h"
#include "describesnapshotattributerequest_p.h"
#include "describesnapshotattributeresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeSnapshotAttributeRequest
 *
 * @brief  Implements EC2 DescribeSnapshotAttribute requests.
 *
 * @see    EC2Client::describeSnapshotAttribute
 */

/**
 * @brief  Constructs a new DescribeSnapshotAttributeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeSnapshotAttributeRequest::DescribeSnapshotAttributeRequest(const DescribeSnapshotAttributeRequest &other)
    : EC2Request(new DescribeSnapshotAttributeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeSnapshotAttributeRequest object.
 */
DescribeSnapshotAttributeRequest::DescribeSnapshotAttributeRequest()
    : EC2Request(new DescribeSnapshotAttributeRequestPrivate(EC2Request::DescribeSnapshotAttributeAction, this))
{

}

bool DescribeSnapshotAttributeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeSnapshotAttributeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeSnapshotAttributeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeSnapshotAttributeRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSnapshotAttributeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeSnapshotAttributeRequestPrivate
 *
 * @brief  Private implementation for DescribeSnapshotAttributeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSnapshotAttributeRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeSnapshotAttributeRequest instance.
 */
DescribeSnapshotAttributeRequestPrivate::DescribeSnapshotAttributeRequestPrivate(
    const EC2Request::Action action, DescribeSnapshotAttributeRequest * const q)
    : DescribeSnapshotAttributePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSnapshotAttributeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeSnapshotAttributeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeSnapshotAttributeRequest instance.
 */
DescribeSnapshotAttributeRequestPrivate::DescribeSnapshotAttributeRequestPrivate(
    const DescribeSnapshotAttributeRequestPrivate &other, DescribeSnapshotAttributeRequest * const q)
    : DescribeSnapshotAttributePrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
