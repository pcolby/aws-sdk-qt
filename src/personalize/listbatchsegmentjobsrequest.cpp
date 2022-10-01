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

#include "listbatchsegmentjobsrequest.h"
#include "listbatchsegmentjobsrequest_p.h"
#include "listbatchsegmentjobsresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListBatchSegmentJobsRequest
 * \brief The ListBatchSegmentJobsRequest class provides an interface for Personalize ListBatchSegmentJobs requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listBatchSegmentJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListBatchSegmentJobsRequest::ListBatchSegmentJobsRequest(const ListBatchSegmentJobsRequest &other)
    : PersonalizeRequest(new ListBatchSegmentJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBatchSegmentJobsRequest object.
 */
ListBatchSegmentJobsRequest::ListBatchSegmentJobsRequest()
    : PersonalizeRequest(new ListBatchSegmentJobsRequestPrivate(PersonalizeRequest::ListBatchSegmentJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListBatchSegmentJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBatchSegmentJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBatchSegmentJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListBatchSegmentJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::ListBatchSegmentJobsRequestPrivate
 * \brief The ListBatchSegmentJobsRequestPrivate class provides private implementation for ListBatchSegmentJobsRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListBatchSegmentJobsRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
ListBatchSegmentJobsRequestPrivate::ListBatchSegmentJobsRequestPrivate(
    const PersonalizeRequest::Action action, ListBatchSegmentJobsRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBatchSegmentJobsRequest
 * class' copy constructor.
 */
ListBatchSegmentJobsRequestPrivate::ListBatchSegmentJobsRequestPrivate(
    const ListBatchSegmentJobsRequestPrivate &other, ListBatchSegmentJobsRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
