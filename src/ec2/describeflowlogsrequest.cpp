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

#include "describeflowlogsrequest.h"
#include "describeflowlogsrequest_p.h"
#include "describeflowlogsresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeFlowLogsRequest
 *
 * @brief  Implements EC2 DescribeFlowLogs requests.
 *
 * @see    EC2Client::describeFlowLogs
 */

/**
 * @brief  Constructs a new DescribeFlowLogsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeFlowLogsRequest::DescribeFlowLogsRequest(const DescribeFlowLogsRequest &other)
    : EC2Request(new DescribeFlowLogsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeFlowLogsRequest object.
 */
DescribeFlowLogsRequest::DescribeFlowLogsRequest()
    : EC2Request(new DescribeFlowLogsRequestPrivate(EC2Request::DescribeFlowLogsAction, this))
{

}

bool DescribeFlowLogsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeFlowLogsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeFlowLogsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeFlowLogsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFlowLogsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeFlowLogsRequestPrivate
 *
 * @brief  Private implementation for DescribeFlowLogsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeFlowLogsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeFlowLogsRequest instance.
 */
DescribeFlowLogsRequestPrivate::DescribeFlowLogsRequestPrivate(
    const EC2Request::Action action, DescribeFlowLogsRequest * const q)
    : DescribeFlowLogsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeFlowLogsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeFlowLogsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeFlowLogsRequest instance.
 */
DescribeFlowLogsRequestPrivate::DescribeFlowLogsRequestPrivate(
    const DescribeFlowLogsRequestPrivate &other, DescribeFlowLogsRequest * const q)
    : DescribeFlowLogsPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
