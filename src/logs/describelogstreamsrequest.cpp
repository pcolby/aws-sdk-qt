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

#include "describelogstreamsrequest.h"
#include "describelogstreamsrequest_p.h"
#include "describelogstreamsresponse.h"
#include "cloudwatchlogsrequest_p.h"

namespace QtAws {
namespace CloudWatchLogs {

/**
 * @class  DescribeLogStreamsRequest
 *
 * @brief  Implements CloudWatchLogs DescribeLogStreams requests.
 *
 * @see    CloudWatchLogsClient::describeLogStreams
 */

/**
 * @brief  Constructs a new DescribeLogStreamsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeLogStreamsRequest::DescribeLogStreamsRequest(const DescribeLogStreamsRequest &other)
    : CloudWatchLogsRequest(new DescribeLogStreamsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeLogStreamsRequest object.
 */
DescribeLogStreamsRequest::DescribeLogStreamsRequest()
    : CloudWatchLogsRequest(new DescribeLogStreamsRequestPrivate(CloudWatchLogsRequest::DescribeLogStreamsAction, this))
{

}

bool DescribeLogStreamsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeLogStreamsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeLogStreamsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchLogsClient::send
 */
AwsAbstractResponse * DescribeLogStreamsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLogStreamsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeLogStreamsRequestPrivate
 *
 * @brief  Private implementation for DescribeLogStreamsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLogStreamsRequestPrivate object.
 *
 * @param  action  CloudWatchLogs action being performed.
 * @param  q       Pointer to this object's public DescribeLogStreamsRequest instance.
 */
DescribeLogStreamsRequestPrivate::DescribeLogStreamsRequestPrivate(
    const CloudWatchLogsRequest::Action action, DescribeLogStreamsRequest * const q)
    : DescribeLogStreamsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLogStreamsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeLogStreamsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeLogStreamsRequest instance.
 */
DescribeLogStreamsRequestPrivate::DescribeLogStreamsRequestPrivate(
    const DescribeLogStreamsRequestPrivate &other, DescribeLogStreamsRequest * const q)
    : DescribeLogStreamsPrivate(other, q)
{

}

} // namespace CloudWatchLogs
} // namespace QtAws
