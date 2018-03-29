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

#include "putresourcepolicyrequest.h"
#include "putresourcepolicyrequest_p.h"
#include "putresourcepolicyresponse.h"
#include "cloudwatchlogsrequest_p.h"

namespace QtAws {
namespace CloudWatchLogs {

/**
 * @class  PutResourcePolicyRequest
 *
 * @brief  Implements CloudWatchLogs PutResourcePolicy requests.
 *
 * @see    CloudWatchLogsClient::putResourcePolicy
 */

/**
 * @brief  Constructs a new PutResourcePolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutResourcePolicyRequest::PutResourcePolicyRequest(const PutResourcePolicyRequest &other)
    : CloudWatchLogsRequest(new PutResourcePolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutResourcePolicyRequest object.
 */
PutResourcePolicyRequest::PutResourcePolicyRequest()
    : CloudWatchLogsRequest(new PutResourcePolicyRequestPrivate(CloudWatchLogsRequest::PutResourcePolicyAction, this))
{

}

bool PutResourcePolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutResourcePolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutResourcePolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudWatchLogsClient::send
 */
QtAws::Core::AwsAbstractResponse * PutResourcePolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutResourcePolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutResourcePolicyRequestPrivate
 *
 * @brief  Private implementation for PutResourcePolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutResourcePolicyRequestPrivate object.
 *
 * @param  action  CloudWatchLogs action being performed.
 * @param  q       Pointer to this object's public PutResourcePolicyRequest instance.
 */
PutResourcePolicyRequestPrivate::PutResourcePolicyRequestPrivate(
    const CloudWatchLogsRequest::Action action, PutResourcePolicyRequest * const q)
    : PutResourcePolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutResourcePolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutResourcePolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutResourcePolicyRequest instance.
 */
PutResourcePolicyRequestPrivate::PutResourcePolicyRequestPrivate(
    const PutResourcePolicyRequestPrivate &other, PutResourcePolicyRequest * const q)
    : PutResourcePolicyPrivate(other, q)
{

}

} // namespace CloudWatchLogs
} // namespace QtAws
