/*
    Copyright 2013-2019 Paul Colby

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
