// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbucketpolicystatusrequest.h"
#include "getbucketpolicystatusrequest_p.h"
#include "getbucketpolicystatusresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketPolicyStatusRequest
 * \brief The GetBucketPolicyStatusRequest class provides an interface for S3 GetBucketPolicyStatus requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketPolicyStatus
 */

/*!
 * Constructs a copy of \a other.
 */
GetBucketPolicyStatusRequest::GetBucketPolicyStatusRequest(const GetBucketPolicyStatusRequest &other)
    : S3Request(new GetBucketPolicyStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBucketPolicyStatusRequest object.
 */
GetBucketPolicyStatusRequest::GetBucketPolicyStatusRequest()
    : S3Request(new GetBucketPolicyStatusRequestPrivate(S3Request::GetBucketPolicyStatusAction, this))
{

}

/*!
 * \reimp
 */
bool GetBucketPolicyStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBucketPolicyStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketPolicyStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketPolicyStatusResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetBucketPolicyStatusRequestPrivate
 * \brief The GetBucketPolicyStatusRequestPrivate class provides private implementation for GetBucketPolicyStatusRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketPolicyStatusRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetBucketPolicyStatusRequestPrivate::GetBucketPolicyStatusRequestPrivate(
    const S3Request::Action action, GetBucketPolicyStatusRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBucketPolicyStatusRequest
 * class' copy constructor.
 */
GetBucketPolicyStatusRequestPrivate::GetBucketPolicyStatusRequestPrivate(
    const GetBucketPolicyStatusRequestPrivate &other, GetBucketPolicyStatusRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
