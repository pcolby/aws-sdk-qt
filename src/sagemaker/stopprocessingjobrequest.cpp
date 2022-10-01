// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopprocessingjobrequest.h"
#include "stopprocessingjobrequest_p.h"
#include "stopprocessingjobresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StopProcessingJobRequest
 * \brief The StopProcessingJobRequest class provides an interface for SageMaker StopProcessingJob requests.
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
 * \sa SageMakerClient::stopProcessingJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopProcessingJobRequest::StopProcessingJobRequest(const StopProcessingJobRequest &other)
    : SageMakerRequest(new StopProcessingJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopProcessingJobRequest object.
 */
StopProcessingJobRequest::StopProcessingJobRequest()
    : SageMakerRequest(new StopProcessingJobRequestPrivate(SageMakerRequest::StopProcessingJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopProcessingJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopProcessingJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopProcessingJobRequest::response(QNetworkReply * const reply) const
{
    return new StopProcessingJobResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::StopProcessingJobRequestPrivate
 * \brief The StopProcessingJobRequestPrivate class provides private implementation for StopProcessingJobRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StopProcessingJobRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
StopProcessingJobRequestPrivate::StopProcessingJobRequestPrivate(
    const SageMakerRequest::Action action, StopProcessingJobRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopProcessingJobRequest
 * class' copy constructor.
 */
StopProcessingJobRequestPrivate::StopProcessingJobRequestPrivate(
    const StopProcessingJobRequestPrivate &other, StopProcessingJobRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
