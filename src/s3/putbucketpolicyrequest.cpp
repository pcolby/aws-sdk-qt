// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbucketpolicyrequest.h"
#include "putbucketpolicyrequest_p.h"
#include "putbucketpolicyresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketPolicyRequest
 * \brief The PutBucketPolicyRequest class provides an interface for S3 PutBucketPolicy requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutBucketPolicyRequest::PutBucketPolicyRequest(const PutBucketPolicyRequest &other)
    : S3Request(new PutBucketPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutBucketPolicyRequest object.
 */
PutBucketPolicyRequest::PutBucketPolicyRequest()
    : S3Request(new PutBucketPolicyRequestPrivate(S3Request::PutBucketPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutBucketPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutBucketPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutBucketPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::S3::PutBucketPolicyRequestPrivate
 * \brief The PutBucketPolicyRequestPrivate class provides private implementation for PutBucketPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketPolicyRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
PutBucketPolicyRequestPrivate::PutBucketPolicyRequestPrivate(
    const S3Request::Action action, PutBucketPolicyRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutBucketPolicyRequest
 * class' copy constructor.
 */
PutBucketPolicyRequestPrivate::PutBucketPolicyRequestPrivate(
    const PutBucketPolicyRequestPrivate &other, PutBucketPolicyRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
