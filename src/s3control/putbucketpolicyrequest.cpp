// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbucketpolicyrequest.h"
#include "putbucketpolicyrequest_p.h"
#include "putbucketpolicyresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::PutBucketPolicyRequest
 * \brief The PutBucketPolicyRequest class provides an interface for S3Control PutBucketPolicy requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::putBucketPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutBucketPolicyRequest::PutBucketPolicyRequest(const PutBucketPolicyRequest &other)
    : S3ControlRequest(new PutBucketPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutBucketPolicyRequest object.
 */
PutBucketPolicyRequest::PutBucketPolicyRequest()
    : S3ControlRequest(new PutBucketPolicyRequestPrivate(S3ControlRequest::PutBucketPolicyAction, this))
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
 * \class QtAws::S3Control::PutBucketPolicyRequestPrivate
 * \brief The PutBucketPolicyRequestPrivate class provides private implementation for PutBucketPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a PutBucketPolicyRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
PutBucketPolicyRequestPrivate::PutBucketPolicyRequestPrivate(
    const S3ControlRequest::Action action, PutBucketPolicyRequest * const q)
    : S3ControlRequestPrivate(action, q)
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
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
