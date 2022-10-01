// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
