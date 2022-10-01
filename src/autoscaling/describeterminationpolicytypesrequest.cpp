// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeterminationpolicytypesrequest.h"
#include "describeterminationpolicytypesrequest_p.h"
#include "describeterminationpolicytypesresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeTerminationPolicyTypesRequest
 * \brief The DescribeTerminationPolicyTypesRequest class provides an interface for AutoScaling DescribeTerminationPolicyTypes requests.
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
 * \sa AutoScalingClient::describeTerminationPolicyTypes
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeTerminationPolicyTypesRequest::DescribeTerminationPolicyTypesRequest(const DescribeTerminationPolicyTypesRequest &other)
    : AutoScalingRequest(new DescribeTerminationPolicyTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeTerminationPolicyTypesRequest object.
 */
DescribeTerminationPolicyTypesRequest::DescribeTerminationPolicyTypesRequest()
    : AutoScalingRequest(new DescribeTerminationPolicyTypesRequestPrivate(AutoScalingRequest::DescribeTerminationPolicyTypesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeTerminationPolicyTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeTerminationPolicyTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTerminationPolicyTypesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTerminationPolicyTypesResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::DescribeTerminationPolicyTypesRequestPrivate
 * \brief The DescribeTerminationPolicyTypesRequestPrivate class provides private implementation for DescribeTerminationPolicyTypesRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeTerminationPolicyTypesRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
DescribeTerminationPolicyTypesRequestPrivate::DescribeTerminationPolicyTypesRequestPrivate(
    const AutoScalingRequest::Action action, DescribeTerminationPolicyTypesRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeTerminationPolicyTypesRequest
 * class' copy constructor.
 */
DescribeTerminationPolicyTypesRequestPrivate::DescribeTerminationPolicyTypesRequestPrivate(
    const DescribeTerminationPolicyTypesRequestPrivate &other, DescribeTerminationPolicyTypesRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
