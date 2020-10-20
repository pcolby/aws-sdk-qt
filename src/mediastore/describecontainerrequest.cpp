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

#include "describecontainerrequest.h"
#include "describecontainerrequest_p.h"
#include "describecontainerresponse.h"
#include "mediastorerequest_p.h"

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::DescribeContainerRequest
 * \brief The DescribeContainerRequest class provides an interface for MediaStore DescribeContainer requests.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::describeContainer
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeContainerRequest::DescribeContainerRequest(const DescribeContainerRequest &other)
    : MediaStoreRequest(new DescribeContainerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeContainerRequest object.
 */
DescribeContainerRequest::DescribeContainerRequest()
    : MediaStoreRequest(new DescribeContainerRequestPrivate(MediaStoreRequest::DescribeContainerAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeContainerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeContainerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeContainerRequest::response(QNetworkReply * const reply) const
{
    return new DescribeContainerResponse(*this, reply);
}

/*!
 * \class QtAws::MediaStore::DescribeContainerRequestPrivate
 * \brief The DescribeContainerRequestPrivate class provides private implementation for DescribeContainerRequest.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a DescribeContainerRequestPrivate object for MediaStore \a action,
 * with public implementation \a q.
 */
DescribeContainerRequestPrivate::DescribeContainerRequestPrivate(
    const MediaStoreRequest::Action action, DescribeContainerRequest * const q)
    : MediaStoreRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeContainerRequest
 * class' copy constructor.
 */
DescribeContainerRequestPrivate::DescribeContainerRequestPrivate(
    const DescribeContainerRequestPrivate &other, DescribeContainerRequest * const q)
    : MediaStoreRequestPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace QtAws
