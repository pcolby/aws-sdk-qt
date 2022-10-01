// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemodelexplainabilityjobdefinitionrequest.h"
#include "deletemodelexplainabilityjobdefinitionrequest_p.h"
#include "deletemodelexplainabilityjobdefinitionresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteModelExplainabilityJobDefinitionRequest
 * \brief The DeleteModelExplainabilityJobDefinitionRequest class provides an interface for SageMaker DeleteModelExplainabilityJobDefinition requests.
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
 * \sa SageMakerClient::deleteModelExplainabilityJobDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteModelExplainabilityJobDefinitionRequest::DeleteModelExplainabilityJobDefinitionRequest(const DeleteModelExplainabilityJobDefinitionRequest &other)
    : SageMakerRequest(new DeleteModelExplainabilityJobDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteModelExplainabilityJobDefinitionRequest object.
 */
DeleteModelExplainabilityJobDefinitionRequest::DeleteModelExplainabilityJobDefinitionRequest()
    : SageMakerRequest(new DeleteModelExplainabilityJobDefinitionRequestPrivate(SageMakerRequest::DeleteModelExplainabilityJobDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteModelExplainabilityJobDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteModelExplainabilityJobDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteModelExplainabilityJobDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteModelExplainabilityJobDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteModelExplainabilityJobDefinitionRequestPrivate
 * \brief The DeleteModelExplainabilityJobDefinitionRequestPrivate class provides private implementation for DeleteModelExplainabilityJobDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteModelExplainabilityJobDefinitionRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteModelExplainabilityJobDefinitionRequestPrivate::DeleteModelExplainabilityJobDefinitionRequestPrivate(
    const SageMakerRequest::Action action, DeleteModelExplainabilityJobDefinitionRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteModelExplainabilityJobDefinitionRequest
 * class' copy constructor.
 */
DeleteModelExplainabilityJobDefinitionRequestPrivate::DeleteModelExplainabilityJobDefinitionRequestPrivate(
    const DeleteModelExplainabilityJobDefinitionRequestPrivate &other, DeleteModelExplainabilityJobDefinitionRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
