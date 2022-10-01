// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
