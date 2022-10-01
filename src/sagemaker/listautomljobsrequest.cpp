// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listautomljobsrequest.h"
#include "listautomljobsrequest_p.h"
#include "listautomljobsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListAutoMLJobsRequest
 * \brief The ListAutoMLJobsRequest class provides an interface for SageMaker ListAutoMLJobs requests.
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
 * \sa SageMakerClient::listAutoMLJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListAutoMLJobsRequest::ListAutoMLJobsRequest(const ListAutoMLJobsRequest &other)
    : SageMakerRequest(new ListAutoMLJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAutoMLJobsRequest object.
 */
ListAutoMLJobsRequest::ListAutoMLJobsRequest()
    : SageMakerRequest(new ListAutoMLJobsRequestPrivate(SageMakerRequest::ListAutoMLJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAutoMLJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAutoMLJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAutoMLJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListAutoMLJobsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListAutoMLJobsRequestPrivate
 * \brief The ListAutoMLJobsRequestPrivate class provides private implementation for ListAutoMLJobsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListAutoMLJobsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListAutoMLJobsRequestPrivate::ListAutoMLJobsRequestPrivate(
    const SageMakerRequest::Action action, ListAutoMLJobsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAutoMLJobsRequest
 * class' copy constructor.
 */
ListAutoMLJobsRequestPrivate::ListAutoMLJobsRequestPrivate(
    const ListAutoMLJobsRequestPrivate &other, ListAutoMLJobsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
