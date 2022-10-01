// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
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
