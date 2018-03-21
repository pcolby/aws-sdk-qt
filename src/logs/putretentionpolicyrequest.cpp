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

#include "putretentionpolicyrequest.h"
#include "putretentionpolicyrequest_p.h"
#include "putretentionpolicyresponse.h"
#include "cloudwatchlogsrequest_p.h"

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  PutRetentionPolicyRequest
 *
 * @brief  Implements CloudWatchLogs PutRetentionPolicy requests.
 *
 * @see    CloudWatchLogsClient::putRetentionPolicy
 */

/**
 * @brief  Constructs a new PutRetentionPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutRetentionPolicyResponse::PutRetentionPolicyResponse(

/**
 * @brief  Constructs a new PutRetentionPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutRetentionPolicyRequest::PutRetentionPolicyRequest(const PutRetentionPolicyRequest &other)
    : CloudWatchLogsRequest(new PutRetentionPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutRetentionPolicyRequest object.
 */
PutRetentionPolicyRequest::PutRetentionPolicyRequest()
    : CloudWatchLogsRequest(new PutRetentionPolicyRequestPrivate(CloudWatchLogsRequest::PutRetentionPolicyAction, this))
{

}

bool PutRetentionPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutRetentionPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutRetentionPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchLogsClient::send
 */
AwsAbstractResponse * PutRetentionPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutRetentionPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutRetentionPolicyRequestPrivate
 *
 * @brief  Private implementation for PutRetentionPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutRetentionPolicyRequestPrivate object.
 *
 * @param  action  CloudWatchLogs action being performed.
 * @param  q       Pointer to this object's public PutRetentionPolicyRequest instance.
 */
PutRetentionPolicyRequestPrivate::PutRetentionPolicyRequestPrivate(
    const CloudWatchLogsRequest::Action action, PutRetentionPolicyRequest * const q)
    : PutRetentionPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutRetentionPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutRetentionPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutRetentionPolicyRequest instance.
 */
PutRetentionPolicyRequestPrivate::PutRetentionPolicyRequestPrivate(
    const PutRetentionPolicyRequestPrivate &other, PutRetentionPolicyRequest * const q)
    : PutRetentionPolicyPrivate(other, q)
{

}
