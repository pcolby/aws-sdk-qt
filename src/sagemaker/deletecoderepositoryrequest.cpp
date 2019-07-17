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

#include "deletecoderepositoryrequest.h"
#include "deletecoderepositoryrequest_p.h"
#include "deletecoderepositoryresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteCodeRepositoryRequest
 * \brief The DeleteCodeRepositoryRequest class provides an interface for SageMaker DeleteCodeRepository requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *
 * \sa SageMakerClient::deleteCodeRepository
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCodeRepositoryRequest::DeleteCodeRepositoryRequest(const DeleteCodeRepositoryRequest &other)
    : SageMakerRequest(new DeleteCodeRepositoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCodeRepositoryRequest object.
 */
DeleteCodeRepositoryRequest::DeleteCodeRepositoryRequest()
    : SageMakerRequest(new DeleteCodeRepositoryRequestPrivate(SageMakerRequest::DeleteCodeRepositoryAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCodeRepositoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCodeRepositoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCodeRepositoryRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCodeRepositoryResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteCodeRepositoryRequestPrivate
 * \brief The DeleteCodeRepositoryRequestPrivate class provides private implementation for DeleteCodeRepositoryRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteCodeRepositoryRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteCodeRepositoryRequestPrivate::DeleteCodeRepositoryRequestPrivate(
    const SageMakerRequest::Action action, DeleteCodeRepositoryRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCodeRepositoryRequest
 * class' copy constructor.
 */
DeleteCodeRepositoryRequestPrivate::DeleteCodeRepositoryRequestPrivate(
    const DeleteCodeRepositoryRequestPrivate &other, DeleteCodeRepositoryRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
