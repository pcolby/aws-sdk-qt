/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getbucketencryptionrequest.h"
#include "getbucketencryptionrequest_p.h"
#include "getbucketencryptionresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketEncryptionRequest
 * \brief The GetBucketEncryptionRequest class provides an interface for S3 GetBucketEncryption requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketEncryption
 */

/*!
 * Constructs a copy of \a other.
 */
GetBucketEncryptionRequest::GetBucketEncryptionRequest(const GetBucketEncryptionRequest &other)
    : S3Request(new GetBucketEncryptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBucketEncryptionRequest object.
 */
GetBucketEncryptionRequest::GetBucketEncryptionRequest()
    : S3Request(new GetBucketEncryptionRequestPrivate(S3Request::GetBucketEncryptionAction, this))
{

}

/*!
 * \reimp
 */
bool GetBucketEncryptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBucketEncryptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketEncryptionRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketEncryptionResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetBucketEncryptionRequestPrivate
 * \brief The GetBucketEncryptionRequestPrivate class provides private implementation for GetBucketEncryptionRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketEncryptionRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetBucketEncryptionRequestPrivate::GetBucketEncryptionRequestPrivate(
    const S3Request::Action action, GetBucketEncryptionRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBucketEncryptionRequest
 * class' copy constructor.
 */
GetBucketEncryptionRequestPrivate::GetBucketEncryptionRequestPrivate(
    const GetBucketEncryptionRequestPrivate &other, GetBucketEncryptionRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
