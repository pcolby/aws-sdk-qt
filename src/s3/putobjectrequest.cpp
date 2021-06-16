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

#include "putobjectrequest.h"
#include "putobjectrequest_p.h"
#include "putobjectresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutObjectRequest
 * \brief The PutObjectRequest class provides an interface for S3 PutObject requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putObject
 */

/*!
 * Constructs a copy of \a other.
 */
PutObjectRequest::PutObjectRequest(const PutObjectRequest &other)
    : S3Request(new PutObjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutObjectRequest object.
 */
PutObjectRequest::PutObjectRequest()
    : S3Request(new PutObjectRequestPrivate(S3Request::PutObjectAction, this))
{

}

/*!
 * \reimp
 */
bool PutObjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutObjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutObjectRequest::response(QNetworkReply * const reply) const
{
    return new PutObjectResponse(*this, reply);
}

/*!
 * \class QtAws::S3::PutObjectRequestPrivate
 * \brief The PutObjectRequestPrivate class provides private implementation for PutObjectRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutObjectRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
PutObjectRequestPrivate::PutObjectRequestPrivate(
    const S3Request::Action action, PutObjectRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutObjectRequest
 * class' copy constructor.
 */
PutObjectRequestPrivate::PutObjectRequestPrivate(
    const PutObjectRequestPrivate &other, PutObjectRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
