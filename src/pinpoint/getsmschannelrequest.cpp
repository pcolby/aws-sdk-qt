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

#include "getsmschannelrequest.h"
#include "getsmschannelrequest_p.h"
#include "getsmschannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetSmsChannelRequest
 * \brief The GetSmsChannelRequest class provides an interface for Pinpoint GetSmsChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getSmsChannel
 */

/*!
 * Constructs a copy of \a other.
 */
GetSmsChannelRequest::GetSmsChannelRequest(const GetSmsChannelRequest &other)
    : PinpointRequest(new GetSmsChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSmsChannelRequest object.
 */
GetSmsChannelRequest::GetSmsChannelRequest()
    : PinpointRequest(new GetSmsChannelRequestPrivate(PinpointRequest::GetSmsChannelAction, this))
{

}

/*!
 * \reimp
 */
bool GetSmsChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSmsChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSmsChannelRequest::response(QNetworkReply * const reply) const
{
    return new GetSmsChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetSmsChannelRequestPrivate
 * \brief The GetSmsChannelRequestPrivate class provides private implementation for GetSmsChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetSmsChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetSmsChannelRequestPrivate::GetSmsChannelRequestPrivate(
    const PinpointRequest::Action action, GetSmsChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSmsChannelRequest
 * class' copy constructor.
 */
GetSmsChannelRequestPrivate::GetSmsChannelRequestPrivate(
    const GetSmsChannelRequestPrivate &other, GetSmsChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
