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

#include "describevolumestatusrequest.h"
#include "describevolumestatusrequest_p.h"
#include "describevolumestatusresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeVolumeStatusRequest
 *
 * @brief  Implements EC2 DescribeVolumeStatus requests.
 *
 * @see    EC2Client::describeVolumeStatus
 */

/**
 * @brief  Constructs a new DescribeVolumeStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeVolumeStatusRequest::DescribeVolumeStatusRequest(const DescribeVolumeStatusRequest &other)
    : EC2Request(new DescribeVolumeStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeVolumeStatusRequest object.
 */
DescribeVolumeStatusRequest::DescribeVolumeStatusRequest()
    : EC2Request(new DescribeVolumeStatusRequestPrivate(EC2Request::DescribeVolumeStatusAction, this))
{

}

bool DescribeVolumeStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeVolumeStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeVolumeStatusResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeVolumeStatusRequest::response(QNetworkReply * const reply) const
{
    return new DescribeVolumeStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeVolumeStatusRequestPrivate
 *
 * @brief  Private implementation for DescribeVolumeStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVolumeStatusRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeVolumeStatusRequest instance.
 */
DescribeVolumeStatusRequestPrivate::DescribeVolumeStatusRequestPrivate(
    const EC2Request::Action action, DescribeVolumeStatusRequest * const q)
    : DescribeVolumeStatusPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVolumeStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeVolumeStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeVolumeStatusRequest instance.
 */
DescribeVolumeStatusRequestPrivate::DescribeVolumeStatusRequestPrivate(
    const DescribeVolumeStatusRequestPrivate &other, DescribeVolumeStatusRequest * const q)
    : DescribeVolumeStatusPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
