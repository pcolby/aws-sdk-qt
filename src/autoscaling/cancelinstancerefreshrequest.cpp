/*
    Copyright 2013-2021 Paul Colby

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

#include "cancelinstancerefreshrequest.h"
#include "cancelinstancerefreshrequest_p.h"
#include "cancelinstancerefreshresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::CancelInstanceRefreshRequest
 * \brief The CancelInstanceRefreshRequest class provides an interface for AutoScaling CancelInstanceRefresh requests.
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
 * \sa AutoScalingClient::cancelInstanceRefresh
 */

/*!
 * Constructs a copy of \a other.
 */
CancelInstanceRefreshRequest::CancelInstanceRefreshRequest(const CancelInstanceRefreshRequest &other)
    : AutoScalingRequest(new CancelInstanceRefreshRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelInstanceRefreshRequest object.
 */
CancelInstanceRefreshRequest::CancelInstanceRefreshRequest()
    : AutoScalingRequest(new CancelInstanceRefreshRequestPrivate(AutoScalingRequest::CancelInstanceRefreshAction, this))
{

}

/*!
 * \reimp
 */
bool CancelInstanceRefreshRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelInstanceRefreshResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelInstanceRefreshRequest::response(QNetworkReply * const reply) const
{
    return new CancelInstanceRefreshResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::CancelInstanceRefreshRequestPrivate
 * \brief The CancelInstanceRefreshRequestPrivate class provides private implementation for CancelInstanceRefreshRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a CancelInstanceRefreshRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
CancelInstanceRefreshRequestPrivate::CancelInstanceRefreshRequestPrivate(
    const AutoScalingRequest::Action action, CancelInstanceRefreshRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelInstanceRefreshRequest
 * class' copy constructor.
 */
CancelInstanceRefreshRequestPrivate::CancelInstanceRefreshRequestPrivate(
    const CancelInstanceRefreshRequestPrivate &other, CancelInstanceRefreshRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
