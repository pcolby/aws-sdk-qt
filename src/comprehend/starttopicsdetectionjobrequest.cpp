/*
    Copyright 2013-2019 Paul Colby

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

#include "starttopicsdetectionjobrequest.h"
#include "starttopicsdetectionjobrequest_p.h"
#include "starttopicsdetectionjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StartTopicsDetectionJobRequest
 * \brief The StartTopicsDetectionJobRequest class provides an interface for Comprehend StartTopicsDetectionJob requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::startTopicsDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartTopicsDetectionJobRequest::StartTopicsDetectionJobRequest(const StartTopicsDetectionJobRequest &other)
    : ComprehendRequest(new StartTopicsDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartTopicsDetectionJobRequest object.
 */
StartTopicsDetectionJobRequest::StartTopicsDetectionJobRequest()
    : ComprehendRequest(new StartTopicsDetectionJobRequestPrivate(ComprehendRequest::StartTopicsDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartTopicsDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartTopicsDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartTopicsDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new StartTopicsDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::StartTopicsDetectionJobRequestPrivate
 * \brief The StartTopicsDetectionJobRequestPrivate class provides private implementation for StartTopicsDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StartTopicsDetectionJobRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
StartTopicsDetectionJobRequestPrivate::StartTopicsDetectionJobRequestPrivate(
    const ComprehendRequest::Action action, StartTopicsDetectionJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartTopicsDetectionJobRequest
 * class' copy constructor.
 */
StartTopicsDetectionJobRequestPrivate::StartTopicsDetectionJobRequestPrivate(
    const StartTopicsDetectionJobRequestPrivate &other, StartTopicsDetectionJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
