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

#include "putbucketloggingrequest.h"
#include "putbucketloggingrequest_p.h"
#include "putbucketloggingresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketLoggingRequest
 * \brief The PutBucketLoggingRequest class provides an interface for S3 PutBucketLogging requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketLogging
 */

/*!
 * Constructs a copy of \a other.
 */
PutBucketLoggingRequest::PutBucketLoggingRequest(const PutBucketLoggingRequest &other)
    : S3Request(new PutBucketLoggingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutBucketLoggingRequest object.
 */
PutBucketLoggingRequest::PutBucketLoggingRequest()
    : S3Request(new PutBucketLoggingRequestPrivate(S3Request::PutBucketLoggingAction, this))
{

}

/*!
 * \reimp
 */
bool PutBucketLoggingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutBucketLoggingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutBucketLoggingRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketLoggingResponse(*this, reply);
}

/*!
 * \class QtAws::S3::PutBucketLoggingRequestPrivate
 * \brief The PutBucketLoggingRequestPrivate class provides private implementation for PutBucketLoggingRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketLoggingRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
PutBucketLoggingRequestPrivate::PutBucketLoggingRequestPrivate(
    const S3Request::Action action, PutBucketLoggingRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutBucketLoggingRequest
 * class' copy constructor.
 */
PutBucketLoggingRequestPrivate::PutBucketLoggingRequestPrivate(
    const PutBucketLoggingRequestPrivate &other, PutBucketLoggingRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
