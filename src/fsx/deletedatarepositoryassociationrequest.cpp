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

#include "deletedatarepositoryassociationrequest.h"
#include "deletedatarepositoryassociationrequest_p.h"
#include "deletedatarepositoryassociationresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::DeleteDataRepositoryAssociationRequest
 * \brief The DeleteDataRepositoryAssociationRequest class provides an interface for FSx DeleteDataRepositoryAssociation requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::deleteDataRepositoryAssociation
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDataRepositoryAssociationRequest::DeleteDataRepositoryAssociationRequest(const DeleteDataRepositoryAssociationRequest &other)
    : FSxRequest(new DeleteDataRepositoryAssociationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDataRepositoryAssociationRequest object.
 */
DeleteDataRepositoryAssociationRequest::DeleteDataRepositoryAssociationRequest()
    : FSxRequest(new DeleteDataRepositoryAssociationRequestPrivate(FSxRequest::DeleteDataRepositoryAssociationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDataRepositoryAssociationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDataRepositoryAssociationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDataRepositoryAssociationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDataRepositoryAssociationResponse(*this, reply);
}

/*!
 * \class QtAws::FSx::DeleteDataRepositoryAssociationRequestPrivate
 * \brief The DeleteDataRepositoryAssociationRequestPrivate class provides private implementation for DeleteDataRepositoryAssociationRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a DeleteDataRepositoryAssociationRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
DeleteDataRepositoryAssociationRequestPrivate::DeleteDataRepositoryAssociationRequestPrivate(
    const FSxRequest::Action action, DeleteDataRepositoryAssociationRequest * const q)
    : FSxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDataRepositoryAssociationRequest
 * class' copy constructor.
 */
DeleteDataRepositoryAssociationRequestPrivate::DeleteDataRepositoryAssociationRequestPrivate(
    const DeleteDataRepositoryAssociationRequestPrivate &other, DeleteDataRepositoryAssociationRequest * const q)
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws
