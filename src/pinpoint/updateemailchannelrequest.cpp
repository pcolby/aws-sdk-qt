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

#include "updateemailchannelrequest.h"
#include "updateemailchannelrequest_p.h"
#include "updateemailchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateEmailChannelRequest
 * \brief The UpdateEmailChannelRequest class provides an interface for Pinpoint UpdateEmailChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateEmailChannel
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateEmailChannelRequest::UpdateEmailChannelRequest(const UpdateEmailChannelRequest &other)
    : PinpointRequest(new UpdateEmailChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateEmailChannelRequest object.
 */
UpdateEmailChannelRequest::UpdateEmailChannelRequest()
    : PinpointRequest(new UpdateEmailChannelRequestPrivate(PinpointRequest::UpdateEmailChannelAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateEmailChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateEmailChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateEmailChannelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateEmailChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateEmailChannelRequestPrivate
 * \brief The UpdateEmailChannelRequestPrivate class provides private implementation for UpdateEmailChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateEmailChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateEmailChannelRequestPrivate::UpdateEmailChannelRequestPrivate(
    const PinpointRequest::Action action, UpdateEmailChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateEmailChannelRequest
 * class' copy constructor.
 */
UpdateEmailChannelRequestPrivate::UpdateEmailChannelRequestPrivate(
    const UpdateEmailChannelRequestPrivate &other, UpdateEmailChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
