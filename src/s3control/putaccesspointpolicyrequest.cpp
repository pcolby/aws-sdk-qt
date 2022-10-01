// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putaccesspointpolicyrequest.h"
#include "putaccesspointpolicyrequest_p.h"
#include "putaccesspointpolicyresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::PutAccessPointPolicyRequest
 * \brief The PutAccessPointPolicyRequest class provides an interface for S3Control PutAccessPointPolicy requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::putAccessPointPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutAccessPointPolicyRequest::PutAccessPointPolicyRequest(const PutAccessPointPolicyRequest &other)
    : S3ControlRequest(new PutAccessPointPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutAccessPointPolicyRequest object.
 */
PutAccessPointPolicyRequest::PutAccessPointPolicyRequest()
    : S3ControlRequest(new PutAccessPointPolicyRequestPrivate(S3ControlRequest::PutAccessPointPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutAccessPointPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutAccessPointPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutAccessPointPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutAccessPointPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::PutAccessPointPolicyRequestPrivate
 * \brief The PutAccessPointPolicyRequestPrivate class provides private implementation for PutAccessPointPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a PutAccessPointPolicyRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
PutAccessPointPolicyRequestPrivate::PutAccessPointPolicyRequestPrivate(
    const S3ControlRequest::Action action, PutAccessPointPolicyRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutAccessPointPolicyRequest
 * class' copy constructor.
 */
PutAccessPointPolicyRequestPrivate::PutAccessPointPolicyRequestPrivate(
    const PutAccessPointPolicyRequestPrivate &other, PutAccessPointPolicyRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
