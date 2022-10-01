// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletelaunchconfigurationrequest.h"
#include "deletelaunchconfigurationrequest_p.h"
#include "deletelaunchconfigurationresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DeleteLaunchConfigurationRequest
 * \brief The DeleteLaunchConfigurationRequest class provides an interface for AutoScaling DeleteLaunchConfiguration requests.
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
 * \sa AutoScalingClient::deleteLaunchConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLaunchConfigurationRequest::DeleteLaunchConfigurationRequest(const DeleteLaunchConfigurationRequest &other)
    : AutoScalingRequest(new DeleteLaunchConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLaunchConfigurationRequest object.
 */
DeleteLaunchConfigurationRequest::DeleteLaunchConfigurationRequest()
    : AutoScalingRequest(new DeleteLaunchConfigurationRequestPrivate(AutoScalingRequest::DeleteLaunchConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLaunchConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLaunchConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLaunchConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLaunchConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::DeleteLaunchConfigurationRequestPrivate
 * \brief The DeleteLaunchConfigurationRequestPrivate class provides private implementation for DeleteLaunchConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DeleteLaunchConfigurationRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
DeleteLaunchConfigurationRequestPrivate::DeleteLaunchConfigurationRequestPrivate(
    const AutoScalingRequest::Action action, DeleteLaunchConfigurationRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLaunchConfigurationRequest
 * class' copy constructor.
 */
DeleteLaunchConfigurationRequestPrivate::DeleteLaunchConfigurationRequestPrivate(
    const DeleteLaunchConfigurationRequestPrivate &other, DeleteLaunchConfigurationRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
