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

#include "startdominantlanguagedetectionjobrequest.h"
#include "startdominantlanguagedetectionjobrequest_p.h"
#include "startdominantlanguagedetectionjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StartDominantLanguageDetectionJobRequest
 * \brief The StartDominantLanguageDetectionJobRequest class provides an interface for Comprehend StartDominantLanguageDetectionJob requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::startDominantLanguageDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartDominantLanguageDetectionJobRequest::StartDominantLanguageDetectionJobRequest(const StartDominantLanguageDetectionJobRequest &other)
    : ComprehendRequest(new StartDominantLanguageDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartDominantLanguageDetectionJobRequest object.
 */
StartDominantLanguageDetectionJobRequest::StartDominantLanguageDetectionJobRequest()
    : ComprehendRequest(new StartDominantLanguageDetectionJobRequestPrivate(ComprehendRequest::StartDominantLanguageDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartDominantLanguageDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartDominantLanguageDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartDominantLanguageDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new StartDominantLanguageDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::StartDominantLanguageDetectionJobRequestPrivate
 * \brief The StartDominantLanguageDetectionJobRequestPrivate class provides private implementation for StartDominantLanguageDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StartDominantLanguageDetectionJobRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
StartDominantLanguageDetectionJobRequestPrivate::StartDominantLanguageDetectionJobRequestPrivate(
    const ComprehendRequest::Action action, StartDominantLanguageDetectionJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartDominantLanguageDetectionJobRequest
 * class' copy constructor.
 */
StartDominantLanguageDetectionJobRequestPrivate::StartDominantLanguageDetectionJobRequestPrivate(
    const StartDominantLanguageDetectionJobRequestPrivate &other, StartDominantLanguageDetectionJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
