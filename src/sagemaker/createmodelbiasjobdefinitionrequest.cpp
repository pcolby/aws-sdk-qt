// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createmodelbiasjobdefinitionrequest.h"
#include "createmodelbiasjobdefinitionrequest_p.h"
#include "createmodelbiasjobdefinitionresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateModelBiasJobDefinitionRequest
 * \brief The CreateModelBiasJobDefinitionRequest class provides an interface for SageMaker CreateModelBiasJobDefinition requests.
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
 * \sa SageMakerClient::createModelBiasJobDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
CreateModelBiasJobDefinitionRequest::CreateModelBiasJobDefinitionRequest(const CreateModelBiasJobDefinitionRequest &other)
    : SageMakerRequest(new CreateModelBiasJobDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateModelBiasJobDefinitionRequest object.
 */
CreateModelBiasJobDefinitionRequest::CreateModelBiasJobDefinitionRequest()
    : SageMakerRequest(new CreateModelBiasJobDefinitionRequestPrivate(SageMakerRequest::CreateModelBiasJobDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateModelBiasJobDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateModelBiasJobDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateModelBiasJobDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new CreateModelBiasJobDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateModelBiasJobDefinitionRequestPrivate
 * \brief The CreateModelBiasJobDefinitionRequestPrivate class provides private implementation for CreateModelBiasJobDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateModelBiasJobDefinitionRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateModelBiasJobDefinitionRequestPrivate::CreateModelBiasJobDefinitionRequestPrivate(
    const SageMakerRequest::Action action, CreateModelBiasJobDefinitionRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateModelBiasJobDefinitionRequest
 * class' copy constructor.
 */
CreateModelBiasJobDefinitionRequestPrivate::CreateModelBiasJobDefinitionRequestPrivate(
    const CreateModelBiasJobDefinitionRequestPrivate &other, CreateModelBiasJobDefinitionRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
