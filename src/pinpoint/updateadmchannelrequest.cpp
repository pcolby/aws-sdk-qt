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

#include "updateadmchannelrequest.h"
#include "updateadmchannelrequest_p.h"
#include "updateadmchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateAdmChannelRequest
 * \brief The UpdateAdmChannelRequest class provides an interface for Pinpoint UpdateAdmChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateAdmChannel
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAdmChannelRequest::UpdateAdmChannelRequest(const UpdateAdmChannelRequest &other)
    : PinpointRequest(new UpdateAdmChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAdmChannelRequest object.
 */
UpdateAdmChannelRequest::UpdateAdmChannelRequest()
    : PinpointRequest(new UpdateAdmChannelRequestPrivate(PinpointRequest::UpdateAdmChannelAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAdmChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAdmChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAdmChannelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAdmChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateAdmChannelRequestPrivate
 * \brief The UpdateAdmChannelRequestPrivate class provides private implementation for UpdateAdmChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateAdmChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateAdmChannelRequestPrivate::UpdateAdmChannelRequestPrivate(
    const PinpointRequest::Action action, UpdateAdmChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAdmChannelRequest
 * class' copy constructor.
 */
UpdateAdmChannelRequestPrivate::UpdateAdmChannelRequestPrivate(
    const UpdateAdmChannelRequestPrivate &other, UpdateAdmChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
