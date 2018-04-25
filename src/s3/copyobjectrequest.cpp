/*
    Copyright 2013-2018 Paul Colby

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

#include "copyobjectrequest.h"
#include "copyobjectrequest_p.h"
#include "copyobjectresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::CopyObjectRequest
 * \brief The CopyObjectRequest class provides an interface for S3 CopyObject requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::copyObject
 */

/*!
 * Constructs a copy of \a other.
 */
CopyObjectRequest::CopyObjectRequest(const CopyObjectRequest &other)
    : S3Request(new CopyObjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CopyObjectRequest object.
 */
CopyObjectRequest::CopyObjectRequest()
    : S3Request(new CopyObjectRequestPrivate(S3Request::CopyObjectAction, this))
{

}

/*!
 * \reimp
 */
bool CopyObjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CopyObjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CopyObjectRequest::response(QNetworkReply * const reply) const
{
    return new CopyObjectResponse(*this, reply);
}

/*!
 * \class QtAws::S3::CopyObjectRequestPrivate
 * \brief The CopyObjectRequestPrivate class provides private implementation for CopyObjectRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a CopyObjectRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
CopyObjectRequestPrivate::CopyObjectRequestPrivate(
    const S3Request::Action action, CopyObjectRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CopyObjectRequest
 * class' copy constructor.
 */
CopyObjectRequestPrivate::CopyObjectRequestPrivate(
    const CopyObjectRequestPrivate &other, CopyObjectRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
