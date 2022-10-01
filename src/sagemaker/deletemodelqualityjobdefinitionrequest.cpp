// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemodelqualityjobdefinitionrequest.h"
#include "deletemodelqualityjobdefinitionrequest_p.h"
#include "deletemodelqualityjobdefinitionresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteModelQualityJobDefinitionRequest
 * \brief The DeleteModelQualityJobDefinitionRequest class provides an interface for SageMaker DeleteModelQualityJobDefinition requests.
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
 * \sa SageMakerClient::deleteModelQualityJobDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteModelQualityJobDefinitionRequest::DeleteModelQualityJobDefinitionRequest(const DeleteModelQualityJobDefinitionRequest &other)
    : SageMakerRequest(new DeleteModelQualityJobDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteModelQualityJobDefinitionRequest object.
 */
DeleteModelQualityJobDefinitionRequest::DeleteModelQualityJobDefinitionRequest()
    : SageMakerRequest(new DeleteModelQualityJobDefinitionRequestPrivate(SageMakerRequest::DeleteModelQualityJobDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteModelQualityJobDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteModelQualityJobDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteModelQualityJobDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteModelQualityJobDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteModelQualityJobDefinitionRequestPrivate
 * \brief The DeleteModelQualityJobDefinitionRequestPrivate class provides private implementation for DeleteModelQualityJobDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteModelQualityJobDefinitionRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteModelQualityJobDefinitionRequestPrivate::DeleteModelQualityJobDefinitionRequestPrivate(
    const SageMakerRequest::Action action, DeleteModelQualityJobDefinitionRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteModelQualityJobDefinitionRequest
 * class' copy constructor.
 */
DeleteModelQualityJobDefinitionRequestPrivate::DeleteModelQualityJobDefinitionRequestPrivate(
    const DeleteModelQualityJobDefinitionRequestPrivate &other, DeleteModelQualityJobDefinitionRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
