// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describepoliciesrequest.h"
#include "describepoliciesrequest_p.h"
#include "describepoliciesresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribePoliciesRequest
 * \brief The DescribePoliciesRequest class provides an interface for AutoScaling DescribePolicies requests.
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
 * \sa AutoScalingClient::describePolicies
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePoliciesRequest::DescribePoliciesRequest(const DescribePoliciesRequest &other)
    : AutoScalingRequest(new DescribePoliciesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePoliciesRequest object.
 */
DescribePoliciesRequest::DescribePoliciesRequest()
    : AutoScalingRequest(new DescribePoliciesRequestPrivate(AutoScalingRequest::DescribePoliciesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribePoliciesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribePoliciesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePoliciesRequest::response(QNetworkReply * const reply) const
{
    return new DescribePoliciesResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::DescribePoliciesRequestPrivate
 * \brief The DescribePoliciesRequestPrivate class provides private implementation for DescribePoliciesRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribePoliciesRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
DescribePoliciesRequestPrivate::DescribePoliciesRequestPrivate(
    const AutoScalingRequest::Action action, DescribePoliciesRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribePoliciesRequest
 * class' copy constructor.
 */
DescribePoliciesRequestPrivate::DescribePoliciesRequestPrivate(
    const DescribePoliciesRequestPrivate &other, DescribePoliciesRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
