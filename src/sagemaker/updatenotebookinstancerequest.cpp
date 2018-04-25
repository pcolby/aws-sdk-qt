/*
    Copyright 2013-2018 Paul Colby

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

#include "updatenotebookinstancerequest.h"
#include "updatenotebookinstancerequest_p.h"
#include "updatenotebookinstanceresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateNotebookInstanceRequest
 * \brief The UpdateNotebookInstanceRequest class provides an interface for SageMaker UpdateNotebookInstance requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *
 * \sa SageMakerClient::updateNotebookInstance
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateNotebookInstanceRequest::UpdateNotebookInstanceRequest(const UpdateNotebookInstanceRequest &other)
    : SageMakerRequest(new UpdateNotebookInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateNotebookInstanceRequest object.
 */
UpdateNotebookInstanceRequest::UpdateNotebookInstanceRequest()
    : SageMakerRequest(new UpdateNotebookInstanceRequestPrivate(SageMakerRequest::UpdateNotebookInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateNotebookInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateNotebookInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateNotebookInstanceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateNotebookInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::UpdateNotebookInstanceRequestPrivate
 * \brief The UpdateNotebookInstanceRequestPrivate class provides private implementation for UpdateNotebookInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateNotebookInstanceRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
UpdateNotebookInstanceRequestPrivate::UpdateNotebookInstanceRequestPrivate(
    const SageMakerRequest::Action action, UpdateNotebookInstanceRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateNotebookInstanceRequest
 * class' copy constructor.
 */
UpdateNotebookInstanceRequestPrivate::UpdateNotebookInstanceRequestPrivate(
    const UpdateNotebookInstanceRequestPrivate &other, UpdateNotebookInstanceRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
