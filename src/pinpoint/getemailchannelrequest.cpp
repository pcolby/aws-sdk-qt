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

#include "getemailchannelrequest.h"
#include "getemailchannelrequest_p.h"
#include "getemailchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetEmailChannelRequest
 * \brief The GetEmailChannelRequest class provides an interface for Pinpoint GetEmailChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getEmailChannel
 */

/*!
 * Constructs a copy of \a other.
 */
GetEmailChannelRequest::GetEmailChannelRequest(const GetEmailChannelRequest &other)
    : PinpointRequest(new GetEmailChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetEmailChannelRequest object.
 */
GetEmailChannelRequest::GetEmailChannelRequest()
    : PinpointRequest(new GetEmailChannelRequestPrivate(PinpointRequest::GetEmailChannelAction, this))
{

}

/*!
 * \reimp
 */
bool GetEmailChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetEmailChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetEmailChannelRequest::response(QNetworkReply * const reply) const
{
    return new GetEmailChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetEmailChannelRequestPrivate
 * \brief The GetEmailChannelRequestPrivate class provides private implementation for GetEmailChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetEmailChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetEmailChannelRequestPrivate::GetEmailChannelRequestPrivate(
    const PinpointRequest::Action action, GetEmailChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetEmailChannelRequest
 * class' copy constructor.
 */
GetEmailChannelRequestPrivate::GetEmailChannelRequestPrivate(
    const GetEmailChannelRequestPrivate &other, GetEmailChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
