// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlaunchconfigurationrequest.h"
#include "createlaunchconfigurationrequest_p.h"
#include "createlaunchconfigurationresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::CreateLaunchConfigurationRequest
 * \brief The CreateLaunchConfigurationRequest class provides an interface for AutoScaling CreateLaunchConfiguration requests.
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
 * \sa AutoScalingClient::createLaunchConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLaunchConfigurationRequest::CreateLaunchConfigurationRequest(const CreateLaunchConfigurationRequest &other)
    : AutoScalingRequest(new CreateLaunchConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLaunchConfigurationRequest object.
 */
CreateLaunchConfigurationRequest::CreateLaunchConfigurationRequest()
    : AutoScalingRequest(new CreateLaunchConfigurationRequestPrivate(AutoScalingRequest::CreateLaunchConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLaunchConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLaunchConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLaunchConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new CreateLaunchConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::CreateLaunchConfigurationRequestPrivate
 * \brief The CreateLaunchConfigurationRequestPrivate class provides private implementation for CreateLaunchConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a CreateLaunchConfigurationRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
CreateLaunchConfigurationRequestPrivate::CreateLaunchConfigurationRequestPrivate(
    const AutoScalingRequest::Action action, CreateLaunchConfigurationRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLaunchConfigurationRequest
 * class' copy constructor.
 */
CreateLaunchConfigurationRequestPrivate::CreateLaunchConfigurationRequestPrivate(
    const CreateLaunchConfigurationRequestPrivate &other, CreateLaunchConfigurationRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
