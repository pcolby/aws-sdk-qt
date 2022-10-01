// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
