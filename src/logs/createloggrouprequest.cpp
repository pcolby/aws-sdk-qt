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

#include "createloggrouprequest.h"
#include "createloggrouprequest_p.h"
#include "createloggroupresponse.h"
#include "cloudwatchlogsrequest_p.h"

namespace QtAws {
namespace CloudWatchLogs {

/**
 * @class  CreateLogGroupRequest
 *
 * @brief  Implements CloudWatchLogs CreateLogGroup requests.
 *
 * @see    CloudWatchLogsClient::createLogGroup
 */

/**
 * @brief  Constructs a new CreateLogGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateLogGroupRequest::CreateLogGroupRequest(const CreateLogGroupRequest &other)
    : CloudWatchLogsRequest(new CreateLogGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateLogGroupRequest object.
 */
CreateLogGroupRequest::CreateLogGroupRequest()
    : CloudWatchLogsRequest(new CreateLogGroupRequestPrivate(CloudWatchLogsRequest::CreateLogGroupAction, this))
{

}

bool CreateLogGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateLogGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateLogGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudWatchLogsClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLogGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateLogGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateLogGroupRequestPrivate
 *
 * @brief  Private implementation for CreateLogGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateLogGroupRequestPrivate object.
 *
 * @param  action  CloudWatchLogs action being performed.
 * @param  q       Pointer to this object's public CreateLogGroupRequest instance.
 */
CreateLogGroupRequestPrivate::CreateLogGroupRequestPrivate(
    const CloudWatchLogsRequest::Action action, CreateLogGroupRequest * const q)
    : CloudWatchLogsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateLogGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateLogGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateLogGroupRequest instance.
 */
CreateLogGroupRequestPrivate::CreateLogGroupRequestPrivate(
    const CreateLogGroupRequestPrivate &other, CreateLogGroupRequest * const q)
    : CloudWatchLogsRequestPrivate(other, q)
{

}

} // namespace CloudWatchLogs
} // namespace QtAws
