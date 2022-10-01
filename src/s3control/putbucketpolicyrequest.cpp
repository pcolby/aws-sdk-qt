/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
