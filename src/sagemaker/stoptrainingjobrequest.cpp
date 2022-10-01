// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stoptrainingjobrequest.h"
#include "stoptrainingjobrequest_p.h"
#include "stoptrainingjobresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StopTrainingJobRequest
 * \brief The StopTrainingJobRequest class provides an interface for SageMaker StopTrainingJob requests.
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
 * \sa SageMakerClient::stopTrainingJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopTrainingJobRequest::StopTrainingJobRequest(const StopTrainingJobRequest &other)
    : SageMakerRequest(new StopTrainingJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopTrainingJobRequest object.
 */
StopTrainingJobRequest::StopTrainingJobRequest()
    : SageMakerRequest(new StopTrainingJobRequestPrivate(SageMakerRequest::StopTrainingJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopTrainingJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopTrainingJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopTrainingJobRequest::response(QNetworkReply * const reply) const
{
    return new StopTrainingJobResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::StopTrainingJobRequestPrivate
 * \brief The StopTrainingJobRequestPrivate class provides private implementation for StopTrainingJobRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StopTrainingJobRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
StopTrainingJobRequestPrivate::StopTrainingJobRequestPrivate(
    const SageMakerRequest::Action action, StopTrainingJobRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopTrainingJobRequest
 * class' copy constructor.
 */
StopTrainingJobRequestPrivate::StopTrainingJobRequestPrivate(
    const StopTrainingJobRequestPrivate &other, StopTrainingJobRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
