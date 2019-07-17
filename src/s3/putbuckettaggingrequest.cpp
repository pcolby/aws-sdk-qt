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

#include "putbuckettaggingrequest.h"
#include "putbuckettaggingrequest_p.h"
#include "putbuckettaggingresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketTaggingRequest
 * \brief The PutBucketTaggingRequest class provides an interface for S3 PutBucketTagging requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketTagging
 */

/*!
 * Constructs a copy of \a other.
 */
PutBucketTaggingRequest::PutBucketTaggingRequest(const PutBucketTaggingRequest &other)
    : S3Request(new PutBucketTaggingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutBucketTaggingRequest object.
 */
PutBucketTaggingRequest::PutBucketTaggingRequest()
    : S3Request(new PutBucketTaggingRequestPrivate(S3Request::PutBucketTaggingAction, this))
{

}

/*!
 * \reimp
 */
bool PutBucketTaggingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutBucketTaggingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutBucketTaggingRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketTaggingResponse(*this, reply);
}

/*!
 * \class QtAws::S3::PutBucketTaggingRequestPrivate
 * \brief The PutBucketTaggingRequestPrivate class provides private implementation for PutBucketTaggingRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketTaggingRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
PutBucketTaggingRequestPrivate::PutBucketTaggingRequestPrivate(
    const S3Request::Action action, PutBucketTaggingRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutBucketTaggingRequest
 * class' copy constructor.
 */
PutBucketTaggingRequestPrivate::PutBucketTaggingRequestPrivate(
    const PutBucketTaggingRequestPrivate &other, PutBucketTaggingRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
