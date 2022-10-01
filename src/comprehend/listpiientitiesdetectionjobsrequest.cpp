// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpiientitiesdetectionjobsrequest.h"
#include "listpiientitiesdetectionjobsrequest_p.h"
#include "listpiientitiesdetectionjobsresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ListPiiEntitiesDetectionJobsRequest
 * \brief The ListPiiEntitiesDetectionJobsRequest class provides an interface for Comprehend ListPiiEntitiesDetectionJobs requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::listPiiEntitiesDetectionJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListPiiEntitiesDetectionJobsRequest::ListPiiEntitiesDetectionJobsRequest(const ListPiiEntitiesDetectionJobsRequest &other)
    : ComprehendRequest(new ListPiiEntitiesDetectionJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPiiEntitiesDetectionJobsRequest object.
 */
ListPiiEntitiesDetectionJobsRequest::ListPiiEntitiesDetectionJobsRequest()
    : ComprehendRequest(new ListPiiEntitiesDetectionJobsRequestPrivate(ComprehendRequest::ListPiiEntitiesDetectionJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListPiiEntitiesDetectionJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPiiEntitiesDetectionJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPiiEntitiesDetectionJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListPiiEntitiesDetectionJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::ListPiiEntitiesDetectionJobsRequestPrivate
 * \brief The ListPiiEntitiesDetectionJobsRequestPrivate class provides private implementation for ListPiiEntitiesDetectionJobsRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ListPiiEntitiesDetectionJobsRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
ListPiiEntitiesDetectionJobsRequestPrivate::ListPiiEntitiesDetectionJobsRequestPrivate(
    const ComprehendRequest::Action action, ListPiiEntitiesDetectionJobsRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPiiEntitiesDetectionJobsRequest
 * class' copy constructor.
 */
ListPiiEntitiesDetectionJobsRequestPrivate::ListPiiEntitiesDetectionJobsRequestPrivate(
    const ListPiiEntitiesDetectionJobsRequestPrivate &other, ListPiiEntitiesDetectionJobsRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
