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

#include "deleteemailchannelrequest.h"
#include "deleteemailchannelrequest_p.h"
#include "deleteemailchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteEmailChannelRequest
 * \brief The DeleteEmailChannelRequest class provides an interface for Pinpoint DeleteEmailChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteEmailChannel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEmailChannelRequest::DeleteEmailChannelRequest(const DeleteEmailChannelRequest &other)
    : PinpointRequest(new DeleteEmailChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEmailChannelRequest object.
 */
DeleteEmailChannelRequest::DeleteEmailChannelRequest()
    : PinpointRequest(new DeleteEmailChannelRequestPrivate(PinpointRequest::DeleteEmailChannelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEmailChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteEmailChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEmailChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEmailChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteEmailChannelRequestPrivate
 * \brief The DeleteEmailChannelRequestPrivate class provides private implementation for DeleteEmailChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteEmailChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
DeleteEmailChannelRequestPrivate::DeleteEmailChannelRequestPrivate(
    const PinpointRequest::Action action, DeleteEmailChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteEmailChannelRequest
 * class' copy constructor.
 */
DeleteEmailChannelRequestPrivate::DeleteEmailChannelRequestPrivate(
    const DeleteEmailChannelRequestPrivate &other, DeleteEmailChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
