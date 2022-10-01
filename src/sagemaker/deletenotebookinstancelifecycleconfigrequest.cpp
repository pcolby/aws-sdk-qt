// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletenotebookinstancelifecycleconfigrequest.h"
#include "deletenotebookinstancelifecycleconfigrequest_p.h"
#include "deletenotebookinstancelifecycleconfigresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteNotebookInstanceLifecycleConfigRequest
 * \brief The DeleteNotebookInstanceLifecycleConfigRequest class provides an interface for SageMaker DeleteNotebookInstanceLifecycleConfig requests.
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
 * \sa SageMakerClient::deleteNotebookInstanceLifecycleConfig
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteNotebookInstanceLifecycleConfigRequest::DeleteNotebookInstanceLifecycleConfigRequest(const DeleteNotebookInstanceLifecycleConfigRequest &other)
    : SageMakerRequest(new DeleteNotebookInstanceLifecycleConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteNotebookInstanceLifecycleConfigRequest object.
 */
DeleteNotebookInstanceLifecycleConfigRequest::DeleteNotebookInstanceLifecycleConfigRequest()
    : SageMakerRequest(new DeleteNotebookInstanceLifecycleConfigRequestPrivate(SageMakerRequest::DeleteNotebookInstanceLifecycleConfigAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteNotebookInstanceLifecycleConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteNotebookInstanceLifecycleConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteNotebookInstanceLifecycleConfigRequest::response(QNetworkReply * const reply) const
{
    return new DeleteNotebookInstanceLifecycleConfigResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteNotebookInstanceLifecycleConfigRequestPrivate
 * \brief The DeleteNotebookInstanceLifecycleConfigRequestPrivate class provides private implementation for DeleteNotebookInstanceLifecycleConfigRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteNotebookInstanceLifecycleConfigRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteNotebookInstanceLifecycleConfigRequestPrivate::DeleteNotebookInstanceLifecycleConfigRequestPrivate(
    const SageMakerRequest::Action action, DeleteNotebookInstanceLifecycleConfigRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteNotebookInstanceLifecycleConfigRequest
 * class' copy constructor.
 */
DeleteNotebookInstanceLifecycleConfigRequestPrivate::DeleteNotebookInstanceLifecycleConfigRequestPrivate(
    const DeleteNotebookInstanceLifecycleConfigRequestPrivate &other, DeleteNotebookInstanceLifecycleConfigRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
