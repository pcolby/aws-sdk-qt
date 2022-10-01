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

#include "getmultiregionaccesspointrequest.h"
#include "getmultiregionaccesspointrequest_p.h"
#include "getmultiregionaccesspointresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetMultiRegionAccessPointRequest
 * \brief The GetMultiRegionAccessPointRequest class provides an interface for S3Control GetMultiRegionAccessPoint requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getMultiRegionAccessPoint
 */

/*!
 * Constructs a copy of \a other.
 */
GetMultiRegionAccessPointRequest::GetMultiRegionAccessPointRequest(const GetMultiRegionAccessPointRequest &other)
    : S3ControlRequest(new GetMultiRegionAccessPointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMultiRegionAccessPointRequest object.
 */
GetMultiRegionAccessPointRequest::GetMultiRegionAccessPointRequest()
    : S3ControlRequest(new GetMultiRegionAccessPointRequestPrivate(S3ControlRequest::GetMultiRegionAccessPointAction, this))
{

}

/*!
 * \reimp
 */
bool GetMultiRegionAccessPointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMultiRegionAccessPointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMultiRegionAccessPointRequest::response(QNetworkReply * const reply) const
{
    return new GetMultiRegionAccessPointResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::GetMultiRegionAccessPointRequestPrivate
 * \brief The GetMultiRegionAccessPointRequestPrivate class provides private implementation for GetMultiRegionAccessPointRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetMultiRegionAccessPointRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
GetMultiRegionAccessPointRequestPrivate::GetMultiRegionAccessPointRequestPrivate(
    const S3ControlRequest::Action action, GetMultiRegionAccessPointRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMultiRegionAccessPointRequest
 * class' copy constructor.
 */
GetMultiRegionAccessPointRequestPrivate::GetMultiRegionAccessPointRequestPrivate(
    const GetMultiRegionAccessPointRequestPrivate &other, GetMultiRegionAccessPointRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
