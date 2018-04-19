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

#include "deleteapnssandboxchannelrequest.h"
#include "deleteapnssandboxchannelrequest_p.h"
#include "deleteapnssandboxchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteApnsSandboxChannelRequest
 * \brief The DeleteApnsSandboxChannelRequest class provides an interface for Pinpoint DeleteApnsSandboxChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::deleteApnsSandboxChannel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteApnsSandboxChannelRequest::DeleteApnsSandboxChannelRequest(const DeleteApnsSandboxChannelRequest &other)
    : PinpointRequest(new DeleteApnsSandboxChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteApnsSandboxChannelRequest object.
 */
DeleteApnsSandboxChannelRequest::DeleteApnsSandboxChannelRequest()
    : PinpointRequest(new DeleteApnsSandboxChannelRequestPrivate(PinpointRequest::DeleteApnsSandboxChannelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteApnsSandboxChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteApnsSandboxChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApnsSandboxChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApnsSandboxChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteApnsSandboxChannelRequestPrivate
 * \brief The DeleteApnsSandboxChannelRequestPrivate class provides private implementation for DeleteApnsSandboxChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 *
 * Constructs a DeleteApnsSandboxChannelRequestPrivate object for Pinpoint \a action with,
 * public implementation \a q.
 */
DeleteApnsSandboxChannelRequestPrivate::DeleteApnsSandboxChannelRequestPrivate(
    const PinpointRequest::Action action, DeleteApnsSandboxChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteApnsSandboxChannelRequest
 * class' copy constructor.
 */
DeleteApnsSandboxChannelRequestPrivate::DeleteApnsSandboxChannelRequestPrivate(
    const DeleteApnsSandboxChannelRequestPrivate &other, DeleteApnsSandboxChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
