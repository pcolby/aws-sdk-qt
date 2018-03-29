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

#include "deleteretentionpolicyrequest.h"
#include "deleteretentionpolicyrequest_p.h"
#include "deleteretentionpolicyresponse.h"
#include "cloudwatchlogsrequest_p.h"

namespace QtAws {
namespace CloudWatchLogs {

/**
 * @class  DeleteRetentionPolicyRequest
 *
 * @brief  Implements CloudWatchLogs DeleteRetentionPolicy requests.
 *
 * @see    CloudWatchLogsClient::deleteRetentionPolicy
 */

/**
 * @brief  Constructs a new DeleteRetentionPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteRetentionPolicyRequest::DeleteRetentionPolicyRequest(const DeleteRetentionPolicyRequest &other)
    : CloudWatchLogsRequest(new DeleteRetentionPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteRetentionPolicyRequest object.
 */
DeleteRetentionPolicyRequest::DeleteRetentionPolicyRequest()
    : CloudWatchLogsRequest(new DeleteRetentionPolicyRequestPrivate(CloudWatchLogsRequest::DeleteRetentionPolicyAction, this))
{

}

bool DeleteRetentionPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteRetentionPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteRetentionPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchLogsClient::send
 */
AwsAbstractResponse * DeleteRetentionPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRetentionPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteRetentionPolicyRequestPrivate
 *
 * @brief  Private implementation for DeleteRetentionPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRetentionPolicyRequestPrivate object.
 *
 * @param  action  CloudWatchLogs action being performed.
 * @param  q       Pointer to this object's public DeleteRetentionPolicyRequest instance.
 */
DeleteRetentionPolicyRequestPrivate::DeleteRetentionPolicyRequestPrivate(
    const CloudWatchLogsRequest::Action action, DeleteRetentionPolicyRequest * const q)
    : DeleteRetentionPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRetentionPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteRetentionPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteRetentionPolicyRequest instance.
 */
DeleteRetentionPolicyRequestPrivate::DeleteRetentionPolicyRequestPrivate(
    const DeleteRetentionPolicyRequestPrivate &other, DeleteRetentionPolicyRequest * const q)
    : DeleteRetentionPolicyPrivate(other, q)
{

}

} // namespace CloudWatchLogs
} // namespace QtAws
