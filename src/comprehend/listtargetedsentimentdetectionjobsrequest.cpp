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

#include "listtargetedsentimentdetectionjobsrequest.h"
#include "listtargetedsentimentdetectionjobsrequest_p.h"
#include "listtargetedsentimentdetectionjobsresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ListTargetedSentimentDetectionJobsRequest
 * \brief The ListTargetedSentimentDetectionJobsRequest class provides an interface for Comprehend ListTargetedSentimentDetectionJobs requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::listTargetedSentimentDetectionJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListTargetedSentimentDetectionJobsRequest::ListTargetedSentimentDetectionJobsRequest(const ListTargetedSentimentDetectionJobsRequest &other)
    : ComprehendRequest(new ListTargetedSentimentDetectionJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTargetedSentimentDetectionJobsRequest object.
 */
ListTargetedSentimentDetectionJobsRequest::ListTargetedSentimentDetectionJobsRequest()
    : ComprehendRequest(new ListTargetedSentimentDetectionJobsRequestPrivate(ComprehendRequest::ListTargetedSentimentDetectionJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTargetedSentimentDetectionJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTargetedSentimentDetectionJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTargetedSentimentDetectionJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListTargetedSentimentDetectionJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::ListTargetedSentimentDetectionJobsRequestPrivate
 * \brief The ListTargetedSentimentDetectionJobsRequestPrivate class provides private implementation for ListTargetedSentimentDetectionJobsRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ListTargetedSentimentDetectionJobsRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
ListTargetedSentimentDetectionJobsRequestPrivate::ListTargetedSentimentDetectionJobsRequestPrivate(
    const ComprehendRequest::Action action, ListTargetedSentimentDetectionJobsRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTargetedSentimentDetectionJobsRequest
 * class' copy constructor.
 */
ListTargetedSentimentDetectionJobsRequestPrivate::ListTargetedSentimentDetectionJobsRequestPrivate(
    const ListTargetedSentimentDetectionJobsRequestPrivate &other, ListTargetedSentimentDetectionJobsRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
