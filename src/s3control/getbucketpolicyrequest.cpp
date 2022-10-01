// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbucketpolicyrequest.h"
#include "getbucketpolicyrequest_p.h"
#include "getbucketpolicyresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetBucketPolicyRequest
 * \brief The GetBucketPolicyRequest class provides an interface for S3Control GetBucketPolicy requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getBucketPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetBucketPolicyRequest::GetBucketPolicyRequest(const GetBucketPolicyRequest &other)
    : S3ControlRequest(new GetBucketPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBucketPolicyRequest object.
 */
GetBucketPolicyRequest::GetBucketPolicyRequest()
    : S3ControlRequest(new GetBucketPolicyRequestPrivate(S3ControlRequest::GetBucketPolicyAction, this))
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
 * \class QtAws::S3Control::GetBucketPolicyRequestPrivate
 * \brief The GetBucketPolicyRequestPrivate class provides private implementation for GetBucketPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetBucketPolicyRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
GetBucketPolicyRequestPrivate::GetBucketPolicyRequestPrivate(
    const S3ControlRequest::Action action, GetBucketPolicyRequest * const q)
    : S3ControlRequestPrivate(action, q)
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
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
