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

#include "deletebucketencryptionrequest.h"
#include "deletebucketencryptionrequest_p.h"
#include "deletebucketencryptionresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketEncryptionRequest
 * \brief The DeleteBucketEncryptionRequest class provides an interface for S3 DeleteBucketEncryption requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteBucketEncryption
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBucketEncryptionRequest::DeleteBucketEncryptionRequest(const DeleteBucketEncryptionRequest &other)
    : S3Request(new DeleteBucketEncryptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBucketEncryptionRequest object.
 */
DeleteBucketEncryptionRequest::DeleteBucketEncryptionRequest()
    : S3Request(new DeleteBucketEncryptionRequestPrivate(S3Request::DeleteBucketEncryptionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBucketEncryptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBucketEncryptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBucketEncryptionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBucketEncryptionResponse(*this, reply);
}

/*!
 * \class QtAws::S3::DeleteBucketEncryptionRequestPrivate
 * \brief The DeleteBucketEncryptionRequestPrivate class provides private implementation for DeleteBucketEncryptionRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteBucketEncryptionRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
DeleteBucketEncryptionRequestPrivate::DeleteBucketEncryptionRequestPrivate(
    const S3Request::Action action, DeleteBucketEncryptionRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBucketEncryptionRequest
 * class' copy constructor.
 */
DeleteBucketEncryptionRequestPrivate::DeleteBucketEncryptionRequestPrivate(
    const DeleteBucketEncryptionRequestPrivate &other, DeleteBucketEncryptionRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
