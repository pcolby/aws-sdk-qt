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

#include "createcontainerrequest.h"
#include "createcontainerrequest_p.h"
#include "createcontainerresponse.h"
#include "mediastorerequest_p.h"

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::CreateContainerRequest
 * \brief The CreateContainerRequest class provides an interface for MediaStore CreateContainer requests.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::createContainer
 */

/*!
 * Constructs a copy of \a other.
 */
CreateContainerRequest::CreateContainerRequest(const CreateContainerRequest &other)
    : MediaStoreRequest(new CreateContainerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateContainerRequest object.
 */
CreateContainerRequest::CreateContainerRequest()
    : MediaStoreRequest(new CreateContainerRequestPrivate(MediaStoreRequest::CreateContainerAction, this))
{

}

/*!
 * \reimp
 */
bool CreateContainerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateContainerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateContainerRequest::response(QNetworkReply * const reply) const
{
    return new CreateContainerResponse(*this, reply);
}

/*!
 * \class QtAws::MediaStore::CreateContainerRequestPrivate
 * \brief The CreateContainerRequestPrivate class provides private implementation for CreateContainerRequest.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a CreateContainerRequestPrivate object for MediaStore \a action,
 * with public implementation \a q.
 */
CreateContainerRequestPrivate::CreateContainerRequestPrivate(
    const MediaStoreRequest::Action action, CreateContainerRequest * const q)
    : MediaStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateContainerRequest
 * class' copy constructor.
 */
CreateContainerRequestPrivate::CreateContainerRequestPrivate(
    const CreateContainerRequestPrivate &other, CreateContainerRequest * const q)
    : MediaStoreRequestPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace QtAws
