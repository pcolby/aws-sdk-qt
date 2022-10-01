// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startinstancerefreshrequest.h"
#include "startinstancerefreshrequest_p.h"
#include "startinstancerefreshresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::StartInstanceRefreshRequest
 * \brief The StartInstanceRefreshRequest class provides an interface for AutoScaling StartInstanceRefresh requests.
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
 * \sa AutoScalingClient::startInstanceRefresh
 */

/*!
 * Constructs a copy of \a other.
 */
StartInstanceRefreshRequest::StartInstanceRefreshRequest(const StartInstanceRefreshRequest &other)
    : AutoScalingRequest(new StartInstanceRefreshRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartInstanceRefreshRequest object.
 */
StartInstanceRefreshRequest::StartInstanceRefreshRequest()
    : AutoScalingRequest(new StartInstanceRefreshRequestPrivate(AutoScalingRequest::StartInstanceRefreshAction, this))
{

}

/*!
 * \reimp
 */
bool StartInstanceRefreshRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartInstanceRefreshResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartInstanceRefreshRequest::response(QNetworkReply * const reply) const
{
    return new StartInstanceRefreshResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::StartInstanceRefreshRequestPrivate
 * \brief The StartInstanceRefreshRequestPrivate class provides private implementation for StartInstanceRefreshRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a StartInstanceRefreshRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
StartInstanceRefreshRequestPrivate::StartInstanceRefreshRequestPrivate(
    const AutoScalingRequest::Action action, StartInstanceRefreshRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartInstanceRefreshRequest
 * class' copy constructor.
 */
StartInstanceRefreshRequestPrivate::StartInstanceRefreshRequestPrivate(
    const StartInstanceRefreshRequestPrivate &other, StartInstanceRefreshRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
