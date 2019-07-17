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

#include "createnotebookinstancerequest.h"
#include "createnotebookinstancerequest_p.h"
#include "createnotebookinstanceresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateNotebookInstanceRequest
 * \brief The CreateNotebookInstanceRequest class provides an interface for SageMaker CreateNotebookInstance requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::createNotebookInstance
 */

/*!
 * Constructs a copy of \a other.
 */
CreateNotebookInstanceRequest::CreateNotebookInstanceRequest(const CreateNotebookInstanceRequest &other)
    : SageMakerRequest(new CreateNotebookInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateNotebookInstanceRequest object.
 */
CreateNotebookInstanceRequest::CreateNotebookInstanceRequest()
    : SageMakerRequest(new CreateNotebookInstanceRequestPrivate(SageMakerRequest::CreateNotebookInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool CreateNotebookInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateNotebookInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateNotebookInstanceRequest::response(QNetworkReply * const reply) const
{
    return new CreateNotebookInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateNotebookInstanceRequestPrivate
 * \brief The CreateNotebookInstanceRequestPrivate class provides private implementation for CreateNotebookInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateNotebookInstanceRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateNotebookInstanceRequestPrivate::CreateNotebookInstanceRequestPrivate(
    const SageMakerRequest::Action action, CreateNotebookInstanceRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateNotebookInstanceRequest
 * class' copy constructor.
 */
CreateNotebookInstanceRequestPrivate::CreateNotebookInstanceRequestPrivate(
    const CreateNotebookInstanceRequestPrivate &other, CreateNotebookInstanceRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
