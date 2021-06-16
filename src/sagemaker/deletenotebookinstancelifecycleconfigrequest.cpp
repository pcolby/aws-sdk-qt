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
