// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemodelbiasjobdefinitionrequest.h"
#include "deletemodelbiasjobdefinitionrequest_p.h"
#include "deletemodelbiasjobdefinitionresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteModelBiasJobDefinitionRequest
 * \brief The DeleteModelBiasJobDefinitionRequest class provides an interface for SageMaker DeleteModelBiasJobDefinition requests.
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
 * \sa SageMakerClient::deleteModelBiasJobDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteModelBiasJobDefinitionRequest::DeleteModelBiasJobDefinitionRequest(const DeleteModelBiasJobDefinitionRequest &other)
    : SageMakerRequest(new DeleteModelBiasJobDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteModelBiasJobDefinitionRequest object.
 */
DeleteModelBiasJobDefinitionRequest::DeleteModelBiasJobDefinitionRequest()
    : SageMakerRequest(new DeleteModelBiasJobDefinitionRequestPrivate(SageMakerRequest::DeleteModelBiasJobDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteModelBiasJobDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteModelBiasJobDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteModelBiasJobDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteModelBiasJobDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteModelBiasJobDefinitionRequestPrivate
 * \brief The DeleteModelBiasJobDefinitionRequestPrivate class provides private implementation for DeleteModelBiasJobDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteModelBiasJobDefinitionRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteModelBiasJobDefinitionRequestPrivate::DeleteModelBiasJobDefinitionRequestPrivate(
    const SageMakerRequest::Action action, DeleteModelBiasJobDefinitionRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteModelBiasJobDefinitionRequest
 * class' copy constructor.
 */
DeleteModelBiasJobDefinitionRequestPrivate::DeleteModelBiasJobDefinitionRequestPrivate(
    const DeleteModelBiasJobDefinitionRequestPrivate &other, DeleteModelBiasJobDefinitionRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
