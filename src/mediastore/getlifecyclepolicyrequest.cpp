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

#include "getlifecyclepolicyrequest.h"
#include "getlifecyclepolicyrequest_p.h"
#include "getlifecyclepolicyresponse.h"
#include "mediastorerequest_p.h"

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::GetLifecyclePolicyRequest
 * \brief The GetLifecyclePolicyRequest class provides an interface for MediaStore GetLifecyclePolicy requests.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::getLifecyclePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetLifecyclePolicyRequest::GetLifecyclePolicyRequest(const GetLifecyclePolicyRequest &other)
    : MediaStoreRequest(new GetLifecyclePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLifecyclePolicyRequest object.
 */
GetLifecyclePolicyRequest::GetLifecyclePolicyRequest()
    : MediaStoreRequest(new GetLifecyclePolicyRequestPrivate(MediaStoreRequest::GetLifecyclePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetLifecyclePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLifecyclePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLifecyclePolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetLifecyclePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::MediaStore::GetLifecyclePolicyRequestPrivate
 * \brief The GetLifecyclePolicyRequestPrivate class provides private implementation for GetLifecyclePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a GetLifecyclePolicyRequestPrivate object for MediaStore \a action,
 * with public implementation \a q.
 */
GetLifecyclePolicyRequestPrivate::GetLifecyclePolicyRequestPrivate(
    const MediaStoreRequest::Action action, GetLifecyclePolicyRequest * const q)
    : MediaStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLifecyclePolicyRequest
 * class' copy constructor.
 */
GetLifecyclePolicyRequestPrivate::GetLifecyclePolicyRequestPrivate(
    const GetLifecyclePolicyRequestPrivate &other, GetLifecyclePolicyRequest * const q)
    : MediaStoreRequestPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace QtAws
