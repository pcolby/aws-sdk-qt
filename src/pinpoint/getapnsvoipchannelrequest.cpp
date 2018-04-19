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

#include "getapnsvoipchannelrequest.h"
#include "getapnsvoipchannelrequest_p.h"
#include "getapnsvoipchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetApnsVoipChannelRequest
 * \brief The GetApnsVoipChannelRequest class provides an interface for Pinpoint GetApnsVoipChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::getApnsVoipChannel
 */

/*!
 * Constructs a copy of \a other.
 */
GetApnsVoipChannelRequest::GetApnsVoipChannelRequest(const GetApnsVoipChannelRequest &other)
    : PinpointRequest(new GetApnsVoipChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetApnsVoipChannelRequest object.
 */
GetApnsVoipChannelRequest::GetApnsVoipChannelRequest()
    : PinpointRequest(new GetApnsVoipChannelRequestPrivate(PinpointRequest::GetApnsVoipChannelAction, this))
{

}

/*!
 * \reimp
 */
bool GetApnsVoipChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetApnsVoipChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetApnsVoipChannelRequest::response(QNetworkReply * const reply) const
{
    return new GetApnsVoipChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetApnsVoipChannelRequestPrivate
 * \brief The GetApnsVoipChannelRequestPrivate class provides private implementation for GetApnsVoipChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetApnsVoipChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetApnsVoipChannelRequestPrivate::GetApnsVoipChannelRequestPrivate(
    const PinpointRequest::Action action, GetApnsVoipChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetApnsVoipChannelRequest
 * class' copy constructor.
 */
GetApnsVoipChannelRequestPrivate::GetApnsVoipChannelRequestPrivate(
    const GetApnsVoipChannelRequestPrivate &other, GetApnsVoipChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
