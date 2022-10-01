// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setinstanceprotectionrequest.h"
#include "setinstanceprotectionrequest_p.h"
#include "setinstanceprotectionresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::SetInstanceProtectionRequest
 * \brief The SetInstanceProtectionRequest class provides an interface for AutoScaling SetInstanceProtection requests.
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
 * \sa AutoScalingClient::setInstanceProtection
 */

/*!
 * Constructs a copy of \a other.
 */
SetInstanceProtectionRequest::SetInstanceProtectionRequest(const SetInstanceProtectionRequest &other)
    : AutoScalingRequest(new SetInstanceProtectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SetInstanceProtectionRequest object.
 */
SetInstanceProtectionRequest::SetInstanceProtectionRequest()
    : AutoScalingRequest(new SetInstanceProtectionRequestPrivate(AutoScalingRequest::SetInstanceProtectionAction, this))
{

}

/*!
 * \reimp
 */
bool SetInstanceProtectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SetInstanceProtectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SetInstanceProtectionRequest::response(QNetworkReply * const reply) const
{
    return new SetInstanceProtectionResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::SetInstanceProtectionRequestPrivate
 * \brief The SetInstanceProtectionRequestPrivate class provides private implementation for SetInstanceProtectionRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a SetInstanceProtectionRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
SetInstanceProtectionRequestPrivate::SetInstanceProtectionRequestPrivate(
    const AutoScalingRequest::Action action, SetInstanceProtectionRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SetInstanceProtectionRequest
 * class' copy constructor.
 */
SetInstanceProtectionRequestPrivate::SetInstanceProtectionRequestPrivate(
    const SetInstanceProtectionRequestPrivate &other, SetInstanceProtectionRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
