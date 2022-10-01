// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stoptransformjobrequest.h"
#include "stoptransformjobrequest_p.h"
#include "stoptransformjobresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StopTransformJobRequest
 * \brief The StopTransformJobRequest class provides an interface for SageMaker StopTransformJob requests.
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
 * \sa SageMakerClient::stopTransformJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopTransformJobRequest::StopTransformJobRequest(const StopTransformJobRequest &other)
    : SageMakerRequest(new StopTransformJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopTransformJobRequest object.
 */
StopTransformJobRequest::StopTransformJobRequest()
    : SageMakerRequest(new StopTransformJobRequestPrivate(SageMakerRequest::StopTransformJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopTransformJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopTransformJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopTransformJobRequest::response(QNetworkReply * const reply) const
{
    return new StopTransformJobResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::StopTransformJobRequestPrivate
 * \brief The StopTransformJobRequestPrivate class provides private implementation for StopTransformJobRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StopTransformJobRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
StopTransformJobRequestPrivate::StopTransformJobRequestPrivate(
    const SageMakerRequest::Action action, StopTransformJobRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopTransformJobRequest
 * class' copy constructor.
 */
StopTransformJobRequestPrivate::StopTransformJobRequestPrivate(
    const StopTransformJobRequestPrivate &other, StopTransformJobRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
