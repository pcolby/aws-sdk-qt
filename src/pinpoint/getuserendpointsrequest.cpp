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

#include "getuserendpointsrequest.h"
#include "getuserendpointsrequest_p.h"
#include "getuserendpointsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetUserEndpointsRequest
 * \brief The GetUserEndpointsRequest class provides an interface for Pinpoint GetUserEndpoints requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::getUserEndpoints
 */

/*!
 * Constructs a copy of \a other.
 */
GetUserEndpointsRequest::GetUserEndpointsRequest(const GetUserEndpointsRequest &other)
    : PinpointRequest(new GetUserEndpointsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetUserEndpointsRequest object.
 */
GetUserEndpointsRequest::GetUserEndpointsRequest()
    : PinpointRequest(new GetUserEndpointsRequestPrivate(PinpointRequest::GetUserEndpointsAction, this))
{

}

/*!
 * \reimp
 */
bool GetUserEndpointsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetUserEndpointsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetUserEndpointsRequest::response(QNetworkReply * const reply) const
{
    return new GetUserEndpointsResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetUserEndpointsRequestPrivate
 * \brief The GetUserEndpointsRequestPrivate class provides private implementation for GetUserEndpointsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetUserEndpointsRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetUserEndpointsRequestPrivate::GetUserEndpointsRequestPrivate(
    const PinpointRequest::Action action, GetUserEndpointsRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetUserEndpointsRequest
 * class' copy constructor.
 */
GetUserEndpointsRequestPrivate::GetUserEndpointsRequestPrivate(
    const GetUserEndpointsRequestPrivate &other, GetUserEndpointsRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
