// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stoplabelingjobrequest.h"
#include "stoplabelingjobrequest_p.h"
#include "stoplabelingjobresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StopLabelingJobRequest
 * \brief The StopLabelingJobRequest class provides an interface for SageMaker StopLabelingJob requests.
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
 * \sa SageMakerClient::stopLabelingJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopLabelingJobRequest::StopLabelingJobRequest(const StopLabelingJobRequest &other)
    : SageMakerRequest(new StopLabelingJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopLabelingJobRequest object.
 */
StopLabelingJobRequest::StopLabelingJobRequest()
    : SageMakerRequest(new StopLabelingJobRequestPrivate(SageMakerRequest::StopLabelingJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopLabelingJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopLabelingJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopLabelingJobRequest::response(QNetworkReply * const reply) const
{
    return new StopLabelingJobResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::StopLabelingJobRequestPrivate
 * \brief The StopLabelingJobRequestPrivate class provides private implementation for StopLabelingJobRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StopLabelingJobRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
StopLabelingJobRequestPrivate::StopLabelingJobRequestPrivate(
    const SageMakerRequest::Action action, StopLabelingJobRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopLabelingJobRequest
 * class' copy constructor.
 */
StopLabelingJobRequestPrivate::StopLabelingJobRequestPrivate(
    const StopLabelingJobRequestPrivate &other, StopLabelingJobRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
