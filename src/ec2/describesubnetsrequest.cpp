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

#include "describesubnetsrequest.h"
#include "describesubnetsrequest_p.h"
#include "describesubnetsresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeSubnetsRequest
 *
 * @brief  Implements EC2 DescribeSubnets requests.
 *
 * @see    EC2Client::describeSubnets
 */

/**
 * @brief  Constructs a new DescribeSubnetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeSubnetsRequest::DescribeSubnetsRequest(const DescribeSubnetsRequest &other)
    : EC2Request(new DescribeSubnetsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeSubnetsRequest object.
 */
DescribeSubnetsRequest::DescribeSubnetsRequest()
    : EC2Request(new DescribeSubnetsRequestPrivate(EC2Request::DescribeSubnetsAction, this))
{

}

bool DescribeSubnetsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeSubnetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeSubnetsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSubnetsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSubnetsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeSubnetsRequestPrivate
 *
 * @brief  Private implementation for DescribeSubnetsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSubnetsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeSubnetsRequest instance.
 */
DescribeSubnetsRequestPrivate::DescribeSubnetsRequestPrivate(
    const EC2Request::Action action, DescribeSubnetsRequest * const q)
    : DescribeSubnetsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSubnetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeSubnetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeSubnetsRequest instance.
 */
DescribeSubnetsRequestPrivate::DescribeSubnetsRequestPrivate(
    const DescribeSubnetsRequestPrivate &other, DescribeSubnetsRequest * const q)
    : DescribeSubnetsPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
