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

#include "describeloggroupsrequest.h"
#include "describeloggroupsrequest_p.h"
#include "describeloggroupsresponse.h"
#include "cloudwatchlogsrequest_p.h"

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  DescribeLogGroupsRequest
 *
 * @brief  Implements CloudWatchLogs DescribeLogGroups requests.
 *
 * @see    CloudWatchLogsClient::describeLogGroups
 */

/**
 * @brief  Constructs a new DescribeLogGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeLogGroupsResponse::DescribeLogGroupsResponse(

/**
 * @brief  Constructs a new DescribeLogGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeLogGroupsRequest::DescribeLogGroupsRequest(const DescribeLogGroupsRequest &other)
    : CloudWatchLogsRequest(new DescribeLogGroupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeLogGroupsRequest object.
 */
DescribeLogGroupsRequest::DescribeLogGroupsRequest()
    : CloudWatchLogsRequest(new DescribeLogGroupsRequestPrivate(CloudWatchLogsRequest::DescribeLogGroupsAction, this))
{

}

bool DescribeLogGroupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeLogGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeLogGroupsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchLogsClient::send
 */
AwsAbstractResponse * DescribeLogGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLogGroupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeLogGroupsRequestPrivate
 *
 * @brief  Private implementation for DescribeLogGroupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLogGroupsRequestPrivate object.
 *
 * @param  action  CloudWatchLogs action being performed.
 * @param  q       Pointer to this object's public DescribeLogGroupsRequest instance.
 */
DescribeLogGroupsRequestPrivate::DescribeLogGroupsRequestPrivate(
    const CloudWatchLogsRequest::Action action, DescribeLogGroupsRequest * const q)
    : DescribeLogGroupsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLogGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeLogGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeLogGroupsRequest instance.
 */
DescribeLogGroupsRequestPrivate::DescribeLogGroupsRequestPrivate(
    const DescribeLogGroupsRequestPrivate &other, DescribeLogGroupsRequest * const q)
    : DescribeLogGroupsPrivate(other, q)
{

}

} // namespace CloudWatchLogs
} // namespace AWS
