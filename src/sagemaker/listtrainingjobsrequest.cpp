// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtrainingjobsrequest.h"
#include "listtrainingjobsrequest_p.h"
#include "listtrainingjobsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListTrainingJobsRequest
 * \brief The ListTrainingJobsRequest class provides an interface for SageMaker ListTrainingJobs requests.
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
 * \sa SageMakerClient::listTrainingJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListTrainingJobsRequest::ListTrainingJobsRequest(const ListTrainingJobsRequest &other)
    : SageMakerRequest(new ListTrainingJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTrainingJobsRequest object.
 */
ListTrainingJobsRequest::ListTrainingJobsRequest()
    : SageMakerRequest(new ListTrainingJobsRequestPrivate(SageMakerRequest::ListTrainingJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTrainingJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTrainingJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTrainingJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListTrainingJobsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListTrainingJobsRequestPrivate
 * \brief The ListTrainingJobsRequestPrivate class provides private implementation for ListTrainingJobsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListTrainingJobsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListTrainingJobsRequestPrivate::ListTrainingJobsRequestPrivate(
    const SageMakerRequest::Action action, ListTrainingJobsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTrainingJobsRequest
 * class' copy constructor.
 */
ListTrainingJobsRequestPrivate::ListTrainingJobsRequestPrivate(
    const ListTrainingJobsRequestPrivate &other, ListTrainingJobsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
