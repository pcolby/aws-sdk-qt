// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeinstancerefreshesrequest.h"
#include "describeinstancerefreshesrequest_p.h"
#include "describeinstancerefreshesresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeInstanceRefreshesRequest
 * \brief The DescribeInstanceRefreshesRequest class provides an interface for AutoScaling DescribeInstanceRefreshes requests.
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
 * \sa AutoScalingClient::describeInstanceRefreshes
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeInstanceRefreshesRequest::DescribeInstanceRefreshesRequest(const DescribeInstanceRefreshesRequest &other)
    : AutoScalingRequest(new DescribeInstanceRefreshesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeInstanceRefreshesRequest object.
 */
DescribeInstanceRefreshesRequest::DescribeInstanceRefreshesRequest()
    : AutoScalingRequest(new DescribeInstanceRefreshesRequestPrivate(AutoScalingRequest::DescribeInstanceRefreshesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeInstanceRefreshesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeInstanceRefreshesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeInstanceRefreshesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeInstanceRefreshesResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::DescribeInstanceRefreshesRequestPrivate
 * \brief The DescribeInstanceRefreshesRequestPrivate class provides private implementation for DescribeInstanceRefreshesRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeInstanceRefreshesRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
DescribeInstanceRefreshesRequestPrivate::DescribeInstanceRefreshesRequestPrivate(
    const AutoScalingRequest::Action action, DescribeInstanceRefreshesRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeInstanceRefreshesRequest
 * class' copy constructor.
 */
DescribeInstanceRefreshesRequestPrivate::DescribeInstanceRefreshesRequestPrivate(
    const DescribeInstanceRefreshesRequestPrivate &other, DescribeInstanceRefreshesRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
