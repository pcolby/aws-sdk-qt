/*
    Copyright 2013-2018 Paul Colby

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

#include "listtransformjobsrequest.h"
#include "listtransformjobsrequest_p.h"
#include "listtransformjobsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListTransformJobsRequest
 * \brief The ListTransformJobsRequest class provides an interface for SageMaker ListTransformJobs requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *
 * \sa SageMakerClient::listTransformJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListTransformJobsRequest::ListTransformJobsRequest(const ListTransformJobsRequest &other)
    : SageMakerRequest(new ListTransformJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTransformJobsRequest object.
 */
ListTransformJobsRequest::ListTransformJobsRequest()
    : SageMakerRequest(new ListTransformJobsRequestPrivate(SageMakerRequest::ListTransformJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTransformJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTransformJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTransformJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListTransformJobsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListTransformJobsRequestPrivate
 * \brief The ListTransformJobsRequestPrivate class provides private implementation for ListTransformJobsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListTransformJobsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListTransformJobsRequestPrivate::ListTransformJobsRequestPrivate(
    const SageMakerRequest::Action action, ListTransformJobsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTransformJobsRequest
 * class' copy constructor.
 */
ListTransformJobsRequestPrivate::ListTransformJobsRequestPrivate(
    const ListTransformJobsRequestPrivate &other, ListTransformJobsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
