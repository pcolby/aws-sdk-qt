/*
    Copyright 2013-2020 Paul Colby

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

#include "listcontainersrequest.h"
#include "listcontainersrequest_p.h"
#include "listcontainersresponse.h"
#include "mediastorerequest_p.h"

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::ListContainersRequest
 * \brief The ListContainersRequest class provides an interface for MediaStore ListContainers requests.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::listContainers
 */

/*!
 * Constructs a copy of \a other.
 */
ListContainersRequest::ListContainersRequest(const ListContainersRequest &other)
    : MediaStoreRequest(new ListContainersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListContainersRequest object.
 */
ListContainersRequest::ListContainersRequest()
    : MediaStoreRequest(new ListContainersRequestPrivate(MediaStoreRequest::ListContainersAction, this))
{

}

/*!
 * \reimp
 */
bool ListContainersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListContainersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListContainersRequest::response(QNetworkReply * const reply) const
{
    return new ListContainersResponse(*this, reply);
}

/*!
 * \class QtAws::MediaStore::ListContainersRequestPrivate
 * \brief The ListContainersRequestPrivate class provides private implementation for ListContainersRequest.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a ListContainersRequestPrivate object for MediaStore \a action,
 * with public implementation \a q.
 */
ListContainersRequestPrivate::ListContainersRequestPrivate(
    const MediaStoreRequest::Action action, ListContainersRequest * const q)
    : MediaStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListContainersRequest
 * class' copy constructor.
 */
ListContainersRequestPrivate::ListContainersRequestPrivate(
    const ListContainersRequestPrivate &other, ListContainersRequest * const q)
    : MediaStoreRequestPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace QtAws
