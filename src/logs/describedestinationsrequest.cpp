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

#include "describedestinationsrequest.h"
#include "describedestinationsrequest_p.h"
#include "describedestinationsresponse.h"
#include "cloudwatchlogsrequest_p.h"

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  DescribeDestinationsRequest
 *
 * @brief  Implements CloudWatchLogs DescribeDestinations requests.
 *
 * @see    CloudWatchLogsClient::describeDestinations
 */

/**
 * @brief  Constructs a new DescribeDestinationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeDestinationsRequest::DescribeDestinationsRequest(const DescribeDestinationsRequest &other)
    : CloudWatchLogsRequest(new DescribeDestinationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeDestinationsRequest object.
 */
DescribeDestinationsRequest::DescribeDestinationsRequest()
    : CloudWatchLogsRequest(new DescribeDestinationsRequestPrivate(CloudWatchLogsRequest::DescribeDestinationsAction, this))
{

}

bool DescribeDestinationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeDestinationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeDestinationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchLogsClient::send
 */
AwsAbstractResponse * DescribeDestinationsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDestinationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeDestinationsRequestPrivate
 *
 * @brief  Private implementation for DescribeDestinationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDestinationsRequestPrivate object.
 *
 * @param  action  CloudWatchLogs action being performed.
 * @param  q       Pointer to this object's public DescribeDestinationsRequest instance.
 */
DescribeDestinationsRequestPrivate::DescribeDestinationsRequestPrivate(
    const CloudWatchLogsRequest::Action action, DescribeDestinationsRequest * const q)
    : DescribeDestinationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDestinationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeDestinationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeDestinationsRequest instance.
 */
DescribeDestinationsRequestPrivate::DescribeDestinationsRequestPrivate(
    const DescribeDestinationsRequestPrivate &other, DescribeDestinationsRequest * const q)
    : DescribeDestinationsPrivate(other, q)
{

}

} // namespace CloudWatchLogs
} // namespace AWS
