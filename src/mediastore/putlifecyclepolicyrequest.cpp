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

#include "putlifecyclepolicyrequest.h"
#include "putlifecyclepolicyrequest_p.h"
#include "putlifecyclepolicyresponse.h"
#include "mediastorerequest_p.h"

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::PutLifecyclePolicyRequest
 * \brief The PutLifecyclePolicyRequest class provides an interface for MediaStore PutLifecyclePolicy requests.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::putLifecyclePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutLifecyclePolicyRequest::PutLifecyclePolicyRequest(const PutLifecyclePolicyRequest &other)
    : MediaStoreRequest(new PutLifecyclePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutLifecyclePolicyRequest object.
 */
PutLifecyclePolicyRequest::PutLifecyclePolicyRequest()
    : MediaStoreRequest(new PutLifecyclePolicyRequestPrivate(MediaStoreRequest::PutLifecyclePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutLifecyclePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutLifecyclePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutLifecyclePolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutLifecyclePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::MediaStore::PutLifecyclePolicyRequestPrivate
 * \brief The PutLifecyclePolicyRequestPrivate class provides private implementation for PutLifecyclePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a PutLifecyclePolicyRequestPrivate object for MediaStore \a action,
 * with public implementation \a q.
 */
PutLifecyclePolicyRequestPrivate::PutLifecyclePolicyRequestPrivate(
    const MediaStoreRequest::Action action, PutLifecyclePolicyRequest * const q)
    : MediaStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutLifecyclePolicyRequest
 * class' copy constructor.
 */
PutLifecyclePolicyRequestPrivate::PutLifecyclePolicyRequestPrivate(
    const PutLifecyclePolicyRequestPrivate &other, PutLifecyclePolicyRequest * const q)
    : MediaStoreRequestPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace QtAws
