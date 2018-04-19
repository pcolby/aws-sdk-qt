/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *
 * Constructs a CreateNotebookInstanceLifecycleConfigRequestPrivate object for SageMaker \a action with,
 * public implementation \a q.
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
