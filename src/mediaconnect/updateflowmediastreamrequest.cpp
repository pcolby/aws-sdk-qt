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

#include "updateflowmediastreamrequest.h"
#include "updateflowmediastreamrequest_p.h"
#include "updateflowmediastreamresponse.h"
#include "mediaconnectrequest_p.h"

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::UpdateFlowMediaStreamRequest
 * \brief The UpdateFlowMediaStreamRequest class provides an interface for MediaConnect UpdateFlowMediaStream requests.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::updateFlowMediaStream
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateFlowMediaStreamRequest::UpdateFlowMediaStreamRequest(const UpdateFlowMediaStreamRequest &other)
    : MediaConnectRequest(new UpdateFlowMediaStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateFlowMediaStreamRequest object.
 */
UpdateFlowMediaStreamRequest::UpdateFlowMediaStreamRequest()
    : MediaConnectRequest(new UpdateFlowMediaStreamRequestPrivate(MediaConnectRequest::UpdateFlowMediaStreamAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateFlowMediaStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateFlowMediaStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateFlowMediaStreamRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFlowMediaStreamResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConnect::UpdateFlowMediaStreamRequestPrivate
 * \brief The UpdateFlowMediaStreamRequestPrivate class provides private implementation for UpdateFlowMediaStreamRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a UpdateFlowMediaStreamRequestPrivate object for MediaConnect \a action,
 * with public implementation \a q.
 */
UpdateFlowMediaStreamRequestPrivate::UpdateFlowMediaStreamRequestPrivate(
    const MediaConnectRequest::Action action, UpdateFlowMediaStreamRequest * const q)
    : MediaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateFlowMediaStreamRequest
 * class' copy constructor.
 */
UpdateFlowMediaStreamRequestPrivate::UpdateFlowMediaStreamRequestPrivate(
    const UpdateFlowMediaStreamRequestPrivate &other, UpdateFlowMediaStreamRequest * const q)
    : MediaConnectRequestPrivate(other, q)
{

}

} // namespace MediaConnect
} // namespace QtAws
