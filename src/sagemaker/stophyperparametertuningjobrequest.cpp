// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stophyperparametertuningjobrequest.h"
#include "stophyperparametertuningjobrequest_p.h"
#include "stophyperparametertuningjobresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StopHyperParameterTuningJobRequest
 * \brief The StopHyperParameterTuningJobRequest class provides an interface for SageMaker StopHyperParameterTuningJob requests.
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
 * \sa SageMakerClient::stopHyperParameterTuningJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopHyperParameterTuningJobRequest::StopHyperParameterTuningJobRequest(const StopHyperParameterTuningJobRequest &other)
    : SageMakerRequest(new StopHyperParameterTuningJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopHyperParameterTuningJobRequest object.
 */
StopHyperParameterTuningJobRequest::StopHyperParameterTuningJobRequest()
    : SageMakerRequest(new StopHyperParameterTuningJobRequestPrivate(SageMakerRequest::StopHyperParameterTuningJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopHyperParameterTuningJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopHyperParameterTuningJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopHyperParameterTuningJobRequest::response(QNetworkReply * const reply) const
{
    return new StopHyperParameterTuningJobResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::StopHyperParameterTuningJobRequestPrivate
 * \brief The StopHyperParameterTuningJobRequestPrivate class provides private implementation for StopHyperParameterTuningJobRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StopHyperParameterTuningJobRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
StopHyperParameterTuningJobRequestPrivate::StopHyperParameterTuningJobRequestPrivate(
    const SageMakerRequest::Action action, StopHyperParameterTuningJobRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopHyperParameterTuningJobRequest
 * class' copy constructor.
 */
StopHyperParameterTuningJobRequestPrivate::StopHyperParameterTuningJobRequestPrivate(
    const StopHyperParameterTuningJobRequestPrivate &other, StopHyperParameterTuningJobRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
