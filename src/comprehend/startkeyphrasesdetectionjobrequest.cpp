/*
    Copyright 2013-2020 Paul Colby

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

#include "startkeyphrasesdetectionjobrequest.h"
#include "startkeyphrasesdetectionjobrequest_p.h"
#include "startkeyphrasesdetectionjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StartKeyPhrasesDetectionJobRequest
 * \brief The StartKeyPhrasesDetectionJobRequest class provides an interface for Comprehend StartKeyPhrasesDetectionJob requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::startKeyPhrasesDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartKeyPhrasesDetectionJobRequest::StartKeyPhrasesDetectionJobRequest(const StartKeyPhrasesDetectionJobRequest &other)
    : ComprehendRequest(new StartKeyPhrasesDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartKeyPhrasesDetectionJobRequest object.
 */
StartKeyPhrasesDetectionJobRequest::StartKeyPhrasesDetectionJobRequest()
    : ComprehendRequest(new StartKeyPhrasesDetectionJobRequestPrivate(ComprehendRequest::StartKeyPhrasesDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartKeyPhrasesDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartKeyPhrasesDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartKeyPhrasesDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new StartKeyPhrasesDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::StartKeyPhrasesDetectionJobRequestPrivate
 * \brief The StartKeyPhrasesDetectionJobRequestPrivate class provides private implementation for StartKeyPhrasesDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StartKeyPhrasesDetectionJobRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
StartKeyPhrasesDetectionJobRequestPrivate::StartKeyPhrasesDetectionJobRequestPrivate(
    const ComprehendRequest::Action action, StartKeyPhrasesDetectionJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartKeyPhrasesDetectionJobRequest
 * class' copy constructor.
 */
StartKeyPhrasesDetectionJobRequestPrivate::StartKeyPhrasesDetectionJobRequestPrivate(
    const StartKeyPhrasesDetectionJobRequestPrivate &other, StartKeyPhrasesDetectionJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
