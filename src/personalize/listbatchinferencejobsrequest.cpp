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

#include "listbatchinferencejobsrequest.h"
#include "listbatchinferencejobsrequest_p.h"
#include "listbatchinferencejobsresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListBatchInferenceJobsRequest
 * \brief The ListBatchInferenceJobsRequest class provides an interface for Personalize ListBatchInferenceJobs requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listBatchInferenceJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListBatchInferenceJobsRequest::ListBatchInferenceJobsRequest(const ListBatchInferenceJobsRequest &other)
    : PersonalizeRequest(new ListBatchInferenceJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBatchInferenceJobsRequest object.
 */
ListBatchInferenceJobsRequest::ListBatchInferenceJobsRequest()
    : PersonalizeRequest(new ListBatchInferenceJobsRequestPrivate(PersonalizeRequest::ListBatchInferenceJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListBatchInferenceJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBatchInferenceJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBatchInferenceJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListBatchInferenceJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::ListBatchInferenceJobsRequestPrivate
 * \brief The ListBatchInferenceJobsRequestPrivate class provides private implementation for ListBatchInferenceJobsRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListBatchInferenceJobsRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
ListBatchInferenceJobsRequestPrivate::ListBatchInferenceJobsRequestPrivate(
    const PersonalizeRequest::Action action, ListBatchInferenceJobsRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBatchInferenceJobsRequest
 * class' copy constructor.
 */
ListBatchInferenceJobsRequestPrivate::ListBatchInferenceJobsRequestPrivate(
    const ListBatchInferenceJobsRequestPrivate &other, ListBatchInferenceJobsRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
