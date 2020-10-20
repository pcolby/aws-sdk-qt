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

#include "listsentimentdetectionjobsrequest.h"
#include "listsentimentdetectionjobsrequest_p.h"
#include "listsentimentdetectionjobsresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ListSentimentDetectionJobsRequest
 * \brief The ListSentimentDetectionJobsRequest class provides an interface for Comprehend ListSentimentDetectionJobs requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::listSentimentDetectionJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListSentimentDetectionJobsRequest::ListSentimentDetectionJobsRequest(const ListSentimentDetectionJobsRequest &other)
    : ComprehendRequest(new ListSentimentDetectionJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSentimentDetectionJobsRequest object.
 */
ListSentimentDetectionJobsRequest::ListSentimentDetectionJobsRequest()
    : ComprehendRequest(new ListSentimentDetectionJobsRequestPrivate(ComprehendRequest::ListSentimentDetectionJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSentimentDetectionJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSentimentDetectionJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSentimentDetectionJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListSentimentDetectionJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::ListSentimentDetectionJobsRequestPrivate
 * \brief The ListSentimentDetectionJobsRequestPrivate class provides private implementation for ListSentimentDetectionJobsRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ListSentimentDetectionJobsRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
ListSentimentDetectionJobsRequestPrivate::ListSentimentDetectionJobsRequestPrivate(
    const ComprehendRequest::Action action, ListSentimentDetectionJobsRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSentimentDetectionJobsRequest
 * class' copy constructor.
 */
ListSentimentDetectionJobsRequestPrivate::ListSentimentDetectionJobsRequestPrivate(
    const ListSentimentDetectionJobsRequestPrivate &other, ListSentimentDetectionJobsRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
