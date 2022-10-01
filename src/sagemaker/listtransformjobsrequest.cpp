// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
