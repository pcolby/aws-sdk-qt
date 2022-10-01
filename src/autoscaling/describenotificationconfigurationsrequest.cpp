// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describenotificationconfigurationsrequest.h"
#include "describenotificationconfigurationsrequest_p.h"
#include "describenotificationconfigurationsresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeNotificationConfigurationsRequest
 * \brief The DescribeNotificationConfigurationsRequest class provides an interface for AutoScaling DescribeNotificationConfigurations requests.
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
 * \sa AutoScalingClient::describeNotificationConfigurations
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeNotificationConfigurationsRequest::DescribeNotificationConfigurationsRequest(const DescribeNotificationConfigurationsRequest &other)
    : AutoScalingRequest(new DescribeNotificationConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeNotificationConfigurationsRequest object.
 */
DescribeNotificationConfigurationsRequest::DescribeNotificationConfigurationsRequest()
    : AutoScalingRequest(new DescribeNotificationConfigurationsRequestPrivate(AutoScalingRequest::DescribeNotificationConfigurationsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeNotificationConfigurationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeNotificationConfigurationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeNotificationConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeNotificationConfigurationsResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::DescribeNotificationConfigurationsRequestPrivate
 * \brief The DescribeNotificationConfigurationsRequestPrivate class provides private implementation for DescribeNotificationConfigurationsRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeNotificationConfigurationsRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
DescribeNotificationConfigurationsRequestPrivate::DescribeNotificationConfigurationsRequestPrivate(
    const AutoScalingRequest::Action action, DescribeNotificationConfigurationsRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeNotificationConfigurationsRequest
 * class' copy constructor.
 */
DescribeNotificationConfigurationsRequestPrivate::DescribeNotificationConfigurationsRequestPrivate(
    const DescribeNotificationConfigurationsRequestPrivate &other, DescribeNotificationConfigurationsRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
