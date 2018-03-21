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

#include "describevpcsrequest.h"
#include "describevpcsrequest_p.h"
#include "describevpcsresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeVpcsRequest
 *
 * @brief  Implements EC2 DescribeVpcs requests.
 *
 * @see    EC2Client::describeVpcs
 */

/**
 * @brief  Constructs a new DescribeVpcsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeVpcsRequest::DescribeVpcsRequest(const DescribeVpcsRequest &other)
    : EC2Request(new DescribeVpcsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeVpcsRequest object.
 */
DescribeVpcsRequest::DescribeVpcsRequest()
    : EC2Request(new DescribeVpcsRequestPrivate(EC2Request::DescribeVpcsAction, this))
{

}

bool DescribeVpcsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeVpcsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeVpcsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeVpcsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeVpcsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeVpcsRequestPrivate
 *
 * @brief  Private implementation for DescribeVpcsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVpcsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeVpcsRequest instance.
 */
DescribeVpcsRequestPrivate::DescribeVpcsRequestPrivate(
    const EC2Request::Action action, DescribeVpcsRequest * const q)
    : DescribeVpcsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVpcsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeVpcsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeVpcsRequest instance.
 */
DescribeVpcsRequestPrivate::DescribeVpcsRequestPrivate(
    const DescribeVpcsRequestPrivate &other, DescribeVpcsRequest * const q)
    : DescribeVpcsPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
