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

#include "describeroutetablesrequest.h"
#include "describeroutetablesrequest_p.h"
#include "describeroutetablesresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeRouteTablesRequest
 *
 * @brief  Implements EC2 DescribeRouteTables requests.
 *
 * @see    EC2Client::describeRouteTables
 */

/**
 * @brief  Constructs a new DescribeRouteTablesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeRouteTablesRequest::DescribeRouteTablesRequest(const DescribeRouteTablesRequest &other)
    : EC2Request(new DescribeRouteTablesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeRouteTablesRequest object.
 */
DescribeRouteTablesRequest::DescribeRouteTablesRequest()
    : EC2Request(new DescribeRouteTablesRequestPrivate(EC2Request::DescribeRouteTablesAction, this))
{

}

bool DescribeRouteTablesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeRouteTablesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeRouteTablesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeRouteTablesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRouteTablesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeRouteTablesRequestPrivate
 *
 * @brief  Private implementation for DescribeRouteTablesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRouteTablesRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeRouteTablesRequest instance.
 */
DescribeRouteTablesRequestPrivate::DescribeRouteTablesRequestPrivate(
    const EC2Request::Action action, DescribeRouteTablesRequest * const q)
    : DescribeRouteTablesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRouteTablesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeRouteTablesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeRouteTablesRequest instance.
 */
DescribeRouteTablesRequestPrivate::DescribeRouteTablesRequestPrivate(
    const DescribeRouteTablesRequestPrivate &other, DescribeRouteTablesRequest * const q)
    : DescribeRouteTablesPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
