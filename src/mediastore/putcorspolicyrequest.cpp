/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "putcorspolicyrequest.h"
#include "putcorspolicyrequest_p.h"
#include "putcorspolicyresponse.h"
#include "mediastorerequest_p.h"

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::PutCorsPolicyRequest
 * \brief The PutCorsPolicyRequest class provides an interface for MediaStore PutCorsPolicy requests.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::putCorsPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutCorsPolicyRequest::PutCorsPolicyRequest(const PutCorsPolicyRequest &other)
    : MediaStoreRequest(new PutCorsPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutCorsPolicyRequest object.
 */
PutCorsPolicyRequest::PutCorsPolicyRequest()
    : MediaStoreRequest(new PutCorsPolicyRequestPrivate(MediaStoreRequest::PutCorsPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutCorsPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutCorsPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutCorsPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutCorsPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::MediaStore::PutCorsPolicyRequestPrivate
 * \brief The PutCorsPolicyRequestPrivate class provides private implementation for PutCorsPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a PutCorsPolicyRequestPrivate object for MediaStore \a action,
 * with public implementation \a q.
 */
PutCorsPolicyRequestPrivate::PutCorsPolicyRequestPrivate(
    const MediaStoreRequest::Action action, PutCorsPolicyRequest * const q)
    : MediaStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutCorsPolicyRequest
 * class' copy constructor.
 */
PutCorsPolicyRequestPrivate::PutCorsPolicyRequestPrivate(
    const PutCorsPolicyRequestPrivate &other, PutCorsPolicyRequest * const q)
    : MediaStoreRequestPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace QtAws
