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

#include "describeregionsrequest.h"
#include "describeregionsrequest_p.h"
#include "describeregionsresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeRegionsRequest
 *
 * @brief  Implements EC2 DescribeRegions requests.
 *
 * @see    EC2Client::describeRegions
 */

/**
 * @brief  Constructs a new DescribeRegionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeRegionsRequest::DescribeRegionsRequest(const DescribeRegionsRequest &other)
    : EC2Request(new DescribeRegionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeRegionsRequest object.
 */
DescribeRegionsRequest::DescribeRegionsRequest()
    : EC2Request(new DescribeRegionsRequestPrivate(EC2Request::DescribeRegionsAction, this))
{

}

bool DescribeRegionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeRegionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeRegionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * DescribeRegionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRegionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeRegionsRequestPrivate
 *
 * @brief  Private implementation for DescribeRegionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRegionsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeRegionsRequest instance.
 */
DescribeRegionsRequestPrivate::DescribeRegionsRequestPrivate(
    const EC2Request::Action action, DescribeRegionsRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRegionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeRegionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeRegionsRequest instance.
 */
DescribeRegionsRequestPrivate::DescribeRegionsRequestPrivate(
    const DescribeRegionsRequestPrivate &other, DescribeRegionsRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
