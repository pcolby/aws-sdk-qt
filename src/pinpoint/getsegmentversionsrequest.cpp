/*
    Copyright 2013-2018 Paul Colby

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

#include "getsegmentversionsrequest.h"
#include "getsegmentversionsrequest_p.h"
#include "getsegmentversionsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetSegmentVersionsRequest
 * \brief The GetSegmentVersionsRequest class provides an interface for Pinpoint GetSegmentVersions requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::getSegmentVersions
 */

/*!
 * Constructs a copy of \a other.
 */
GetSegmentVersionsRequest::GetSegmentVersionsRequest(const GetSegmentVersionsRequest &other)
    : PinpointRequest(new GetSegmentVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSegmentVersionsRequest object.
 */
GetSegmentVersionsRequest::GetSegmentVersionsRequest()
    : PinpointRequest(new GetSegmentVersionsRequestPrivate(PinpointRequest::GetSegmentVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool GetSegmentVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSegmentVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSegmentVersionsRequest::response(QNetworkReply * const reply) const
{
    return new GetSegmentVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetSegmentVersionsRequestPrivate
 * \brief The GetSegmentVersionsRequestPrivate class provides private implementation for GetSegmentVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetSegmentVersionsRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetSegmentVersionsRequestPrivate::GetSegmentVersionsRequestPrivate(
    const PinpointRequest::Action action, GetSegmentVersionsRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSegmentVersionsRequest
 * class' copy constructor.
 */
GetSegmentVersionsRequestPrivate::GetSegmentVersionsRequestPrivate(
    const GetSegmentVersionsRequestPrivate &other, GetSegmentVersionsRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
