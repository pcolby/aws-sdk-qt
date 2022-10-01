/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
