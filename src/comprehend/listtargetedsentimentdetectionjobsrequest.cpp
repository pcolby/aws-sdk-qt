// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
