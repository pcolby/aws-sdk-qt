/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createautoscalinggrouprequest.h"
#include "createautoscalinggrouprequest_p.h"
#include "createautoscalinggroupresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::CreateAutoScalingGroupRequest
 * \brief The CreateAutoScalingGroupRequest class provides an interface for AutoScaling CreateAutoScalingGroup requests.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch and terminate EC2 instances based on user-defined scaling
 *  policies, scheduled actions, and health
 * 
 *  checks>
 * 
 *  For more information, see the <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/">Amazon EC2 Auto Scaling
 *  User Guide</a> and the <a href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/Welcome.html">Amazon EC2 Auto
 *  Scaling API
 *
 * \sa AutoScalingClient::createAutoScalingGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAutoScalingGroupRequest::CreateAutoScalingGroupRequest(const CreateAutoScalingGroupRequest &other)
    : AutoScalingRequest(new CreateAutoScalingGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAutoScalingGroupRequest object.
 */
CreateAutoScalingGroupRequest::CreateAutoScalingGroupRequest()
    : AutoScalingRequest(new CreateAutoScalingGroupRequestPrivate(AutoScalingRequest::CreateAutoScalingGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAutoScalingGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAutoScalingGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAutoScalingGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateAutoScalingGroupResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::CreateAutoScalingGroupRequestPrivate
 * \brief The CreateAutoScalingGroupRequestPrivate class provides private implementation for CreateAutoScalingGroupRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a CreateAutoScalingGroupRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
CreateAutoScalingGroupRequestPrivate::CreateAutoScalingGroupRequestPrivate(
    const AutoScalingRequest::Action action, CreateAutoScalingGroupRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAutoScalingGroupRequest
 * class' copy constructor.
 */
CreateAutoScalingGroupRequestPrivate::CreateAutoScalingGroupRequestPrivate(
    const CreateAutoScalingGroupRequestPrivate &other, CreateAutoScalingGroupRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
