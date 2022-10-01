// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtrainingjobrequest.h"
#include "createtrainingjobrequest_p.h"
#include "createtrainingjobresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateTrainingJobRequest
 * \brief The CreateTrainingJobRequest class provides an interface for SageMaker CreateTrainingJob requests.
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
 * \sa SageMakerClient::createTrainingJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateTrainingJobRequest::CreateTrainingJobRequest(const CreateTrainingJobRequest &other)
    : SageMakerRequest(new CreateTrainingJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateTrainingJobRequest object.
 */
CreateTrainingJobRequest::CreateTrainingJobRequest()
    : SageMakerRequest(new CreateTrainingJobRequestPrivate(SageMakerRequest::CreateTrainingJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateTrainingJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateTrainingJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTrainingJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateTrainingJobResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateTrainingJobRequestPrivate
 * \brief The CreateTrainingJobRequestPrivate class provides private implementation for CreateTrainingJobRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateTrainingJobRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateTrainingJobRequestPrivate::CreateTrainingJobRequestPrivate(
    const SageMakerRequest::Action action, CreateTrainingJobRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateTrainingJobRequest
 * class' copy constructor.
 */
CreateTrainingJobRequestPrivate::CreateTrainingJobRequestPrivate(
    const CreateTrainingJobRequestPrivate &other, CreateTrainingJobRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
