// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listentitiesdetectionjobsrequest.h"
#include "listentitiesdetectionjobsrequest_p.h"
#include "listentitiesdetectionjobsresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ListEntitiesDetectionJobsRequest
 * \brief The ListEntitiesDetectionJobsRequest class provides an interface for Comprehend ListEntitiesDetectionJobs requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::listEntitiesDetectionJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListEntitiesDetectionJobsRequest::ListEntitiesDetectionJobsRequest(const ListEntitiesDetectionJobsRequest &other)
    : ComprehendRequest(new ListEntitiesDetectionJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEntitiesDetectionJobsRequest object.
 */
ListEntitiesDetectionJobsRequest::ListEntitiesDetectionJobsRequest()
    : ComprehendRequest(new ListEntitiesDetectionJobsRequestPrivate(ComprehendRequest::ListEntitiesDetectionJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListEntitiesDetectionJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEntitiesDetectionJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEntitiesDetectionJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListEntitiesDetectionJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::ListEntitiesDetectionJobsRequestPrivate
 * \brief The ListEntitiesDetectionJobsRequestPrivate class provides private implementation for ListEntitiesDetectionJobsRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ListEntitiesDetectionJobsRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
ListEntitiesDetectionJobsRequestPrivate::ListEntitiesDetectionJobsRequestPrivate(
    const ComprehendRequest::Action action, ListEntitiesDetectionJobsRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEntitiesDetectionJobsRequest
 * class' copy constructor.
 */
ListEntitiesDetectionJobsRequestPrivate::ListEntitiesDetectionJobsRequestPrivate(
    const ListEntitiesDetectionJobsRequestPrivate &other, ListEntitiesDetectionJobsRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
