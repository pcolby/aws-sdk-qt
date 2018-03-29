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

#include "describeinstancestatusrequest.h"
#include "describeinstancestatusrequest_p.h"
#include "describeinstancestatusresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeInstanceStatusRequest
 *
 * @brief  Implements EC2 DescribeInstanceStatus requests.
 *
 * @see    EC2Client::describeInstanceStatus
 */

/**
 * @brief  Constructs a new DescribeInstanceStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeInstanceStatusRequest::DescribeInstanceStatusRequest(const DescribeInstanceStatusRequest &other)
    : EC2Request(new DescribeInstanceStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeInstanceStatusRequest object.
 */
DescribeInstanceStatusRequest::DescribeInstanceStatusRequest()
    : EC2Request(new DescribeInstanceStatusRequestPrivate(EC2Request::DescribeInstanceStatusAction, this))
{

}

bool DescribeInstanceStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeInstanceStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeInstanceStatusResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * DescribeInstanceStatusRequest::response(QNetworkReply * const reply) const
{
    return new DescribeInstanceStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeInstanceStatusRequestPrivate
 *
 * @brief  Private implementation for DescribeInstanceStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInstanceStatusRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeInstanceStatusRequest instance.
 */
DescribeInstanceStatusRequestPrivate::DescribeInstanceStatusRequestPrivate(
    const EC2Request::Action action, DescribeInstanceStatusRequest * const q)
    : DescribeInstanceStatusPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInstanceStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeInstanceStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeInstanceStatusRequest instance.
 */
DescribeInstanceStatusRequestPrivate::DescribeInstanceStatusRequestPrivate(
    const DescribeInstanceStatusRequestPrivate &other, DescribeInstanceStatusRequest * const q)
    : DescribeInstanceStatusPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
