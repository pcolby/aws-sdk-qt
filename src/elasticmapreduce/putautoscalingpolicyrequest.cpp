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

#include "putautoscalingpolicyrequest.h"
#include "putautoscalingpolicyrequest_p.h"
#include "putautoscalingpolicyresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/**
 * @class  PutAutoScalingPolicyRequest
 *
 * @brief  Implements EMR PutAutoScalingPolicy requests.
 *
 * @see    EMRClient::putAutoScalingPolicy
 */

/**
 * @brief  Constructs a new PutAutoScalingPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutAutoScalingPolicyRequest::PutAutoScalingPolicyRequest(const PutAutoScalingPolicyRequest &other)
    : EMRRequest(new PutAutoScalingPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutAutoScalingPolicyRequest object.
 */
PutAutoScalingPolicyRequest::PutAutoScalingPolicyRequest()
    : EMRRequest(new PutAutoScalingPolicyRequestPrivate(EMRRequest::PutAutoScalingPolicyAction, this))
{

}

bool PutAutoScalingPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutAutoScalingPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutAutoScalingPolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EMRClient::send
 */
QtAws::Core::AwsAbstractResponse * PutAutoScalingPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutAutoScalingPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutAutoScalingPolicyRequestPrivate
 *
 * @brief  Private implementation for PutAutoScalingPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutAutoScalingPolicyRequestPrivate object.
 *
 * @param  action  EMR action being performed.
 * @param  q       Pointer to this object's public PutAutoScalingPolicyRequest instance.
 */
PutAutoScalingPolicyRequestPrivate::PutAutoScalingPolicyRequestPrivate(
    const EMRRequest::Action action, PutAutoScalingPolicyRequest * const q)
    : PutAutoScalingPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutAutoScalingPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutAutoScalingPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutAutoScalingPolicyRequest instance.
 */
PutAutoScalingPolicyRequestPrivate::PutAutoScalingPolicyRequestPrivate(
    const PutAutoScalingPolicyRequestPrivate &other, PutAutoScalingPolicyRequest * const q)
    : PutAutoScalingPolicyPrivate(other, q)
{

}

} // namespace EMR
} // namespace QtAws
