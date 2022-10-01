// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createexperimentrequest.h"
#include "createexperimentrequest_p.h"
#include "createexperimentresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateExperimentRequest
 * \brief The CreateExperimentRequest class provides an interface for SageMaker CreateExperiment requests.
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
 * \sa SageMakerClient::createExperiment
 */

/*!
 * Constructs a copy of \a other.
 */
CreateExperimentRequest::CreateExperimentRequest(const CreateExperimentRequest &other)
    : SageMakerRequest(new CreateExperimentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateExperimentRequest object.
 */
CreateExperimentRequest::CreateExperimentRequest()
    : SageMakerRequest(new CreateExperimentRequestPrivate(SageMakerRequest::CreateExperimentAction, this))
{

}

/*!
 * \reimp
 */
bool CreateExperimentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateExperimentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateExperimentRequest::response(QNetworkReply * const reply) const
{
    return new CreateExperimentResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateExperimentRequestPrivate
 * \brief The CreateExperimentRequestPrivate class provides private implementation for CreateExperimentRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateExperimentRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateExperimentRequestPrivate::CreateExperimentRequestPrivate(
    const SageMakerRequest::Action action, CreateExperimentRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateExperimentRequest
 * class' copy constructor.
 */
CreateExperimentRequestPrivate::CreateExperimentRequestPrivate(
    const CreateExperimentRequestPrivate &other, CreateExperimentRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
