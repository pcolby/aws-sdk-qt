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

#include "putscalingpolicyrequest.h"
#include "putscalingpolicyrequest_p.h"
#include "putscalingpolicyresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::PutScalingPolicyRequest
 *
 * \brief The PutScalingPolicyRequest class provides an interface for AutoScaling PutScalingPolicy requests.
 *
 * \ingroup AutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::putScalingPolicy
 */

/*!
 * @brief  Constructs a new PutScalingPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutScalingPolicyRequest::PutScalingPolicyRequest(const PutScalingPolicyRequest &other)
    : AutoScalingRequest(new PutScalingPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new PutScalingPolicyRequest object.
 */
PutScalingPolicyRequest::PutScalingPolicyRequest()
    : AutoScalingRequest(new PutScalingPolicyRequestPrivate(AutoScalingRequest::PutScalingPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutScalingPolicyRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an PutScalingPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutScalingPolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
QtAws::Core::AwsAbstractResponse * PutScalingPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutScalingPolicyResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  PutScalingPolicyRequestPrivate
 *
 * @brief  Private implementation for PutScalingPolicyRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PutScalingPolicyRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public PutScalingPolicyRequest instance.
 */
PutScalingPolicyRequestPrivate::PutScalingPolicyRequestPrivate(
    const AutoScalingRequest::Action action, PutScalingPolicyRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new PutScalingPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutScalingPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutScalingPolicyRequest instance.
 */
PutScalingPolicyRequestPrivate::PutScalingPolicyRequestPrivate(
    const PutScalingPolicyRequestPrivate &other, PutScalingPolicyRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
