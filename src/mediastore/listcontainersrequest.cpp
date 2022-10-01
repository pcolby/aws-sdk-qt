// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
