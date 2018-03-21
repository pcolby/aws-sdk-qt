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

#include "describehostsrequest.h"
#include "describehostsrequest_p.h"
#include "describehostsresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeHostsRequest
 *
 * @brief  Implements EC2 DescribeHosts requests.
 *
 * @see    EC2Client::describeHosts
 */

/**
 * @brief  Constructs a new DescribeHostsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeHostsRequest::DescribeHostsRequest(const DescribeHostsRequest &other)
    : EC2Request(new DescribeHostsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeHostsRequest object.
 */
DescribeHostsRequest::DescribeHostsRequest()
    : EC2Request(new DescribeHostsRequestPrivate(EC2Request::DescribeHostsAction, this))
{

}

bool DescribeHostsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeHostsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeHostsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeHostsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeHostsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeHostsRequestPrivate
 *
 * @brief  Private implementation for DescribeHostsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeHostsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeHostsRequest instance.
 */
DescribeHostsRequestPrivate::DescribeHostsRequestPrivate(
    const EC2Request::Action action, DescribeHostsRequest * const q)
    : DescribeHostsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeHostsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeHostsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeHostsRequest instance.
 */
DescribeHostsRequestPrivate::DescribeHostsRequestPrivate(
    const DescribeHostsRequestPrivate &other, DescribeHostsRequest * const q)
    : DescribeHostsPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
