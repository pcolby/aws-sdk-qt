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

#include "deletemetricpolicyrequest.h"
#include "deletemetricpolicyrequest_p.h"
#include "deletemetricpolicyresponse.h"
#include "mediastorerequest_p.h"

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::DeleteMetricPolicyRequest
 * \brief The DeleteMetricPolicyRequest class provides an interface for MediaStore DeleteMetricPolicy requests.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::deleteMetricPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteMetricPolicyRequest::DeleteMetricPolicyRequest(const DeleteMetricPolicyRequest &other)
    : MediaStoreRequest(new DeleteMetricPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteMetricPolicyRequest object.
 */
DeleteMetricPolicyRequest::DeleteMetricPolicyRequest()
    : MediaStoreRequest(new DeleteMetricPolicyRequestPrivate(MediaStoreRequest::DeleteMetricPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteMetricPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteMetricPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteMetricPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteMetricPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::MediaStore::DeleteMetricPolicyRequestPrivate
 * \brief The DeleteMetricPolicyRequestPrivate class provides private implementation for DeleteMetricPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a DeleteMetricPolicyRequestPrivate object for MediaStore \a action,
 * with public implementation \a q.
 */
DeleteMetricPolicyRequestPrivate::DeleteMetricPolicyRequestPrivate(
    const MediaStoreRequest::Action action, DeleteMetricPolicyRequest * const q)
    : MediaStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteMetricPolicyRequest
 * class' copy constructor.
 */
DeleteMetricPolicyRequestPrivate::DeleteMetricPolicyRequestPrivate(
    const DeleteMetricPolicyRequestPrivate &other, DeleteMetricPolicyRequest * const q)
    : MediaStoreRequestPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace QtAws
