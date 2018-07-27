/*
    Copyright 2013-2018 Paul Colby

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

#include "stopkeyphrasesdetectionjobrequest.h"
#include "stopkeyphrasesdetectionjobrequest_p.h"
#include "stopkeyphrasesdetectionjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StopKeyPhrasesDetectionJobRequest
 * \brief The StopKeyPhrasesDetectionJobRequest class provides an interface for Comprehend StopKeyPhrasesDetectionJob requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::stopKeyPhrasesDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopKeyPhrasesDetectionJobRequest::StopKeyPhrasesDetectionJobRequest(const StopKeyPhrasesDetectionJobRequest &other)
    : ComprehendRequest(new StopKeyPhrasesDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopKeyPhrasesDetectionJobRequest object.
 */
StopKeyPhrasesDetectionJobRequest::StopKeyPhrasesDetectionJobRequest()
    : ComprehendRequest(new StopKeyPhrasesDetectionJobRequestPrivate(ComprehendRequest::StopKeyPhrasesDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopKeyPhrasesDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopKeyPhrasesDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopKeyPhrasesDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new StopKeyPhrasesDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::StopKeyPhrasesDetectionJobRequestPrivate
 * \brief The StopKeyPhrasesDetectionJobRequestPrivate class provides private implementation for StopKeyPhrasesDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StopKeyPhrasesDetectionJobRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
StopKeyPhrasesDetectionJobRequestPrivate::StopKeyPhrasesDetectionJobRequestPrivate(
    const ComprehendRequest::Action action, StopKeyPhrasesDetectionJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopKeyPhrasesDetectionJobRequest
 * class' copy constructor.
 */
StopKeyPhrasesDetectionJobRequestPrivate::StopKeyPhrasesDetectionJobRequestPrivate(
    const StopKeyPhrasesDetectionJobRequestPrivate &other, StopKeyPhrasesDetectionJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
