// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopinferencerecommendationsjobrequest.h"
#include "stopinferencerecommendationsjobrequest_p.h"
#include "stopinferencerecommendationsjobresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StopInferenceRecommendationsJobRequest
 * \brief The StopInferenceRecommendationsJobRequest class provides an interface for SageMaker StopInferenceRecommendationsJob requests.
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
 * \sa SageMakerClient::stopInferenceRecommendationsJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopInferenceRecommendationsJobRequest::StopInferenceRecommendationsJobRequest(const StopInferenceRecommendationsJobRequest &other)
    : SageMakerRequest(new StopInferenceRecommendationsJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopInferenceRecommendationsJobRequest object.
 */
StopInferenceRecommendationsJobRequest::StopInferenceRecommendationsJobRequest()
    : SageMakerRequest(new StopInferenceRecommendationsJobRequestPrivate(SageMakerRequest::StopInferenceRecommendationsJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopInferenceRecommendationsJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopInferenceRecommendationsJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopInferenceRecommendationsJobRequest::response(QNetworkReply * const reply) const
{
    return new StopInferenceRecommendationsJobResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::StopInferenceRecommendationsJobRequestPrivate
 * \brief The StopInferenceRecommendationsJobRequestPrivate class provides private implementation for StopInferenceRecommendationsJobRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StopInferenceRecommendationsJobRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
StopInferenceRecommendationsJobRequestPrivate::StopInferenceRecommendationsJobRequestPrivate(
    const SageMakerRequest::Action action, StopInferenceRecommendationsJobRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopInferenceRecommendationsJobRequest
 * class' copy constructor.
 */
StopInferenceRecommendationsJobRequestPrivate::StopInferenceRecommendationsJobRequestPrivate(
    const StopInferenceRecommendationsJobRequestPrivate &other, StopInferenceRecommendationsJobRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
