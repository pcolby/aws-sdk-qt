// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteaccesspointpolicyrequest.h"
#include "deleteaccesspointpolicyrequest_p.h"
#include "deleteaccesspointpolicyresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::DeleteAccessPointPolicyRequest
 * \brief The DeleteAccessPointPolicyRequest class provides an interface for S3Control DeleteAccessPointPolicy requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::deleteAccessPointPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAccessPointPolicyRequest::DeleteAccessPointPolicyRequest(const DeleteAccessPointPolicyRequest &other)
    : S3ControlRequest(new DeleteAccessPointPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAccessPointPolicyRequest object.
 */
DeleteAccessPointPolicyRequest::DeleteAccessPointPolicyRequest()
    : S3ControlRequest(new DeleteAccessPointPolicyRequestPrivate(S3ControlRequest::DeleteAccessPointPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAccessPointPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAccessPointPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAccessPointPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAccessPointPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::DeleteAccessPointPolicyRequestPrivate
 * \brief The DeleteAccessPointPolicyRequestPrivate class provides private implementation for DeleteAccessPointPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a DeleteAccessPointPolicyRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
DeleteAccessPointPolicyRequestPrivate::DeleteAccessPointPolicyRequestPrivate(
    const S3ControlRequest::Action action, DeleteAccessPointPolicyRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAccessPointPolicyRequest
 * class' copy constructor.
 */
DeleteAccessPointPolicyRequestPrivate::DeleteAccessPointPolicyRequestPrivate(
    const DeleteAccessPointPolicyRequestPrivate &other, DeleteAccessPointPolicyRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
