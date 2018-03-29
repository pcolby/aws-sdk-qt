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

#include "deleteloggrouprequest.h"
#include "deleteloggrouprequest_p.h"
#include "deleteloggroupresponse.h"
#include "cloudwatchlogsrequest_p.h"

namespace QtAws {
namespace CloudWatchLogs {

/**
 * @class  DeleteLogGroupRequest
 *
 * @brief  Implements CloudWatchLogs DeleteLogGroup requests.
 *
 * @see    CloudWatchLogsClient::deleteLogGroup
 */

/**
 * @brief  Constructs a new DeleteLogGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteLogGroupRequest::DeleteLogGroupRequest(const DeleteLogGroupRequest &other)
    : CloudWatchLogsRequest(new DeleteLogGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteLogGroupRequest object.
 */
DeleteLogGroupRequest::DeleteLogGroupRequest()
    : CloudWatchLogsRequest(new DeleteLogGroupRequestPrivate(CloudWatchLogsRequest::DeleteLogGroupAction, this))
{

}

bool DeleteLogGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteLogGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteLogGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchLogsClient::send
 */
AwsAbstractResponse * DeleteLogGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLogGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteLogGroupRequestPrivate
 *
 * @brief  Private implementation for DeleteLogGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLogGroupRequestPrivate object.
 *
 * @param  action  CloudWatchLogs action being performed.
 * @param  q       Pointer to this object's public DeleteLogGroupRequest instance.
 */
DeleteLogGroupRequestPrivate::DeleteLogGroupRequestPrivate(
    const CloudWatchLogsRequest::Action action, DeleteLogGroupRequest * const q)
    : DeleteLogGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLogGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteLogGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteLogGroupRequest instance.
 */
DeleteLogGroupRequestPrivate::DeleteLogGroupRequestPrivate(
    const DeleteLogGroupRequestPrivate &other, DeleteLogGroupRequest * const q)
    : DeleteLogGroupPrivate(other, q)
{

}

} // namespace CloudWatchLogs
} // namespace QtAws
