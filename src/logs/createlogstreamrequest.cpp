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

#include "createlogstreamrequest.h"
#include "createlogstreamrequest_p.h"
#include "createlogstreamresponse.h"
#include "cloudwatchlogsrequest_p.h"

namespace QtAws {
namespace CloudWatchLogs {

/**
 * @class  CreateLogStreamRequest
 *
 * @brief  Implements CloudWatchLogs CreateLogStream requests.
 *
 * @see    CloudWatchLogsClient::createLogStream
 */

/**
 * @brief  Constructs a new CreateLogStreamRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateLogStreamRequest::CreateLogStreamRequest(const CreateLogStreamRequest &other)
    : CloudWatchLogsRequest(new CreateLogStreamRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateLogStreamRequest object.
 */
CreateLogStreamRequest::CreateLogStreamRequest()
    : CloudWatchLogsRequest(new CreateLogStreamRequestPrivate(CloudWatchLogsRequest::CreateLogStreamAction, this))
{

}

bool CreateLogStreamRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateLogStreamResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateLogStreamResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchLogsClient::send
 */
AwsAbstractResponse * CreateLogStreamRequest::response(QNetworkReply * const reply) const
{
    return new CreateLogStreamResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateLogStreamRequestPrivate
 *
 * @brief  Private implementation for CreateLogStreamRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateLogStreamRequestPrivate object.
 *
 * @param  action  CloudWatchLogs action being performed.
 * @param  q       Pointer to this object's public CreateLogStreamRequest instance.
 */
CreateLogStreamRequestPrivate::CreateLogStreamRequestPrivate(
    const CloudWatchLogsRequest::Action action, CreateLogStreamRequest * const q)
    : CreateLogStreamPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateLogStreamRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateLogStreamRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateLogStreamRequest instance.
 */
CreateLogStreamRequestPrivate::CreateLogStreamRequestPrivate(
    const CreateLogStreamRequestPrivate &other, CreateLogStreamRequest * const q)
    : CreateLogStreamPrivate(other, q)
{

}

} // namespace CloudWatchLogs
} // namespace QtAws
