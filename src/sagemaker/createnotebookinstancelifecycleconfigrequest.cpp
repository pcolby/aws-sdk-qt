// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createnotebookinstancelifecycleconfigrequest.h"
#include "createnotebookinstancelifecycleconfigrequest_p.h"
#include "createnotebookinstancelifecycleconfigresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateNotebookInstanceLifecycleConfigRequest
 * \brief The CreateNotebookInstanceLifecycleConfigRequest class provides an interface for SageMaker CreateNotebookInstanceLifecycleConfig requests.
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
 * \sa SageMakerClient::createNotebookInstanceLifecycleConfig
 */

/*!
 * Constructs a copy of \a other.
 */
CreateNotebookInstanceLifecycleConfigRequest::CreateNotebookInstanceLifecycleConfigRequest(const CreateNotebookInstanceLifecycleConfigRequest &other)
    : SageMakerRequest(new CreateNotebookInstanceLifecycleConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateNotebookInstanceLifecycleConfigRequest object.
 */
CreateNotebookInstanceLifecycleConfigRequest::CreateNotebookInstanceLifecycleConfigRequest()
    : SageMakerRequest(new CreateNotebookInstanceLifecycleConfigRequestPrivate(SageMakerRequest::CreateNotebookInstanceLifecycleConfigAction, this))
{

}

/*!
 * \reimp
 */
bool CreateNotebookInstanceLifecycleConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateNotebookInstanceLifecycleConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateNotebookInstanceLifecycleConfigRequest::response(QNetworkReply * const reply) const
{
    return new CreateNotebookInstanceLifecycleConfigResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateNotebookInstanceLifecycleConfigRequestPrivate
 * \brief The CreateNotebookInstanceLifecycleConfigRequestPrivate class provides private implementation for CreateNotebookInstanceLifecycleConfigRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateNotebookInstanceLifecycleConfigRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateNotebookInstanceLifecycleConfigRequestPrivate::CreateNotebookInstanceLifecycleConfigRequestPrivate(
    const SageMakerRequest::Action action, CreateNotebookInstanceLifecycleConfigRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateNotebookInstanceLifecycleConfigRequest
 * class' copy constructor.
 */
CreateNotebookInstanceLifecycleConfigRequestPrivate::CreateNotebookInstanceLifecycleConfigRequestPrivate(
    const CreateNotebookInstanceLifecycleConfigRequestPrivate &other, CreateNotebookInstanceLifecycleConfigRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
