// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describelaunchconfigurationsrequest.h"
#include "describelaunchconfigurationsrequest_p.h"
#include "describelaunchconfigurationsresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeLaunchConfigurationsRequest
 * \brief The DescribeLaunchConfigurationsRequest class provides an interface for AutoScaling DescribeLaunchConfigurations requests.
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
 * \sa AutoScalingClient::describeLaunchConfigurations
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeLaunchConfigurationsRequest::DescribeLaunchConfigurationsRequest(const DescribeLaunchConfigurationsRequest &other)
    : AutoScalingRequest(new DescribeLaunchConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeLaunchConfigurationsRequest object.
 */
DescribeLaunchConfigurationsRequest::DescribeLaunchConfigurationsRequest()
    : AutoScalingRequest(new DescribeLaunchConfigurationsRequestPrivate(AutoScalingRequest::DescribeLaunchConfigurationsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLaunchConfigurationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeLaunchConfigurationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLaunchConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLaunchConfigurationsResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::DescribeLaunchConfigurationsRequestPrivate
 * \brief The DescribeLaunchConfigurationsRequestPrivate class provides private implementation for DescribeLaunchConfigurationsRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeLaunchConfigurationsRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
DescribeLaunchConfigurationsRequestPrivate::DescribeLaunchConfigurationsRequestPrivate(
    const AutoScalingRequest::Action action, DescribeLaunchConfigurationsRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeLaunchConfigurationsRequest
 * class' copy constructor.
 */
DescribeLaunchConfigurationsRequestPrivate::DescribeLaunchConfigurationsRequestPrivate(
    const DescribeLaunchConfigurationsRequestPrivate &other, DescribeLaunchConfigurationsRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
