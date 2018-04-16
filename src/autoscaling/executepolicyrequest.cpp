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

#include "executepolicyrequest.h"
#include "executepolicyrequest_p.h"
#include "executepolicyresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::ExecutePolicyRequest
 *
 * \brief The ExecutePolicyRequest class encapsulates AutoScaling ExecutePolicy requests.
 *
 * \ingroup AutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::executePolicy
 */

/*!
 * @brief  Constructs a new ExecutePolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ExecutePolicyRequest::ExecutePolicyRequest(const ExecutePolicyRequest &other)
    : AutoScalingRequest(new ExecutePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ExecutePolicyRequest object.
 */
ExecutePolicyRequest::ExecutePolicyRequest()
    : AutoScalingRequest(new ExecutePolicyRequestPrivate(AutoScalingRequest::ExecutePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool ExecutePolicyRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ExecutePolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ExecutePolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
QtAws::Core::AwsAbstractResponse * ExecutePolicyRequest::response(QNetworkReply * const reply) const
{
    return new ExecutePolicyResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ExecutePolicyRequestPrivate
 *
 * @brief  Private implementation for ExecutePolicyRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ExecutePolicyRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public ExecutePolicyRequest instance.
 */
ExecutePolicyRequestPrivate::ExecutePolicyRequestPrivate(
    const AutoScalingRequest::Action action, ExecutePolicyRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ExecutePolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ExecutePolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ExecutePolicyRequest instance.
 */
ExecutePolicyRequestPrivate::ExecutePolicyRequestPrivate(
    const ExecutePolicyRequestPrivate &other, ExecutePolicyRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
