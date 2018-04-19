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

#include "getapnschannelrequest.h"
#include "getapnschannelrequest_p.h"
#include "getapnschannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetApnsChannelRequest
 * \brief The GetApnsChannelRequest class provides an interface for Pinpoint GetApnsChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::getApnsChannel
 */

/*!
 * Constructs a copy of \a other.
 */
GetApnsChannelRequest::GetApnsChannelRequest(const GetApnsChannelRequest &other)
    : PinpointRequest(new GetApnsChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetApnsChannelRequest object.
 */
GetApnsChannelRequest::GetApnsChannelRequest()
    : PinpointRequest(new GetApnsChannelRequestPrivate(PinpointRequest::GetApnsChannelAction, this))
{

}

/*!
 * \reimp
 */
bool GetApnsChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetApnsChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetApnsChannelRequest::response(QNetworkReply * const reply) const
{
    return new GetApnsChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetApnsChannelRequestPrivate
 * \brief The GetApnsChannelRequestPrivate class provides private implementation for GetApnsChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 *
 * Constructs a GetApnsChannelRequestPrivate object for Pinpoint \a action with,
 * public implementation \a q.
 */
GetApnsChannelRequestPrivate::GetApnsChannelRequestPrivate(
    const PinpointRequest::Action action, GetApnsChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetApnsChannelRequest
 * class' copy constructor.
 */
GetApnsChannelRequestPrivate::GetApnsChannelRequestPrivate(
    const GetApnsChannelRequestPrivate &other, GetApnsChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
