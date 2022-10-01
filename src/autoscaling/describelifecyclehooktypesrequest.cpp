// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describelifecyclehooktypesrequest.h"
#include "describelifecyclehooktypesrequest_p.h"
#include "describelifecyclehooktypesresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeLifecycleHookTypesRequest
 * \brief The DescribeLifecycleHookTypesRequest class provides an interface for AutoScaling DescribeLifecycleHookTypes requests.
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
 * \sa AutoScalingClient::describeLifecycleHookTypes
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeLifecycleHookTypesRequest::DescribeLifecycleHookTypesRequest(const DescribeLifecycleHookTypesRequest &other)
    : AutoScalingRequest(new DescribeLifecycleHookTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeLifecycleHookTypesRequest object.
 */
DescribeLifecycleHookTypesRequest::DescribeLifecycleHookTypesRequest()
    : AutoScalingRequest(new DescribeLifecycleHookTypesRequestPrivate(AutoScalingRequest::DescribeLifecycleHookTypesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLifecycleHookTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeLifecycleHookTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLifecycleHookTypesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLifecycleHookTypesResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::DescribeLifecycleHookTypesRequestPrivate
 * \brief The DescribeLifecycleHookTypesRequestPrivate class provides private implementation for DescribeLifecycleHookTypesRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeLifecycleHookTypesRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
DescribeLifecycleHookTypesRequestPrivate::DescribeLifecycleHookTypesRequestPrivate(
    const AutoScalingRequest::Action action, DescribeLifecycleHookTypesRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeLifecycleHookTypesRequest
 * class' copy constructor.
 */
DescribeLifecycleHookTypesRequestPrivate::DescribeLifecycleHookTypesRequestPrivate(
    const DescribeLifecycleHookTypesRequestPrivate &other, DescribeLifecycleHookTypesRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
