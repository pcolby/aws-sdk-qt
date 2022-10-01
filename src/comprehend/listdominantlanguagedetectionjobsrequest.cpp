// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdominantlanguagedetectionjobsrequest.h"
#include "listdominantlanguagedetectionjobsrequest_p.h"
#include "listdominantlanguagedetectionjobsresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ListDominantLanguageDetectionJobsRequest
 * \brief The ListDominantLanguageDetectionJobsRequest class provides an interface for Comprehend ListDominantLanguageDetectionJobs requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::listDominantLanguageDetectionJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListDominantLanguageDetectionJobsRequest::ListDominantLanguageDetectionJobsRequest(const ListDominantLanguageDetectionJobsRequest &other)
    : ComprehendRequest(new ListDominantLanguageDetectionJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDominantLanguageDetectionJobsRequest object.
 */
ListDominantLanguageDetectionJobsRequest::ListDominantLanguageDetectionJobsRequest()
    : ComprehendRequest(new ListDominantLanguageDetectionJobsRequestPrivate(ComprehendRequest::ListDominantLanguageDetectionJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDominantLanguageDetectionJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDominantLanguageDetectionJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDominantLanguageDetectionJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListDominantLanguageDetectionJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::ListDominantLanguageDetectionJobsRequestPrivate
 * \brief The ListDominantLanguageDetectionJobsRequestPrivate class provides private implementation for ListDominantLanguageDetectionJobsRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ListDominantLanguageDetectionJobsRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
ListDominantLanguageDetectionJobsRequestPrivate::ListDominantLanguageDetectionJobsRequestPrivate(
    const ComprehendRequest::Action action, ListDominantLanguageDetectionJobsRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDominantLanguageDetectionJobsRequest
 * class' copy constructor.
 */
ListDominantLanguageDetectionJobsRequestPrivate::ListDominantLanguageDetectionJobsRequestPrivate(
    const ListDominantLanguageDetectionJobsRequestPrivate &other, ListDominantLanguageDetectionJobsRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
