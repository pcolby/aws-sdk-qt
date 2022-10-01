// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
