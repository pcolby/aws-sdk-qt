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

#include "stoppiientitiesdetectionjobrequest.h"
#include "stoppiientitiesdetectionjobrequest_p.h"
#include "stoppiientitiesdetectionjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StopPiiEntitiesDetectionJobRequest
 * \brief The StopPiiEntitiesDetectionJobRequest class provides an interface for Comprehend StopPiiEntitiesDetectionJob requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::stopPiiEntitiesDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopPiiEntitiesDetectionJobRequest::StopPiiEntitiesDetectionJobRequest(const StopPiiEntitiesDetectionJobRequest &other)
    : ComprehendRequest(new StopPiiEntitiesDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopPiiEntitiesDetectionJobRequest object.
 */
StopPiiEntitiesDetectionJobRequest::StopPiiEntitiesDetectionJobRequest()
    : ComprehendRequest(new StopPiiEntitiesDetectionJobRequestPrivate(ComprehendRequest::StopPiiEntitiesDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopPiiEntitiesDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopPiiEntitiesDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopPiiEntitiesDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new StopPiiEntitiesDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::StopPiiEntitiesDetectionJobRequestPrivate
 * \brief The StopPiiEntitiesDetectionJobRequestPrivate class provides private implementation for StopPiiEntitiesDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StopPiiEntitiesDetectionJobRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
StopPiiEntitiesDetectionJobRequestPrivate::StopPiiEntitiesDetectionJobRequestPrivate(
    const ComprehendRequest::Action action, StopPiiEntitiesDetectionJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopPiiEntitiesDetectionJobRequest
 * class' copy constructor.
 */
StopPiiEntitiesDetectionJobRequestPrivate::StopPiiEntitiesDetectionJobRequestPrivate(
    const StopPiiEntitiesDetectionJobRequestPrivate &other, StopPiiEntitiesDetectionJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
