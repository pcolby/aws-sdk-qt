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

#include "untagloggrouprequest.h"
#include "untagloggrouprequest_p.h"
#include "untagloggroupresponse.h"
#include "cloudwatchlogsrequest_p.h"

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  UntagLogGroupRequest
 *
 * @brief  Implements CloudWatchLogs UntagLogGroup requests.
 *
 * @see    CloudWatchLogsClient::untagLogGroup
 */

/**
 * @brief  Constructs a new UntagLogGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UntagLogGroupRequest::UntagLogGroupRequest(const UntagLogGroupRequest &other)
    : CloudWatchLogsRequest(new UntagLogGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UntagLogGroupRequest object.
 */
UntagLogGroupRequest::UntagLogGroupRequest()
    : CloudWatchLogsRequest(new UntagLogGroupRequestPrivate(CloudWatchLogsRequest::UntagLogGroupAction, this))
{

}

bool UntagLogGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UntagLogGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UntagLogGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchLogsClient::send
 */
AwsAbstractResponse * UntagLogGroupRequest::response(QNetworkReply * const reply) const
{
    return new UntagLogGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UntagLogGroupRequestPrivate
 *
 * @brief  Private implementation for UntagLogGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UntagLogGroupRequestPrivate object.
 *
 * @param  action  CloudWatchLogs action being performed.
 * @param  q       Pointer to this object's public UntagLogGroupRequest instance.
 */
UntagLogGroupRequestPrivate::UntagLogGroupRequestPrivate(
    const CloudWatchLogsRequest::Action action, UntagLogGroupRequest * const q)
    : UntagLogGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UntagLogGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UntagLogGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UntagLogGroupRequest instance.
 */
UntagLogGroupRequestPrivate::UntagLogGroupRequestPrivate(
    const UntagLogGroupRequestPrivate &other, UntagLogGroupRequest * const q)
    : UntagLogGroupPrivate(other, q)
{

}

} // namespace CloudWatchLogs
} // namespace AWS
