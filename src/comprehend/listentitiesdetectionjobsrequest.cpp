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
