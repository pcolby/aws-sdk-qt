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

#include "createmodelexplainabilityjobdefinitionrequest.h"
#include "createmodelexplainabilityjobdefinitionrequest_p.h"
#include "createmodelexplainabilityjobdefinitionresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateModelExplainabilityJobDefinitionRequest
 * \brief The CreateModelExplainabilityJobDefinitionRequest class provides an interface for SageMaker CreateModelExplainabilityJobDefinition requests.
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
 * \sa SageMakerClient::createModelExplainabilityJobDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
CreateModelExplainabilityJobDefinitionRequest::CreateModelExplainabilityJobDefinitionRequest(const CreateModelExplainabilityJobDefinitionRequest &other)
    : SageMakerRequest(new CreateModelExplainabilityJobDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateModelExplainabilityJobDefinitionRequest object.
 */
CreateModelExplainabilityJobDefinitionRequest::CreateModelExplainabilityJobDefinitionRequest()
    : SageMakerRequest(new CreateModelExplainabilityJobDefinitionRequestPrivate(SageMakerRequest::CreateModelExplainabilityJobDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateModelExplainabilityJobDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateModelExplainabilityJobDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateModelExplainabilityJobDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new CreateModelExplainabilityJobDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateModelExplainabilityJobDefinitionRequestPrivate
 * \brief The CreateModelExplainabilityJobDefinitionRequestPrivate class provides private implementation for CreateModelExplainabilityJobDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateModelExplainabilityJobDefinitionRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateModelExplainabilityJobDefinitionRequestPrivate::CreateModelExplainabilityJobDefinitionRequestPrivate(
    const SageMakerRequest::Action action, CreateModelExplainabilityJobDefinitionRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateModelExplainabilityJobDefinitionRequest
 * class' copy constructor.
 */
CreateModelExplainabilityJobDefinitionRequestPrivate::CreateModelExplainabilityJobDefinitionRequestPrivate(
    const CreateModelExplainabilityJobDefinitionRequestPrivate &other, CreateModelExplainabilityJobDefinitionRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
