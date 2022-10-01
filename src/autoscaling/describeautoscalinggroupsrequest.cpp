// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeautoscalinggroupsrequest.h"
#include "describeautoscalinggroupsrequest_p.h"
#include "describeautoscalinggroupsresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeAutoScalingGroupsRequest
 * \brief The DescribeAutoScalingGroupsRequest class provides an interface for AutoScaling DescribeAutoScalingGroups requests.
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
 * \sa AutoScalingClient::describeAutoScalingGroups
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAutoScalingGroupsRequest::DescribeAutoScalingGroupsRequest(const DescribeAutoScalingGroupsRequest &other)
    : AutoScalingRequest(new DescribeAutoScalingGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAutoScalingGroupsRequest object.
 */
DescribeAutoScalingGroupsRequest::DescribeAutoScalingGroupsRequest()
    : AutoScalingRequest(new DescribeAutoScalingGroupsRequestPrivate(AutoScalingRequest::DescribeAutoScalingGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAutoScalingGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAutoScalingGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAutoScalingGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAutoScalingGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::DescribeAutoScalingGroupsRequestPrivate
 * \brief The DescribeAutoScalingGroupsRequestPrivate class provides private implementation for DescribeAutoScalingGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeAutoScalingGroupsRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
DescribeAutoScalingGroupsRequestPrivate::DescribeAutoScalingGroupsRequestPrivate(
    const AutoScalingRequest::Action action, DescribeAutoScalingGroupsRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAutoScalingGroupsRequest
 * class' copy constructor.
 */
DescribeAutoScalingGroupsRequestPrivate::DescribeAutoScalingGroupsRequestPrivate(
    const DescribeAutoScalingGroupsRequestPrivate &other, DescribeAutoScalingGroupsRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
