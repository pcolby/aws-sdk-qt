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

#include "restoreobjectrequest.h"
#include "restoreobjectrequest_p.h"
#include "restoreobjectresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::RestoreObjectRequest
 * \brief The RestoreObjectRequest class provides an interface for S3 RestoreObject requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::restoreObject
 */

/*!
 * Constructs a copy of \a other.
 */
RestoreObjectRequest::RestoreObjectRequest(const RestoreObjectRequest &other)
    : S3Request(new RestoreObjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RestoreObjectRequest object.
 */
RestoreObjectRequest::RestoreObjectRequest()
    : S3Request(new RestoreObjectRequestPrivate(S3Request::RestoreObjectAction, this))
{

}

/*!
 * \reimp
 */
bool RestoreObjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RestoreObjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RestoreObjectRequest::response(QNetworkReply * const reply) const
{
    return new RestoreObjectResponse(*this, reply);
}

/*!
 * \class QtAws::S3::RestoreObjectRequestPrivate
 * \brief The RestoreObjectRequestPrivate class provides private implementation for RestoreObjectRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a RestoreObjectRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
RestoreObjectRequestPrivate::RestoreObjectRequestPrivate(
    const S3Request::Action action, RestoreObjectRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RestoreObjectRequest
 * class' copy constructor.
 */
RestoreObjectRequestPrivate::RestoreObjectRequestPrivate(
    const RestoreObjectRequestPrivate &other, RestoreObjectRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
