// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "attachloadbalancersrequest.h"
#include "attachloadbalancersrequest_p.h"
#include "attachloadbalancersresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::AttachLoadBalancersRequest
 * \brief The AttachLoadBalancersRequest class provides an interface for AutoScaling AttachLoadBalancers requests.
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
 * \sa AutoScalingClient::attachLoadBalancers
 */

/*!
 * Constructs a copy of \a other.
 */
AttachLoadBalancersRequest::AttachLoadBalancersRequest(const AttachLoadBalancersRequest &other)
    : AutoScalingRequest(new AttachLoadBalancersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AttachLoadBalancersRequest object.
 */
AttachLoadBalancersRequest::AttachLoadBalancersRequest()
    : AutoScalingRequest(new AttachLoadBalancersRequestPrivate(AutoScalingRequest::AttachLoadBalancersAction, this))
{

}

/*!
 * \reimp
 */
bool AttachLoadBalancersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AttachLoadBalancersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AttachLoadBalancersRequest::response(QNetworkReply * const reply) const
{
    return new AttachLoadBalancersResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::AttachLoadBalancersRequestPrivate
 * \brief The AttachLoadBalancersRequestPrivate class provides private implementation for AttachLoadBalancersRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a AttachLoadBalancersRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
AttachLoadBalancersRequestPrivate::AttachLoadBalancersRequestPrivate(
    const AutoScalingRequest::Action action, AttachLoadBalancersRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AttachLoadBalancersRequest
 * class' copy constructor.
 */
AttachLoadBalancersRequestPrivate::AttachLoadBalancersRequestPrivate(
    const AttachLoadBalancersRequestPrivate &other, AttachLoadBalancersRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
