// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listprocessingjobsrequest.h"
#include "listprocessingjobsrequest_p.h"
#include "listprocessingjobsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListProcessingJobsRequest
 * \brief The ListProcessingJobsRequest class provides an interface for SageMaker ListProcessingJobs requests.
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
 * \sa SageMakerClient::listProcessingJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListProcessingJobsRequest::ListProcessingJobsRequest(const ListProcessingJobsRequest &other)
    : SageMakerRequest(new ListProcessingJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListProcessingJobsRequest object.
 */
ListProcessingJobsRequest::ListProcessingJobsRequest()
    : SageMakerRequest(new ListProcessingJobsRequestPrivate(SageMakerRequest::ListProcessingJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListProcessingJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListProcessingJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListProcessingJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListProcessingJobsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListProcessingJobsRequestPrivate
 * \brief The ListProcessingJobsRequestPrivate class provides private implementation for ListProcessingJobsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListProcessingJobsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListProcessingJobsRequestPrivate::ListProcessingJobsRequestPrivate(
    const SageMakerRequest::Action action, ListProcessingJobsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListProcessingJobsRequest
 * class' copy constructor.
 */
ListProcessingJobsRequestPrivate::ListProcessingJobsRequestPrivate(
    const ListProcessingJobsRequestPrivate &other, ListProcessingJobsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
