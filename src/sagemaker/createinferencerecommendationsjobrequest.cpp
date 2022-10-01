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

#include "createinferencerecommendationsjobrequest.h"
#include "createinferencerecommendationsjobrequest_p.h"
#include "createinferencerecommendationsjobresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateInferenceRecommendationsJobRequest
 * \brief The CreateInferenceRecommendationsJobRequest class provides an interface for SageMaker CreateInferenceRecommendationsJob requests.
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
 * \sa SageMakerClient::createInferenceRecommendationsJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateInferenceRecommendationsJobRequest::CreateInferenceRecommendationsJobRequest(const CreateInferenceRecommendationsJobRequest &other)
    : SageMakerRequest(new CreateInferenceRecommendationsJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateInferenceRecommendationsJobRequest object.
 */
CreateInferenceRecommendationsJobRequest::CreateInferenceRecommendationsJobRequest()
    : SageMakerRequest(new CreateInferenceRecommendationsJobRequestPrivate(SageMakerRequest::CreateInferenceRecommendationsJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateInferenceRecommendationsJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateInferenceRecommendationsJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateInferenceRecommendationsJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateInferenceRecommendationsJobResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateInferenceRecommendationsJobRequestPrivate
 * \brief The CreateInferenceRecommendationsJobRequestPrivate class provides private implementation for CreateInferenceRecommendationsJobRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateInferenceRecommendationsJobRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateInferenceRecommendationsJobRequestPrivate::CreateInferenceRecommendationsJobRequestPrivate(
    const SageMakerRequest::Action action, CreateInferenceRecommendationsJobRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateInferenceRecommendationsJobRequest
 * class' copy constructor.
 */
CreateInferenceRecommendationsJobRequestPrivate::CreateInferenceRecommendationsJobRequestPrivate(
    const CreateInferenceRecommendationsJobRequestPrivate &other, CreateInferenceRecommendationsJobRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
