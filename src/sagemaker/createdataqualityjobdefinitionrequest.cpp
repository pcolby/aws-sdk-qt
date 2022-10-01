// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdataqualityjobdefinitionrequest.h"
#include "createdataqualityjobdefinitionrequest_p.h"
#include "createdataqualityjobdefinitionresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateDataQualityJobDefinitionRequest
 * \brief The CreateDataQualityJobDefinitionRequest class provides an interface for SageMaker CreateDataQualityJobDefinition requests.
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
 * \sa SageMakerClient::createDataQualityJobDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDataQualityJobDefinitionRequest::CreateDataQualityJobDefinitionRequest(const CreateDataQualityJobDefinitionRequest &other)
    : SageMakerRequest(new CreateDataQualityJobDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDataQualityJobDefinitionRequest object.
 */
CreateDataQualityJobDefinitionRequest::CreateDataQualityJobDefinitionRequest()
    : SageMakerRequest(new CreateDataQualityJobDefinitionRequestPrivate(SageMakerRequest::CreateDataQualityJobDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDataQualityJobDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDataQualityJobDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDataQualityJobDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new CreateDataQualityJobDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateDataQualityJobDefinitionRequestPrivate
 * \brief The CreateDataQualityJobDefinitionRequestPrivate class provides private implementation for CreateDataQualityJobDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateDataQualityJobDefinitionRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateDataQualityJobDefinitionRequestPrivate::CreateDataQualityJobDefinitionRequestPrivate(
    const SageMakerRequest::Action action, CreateDataQualityJobDefinitionRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDataQualityJobDefinitionRequest
 * class' copy constructor.
 */
CreateDataQualityJobDefinitionRequestPrivate::CreateDataQualityJobDefinitionRequestPrivate(
    const CreateDataQualityJobDefinitionRequestPrivate &other, CreateDataQualityJobDefinitionRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
