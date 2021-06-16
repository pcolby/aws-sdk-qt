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

#include "getcorspolicyrequest.h"
#include "getcorspolicyrequest_p.h"
#include "getcorspolicyresponse.h"
#include "mediastorerequest_p.h"

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::GetCorsPolicyRequest
 * \brief The GetCorsPolicyRequest class provides an interface for MediaStore GetCorsPolicy requests.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::getCorsPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetCorsPolicyRequest::GetCorsPolicyRequest(const GetCorsPolicyRequest &other)
    : MediaStoreRequest(new GetCorsPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCorsPolicyRequest object.
 */
GetCorsPolicyRequest::GetCorsPolicyRequest()
    : MediaStoreRequest(new GetCorsPolicyRequestPrivate(MediaStoreRequest::GetCorsPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetCorsPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCorsPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCorsPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetCorsPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::MediaStore::GetCorsPolicyRequestPrivate
 * \brief The GetCorsPolicyRequestPrivate class provides private implementation for GetCorsPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a GetCorsPolicyRequestPrivate object for MediaStore \a action,
 * with public implementation \a q.
 */
GetCorsPolicyRequestPrivate::GetCorsPolicyRequestPrivate(
    const MediaStoreRequest::Action action, GetCorsPolicyRequest * const q)
    : MediaStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCorsPolicyRequest
 * class' copy constructor.
 */
GetCorsPolicyRequestPrivate::GetCorsPolicyRequestPrivate(
    const GetCorsPolicyRequestPrivate &other, GetCorsPolicyRequest * const q)
    : MediaStoreRequestPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace QtAws
