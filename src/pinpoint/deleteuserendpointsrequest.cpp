/*
    Copyright 2013-2019 Paul Colby

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

#include "deleteuserendpointsrequest.h"
#include "deleteuserendpointsrequest_p.h"
#include "deleteuserendpointsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteUserEndpointsRequest
 * \brief The DeleteUserEndpointsRequest class provides an interface for Pinpoint DeleteUserEndpoints requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::deleteUserEndpoints
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteUserEndpointsRequest::DeleteUserEndpointsRequest(const DeleteUserEndpointsRequest &other)
    : PinpointRequest(new DeleteUserEndpointsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteUserEndpointsRequest object.
 */
DeleteUserEndpointsRequest::DeleteUserEndpointsRequest()
    : PinpointRequest(new DeleteUserEndpointsRequestPrivate(PinpointRequest::DeleteUserEndpointsAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteUserEndpointsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteUserEndpointsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteUserEndpointsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteUserEndpointsResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteUserEndpointsRequestPrivate
 * \brief The DeleteUserEndpointsRequestPrivate class provides private implementation for DeleteUserEndpointsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteUserEndpointsRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
DeleteUserEndpointsRequestPrivate::DeleteUserEndpointsRequestPrivate(
    const PinpointRequest::Action action, DeleteUserEndpointsRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteUserEndpointsRequest
 * class' copy constructor.
 */
DeleteUserEndpointsRequestPrivate::DeleteUserEndpointsRequestPrivate(
    const DeleteUserEndpointsRequestPrivate &other, DeleteUserEndpointsRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
