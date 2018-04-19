/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getsegmentversionrequest.h"
#include "getsegmentversionrequest_p.h"
#include "getsegmentversionresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetSegmentVersionRequest
 * \brief The GetSegmentVersionRequest class provides an interface for Pinpoint GetSegmentVersion requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::getSegmentVersion
 */

/*!
 * Constructs a copy of \a other.
 */
GetSegmentVersionRequest::GetSegmentVersionRequest(const GetSegmentVersionRequest &other)
    : PinpointRequest(new GetSegmentVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSegmentVersionRequest object.
 */
GetSegmentVersionRequest::GetSegmentVersionRequest()
    : PinpointRequest(new GetSegmentVersionRequestPrivate(PinpointRequest::GetSegmentVersionAction, this))
{

}

/*!
 * \reimp
 */
bool GetSegmentVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSegmentVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSegmentVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetSegmentVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetSegmentVersionRequestPrivate
 * \brief The GetSegmentVersionRequestPrivate class provides private implementation for GetSegmentVersionRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 *
 * Constructs a GetSegmentVersionRequestPrivate object for Pinpoint \a action with,
 * public implementation \a q.
 */
GetSegmentVersionRequestPrivate::GetSegmentVersionRequestPrivate(
    const PinpointRequest::Action action, GetSegmentVersionRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSegmentVersionRequest
 * class' copy constructor.
 */
GetSegmentVersionRequestPrivate::GetSegmentVersionRequestPrivate(
    const GetSegmentVersionRequestPrivate &other, GetSegmentVersionRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
