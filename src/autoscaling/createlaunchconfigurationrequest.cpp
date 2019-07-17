/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service with AWS Auto Scaling, Amazon CloudWatch, and Elastic Load
 * 
 *  Balancing>
 * 
 *  For more information, see the <a
 *  href="http://docs.aws.amazon.com/autoscaling/ec2/userguide/what-is-amazon-ec2-auto-scaling.html">Amazon EC2 Auto Scaling
 *  User
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
