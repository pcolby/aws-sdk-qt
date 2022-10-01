// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteflowdefinitionrequest.h"
#include "deleteflowdefinitionrequest_p.h"
#include "deleteflowdefinitionresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteFlowDefinitionRequest
 * \brief The DeleteFlowDefinitionRequest class provides an interface for SageMaker DeleteFlowDefinition requests.
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
 * \sa SageMakerClient::deleteFlowDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFlowDefinitionRequest::DeleteFlowDefinitionRequest(const DeleteFlowDefinitionRequest &other)
    : SageMakerRequest(new DeleteFlowDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFlowDefinitionRequest object.
 */
DeleteFlowDefinitionRequest::DeleteFlowDefinitionRequest()
    : SageMakerRequest(new DeleteFlowDefinitionRequestPrivate(SageMakerRequest::DeleteFlowDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFlowDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFlowDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFlowDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFlowDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteFlowDefinitionRequestPrivate
 * \brief The DeleteFlowDefinitionRequestPrivate class provides private implementation for DeleteFlowDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteFlowDefinitionRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteFlowDefinitionRequestPrivate::DeleteFlowDefinitionRequestPrivate(
    const SageMakerRequest::Action action, DeleteFlowDefinitionRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFlowDefinitionRequest
 * class' copy constructor.
 */
DeleteFlowDefinitionRequestPrivate::DeleteFlowDefinitionRequestPrivate(
    const DeleteFlowDefinitionRequestPrivate &other, DeleteFlowDefinitionRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
