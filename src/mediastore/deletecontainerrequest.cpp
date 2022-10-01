// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
