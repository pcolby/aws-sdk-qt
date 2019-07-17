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

#include "deleteadmchannelrequest.h"
#include "deleteadmchannelrequest_p.h"
#include "deleteadmchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteAdmChannelRequest
 * \brief The DeleteAdmChannelRequest class provides an interface for Pinpoint DeleteAdmChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::deleteAdmChannel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAdmChannelRequest::DeleteAdmChannelRequest(const DeleteAdmChannelRequest &other)
    : PinpointRequest(new DeleteAdmChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAdmChannelRequest object.
 */
DeleteAdmChannelRequest::DeleteAdmChannelRequest()
    : PinpointRequest(new DeleteAdmChannelRequestPrivate(PinpointRequest::DeleteAdmChannelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAdmChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAdmChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAdmChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAdmChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteAdmChannelRequestPrivate
 * \brief The DeleteAdmChannelRequestPrivate class provides private implementation for DeleteAdmChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteAdmChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
DeleteAdmChannelRequestPrivate::DeleteAdmChannelRequestPrivate(
    const PinpointRequest::Action action, DeleteAdmChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAdmChannelRequest
 * class' copy constructor.
 */
DeleteAdmChannelRequestPrivate::DeleteAdmChannelRequestPrivate(
    const DeleteAdmChannelRequestPrivate &other, DeleteAdmChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
