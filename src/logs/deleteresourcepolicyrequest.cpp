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

#include "deleteresourcepolicyrequest.h"
#include "deleteresourcepolicyrequest_p.h"
#include "deleteresourcepolicyresponse.h"
#include "cloudwatchlogsrequest_p.h"

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  DeleteResourcePolicyRequest
 *
 * @brief  Implements CloudWatchLogs DeleteResourcePolicy requests.
 *
 * @see    CloudWatchLogsClient::deleteResourcePolicy
 */

/**
 * @brief  Constructs a new DeleteResourcePolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteResourcePolicyResponse::DeleteResourcePolicyResponse(

/**
 * @brief  Constructs a new DeleteResourcePolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteResourcePolicyRequest::DeleteResourcePolicyRequest(const DeleteResourcePolicyRequest &other)
    : CloudWatchLogsRequest(new DeleteResourcePolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteResourcePolicyRequest object.
 */
DeleteResourcePolicyRequest::DeleteResourcePolicyRequest()
    : CloudWatchLogsRequest(new DeleteResourcePolicyRequestPrivate(CloudWatchLogsRequest::DeleteResourcePolicyAction, this))
{

}

bool DeleteResourcePolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteResourcePolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteResourcePolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchLogsClient::send
 */
AwsAbstractResponse * DeleteResourcePolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteResourcePolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteResourcePolicyRequestPrivate
 *
 * @brief  Private implementation for DeleteResourcePolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteResourcePolicyRequestPrivate object.
 *
 * @param  action  CloudWatchLogs action being performed.
 * @param  q       Pointer to this object's public DeleteResourcePolicyRequest instance.
 */
DeleteResourcePolicyRequestPrivate::DeleteResourcePolicyRequestPrivate(
    const CloudWatchLogsRequest::Action action, DeleteResourcePolicyRequest * const q)
    : DeleteResourcePolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteResourcePolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteResourcePolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteResourcePolicyRequest instance.
 */
DeleteResourcePolicyRequestPrivate::DeleteResourcePolicyRequestPrivate(
    const DeleteResourcePolicyRequestPrivate &other, DeleteResourcePolicyRequest * const q)
    : DeleteResourcePolicyPrivate(other, q)
{

}

} // namespace CloudWatchLogs
} // namespace AWS
