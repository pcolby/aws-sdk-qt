// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebucketpolicyrequest.h"
#include "deletebucketpolicyrequest_p.h"
#include "deletebucketpolicyresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::DeleteBucketPolicyRequest
 * \brief The DeleteBucketPolicyRequest class provides an interface for S3Control DeleteBucketPolicy requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::deleteBucketPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBucketPolicyRequest::DeleteBucketPolicyRequest(const DeleteBucketPolicyRequest &other)
    : S3ControlRequest(new DeleteBucketPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBucketPolicyRequest object.
 */
DeleteBucketPolicyRequest::DeleteBucketPolicyRequest()
    : S3ControlRequest(new DeleteBucketPolicyRequestPrivate(S3ControlRequest::DeleteBucketPolicyAction, this))
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
 * \class QtAws::S3Control::DeleteBucketPolicyRequestPrivate
 * \brief The DeleteBucketPolicyRequestPrivate class provides private implementation for DeleteBucketPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a DeleteBucketPolicyRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
DeleteBucketPolicyRequestPrivate::DeleteBucketPolicyRequestPrivate(
    const S3ControlRequest::Action action, DeleteBucketPolicyRequest * const q)
    : S3ControlRequestPrivate(action, q)
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
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
