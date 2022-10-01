// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listedgepackagingjobsrequest.h"
#include "listedgepackagingjobsrequest_p.h"
#include "listedgepackagingjobsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListEdgePackagingJobsRequest
 * \brief The ListEdgePackagingJobsRequest class provides an interface for SageMaker ListEdgePackagingJobs requests.
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
 * \sa SageMakerClient::listEdgePackagingJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListEdgePackagingJobsRequest::ListEdgePackagingJobsRequest(const ListEdgePackagingJobsRequest &other)
    : SageMakerRequest(new ListEdgePackagingJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEdgePackagingJobsRequest object.
 */
ListEdgePackagingJobsRequest::ListEdgePackagingJobsRequest()
    : SageMakerRequest(new ListEdgePackagingJobsRequestPrivate(SageMakerRequest::ListEdgePackagingJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListEdgePackagingJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEdgePackagingJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEdgePackagingJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListEdgePackagingJobsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListEdgePackagingJobsRequestPrivate
 * \brief The ListEdgePackagingJobsRequestPrivate class provides private implementation for ListEdgePackagingJobsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListEdgePackagingJobsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListEdgePackagingJobsRequestPrivate::ListEdgePackagingJobsRequestPrivate(
    const SageMakerRequest::Action action, ListEdgePackagingJobsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEdgePackagingJobsRequest
 * class' copy constructor.
 */
ListEdgePackagingJobsRequestPrivate::ListEdgePackagingJobsRequestPrivate(
    const ListEdgePackagingJobsRequestPrivate &other, ListEdgePackagingJobsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
