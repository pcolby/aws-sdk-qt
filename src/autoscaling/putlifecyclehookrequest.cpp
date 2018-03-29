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

#include "putlifecyclehookrequest.h"
#include "putlifecyclehookrequest_p.h"
#include "putlifecyclehookresponse.h"
#include "autoscalingrequest_p.h"

namespace AWS {
namespace AutoScaling {

/**
 * @class  PutLifecycleHookRequest
 *
 * @brief  Implements AutoScaling PutLifecycleHook requests.
 *
 * @see    AutoScalingClient::putLifecycleHook
 */

/**
 * @brief  Constructs a new PutLifecycleHookRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutLifecycleHookRequest::PutLifecycleHookRequest(const PutLifecycleHookRequest &other)
    : AutoScalingRequest(new PutLifecycleHookRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutLifecycleHookRequest object.
 */
PutLifecycleHookRequest::PutLifecycleHookRequest()
    : AutoScalingRequest(new PutLifecycleHookRequestPrivate(AutoScalingRequest::PutLifecycleHookAction, this))
{

}

bool PutLifecycleHookRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutLifecycleHookResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutLifecycleHookResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
AwsAbstractResponse * PutLifecycleHookRequest::response(QNetworkReply * const reply) const
{
    return new PutLifecycleHookResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutLifecycleHookRequestPrivate
 *
 * @brief  Private implementation for PutLifecycleHookRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutLifecycleHookRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public PutLifecycleHookRequest instance.
 */
PutLifecycleHookRequestPrivate::PutLifecycleHookRequestPrivate(
    const AutoScalingRequest::Action action, PutLifecycleHookRequest * const q)
    : PutLifecycleHookPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutLifecycleHookRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutLifecycleHookRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutLifecycleHookRequest instance.
 */
PutLifecycleHookRequestPrivate::PutLifecycleHookRequestPrivate(
    const PutLifecycleHookRequestPrivate &other, PutLifecycleHookRequest * const q)
    : PutLifecycleHookPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace AWS
