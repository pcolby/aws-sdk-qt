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

#include "deletecorspolicyrequest.h"
#include "deletecorspolicyrequest_p.h"
#include "deletecorspolicyresponse.h"
#include "mediastorerequest_p.h"

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::DeleteCorsPolicyRequest
 * \brief The DeleteCorsPolicyRequest class provides an interface for MediaStore DeleteCorsPolicy requests.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::deleteCorsPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCorsPolicyRequest::DeleteCorsPolicyRequest(const DeleteCorsPolicyRequest &other)
    : MediaStoreRequest(new DeleteCorsPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCorsPolicyRequest object.
 */
DeleteCorsPolicyRequest::DeleteCorsPolicyRequest()
    : MediaStoreRequest(new DeleteCorsPolicyRequestPrivate(MediaStoreRequest::DeleteCorsPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCorsPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCorsPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCorsPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCorsPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::MediaStore::DeleteCorsPolicyRequestPrivate
 * \brief The DeleteCorsPolicyRequestPrivate class provides private implementation for DeleteCorsPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a DeleteCorsPolicyRequestPrivate object for MediaStore \a action,
 * with public implementation \a q.
 */
DeleteCorsPolicyRequestPrivate::DeleteCorsPolicyRequestPrivate(
    const MediaStoreRequest::Action action, DeleteCorsPolicyRequest * const q)
    : MediaStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCorsPolicyRequest
 * class' copy constructor.
 */
DeleteCorsPolicyRequestPrivate::DeleteCorsPolicyRequestPrivate(
    const DeleteCorsPolicyRequestPrivate &other, DeleteCorsPolicyRequest * const q)
    : MediaStoreRequestPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace QtAws
