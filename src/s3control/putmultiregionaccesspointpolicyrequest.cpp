// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putmultiregionaccesspointpolicyrequest.h"
#include "putmultiregionaccesspointpolicyrequest_p.h"
#include "putmultiregionaccesspointpolicyresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::PutMultiRegionAccessPointPolicyRequest
 * \brief The PutMultiRegionAccessPointPolicyRequest class provides an interface for S3Control PutMultiRegionAccessPointPolicy requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::putMultiRegionAccessPointPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutMultiRegionAccessPointPolicyRequest::PutMultiRegionAccessPointPolicyRequest(const PutMultiRegionAccessPointPolicyRequest &other)
    : S3ControlRequest(new PutMultiRegionAccessPointPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutMultiRegionAccessPointPolicyRequest object.
 */
PutMultiRegionAccessPointPolicyRequest::PutMultiRegionAccessPointPolicyRequest()
    : S3ControlRequest(new PutMultiRegionAccessPointPolicyRequestPrivate(S3ControlRequest::PutMultiRegionAccessPointPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutMultiRegionAccessPointPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutMultiRegionAccessPointPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutMultiRegionAccessPointPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutMultiRegionAccessPointPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::PutMultiRegionAccessPointPolicyRequestPrivate
 * \brief The PutMultiRegionAccessPointPolicyRequestPrivate class provides private implementation for PutMultiRegionAccessPointPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a PutMultiRegionAccessPointPolicyRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
PutMultiRegionAccessPointPolicyRequestPrivate::PutMultiRegionAccessPointPolicyRequestPrivate(
    const S3ControlRequest::Action action, PutMultiRegionAccessPointPolicyRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutMultiRegionAccessPointPolicyRequest
 * class' copy constructor.
 */
PutMultiRegionAccessPointPolicyRequestPrivate::PutMultiRegionAccessPointPolicyRequestPrivate(
    const PutMultiRegionAccessPointPolicyRequestPrivate &other, PutMultiRegionAccessPointPolicyRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
