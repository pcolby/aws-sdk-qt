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

#include "deletecontainerpolicyrequest.h"
#include "deletecontainerpolicyrequest_p.h"
#include "deletecontainerpolicyresponse.h"
#include "mediastorerequest_p.h"

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::DeleteContainerPolicyRequest
 * \brief The DeleteContainerPolicyRequest class provides an interface for MediaStore DeleteContainerPolicy requests.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::deleteContainerPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteContainerPolicyRequest::DeleteContainerPolicyRequest(const DeleteContainerPolicyRequest &other)
    : MediaStoreRequest(new DeleteContainerPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteContainerPolicyRequest object.
 */
DeleteContainerPolicyRequest::DeleteContainerPolicyRequest()
    : MediaStoreRequest(new DeleteContainerPolicyRequestPrivate(MediaStoreRequest::DeleteContainerPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteContainerPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteContainerPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteContainerPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteContainerPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::MediaStore::DeleteContainerPolicyRequestPrivate
 * \brief The DeleteContainerPolicyRequestPrivate class provides private implementation for DeleteContainerPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a DeleteContainerPolicyRequestPrivate object for MediaStore \a action,
 * with public implementation \a q.
 */
DeleteContainerPolicyRequestPrivate::DeleteContainerPolicyRequestPrivate(
    const MediaStoreRequest::Action action, DeleteContainerPolicyRequest * const q)
    : MediaStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteContainerPolicyRequest
 * class' copy constructor.
 */
DeleteContainerPolicyRequestPrivate::DeleteContainerPolicyRequestPrivate(
    const DeleteContainerPolicyRequestPrivate &other, DeleteContainerPolicyRequest * const q)
    : MediaStoreRequestPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace QtAws
