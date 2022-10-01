// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatenotebookinstancelifecycleconfigrequest.h"
#include "updatenotebookinstancelifecycleconfigrequest_p.h"
#include "updatenotebookinstancelifecycleconfigresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateNotebookInstanceLifecycleConfigRequest
 * \brief The UpdateNotebookInstanceLifecycleConfigRequest class provides an interface for SageMaker UpdateNotebookInstanceLifecycleConfig requests.
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
 * \sa SageMakerClient::updateNotebookInstanceLifecycleConfig
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateNotebookInstanceLifecycleConfigRequest::UpdateNotebookInstanceLifecycleConfigRequest(const UpdateNotebookInstanceLifecycleConfigRequest &other)
    : SageMakerRequest(new UpdateNotebookInstanceLifecycleConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateNotebookInstanceLifecycleConfigRequest object.
 */
UpdateNotebookInstanceLifecycleConfigRequest::UpdateNotebookInstanceLifecycleConfigRequest()
    : SageMakerRequest(new UpdateNotebookInstanceLifecycleConfigRequestPrivate(SageMakerRequest::UpdateNotebookInstanceLifecycleConfigAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateNotebookInstanceLifecycleConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateNotebookInstanceLifecycleConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateNotebookInstanceLifecycleConfigRequest::response(QNetworkReply * const reply) const
{
    return new UpdateNotebookInstanceLifecycleConfigResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::UpdateNotebookInstanceLifecycleConfigRequestPrivate
 * \brief The UpdateNotebookInstanceLifecycleConfigRequestPrivate class provides private implementation for UpdateNotebookInstanceLifecycleConfigRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateNotebookInstanceLifecycleConfigRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
UpdateNotebookInstanceLifecycleConfigRequestPrivate::UpdateNotebookInstanceLifecycleConfigRequestPrivate(
    const SageMakerRequest::Action action, UpdateNotebookInstanceLifecycleConfigRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateNotebookInstanceLifecycleConfigRequest
 * class' copy constructor.
 */
UpdateNotebookInstanceLifecycleConfigRequestPrivate::UpdateNotebookInstanceLifecycleConfigRequestPrivate(
    const UpdateNotebookInstanceLifecycleConfigRequestPrivate &other, UpdateNotebookInstanceLifecycleConfigRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
