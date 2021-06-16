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

#include "putbucketcorsrequest.h"
#include "putbucketcorsrequest_p.h"
#include "putbucketcorsresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketCorsRequest
 * \brief The PutBucketCorsRequest class provides an interface for S3 PutBucketCors requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketCors
 */

/*!
 * Constructs a copy of \a other.
 */
PutBucketCorsRequest::PutBucketCorsRequest(const PutBucketCorsRequest &other)
    : S3Request(new PutBucketCorsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutBucketCorsRequest object.
 */
PutBucketCorsRequest::PutBucketCorsRequest()
    : S3Request(new PutBucketCorsRequestPrivate(S3Request::PutBucketCorsAction, this))
{

}

/*!
 * \reimp
 */
bool PutBucketCorsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutBucketCorsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutBucketCorsRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketCorsResponse(*this, reply);
}

/*!
 * \class QtAws::S3::PutBucketCorsRequestPrivate
 * \brief The PutBucketCorsRequestPrivate class provides private implementation for PutBucketCorsRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketCorsRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
PutBucketCorsRequestPrivate::PutBucketCorsRequestPrivate(
    const S3Request::Action action, PutBucketCorsRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutBucketCorsRequest
 * class' copy constructor.
 */
PutBucketCorsRequestPrivate::PutBucketCorsRequestPrivate(
    const PutBucketCorsRequestPrivate &other, PutBucketCorsRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
