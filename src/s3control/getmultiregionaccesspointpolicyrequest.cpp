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

#include "getmultiregionaccesspointpolicyrequest.h"
#include "getmultiregionaccesspointpolicyrequest_p.h"
#include "getmultiregionaccesspointpolicyresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetMultiRegionAccessPointPolicyRequest
 * \brief The GetMultiRegionAccessPointPolicyRequest class provides an interface for S3Control GetMultiRegionAccessPointPolicy requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getMultiRegionAccessPointPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetMultiRegionAccessPointPolicyRequest::GetMultiRegionAccessPointPolicyRequest(const GetMultiRegionAccessPointPolicyRequest &other)
    : S3ControlRequest(new GetMultiRegionAccessPointPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMultiRegionAccessPointPolicyRequest object.
 */
GetMultiRegionAccessPointPolicyRequest::GetMultiRegionAccessPointPolicyRequest()
    : S3ControlRequest(new GetMultiRegionAccessPointPolicyRequestPrivate(S3ControlRequest::GetMultiRegionAccessPointPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetMultiRegionAccessPointPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMultiRegionAccessPointPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMultiRegionAccessPointPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetMultiRegionAccessPointPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::GetMultiRegionAccessPointPolicyRequestPrivate
 * \brief The GetMultiRegionAccessPointPolicyRequestPrivate class provides private implementation for GetMultiRegionAccessPointPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetMultiRegionAccessPointPolicyRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
GetMultiRegionAccessPointPolicyRequestPrivate::GetMultiRegionAccessPointPolicyRequestPrivate(
    const S3ControlRequest::Action action, GetMultiRegionAccessPointPolicyRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMultiRegionAccessPointPolicyRequest
 * class' copy constructor.
 */
GetMultiRegionAccessPointPolicyRequestPrivate::GetMultiRegionAccessPointPolicyRequestPrivate(
    const GetMultiRegionAccessPointPolicyRequestPrivate &other, GetMultiRegionAccessPointPolicyRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
