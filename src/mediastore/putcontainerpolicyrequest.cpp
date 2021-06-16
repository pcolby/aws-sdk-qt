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

#include "putcontainerpolicyrequest.h"
#include "putcontainerpolicyrequest_p.h"
#include "putcontainerpolicyresponse.h"
#include "mediastorerequest_p.h"

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::PutContainerPolicyRequest
 * \brief The PutContainerPolicyRequest class provides an interface for MediaStore PutContainerPolicy requests.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::putContainerPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutContainerPolicyRequest::PutContainerPolicyRequest(const PutContainerPolicyRequest &other)
    : MediaStoreRequest(new PutContainerPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutContainerPolicyRequest object.
 */
PutContainerPolicyRequest::PutContainerPolicyRequest()
    : MediaStoreRequest(new PutContainerPolicyRequestPrivate(MediaStoreRequest::PutContainerPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutContainerPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutContainerPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutContainerPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutContainerPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::MediaStore::PutContainerPolicyRequestPrivate
 * \brief The PutContainerPolicyRequestPrivate class provides private implementation for PutContainerPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a PutContainerPolicyRequestPrivate object for MediaStore \a action,
 * with public implementation \a q.
 */
PutContainerPolicyRequestPrivate::PutContainerPolicyRequestPrivate(
    const MediaStoreRequest::Action action, PutContainerPolicyRequest * const q)
    : MediaStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutContainerPolicyRequest
 * class' copy constructor.
 */
PutContainerPolicyRequestPrivate::PutContainerPolicyRequestPrivate(
    const PutContainerPolicyRequestPrivate &other, PutContainerPolicyRequest * const q)
    : MediaStoreRequestPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace QtAws
