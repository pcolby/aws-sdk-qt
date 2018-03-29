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

#include "deletelogstreamrequest.h"
#include "deletelogstreamrequest_p.h"
#include "deletelogstreamresponse.h"
#include "cloudwatchlogsrequest_p.h"

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  DeleteLogStreamRequest
 *
 * @brief  Implements CloudWatchLogs DeleteLogStream requests.
 *
 * @see    CloudWatchLogsClient::deleteLogStream
 */

/**
 * @brief  Constructs a new DeleteLogStreamRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteLogStreamRequest::DeleteLogStreamRequest(const DeleteLogStreamRequest &other)
    : CloudWatchLogsRequest(new DeleteLogStreamRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteLogStreamRequest object.
 */
DeleteLogStreamRequest::DeleteLogStreamRequest()
    : CloudWatchLogsRequest(new DeleteLogStreamRequestPrivate(CloudWatchLogsRequest::DeleteLogStreamAction, this))
{

}

bool DeleteLogStreamRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteLogStreamResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteLogStreamResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchLogsClient::send
 */
AwsAbstractResponse * DeleteLogStreamRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLogStreamResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteLogStreamRequestPrivate
 *
 * @brief  Private implementation for DeleteLogStreamRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLogStreamRequestPrivate object.
 *
 * @param  action  CloudWatchLogs action being performed.
 * @param  q       Pointer to this object's public DeleteLogStreamRequest instance.
 */
DeleteLogStreamRequestPrivate::DeleteLogStreamRequestPrivate(
    const CloudWatchLogsRequest::Action action, DeleteLogStreamRequest * const q)
    : DeleteLogStreamPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLogStreamRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteLogStreamRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteLogStreamRequest instance.
 */
DeleteLogStreamRequestPrivate::DeleteLogStreamRequestPrivate(
    const DeleteLogStreamRequestPrivate &other, DeleteLogStreamRequest * const q)
    : DeleteLogStreamPrivate(other, q)
{

}

} // namespace CloudWatchLogs
} // namespace AWS
