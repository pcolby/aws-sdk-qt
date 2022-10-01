// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
