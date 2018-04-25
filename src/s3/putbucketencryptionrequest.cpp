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

#include "putbucketencryptionrequest.h"
#include "putbucketencryptionrequest_p.h"
#include "putbucketencryptionresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketEncryptionRequest
 * \brief The PutBucketEncryptionRequest class provides an interface for S3 PutBucketEncryption requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketEncryption
 */

/*!
 * Constructs a copy of \a other.
 */
PutBucketEncryptionRequest::PutBucketEncryptionRequest(const PutBucketEncryptionRequest &other)
    : S3Request(new PutBucketEncryptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutBucketEncryptionRequest object.
 */
PutBucketEncryptionRequest::PutBucketEncryptionRequest()
    : S3Request(new PutBucketEncryptionRequestPrivate(S3Request::PutBucketEncryptionAction, this))
{

}

/*!
 * \reimp
 */
bool PutBucketEncryptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutBucketEncryptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutBucketEncryptionRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketEncryptionResponse(*this, reply);
}

/*!
 * \class QtAws::S3::PutBucketEncryptionRequestPrivate
 * \brief The PutBucketEncryptionRequestPrivate class provides private implementation for PutBucketEncryptionRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketEncryptionRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
PutBucketEncryptionRequestPrivate::PutBucketEncryptionRequestPrivate(
    const S3Request::Action action, PutBucketEncryptionRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutBucketEncryptionRequest
 * class' copy constructor.
 */
PutBucketEncryptionRequestPrivate::PutBucketEncryptionRequestPrivate(
    const PutBucketEncryptionRequestPrivate &other, PutBucketEncryptionRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
