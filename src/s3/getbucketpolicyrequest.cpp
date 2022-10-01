// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbucketpolicyrequest.h"
#include "getbucketpolicyrequest_p.h"
#include "getbucketpolicyresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketPolicyRequest
 * \brief The GetBucketPolicyRequest class provides an interface for S3 GetBucketPolicy requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetBucketPolicyRequest::GetBucketPolicyRequest(const GetBucketPolicyRequest &other)
    : S3Request(new GetBucketPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBucketPolicyRequest object.
 */
GetBucketPolicyRequest::GetBucketPolicyRequest()
    : S3Request(new GetBucketPolicyRequestPrivate(S3Request::GetBucketPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetBucketPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBucketPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetBucketPolicyRequestPrivate
 * \brief The GetBucketPolicyRequestPrivate class provides private implementation for GetBucketPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketPolicyRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetBucketPolicyRequestPrivate::GetBucketPolicyRequestPrivate(
    const S3Request::Action action, GetBucketPolicyRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBucketPolicyRequest
 * class' copy constructor.
 */
GetBucketPolicyRequestPrivate::GetBucketPolicyRequestPrivate(
    const GetBucketPolicyRequestPrivate &other, GetBucketPolicyRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
