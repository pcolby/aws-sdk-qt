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

#include "deletescalingpolicyrequest.h"
#include "deletescalingpolicyrequest_p.h"
#include "deletescalingpolicyresponse.h"
#include "applicationautoscalingrequest_p.h"

namespace QtAws {
namespace ApplicationAutoScaling {

/**
 * @class  DeleteScalingPolicyRequest
 *
 * @brief  Implements ApplicationAutoScaling DeleteScalingPolicy requests.
 *
 * @see    ApplicationAutoScalingClient::deleteScalingPolicy
 */

/**
 * @brief  Constructs a new DeleteScalingPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteScalingPolicyRequest::DeleteScalingPolicyRequest(const DeleteScalingPolicyRequest &other)
    : ApplicationAutoScalingRequest(new DeleteScalingPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteScalingPolicyRequest object.
 */
DeleteScalingPolicyRequest::DeleteScalingPolicyRequest()
    : ApplicationAutoScalingRequest(new DeleteScalingPolicyRequestPrivate(ApplicationAutoScalingRequest::DeleteScalingPolicyAction, this))
{

}

bool DeleteScalingPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteScalingPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteScalingPolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ApplicationAutoScalingClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteScalingPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteScalingPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteScalingPolicyRequestPrivate
 *
 * @brief  Private implementation for DeleteScalingPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteScalingPolicyRequestPrivate object.
 *
 * @param  action  ApplicationAutoScaling action being performed.
 * @param  q       Pointer to this object's public DeleteScalingPolicyRequest instance.
 */
DeleteScalingPolicyRequestPrivate::DeleteScalingPolicyRequestPrivate(
    const ApplicationAutoScalingRequest::Action action, DeleteScalingPolicyRequest * const q)
    : ApplicationAutoScalingRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteScalingPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteScalingPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteScalingPolicyRequest instance.
 */
DeleteScalingPolicyRequestPrivate::DeleteScalingPolicyRequestPrivate(
    const DeleteScalingPolicyRequestPrivate &other, DeleteScalingPolicyRequest * const q)
    : ApplicationAutoScalingRequestPrivate(other, q)
{

}

} // namespace ApplicationAutoScaling
} // namespace QtAws
