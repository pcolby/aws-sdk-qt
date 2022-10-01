// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeaccountlimitsrequest.h"
#include "describeaccountlimitsrequest_p.h"
#include "describeaccountlimitsresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeAccountLimitsRequest
 * \brief The DescribeAccountLimitsRequest class provides an interface for AutoScaling DescribeAccountLimits requests.
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
 * \sa AutoScalingClient::describeAccountLimits
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAccountLimitsRequest::DescribeAccountLimitsRequest(const DescribeAccountLimitsRequest &other)
    : AutoScalingRequest(new DescribeAccountLimitsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAccountLimitsRequest object.
 */
DescribeAccountLimitsRequest::DescribeAccountLimitsRequest()
    : AutoScalingRequest(new DescribeAccountLimitsRequestPrivate(AutoScalingRequest::DescribeAccountLimitsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAccountLimitsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAccountLimitsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAccountLimitsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAccountLimitsResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::DescribeAccountLimitsRequestPrivate
 * \brief The DescribeAccountLimitsRequestPrivate class provides private implementation for DescribeAccountLimitsRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeAccountLimitsRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
DescribeAccountLimitsRequestPrivate::DescribeAccountLimitsRequestPrivate(
    const AutoScalingRequest::Action action, DescribeAccountLimitsRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAccountLimitsRequest
 * class' copy constructor.
 */
DescribeAccountLimitsRequestPrivate::DescribeAccountLimitsRequestPrivate(
    const DescribeAccountLimitsRequestPrivate &other, DescribeAccountLimitsRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
