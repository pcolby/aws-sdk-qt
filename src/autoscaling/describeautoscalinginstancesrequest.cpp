// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeautoscalinginstancesrequest.h"
#include "describeautoscalinginstancesrequest_p.h"
#include "describeautoscalinginstancesresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeAutoScalingInstancesRequest
 * \brief The DescribeAutoScalingInstancesRequest class provides an interface for AutoScaling DescribeAutoScalingInstances requests.
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
 * \sa AutoScalingClient::describeAutoScalingInstances
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAutoScalingInstancesRequest::DescribeAutoScalingInstancesRequest(const DescribeAutoScalingInstancesRequest &other)
    : AutoScalingRequest(new DescribeAutoScalingInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAutoScalingInstancesRequest object.
 */
DescribeAutoScalingInstancesRequest::DescribeAutoScalingInstancesRequest()
    : AutoScalingRequest(new DescribeAutoScalingInstancesRequestPrivate(AutoScalingRequest::DescribeAutoScalingInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAutoScalingInstancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAutoScalingInstancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAutoScalingInstancesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAutoScalingInstancesResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::DescribeAutoScalingInstancesRequestPrivate
 * \brief The DescribeAutoScalingInstancesRequestPrivate class provides private implementation for DescribeAutoScalingInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeAutoScalingInstancesRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
DescribeAutoScalingInstancesRequestPrivate::DescribeAutoScalingInstancesRequestPrivate(
    const AutoScalingRequest::Action action, DescribeAutoScalingInstancesRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAutoScalingInstancesRequest
 * class' copy constructor.
 */
DescribeAutoScalingInstancesRequestPrivate::DescribeAutoScalingInstancesRequestPrivate(
    const DescribeAutoScalingInstancesRequestPrivate &other, DescribeAutoScalingInstancesRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
