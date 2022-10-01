// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putscheduledupdategroupactionrequest.h"
#include "putscheduledupdategroupactionrequest_p.h"
#include "putscheduledupdategroupactionresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::PutScheduledUpdateGroupActionRequest
 * \brief The PutScheduledUpdateGroupActionRequest class provides an interface for AutoScaling PutScheduledUpdateGroupAction requests.
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
 * \sa AutoScalingClient::putScheduledUpdateGroupAction
 */

/*!
 * Constructs a copy of \a other.
 */
PutScheduledUpdateGroupActionRequest::PutScheduledUpdateGroupActionRequest(const PutScheduledUpdateGroupActionRequest &other)
    : AutoScalingRequest(new PutScheduledUpdateGroupActionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutScheduledUpdateGroupActionRequest object.
 */
PutScheduledUpdateGroupActionRequest::PutScheduledUpdateGroupActionRequest()
    : AutoScalingRequest(new PutScheduledUpdateGroupActionRequestPrivate(AutoScalingRequest::PutScheduledUpdateGroupActionAction, this))
{

}

/*!
 * \reimp
 */
bool PutScheduledUpdateGroupActionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutScheduledUpdateGroupActionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutScheduledUpdateGroupActionRequest::response(QNetworkReply * const reply) const
{
    return new PutScheduledUpdateGroupActionResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::PutScheduledUpdateGroupActionRequestPrivate
 * \brief The PutScheduledUpdateGroupActionRequestPrivate class provides private implementation for PutScheduledUpdateGroupActionRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a PutScheduledUpdateGroupActionRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
PutScheduledUpdateGroupActionRequestPrivate::PutScheduledUpdateGroupActionRequestPrivate(
    const AutoScalingRequest::Action action, PutScheduledUpdateGroupActionRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutScheduledUpdateGroupActionRequest
 * class' copy constructor.
 */
PutScheduledUpdateGroupActionRequestPrivate::PutScheduledUpdateGroupActionRequestPrivate(
    const PutScheduledUpdateGroupActionRequestPrivate &other, PutScheduledUpdateGroupActionRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
