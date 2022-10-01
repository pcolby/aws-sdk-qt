// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletenotificationconfigurationrequest.h"
#include "deletenotificationconfigurationrequest_p.h"
#include "deletenotificationconfigurationresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DeleteNotificationConfigurationRequest
 * \brief The DeleteNotificationConfigurationRequest class provides an interface for AutoScaling DeleteNotificationConfiguration requests.
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
 * \sa AutoScalingClient::deleteNotificationConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteNotificationConfigurationRequest::DeleteNotificationConfigurationRequest(const DeleteNotificationConfigurationRequest &other)
    : AutoScalingRequest(new DeleteNotificationConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteNotificationConfigurationRequest object.
 */
DeleteNotificationConfigurationRequest::DeleteNotificationConfigurationRequest()
    : AutoScalingRequest(new DeleteNotificationConfigurationRequestPrivate(AutoScalingRequest::DeleteNotificationConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteNotificationConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteNotificationConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteNotificationConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteNotificationConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::DeleteNotificationConfigurationRequestPrivate
 * \brief The DeleteNotificationConfigurationRequestPrivate class provides private implementation for DeleteNotificationConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DeleteNotificationConfigurationRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
DeleteNotificationConfigurationRequestPrivate::DeleteNotificationConfigurationRequestPrivate(
    const AutoScalingRequest::Action action, DeleteNotificationConfigurationRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteNotificationConfigurationRequest
 * class' copy constructor.
 */
DeleteNotificationConfigurationRequestPrivate::DeleteNotificationConfigurationRequestPrivate(
    const DeleteNotificationConfigurationRequestPrivate &other, DeleteNotificationConfigurationRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
