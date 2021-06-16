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
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
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
