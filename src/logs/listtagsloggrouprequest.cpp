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

#include "listtagsloggrouprequest.h"
#include "listtagsloggrouprequest_p.h"
#include "listtagsloggroupresponse.h"
#include "cloudwatchlogsrequest_p.h"

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  ListTagsLogGroupRequest
 *
 * @brief  Implements CloudWatchLogs ListTagsLogGroup requests.
 *
 * @see    CloudWatchLogsClient::listTagsLogGroup
 */

/**
 * @brief  Constructs a new ListTagsLogGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTagsLogGroupResponse::ListTagsLogGroupResponse(

/**
 * @brief  Constructs a new ListTagsLogGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTagsLogGroupRequest::ListTagsLogGroupRequest(const ListTagsLogGroupRequest &other)
    : CloudWatchLogsRequest(new ListTagsLogGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListTagsLogGroupRequest object.
 */
ListTagsLogGroupRequest::ListTagsLogGroupRequest()
    : CloudWatchLogsRequest(new ListTagsLogGroupRequestPrivate(CloudWatchLogsRequest::ListTagsLogGroupAction, this))
{

}

bool ListTagsLogGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListTagsLogGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTagsLogGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchLogsClient::send
 */
AwsAbstractResponse * ListTagsLogGroupRequest::response(QNetworkReply * const reply) const
{
    return new ListTagsLogGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListTagsLogGroupRequestPrivate
 *
 * @brief  Private implementation for ListTagsLogGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTagsLogGroupRequestPrivate object.
 *
 * @param  action  CloudWatchLogs action being performed.
 * @param  q       Pointer to this object's public ListTagsLogGroupRequest instance.
 */
ListTagsLogGroupRequestPrivate::ListTagsLogGroupRequestPrivate(
    const CloudWatchLogsRequest::Action action, ListTagsLogGroupRequest * const q)
    : ListTagsLogGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListTagsLogGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListTagsLogGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListTagsLogGroupRequest instance.
 */
ListTagsLogGroupRequestPrivate::ListTagsLogGroupRequestPrivate(
    const ListTagsLogGroupRequestPrivate &other, ListTagsLogGroupRequest * const q)
    : ListTagsLogGroupPrivate(other, q)
{

}

} // namespace CloudWatchLogs
} // namespace AWS
