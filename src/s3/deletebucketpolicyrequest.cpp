// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebucketpolicyrequest.h"
#include "deletebucketpolicyrequest_p.h"
#include "deletebucketpolicyresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketPolicyRequest
 * \brief The DeleteBucketPolicyRequest class provides an interface for S3 DeleteBucketPolicy requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteBucketPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBucketPolicyRequest::DeleteBucketPolicyRequest(const DeleteBucketPolicyRequest &other)
    : S3Request(new DeleteBucketPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBucketPolicyRequest object.
 */
DeleteBucketPolicyRequest::DeleteBucketPolicyRequest()
    : S3Request(new DeleteBucketPolicyRequestPrivate(S3Request::DeleteBucketPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBucketPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBucketPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBucketPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBucketPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::S3::DeleteBucketPolicyRequestPrivate
 * \brief The DeleteBucketPolicyRequestPrivate class provides private implementation for DeleteBucketPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteBucketPolicyRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
DeleteBucketPolicyRequestPrivate::DeleteBucketPolicyRequestPrivate(
    const S3Request::Action action, DeleteBucketPolicyRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBucketPolicyRequest
 * class' copy constructor.
 */
DeleteBucketPolicyRequestPrivate::DeleteBucketPolicyRequestPrivate(
    const DeleteBucketPolicyRequestPrivate &other, DeleteBucketPolicyRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
