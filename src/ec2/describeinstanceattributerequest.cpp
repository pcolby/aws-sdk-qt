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

#include "describeinstanceattributerequest.h"
#include "describeinstanceattributerequest_p.h"
#include "describeinstanceattributeresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeInstanceAttributeRequest
 *
 * @brief  Implements EC2 DescribeInstanceAttribute requests.
 *
 * @see    EC2Client::describeInstanceAttribute
 */

/**
 * @brief  Constructs a new DescribeInstanceAttributeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeInstanceAttributeRequest::DescribeInstanceAttributeRequest(const DescribeInstanceAttributeRequest &other)
    : EC2Request(new DescribeInstanceAttributeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeInstanceAttributeRequest object.
 */
DescribeInstanceAttributeRequest::DescribeInstanceAttributeRequest()
    : EC2Request(new DescribeInstanceAttributeRequestPrivate(EC2Request::DescribeInstanceAttributeAction, this))
{

}

bool DescribeInstanceAttributeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeInstanceAttributeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeInstanceAttributeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeInstanceAttributeRequest::response(QNetworkReply * const reply) const
{
    return new DescribeInstanceAttributeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeInstanceAttributeRequestPrivate
 *
 * @brief  Private implementation for DescribeInstanceAttributeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInstanceAttributeRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeInstanceAttributeRequest instance.
 */
DescribeInstanceAttributeRequestPrivate::DescribeInstanceAttributeRequestPrivate(
    const EC2Request::Action action, DescribeInstanceAttributeRequest * const q)
    : DescribeInstanceAttributePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInstanceAttributeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeInstanceAttributeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeInstanceAttributeRequest instance.
 */
DescribeInstanceAttributeRequestPrivate::DescribeInstanceAttributeRequestPrivate(
    const DescribeInstanceAttributeRequestPrivate &other, DescribeInstanceAttributeRequest * const q)
    : DescribeInstanceAttributePrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
