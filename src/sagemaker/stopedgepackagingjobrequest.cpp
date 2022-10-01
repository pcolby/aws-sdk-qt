// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopedgepackagingjobrequest.h"
#include "stopedgepackagingjobrequest_p.h"
#include "stopedgepackagingjobresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StopEdgePackagingJobRequest
 * \brief The StopEdgePackagingJobRequest class provides an interface for SageMaker StopEdgePackagingJob requests.
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
 * \sa SageMakerClient::stopEdgePackagingJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopEdgePackagingJobRequest::StopEdgePackagingJobRequest(const StopEdgePackagingJobRequest &other)
    : SageMakerRequest(new StopEdgePackagingJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopEdgePackagingJobRequest object.
 */
StopEdgePackagingJobRequest::StopEdgePackagingJobRequest()
    : SageMakerRequest(new StopEdgePackagingJobRequestPrivate(SageMakerRequest::StopEdgePackagingJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopEdgePackagingJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopEdgePackagingJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopEdgePackagingJobRequest::response(QNetworkReply * const reply) const
{
    return new StopEdgePackagingJobResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::StopEdgePackagingJobRequestPrivate
 * \brief The StopEdgePackagingJobRequestPrivate class provides private implementation for StopEdgePackagingJobRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StopEdgePackagingJobRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
StopEdgePackagingJobRequestPrivate::StopEdgePackagingJobRequestPrivate(
    const SageMakerRequest::Action action, StopEdgePackagingJobRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopEdgePackagingJobRequest
 * class' copy constructor.
 */
StopEdgePackagingJobRequestPrivate::StopEdgePackagingJobRequestPrivate(
    const StopEdgePackagingJobRequestPrivate &other, StopEdgePackagingJobRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
