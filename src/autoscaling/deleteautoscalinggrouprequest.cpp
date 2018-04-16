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

#include "deleteautoscalinggrouprequest.h"
#include "deleteautoscalinggrouprequest_p.h"
#include "deleteautoscalinggroupresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DeleteAutoScalingGroupRequest
 *
 * \brief The DeleteAutoScalingGroupRequest class encapsulates AutoScaling DeleteAutoScalingGroup requests.
 *
 * \ingroup AutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::deleteAutoScalingGroup
 */

/*!
 * @brief  Constructs a new DeleteAutoScalingGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteAutoScalingGroupRequest::DeleteAutoScalingGroupRequest(const DeleteAutoScalingGroupRequest &other)
    : AutoScalingRequest(new DeleteAutoScalingGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteAutoScalingGroupRequest object.
 */
DeleteAutoScalingGroupRequest::DeleteAutoScalingGroupRequest()
    : AutoScalingRequest(new DeleteAutoScalingGroupRequestPrivate(AutoScalingRequest::DeleteAutoScalingGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAutoScalingGroupRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteAutoScalingGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteAutoScalingGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAutoScalingGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAutoScalingGroupResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteAutoScalingGroupRequestPrivate
 *
 * @brief  Private implementation for DeleteAutoScalingGroupRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteAutoScalingGroupRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public DeleteAutoScalingGroupRequest instance.
 */
DeleteAutoScalingGroupRequestPrivate::DeleteAutoScalingGroupRequestPrivate(
    const AutoScalingRequest::Action action, DeleteAutoScalingGroupRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteAutoScalingGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteAutoScalingGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteAutoScalingGroupRequest instance.
 */
DeleteAutoScalingGroupRequestPrivate::DeleteAutoScalingGroupRequestPrivate(
    const DeleteAutoScalingGroupRequestPrivate &other, DeleteAutoScalingGroupRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
