// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeautoscalingnotificationtypesrequest.h"
#include "describeautoscalingnotificationtypesrequest_p.h"
#include "describeautoscalingnotificationtypesresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeAutoScalingNotificationTypesRequest
 * \brief The DescribeAutoScalingNotificationTypesRequest class provides an interface for AutoScaling DescribeAutoScalingNotificationTypes requests.
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
 * \sa AutoScalingClient::describeAutoScalingNotificationTypes
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAutoScalingNotificationTypesRequest::DescribeAutoScalingNotificationTypesRequest(const DescribeAutoScalingNotificationTypesRequest &other)
    : AutoScalingRequest(new DescribeAutoScalingNotificationTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAutoScalingNotificationTypesRequest object.
 */
DescribeAutoScalingNotificationTypesRequest::DescribeAutoScalingNotificationTypesRequest()
    : AutoScalingRequest(new DescribeAutoScalingNotificationTypesRequestPrivate(AutoScalingRequest::DescribeAutoScalingNotificationTypesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAutoScalingNotificationTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAutoScalingNotificationTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAutoScalingNotificationTypesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAutoScalingNotificationTypesResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::DescribeAutoScalingNotificationTypesRequestPrivate
 * \brief The DescribeAutoScalingNotificationTypesRequestPrivate class provides private implementation for DescribeAutoScalingNotificationTypesRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeAutoScalingNotificationTypesRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
DescribeAutoScalingNotificationTypesRequestPrivate::DescribeAutoScalingNotificationTypesRequestPrivate(
    const AutoScalingRequest::Action action, DescribeAutoScalingNotificationTypesRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAutoScalingNotificationTypesRequest
 * class' copy constructor.
 */
DescribeAutoScalingNotificationTypesRequestPrivate::DescribeAutoScalingNotificationTypesRequestPrivate(
    const DescribeAutoScalingNotificationTypesRequestPrivate &other, DescribeAutoScalingNotificationTypesRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
