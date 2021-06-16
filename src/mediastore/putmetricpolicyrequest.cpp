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

#include "putmetricpolicyrequest.h"
#include "putmetricpolicyrequest_p.h"
#include "putmetricpolicyresponse.h"
#include "mediastorerequest_p.h"

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::PutMetricPolicyRequest
 * \brief The PutMetricPolicyRequest class provides an interface for MediaStore PutMetricPolicy requests.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::putMetricPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutMetricPolicyRequest::PutMetricPolicyRequest(const PutMetricPolicyRequest &other)
    : MediaStoreRequest(new PutMetricPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutMetricPolicyRequest object.
 */
PutMetricPolicyRequest::PutMetricPolicyRequest()
    : MediaStoreRequest(new PutMetricPolicyRequestPrivate(MediaStoreRequest::PutMetricPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutMetricPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutMetricPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutMetricPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutMetricPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::MediaStore::PutMetricPolicyRequestPrivate
 * \brief The PutMetricPolicyRequestPrivate class provides private implementation for PutMetricPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a PutMetricPolicyRequestPrivate object for MediaStore \a action,
 * with public implementation \a q.
 */
PutMetricPolicyRequestPrivate::PutMetricPolicyRequestPrivate(
    const MediaStoreRequest::Action action, PutMetricPolicyRequest * const q)
    : MediaStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutMetricPolicyRequest
 * class' copy constructor.
 */
PutMetricPolicyRequestPrivate::PutMetricPolicyRequestPrivate(
    const PutMetricPolicyRequestPrivate &other, PutMetricPolicyRequest * const q)
    : MediaStoreRequestPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace QtAws
