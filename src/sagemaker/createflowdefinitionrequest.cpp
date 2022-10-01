// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createflowdefinitionrequest.h"
#include "createflowdefinitionrequest_p.h"
#include "createflowdefinitionresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateFlowDefinitionRequest
 * \brief The CreateFlowDefinitionRequest class provides an interface for SageMaker CreateFlowDefinition requests.
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
 * \sa SageMakerClient::createFlowDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
CreateFlowDefinitionRequest::CreateFlowDefinitionRequest(const CreateFlowDefinitionRequest &other)
    : SageMakerRequest(new CreateFlowDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateFlowDefinitionRequest object.
 */
CreateFlowDefinitionRequest::CreateFlowDefinitionRequest()
    : SageMakerRequest(new CreateFlowDefinitionRequestPrivate(SageMakerRequest::CreateFlowDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateFlowDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateFlowDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFlowDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new CreateFlowDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateFlowDefinitionRequestPrivate
 * \brief The CreateFlowDefinitionRequestPrivate class provides private implementation for CreateFlowDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateFlowDefinitionRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateFlowDefinitionRequestPrivate::CreateFlowDefinitionRequestPrivate(
    const SageMakerRequest::Action action, CreateFlowDefinitionRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateFlowDefinitionRequest
 * class' copy constructor.
 */
CreateFlowDefinitionRequestPrivate::CreateFlowDefinitionRequestPrivate(
    const CreateFlowDefinitionRequestPrivate &other, CreateFlowDefinitionRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
