// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listhyperparametertuningjobsrequest.h"
#include "listhyperparametertuningjobsrequest_p.h"
#include "listhyperparametertuningjobsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListHyperParameterTuningJobsRequest
 * \brief The ListHyperParameterTuningJobsRequest class provides an interface for SageMaker ListHyperParameterTuningJobs requests.
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
 * \sa SageMakerClient::listHyperParameterTuningJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListHyperParameterTuningJobsRequest::ListHyperParameterTuningJobsRequest(const ListHyperParameterTuningJobsRequest &other)
    : SageMakerRequest(new ListHyperParameterTuningJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListHyperParameterTuningJobsRequest object.
 */
ListHyperParameterTuningJobsRequest::ListHyperParameterTuningJobsRequest()
    : SageMakerRequest(new ListHyperParameterTuningJobsRequestPrivate(SageMakerRequest::ListHyperParameterTuningJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListHyperParameterTuningJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListHyperParameterTuningJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListHyperParameterTuningJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListHyperParameterTuningJobsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListHyperParameterTuningJobsRequestPrivate
 * \brief The ListHyperParameterTuningJobsRequestPrivate class provides private implementation for ListHyperParameterTuningJobsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListHyperParameterTuningJobsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListHyperParameterTuningJobsRequestPrivate::ListHyperParameterTuningJobsRequestPrivate(
    const SageMakerRequest::Action action, ListHyperParameterTuningJobsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListHyperParameterTuningJobsRequest
 * class' copy constructor.
 */
ListHyperParameterTuningJobsRequestPrivate::ListHyperParameterTuningJobsRequestPrivate(
    const ListHyperParameterTuningJobsRequestPrivate &other, ListHyperParameterTuningJobsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
