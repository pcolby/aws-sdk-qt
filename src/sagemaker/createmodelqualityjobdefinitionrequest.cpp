// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createmodelqualityjobdefinitionrequest.h"
#include "createmodelqualityjobdefinitionrequest_p.h"
#include "createmodelqualityjobdefinitionresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateModelQualityJobDefinitionRequest
 * \brief The CreateModelQualityJobDefinitionRequest class provides an interface for SageMaker CreateModelQualityJobDefinition requests.
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
 * \sa SageMakerClient::createModelQualityJobDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
CreateModelQualityJobDefinitionRequest::CreateModelQualityJobDefinitionRequest(const CreateModelQualityJobDefinitionRequest &other)
    : SageMakerRequest(new CreateModelQualityJobDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateModelQualityJobDefinitionRequest object.
 */
CreateModelQualityJobDefinitionRequest::CreateModelQualityJobDefinitionRequest()
    : SageMakerRequest(new CreateModelQualityJobDefinitionRequestPrivate(SageMakerRequest::CreateModelQualityJobDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateModelQualityJobDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateModelQualityJobDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateModelQualityJobDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new CreateModelQualityJobDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateModelQualityJobDefinitionRequestPrivate
 * \brief The CreateModelQualityJobDefinitionRequestPrivate class provides private implementation for CreateModelQualityJobDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateModelQualityJobDefinitionRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateModelQualityJobDefinitionRequestPrivate::CreateModelQualityJobDefinitionRequestPrivate(
    const SageMakerRequest::Action action, CreateModelQualityJobDefinitionRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateModelQualityJobDefinitionRequest
 * class' copy constructor.
 */
CreateModelQualityJobDefinitionRequestPrivate::CreateModelQualityJobDefinitionRequestPrivate(
    const CreateModelQualityJobDefinitionRequestPrivate &other, CreateModelQualityJobDefinitionRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
