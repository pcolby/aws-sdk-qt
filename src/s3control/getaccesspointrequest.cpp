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

#include "getaccesspointrequest.h"
#include "getaccesspointrequest_p.h"
#include "getaccesspointresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetAccessPointRequest
 * \brief The GetAccessPointRequest class provides an interface for S3Control GetAccessPoint requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getAccessPoint
 */

/*!
 * Constructs a copy of \a other.
 */
GetAccessPointRequest::GetAccessPointRequest(const GetAccessPointRequest &other)
    : S3ControlRequest(new GetAccessPointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAccessPointRequest object.
 */
GetAccessPointRequest::GetAccessPointRequest()
    : S3ControlRequest(new GetAccessPointRequestPrivate(S3ControlRequest::GetAccessPointAction, this))
{

}

/*!
 * \reimp
 */
bool GetAccessPointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAccessPointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAccessPointRequest::response(QNetworkReply * const reply) const
{
    return new GetAccessPointResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::GetAccessPointRequestPrivate
 * \brief The GetAccessPointRequestPrivate class provides private implementation for GetAccessPointRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetAccessPointRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
GetAccessPointRequestPrivate::GetAccessPointRequestPrivate(
    const S3ControlRequest::Action action, GetAccessPointRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAccessPointRequest
 * class' copy constructor.
 */
GetAccessPointRequestPrivate::GetAccessPointRequestPrivate(
    const GetAccessPointRequestPrivate &other, GetAccessPointRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
