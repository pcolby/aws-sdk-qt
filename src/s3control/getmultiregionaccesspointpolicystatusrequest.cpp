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

#include "getmultiregionaccesspointpolicystatusrequest.h"
#include "getmultiregionaccesspointpolicystatusrequest_p.h"
#include "getmultiregionaccesspointpolicystatusresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetMultiRegionAccessPointPolicyStatusRequest
 * \brief The GetMultiRegionAccessPointPolicyStatusRequest class provides an interface for S3Control GetMultiRegionAccessPointPolicyStatus requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getMultiRegionAccessPointPolicyStatus
 */

/*!
 * Constructs a copy of \a other.
 */
GetMultiRegionAccessPointPolicyStatusRequest::GetMultiRegionAccessPointPolicyStatusRequest(const GetMultiRegionAccessPointPolicyStatusRequest &other)
    : S3ControlRequest(new GetMultiRegionAccessPointPolicyStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMultiRegionAccessPointPolicyStatusRequest object.
 */
GetMultiRegionAccessPointPolicyStatusRequest::GetMultiRegionAccessPointPolicyStatusRequest()
    : S3ControlRequest(new GetMultiRegionAccessPointPolicyStatusRequestPrivate(S3ControlRequest::GetMultiRegionAccessPointPolicyStatusAction, this))
{

}

/*!
 * \reimp
 */
bool GetMultiRegionAccessPointPolicyStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMultiRegionAccessPointPolicyStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMultiRegionAccessPointPolicyStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetMultiRegionAccessPointPolicyStatusResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::GetMultiRegionAccessPointPolicyStatusRequestPrivate
 * \brief The GetMultiRegionAccessPointPolicyStatusRequestPrivate class provides private implementation for GetMultiRegionAccessPointPolicyStatusRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetMultiRegionAccessPointPolicyStatusRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
GetMultiRegionAccessPointPolicyStatusRequestPrivate::GetMultiRegionAccessPointPolicyStatusRequestPrivate(
    const S3ControlRequest::Action action, GetMultiRegionAccessPointPolicyStatusRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMultiRegionAccessPointPolicyStatusRequest
 * class' copy constructor.
 */
GetMultiRegionAccessPointPolicyStatusRequestPrivate::GetMultiRegionAccessPointPolicyStatusRequestPrivate(
    const GetMultiRegionAccessPointPolicyStatusRequestPrivate &other, GetMultiRegionAccessPointPolicyStatusRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
