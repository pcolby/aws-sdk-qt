// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putnotificationconfigurationrequest.h"
#include "putnotificationconfigurationrequest_p.h"
#include "putnotificationconfigurationresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::PutNotificationConfigurationRequest
 * \brief The PutNotificationConfigurationRequest class provides an interface for AutoScaling PutNotificationConfiguration requests.
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
 * \sa AutoScalingClient::putNotificationConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
PutNotificationConfigurationRequest::PutNotificationConfigurationRequest(const PutNotificationConfigurationRequest &other)
    : AutoScalingRequest(new PutNotificationConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutNotificationConfigurationRequest object.
 */
PutNotificationConfigurationRequest::PutNotificationConfigurationRequest()
    : AutoScalingRequest(new PutNotificationConfigurationRequestPrivate(AutoScalingRequest::PutNotificationConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool PutNotificationConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutNotificationConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutNotificationConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new PutNotificationConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::PutNotificationConfigurationRequestPrivate
 * \brief The PutNotificationConfigurationRequestPrivate class provides private implementation for PutNotificationConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a PutNotificationConfigurationRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
PutNotificationConfigurationRequestPrivate::PutNotificationConfigurationRequestPrivate(
    const AutoScalingRequest::Action action, PutNotificationConfigurationRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutNotificationConfigurationRequest
 * class' copy constructor.
 */
PutNotificationConfigurationRequestPrivate::PutNotificationConfigurationRequestPrivate(
    const PutNotificationConfigurationRequestPrivate &other, PutNotificationConfigurationRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
