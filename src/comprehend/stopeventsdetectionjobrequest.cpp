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

#include "stopeventsdetectionjobrequest.h"
#include "stopeventsdetectionjobrequest_p.h"
#include "stopeventsdetectionjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StopEventsDetectionJobRequest
 * \brief The StopEventsDetectionJobRequest class provides an interface for Comprehend StopEventsDetectionJob requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::stopEventsDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopEventsDetectionJobRequest::StopEventsDetectionJobRequest(const StopEventsDetectionJobRequest &other)
    : ComprehendRequest(new StopEventsDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopEventsDetectionJobRequest object.
 */
StopEventsDetectionJobRequest::StopEventsDetectionJobRequest()
    : ComprehendRequest(new StopEventsDetectionJobRequestPrivate(ComprehendRequest::StopEventsDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopEventsDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopEventsDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopEventsDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new StopEventsDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::StopEventsDetectionJobRequestPrivate
 * \brief The StopEventsDetectionJobRequestPrivate class provides private implementation for StopEventsDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StopEventsDetectionJobRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
StopEventsDetectionJobRequestPrivate::StopEventsDetectionJobRequestPrivate(
    const ComprehendRequest::Action action, StopEventsDetectionJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopEventsDetectionJobRequest
 * class' copy constructor.
 */
StopEventsDetectionJobRequestPrivate::StopEventsDetectionJobRequestPrivate(
    const StopEventsDetectionJobRequestPrivate &other, StopEventsDetectionJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
