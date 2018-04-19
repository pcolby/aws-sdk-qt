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

#include "deletecontainerrequest.h"
#include "deletecontainerrequest_p.h"
#include "deletecontainerresponse.h"
#include "mediastorerequest_p.h"

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::DeleteContainerRequest
 * \brief The DeleteContainerRequest class provides an interface for MediaStore DeleteContainer requests.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::deleteContainer
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteContainerRequest::DeleteContainerRequest(const DeleteContainerRequest &other)
    : MediaStoreRequest(new DeleteContainerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteContainerRequest object.
 */
DeleteContainerRequest::DeleteContainerRequest()
    : MediaStoreRequest(new DeleteContainerRequestPrivate(MediaStoreRequest::DeleteContainerAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteContainerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteContainerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteContainerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteContainerResponse(*this, reply);
}

/*!
 * \class QtAws::MediaStore::DeleteContainerRequestPrivate
 * \brief The DeleteContainerRequestPrivate class provides private implementation for DeleteContainerRequest.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a DeleteContainerRequestPrivate object for MediaStore \a action,
 * with public implementation \a q.
 */
DeleteContainerRequestPrivate::DeleteContainerRequestPrivate(
    const MediaStoreRequest::Action action, DeleteContainerRequest * const q)
    : MediaStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteContainerRequest
 * class' copy constructor.
 */
DeleteContainerRequestPrivate::DeleteContainerRequestPrivate(
    const DeleteContainerRequestPrivate &other, DeleteContainerRequest * const q)
    : MediaStoreRequestPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace QtAws
