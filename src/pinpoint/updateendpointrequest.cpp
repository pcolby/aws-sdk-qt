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

#include "updateendpointrequest.h"
#include "updateendpointrequest_p.h"
#include "updateendpointresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateEndpointRequest
 * \brief The UpdateEndpointRequest class provides an interface for Pinpoint UpdateEndpoint requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateEndpointRequest::UpdateEndpointRequest(const UpdateEndpointRequest &other)
    : PinpointRequest(new UpdateEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateEndpointRequest object.
 */
UpdateEndpointRequest::UpdateEndpointRequest()
    : PinpointRequest(new UpdateEndpointRequestPrivate(PinpointRequest::UpdateEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateEndpointRequest::response(QNetworkReply * const reply) const
{
    return new UpdateEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateEndpointRequestPrivate
 * \brief The UpdateEndpointRequestPrivate class provides private implementation for UpdateEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateEndpointRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateEndpointRequestPrivate::UpdateEndpointRequestPrivate(
    const PinpointRequest::Action action, UpdateEndpointRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateEndpointRequest
 * class' copy constructor.
 */
UpdateEndpointRequestPrivate::UpdateEndpointRequestPrivate(
    const UpdateEndpointRequestPrivate &other, UpdateEndpointRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
