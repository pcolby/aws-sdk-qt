// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describescheduledactionsrequest.h"
#include "describescheduledactionsrequest_p.h"
#include "describescheduledactionsresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeScheduledActionsRequest
 * \brief The DescribeScheduledActionsRequest class provides an interface for AutoScaling DescribeScheduledActions requests.
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
 * \sa AutoScalingClient::describeScheduledActions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeScheduledActionsRequest::DescribeScheduledActionsRequest(const DescribeScheduledActionsRequest &other)
    : AutoScalingRequest(new DescribeScheduledActionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeScheduledActionsRequest object.
 */
DescribeScheduledActionsRequest::DescribeScheduledActionsRequest()
    : AutoScalingRequest(new DescribeScheduledActionsRequestPrivate(AutoScalingRequest::DescribeScheduledActionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeScheduledActionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeScheduledActionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeScheduledActionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeScheduledActionsResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::DescribeScheduledActionsRequestPrivate
 * \brief The DescribeScheduledActionsRequestPrivate class provides private implementation for DescribeScheduledActionsRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeScheduledActionsRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
DescribeScheduledActionsRequestPrivate::DescribeScheduledActionsRequestPrivate(
    const AutoScalingRequest::Action action, DescribeScheduledActionsRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeScheduledActionsRequest
 * class' copy constructor.
 */
DescribeScheduledActionsRequestPrivate::DescribeScheduledActionsRequestPrivate(
    const DescribeScheduledActionsRequestPrivate &other, DescribeScheduledActionsRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
