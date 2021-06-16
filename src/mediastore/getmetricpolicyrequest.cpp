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

#include "getmetricpolicyrequest.h"
#include "getmetricpolicyrequest_p.h"
#include "getmetricpolicyresponse.h"
#include "mediastorerequest_p.h"

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::GetMetricPolicyRequest
 * \brief The GetMetricPolicyRequest class provides an interface for MediaStore GetMetricPolicy requests.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::getMetricPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetMetricPolicyRequest::GetMetricPolicyRequest(const GetMetricPolicyRequest &other)
    : MediaStoreRequest(new GetMetricPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMetricPolicyRequest object.
 */
GetMetricPolicyRequest::GetMetricPolicyRequest()
    : MediaStoreRequest(new GetMetricPolicyRequestPrivate(MediaStoreRequest::GetMetricPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetMetricPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMetricPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMetricPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetMetricPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::MediaStore::GetMetricPolicyRequestPrivate
 * \brief The GetMetricPolicyRequestPrivate class provides private implementation for GetMetricPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a GetMetricPolicyRequestPrivate object for MediaStore \a action,
 * with public implementation \a q.
 */
GetMetricPolicyRequestPrivate::GetMetricPolicyRequestPrivate(
    const MediaStoreRequest::Action action, GetMetricPolicyRequest * const q)
    : MediaStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMetricPolicyRequest
 * class' copy constructor.
 */
GetMetricPolicyRequestPrivate::GetMetricPolicyRequestPrivate(
    const GetMetricPolicyRequestPrivate &other, GetMetricPolicyRequest * const q)
    : MediaStoreRequestPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace QtAws
