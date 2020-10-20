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

#include "getcontainerpolicyrequest.h"
#include "getcontainerpolicyrequest_p.h"
#include "getcontainerpolicyresponse.h"
#include "mediastorerequest_p.h"

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::GetContainerPolicyRequest
 * \brief The GetContainerPolicyRequest class provides an interface for MediaStore GetContainerPolicy requests.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::getContainerPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetContainerPolicyRequest::GetContainerPolicyRequest(const GetContainerPolicyRequest &other)
    : MediaStoreRequest(new GetContainerPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetContainerPolicyRequest object.
 */
GetContainerPolicyRequest::GetContainerPolicyRequest()
    : MediaStoreRequest(new GetContainerPolicyRequestPrivate(MediaStoreRequest::GetContainerPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetContainerPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetContainerPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetContainerPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetContainerPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::MediaStore::GetContainerPolicyRequestPrivate
 * \brief The GetContainerPolicyRequestPrivate class provides private implementation for GetContainerPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a GetContainerPolicyRequestPrivate object for MediaStore \a action,
 * with public implementation \a q.
 */
GetContainerPolicyRequestPrivate::GetContainerPolicyRequestPrivate(
    const MediaStoreRequest::Action action, GetContainerPolicyRequest * const q)
    : MediaStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetContainerPolicyRequest
 * class' copy constructor.
 */
GetContainerPolicyRequestPrivate::GetContainerPolicyRequestPrivate(
    const GetContainerPolicyRequestPrivate &other, GetContainerPolicyRequest * const q)
    : MediaStoreRequestPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace QtAws
