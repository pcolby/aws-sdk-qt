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

#include "starteventsdetectionjobrequest.h"
#include "starteventsdetectionjobrequest_p.h"
#include "starteventsdetectionjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StartEventsDetectionJobRequest
 * \brief The StartEventsDetectionJobRequest class provides an interface for Comprehend StartEventsDetectionJob requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::startEventsDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartEventsDetectionJobRequest::StartEventsDetectionJobRequest(const StartEventsDetectionJobRequest &other)
    : ComprehendRequest(new StartEventsDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartEventsDetectionJobRequest object.
 */
StartEventsDetectionJobRequest::StartEventsDetectionJobRequest()
    : ComprehendRequest(new StartEventsDetectionJobRequestPrivate(ComprehendRequest::StartEventsDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartEventsDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartEventsDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartEventsDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new StartEventsDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::StartEventsDetectionJobRequestPrivate
 * \brief The StartEventsDetectionJobRequestPrivate class provides private implementation for StartEventsDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StartEventsDetectionJobRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
StartEventsDetectionJobRequestPrivate::StartEventsDetectionJobRequestPrivate(
    const ComprehendRequest::Action action, StartEventsDetectionJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartEventsDetectionJobRequest
 * class' copy constructor.
 */
StartEventsDetectionJobRequestPrivate::StartEventsDetectionJobRequestPrivate(
    const StartEventsDetectionJobRequestPrivate &other, StartEventsDetectionJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
