// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtrainingjobsforhyperparametertuningjobrequest.h"
#include "listtrainingjobsforhyperparametertuningjobrequest_p.h"
#include "listtrainingjobsforhyperparametertuningjobresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListTrainingJobsForHyperParameterTuningJobRequest
 * \brief The ListTrainingJobsForHyperParameterTuningJobRequest class provides an interface for SageMaker ListTrainingJobsForHyperParameterTuningJob requests.
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
 * \sa SageMakerClient::listTrainingJobsForHyperParameterTuningJob
 */

/*!
 * Constructs a copy of \a other.
 */
ListTrainingJobsForHyperParameterTuningJobRequest::ListTrainingJobsForHyperParameterTuningJobRequest(const ListTrainingJobsForHyperParameterTuningJobRequest &other)
    : SageMakerRequest(new ListTrainingJobsForHyperParameterTuningJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTrainingJobsForHyperParameterTuningJobRequest object.
 */
ListTrainingJobsForHyperParameterTuningJobRequest::ListTrainingJobsForHyperParameterTuningJobRequest()
    : SageMakerRequest(new ListTrainingJobsForHyperParameterTuningJobRequestPrivate(SageMakerRequest::ListTrainingJobsForHyperParameterTuningJobAction, this))
{

}

/*!
 * \reimp
 */
bool ListTrainingJobsForHyperParameterTuningJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTrainingJobsForHyperParameterTuningJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTrainingJobsForHyperParameterTuningJobRequest::response(QNetworkReply * const reply) const
{
    return new ListTrainingJobsForHyperParameterTuningJobResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListTrainingJobsForHyperParameterTuningJobRequestPrivate
 * \brief The ListTrainingJobsForHyperParameterTuningJobRequestPrivate class provides private implementation for ListTrainingJobsForHyperParameterTuningJobRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListTrainingJobsForHyperParameterTuningJobRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListTrainingJobsForHyperParameterTuningJobRequestPrivate::ListTrainingJobsForHyperParameterTuningJobRequestPrivate(
    const SageMakerRequest::Action action, ListTrainingJobsForHyperParameterTuningJobRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTrainingJobsForHyperParameterTuningJobRequest
 * class' copy constructor.
 */
ListTrainingJobsForHyperParameterTuningJobRequestPrivate::ListTrainingJobsForHyperParameterTuningJobRequestPrivate(
    const ListTrainingJobsForHyperParameterTuningJobRequestPrivate &other, ListTrainingJobsForHyperParameterTuningJobRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
