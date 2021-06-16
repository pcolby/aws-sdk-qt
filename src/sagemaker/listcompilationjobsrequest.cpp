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

#include "listcompilationjobsrequest.h"
#include "listcompilationjobsrequest_p.h"
#include "listcompilationjobsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListCompilationJobsRequest
 * \brief The ListCompilationJobsRequest class provides an interface for SageMaker ListCompilationJobs requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::listCompilationJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListCompilationJobsRequest::ListCompilationJobsRequest(const ListCompilationJobsRequest &other)
    : SageMakerRequest(new ListCompilationJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCompilationJobsRequest object.
 */
ListCompilationJobsRequest::ListCompilationJobsRequest()
    : SageMakerRequest(new ListCompilationJobsRequestPrivate(SageMakerRequest::ListCompilationJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListCompilationJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCompilationJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCompilationJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListCompilationJobsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListCompilationJobsRequestPrivate
 * \brief The ListCompilationJobsRequestPrivate class provides private implementation for ListCompilationJobsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListCompilationJobsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListCompilationJobsRequestPrivate::ListCompilationJobsRequestPrivate(
    const SageMakerRequest::Action action, ListCompilationJobsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCompilationJobsRequest
 * class' copy constructor.
 */
ListCompilationJobsRequestPrivate::ListCompilationJobsRequestPrivate(
    const ListCompilationJobsRequestPrivate &other, ListCompilationJobsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
