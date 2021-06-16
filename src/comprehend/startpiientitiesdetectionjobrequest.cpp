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

#include "startpiientitiesdetectionjobrequest.h"
#include "startpiientitiesdetectionjobrequest_p.h"
#include "startpiientitiesdetectionjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StartPiiEntitiesDetectionJobRequest
 * \brief The StartPiiEntitiesDetectionJobRequest class provides an interface for Comprehend StartPiiEntitiesDetectionJob requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::startPiiEntitiesDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartPiiEntitiesDetectionJobRequest::StartPiiEntitiesDetectionJobRequest(const StartPiiEntitiesDetectionJobRequest &other)
    : ComprehendRequest(new StartPiiEntitiesDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartPiiEntitiesDetectionJobRequest object.
 */
StartPiiEntitiesDetectionJobRequest::StartPiiEntitiesDetectionJobRequest()
    : ComprehendRequest(new StartPiiEntitiesDetectionJobRequestPrivate(ComprehendRequest::StartPiiEntitiesDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartPiiEntitiesDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartPiiEntitiesDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartPiiEntitiesDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new StartPiiEntitiesDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::StartPiiEntitiesDetectionJobRequestPrivate
 * \brief The StartPiiEntitiesDetectionJobRequestPrivate class provides private implementation for StartPiiEntitiesDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StartPiiEntitiesDetectionJobRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
StartPiiEntitiesDetectionJobRequestPrivate::StartPiiEntitiesDetectionJobRequestPrivate(
    const ComprehendRequest::Action action, StartPiiEntitiesDetectionJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartPiiEntitiesDetectionJobRequest
 * class' copy constructor.
 */
StartPiiEntitiesDetectionJobRequestPrivate::StartPiiEntitiesDetectionJobRequestPrivate(
    const StartPiiEntitiesDetectionJobRequestPrivate &other, StartPiiEntitiesDetectionJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
