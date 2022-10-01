// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteautoscalinggrouprequest.h"
#include "deleteautoscalinggrouprequest_p.h"
#include "deleteautoscalinggroupresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DeleteAutoScalingGroupRequest
 * \brief The DeleteAutoScalingGroupRequest class provides an interface for AutoScaling DeleteAutoScalingGroup requests.
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
 * \sa AutoScalingClient::deleteAutoScalingGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAutoScalingGroupRequest::DeleteAutoScalingGroupRequest(const DeleteAutoScalingGroupRequest &other)
    : AutoScalingRequest(new DeleteAutoScalingGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAutoScalingGroupRequest object.
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
 * Returns a DeleteAutoScalingGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAutoScalingGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAutoScalingGroupResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::DeleteAutoScalingGroupRequestPrivate
 * \brief The DeleteAutoScalingGroupRequestPrivate class provides private implementation for DeleteAutoScalingGroupRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DeleteAutoScalingGroupRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
DeleteAutoScalingGroupRequestPrivate::DeleteAutoScalingGroupRequestPrivate(
    const AutoScalingRequest::Action action, DeleteAutoScalingGroupRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAutoScalingGroupRequest
 * class' copy constructor.
 */
DeleteAutoScalingGroupRequestPrivate::DeleteAutoScalingGroupRequestPrivate(
    const DeleteAutoScalingGroupRequestPrivate &other, DeleteAutoScalingGroupRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
