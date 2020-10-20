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

#include "listkeyphrasesdetectionjobsrequest.h"
#include "listkeyphrasesdetectionjobsrequest_p.h"
#include "listkeyphrasesdetectionjobsresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ListKeyPhrasesDetectionJobsRequest
 * \brief The ListKeyPhrasesDetectionJobsRequest class provides an interface for Comprehend ListKeyPhrasesDetectionJobs requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::listKeyPhrasesDetectionJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListKeyPhrasesDetectionJobsRequest::ListKeyPhrasesDetectionJobsRequest(const ListKeyPhrasesDetectionJobsRequest &other)
    : ComprehendRequest(new ListKeyPhrasesDetectionJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListKeyPhrasesDetectionJobsRequest object.
 */
ListKeyPhrasesDetectionJobsRequest::ListKeyPhrasesDetectionJobsRequest()
    : ComprehendRequest(new ListKeyPhrasesDetectionJobsRequestPrivate(ComprehendRequest::ListKeyPhrasesDetectionJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListKeyPhrasesDetectionJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListKeyPhrasesDetectionJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListKeyPhrasesDetectionJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListKeyPhrasesDetectionJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::ListKeyPhrasesDetectionJobsRequestPrivate
 * \brief The ListKeyPhrasesDetectionJobsRequestPrivate class provides private implementation for ListKeyPhrasesDetectionJobsRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ListKeyPhrasesDetectionJobsRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
ListKeyPhrasesDetectionJobsRequestPrivate::ListKeyPhrasesDetectionJobsRequestPrivate(
    const ComprehendRequest::Action action, ListKeyPhrasesDetectionJobsRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListKeyPhrasesDetectionJobsRequest
 * class' copy constructor.
 */
ListKeyPhrasesDetectionJobsRequestPrivate::ListKeyPhrasesDetectionJobsRequestPrivate(
    const ListKeyPhrasesDetectionJobsRequestPrivate &other, ListKeyPhrasesDetectionJobsRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
