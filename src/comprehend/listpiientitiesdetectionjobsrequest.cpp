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
