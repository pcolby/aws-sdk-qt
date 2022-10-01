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
