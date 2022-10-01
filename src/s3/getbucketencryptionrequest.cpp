// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
