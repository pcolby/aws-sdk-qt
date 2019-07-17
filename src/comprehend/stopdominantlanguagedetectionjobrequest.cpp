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

#include "stopdominantlanguagedetectionjobrequest.h"
#include "stopdominantlanguagedetectionjobrequest_p.h"
#include "stopdominantlanguagedetectionjobresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StopDominantLanguageDetectionJobRequest
 * \brief The StopDominantLanguageDetectionJobRequest class provides an interface for Comprehend StopDominantLanguageDetectionJob requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::stopDominantLanguageDetectionJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopDominantLanguageDetectionJobRequest::StopDominantLanguageDetectionJobRequest(const StopDominantLanguageDetectionJobRequest &other)
    : ComprehendRequest(new StopDominantLanguageDetectionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopDominantLanguageDetectionJobRequest object.
 */
StopDominantLanguageDetectionJobRequest::StopDominantLanguageDetectionJobRequest()
    : ComprehendRequest(new StopDominantLanguageDetectionJobRequestPrivate(ComprehendRequest::StopDominantLanguageDetectionJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopDominantLanguageDetectionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopDominantLanguageDetectionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopDominantLanguageDetectionJobRequest::response(QNetworkReply * const reply) const
{
    return new StopDominantLanguageDetectionJobResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::StopDominantLanguageDetectionJobRequestPrivate
 * \brief The StopDominantLanguageDetectionJobRequestPrivate class provides private implementation for StopDominantLanguageDetectionJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StopDominantLanguageDetectionJobRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
StopDominantLanguageDetectionJobRequestPrivate::StopDominantLanguageDetectionJobRequestPrivate(
    const ComprehendRequest::Action action, StopDominantLanguageDetectionJobRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopDominantLanguageDetectionJobRequest
 * class' copy constructor.
 */
StopDominantLanguageDetectionJobRequestPrivate::StopDominantLanguageDetectionJobRequestPrivate(
    const StopDominantLanguageDetectionJobRequestPrivate &other, StopDominantLanguageDetectionJobRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
