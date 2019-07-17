/*
    Copyright 2013-2019 Paul Colby

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

#include "putbucketlifecyclerequest.h"
#include "putbucketlifecyclerequest_p.h"
#include "putbucketlifecycleresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketLifecycleRequest
 * \brief The PutBucketLifecycleRequest class provides an interface for S3 PutBucketLifecycle requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketLifecycle
 */

/*!
 * Constructs a copy of \a other.
 */
PutBucketLifecycleRequest::PutBucketLifecycleRequest(const PutBucketLifecycleRequest &other)
    : S3Request(new PutBucketLifecycleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutBucketLifecycleRequest object.
 */
PutBucketLifecycleRequest::PutBucketLifecycleRequest()
    : S3Request(new PutBucketLifecycleRequestPrivate(S3Request::PutBucketLifecycleAction, this))
{

}

/*!
 * \reimp
 */
bool PutBucketLifecycleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutBucketLifecycleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutBucketLifecycleRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketLifecycleResponse(*this, reply);
}

/*!
 * \class QtAws::S3::PutBucketLifecycleRequestPrivate
 * \brief The PutBucketLifecycleRequestPrivate class provides private implementation for PutBucketLifecycleRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketLifecycleRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
PutBucketLifecycleRequestPrivate::PutBucketLifecycleRequestPrivate(
    const S3Request::Action action, PutBucketLifecycleRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutBucketLifecycleRequest
 * class' copy constructor.
 */
PutBucketLifecycleRequestPrivate::PutBucketLifecycleRequestPrivate(
    const PutBucketLifecycleRequestPrivate &other, PutBucketLifecycleRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
