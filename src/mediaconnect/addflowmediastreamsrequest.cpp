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

#include "addflowmediastreamsrequest.h"
#include "addflowmediastreamsrequest_p.h"
#include "addflowmediastreamsresponse.h"
#include "mediaconnectrequest_p.h"

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::AddFlowMediaStreamsRequest
 * \brief The AddFlowMediaStreamsRequest class provides an interface for MediaConnect AddFlowMediaStreams requests.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::addFlowMediaStreams
 */

/*!
 * Constructs a copy of \a other.
 */
AddFlowMediaStreamsRequest::AddFlowMediaStreamsRequest(const AddFlowMediaStreamsRequest &other)
    : MediaConnectRequest(new AddFlowMediaStreamsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddFlowMediaStreamsRequest object.
 */
AddFlowMediaStreamsRequest::AddFlowMediaStreamsRequest()
    : MediaConnectRequest(new AddFlowMediaStreamsRequestPrivate(MediaConnectRequest::AddFlowMediaStreamsAction, this))
{

}

/*!
 * \reimp
 */
bool AddFlowMediaStreamsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddFlowMediaStreamsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddFlowMediaStreamsRequest::response(QNetworkReply * const reply) const
{
    return new AddFlowMediaStreamsResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConnect::AddFlowMediaStreamsRequestPrivate
 * \brief The AddFlowMediaStreamsRequestPrivate class provides private implementation for AddFlowMediaStreamsRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a AddFlowMediaStreamsRequestPrivate object for MediaConnect \a action,
 * with public implementation \a q.
 */
AddFlowMediaStreamsRequestPrivate::AddFlowMediaStreamsRequestPrivate(
    const MediaConnectRequest::Action action, AddFlowMediaStreamsRequest * const q)
    : MediaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddFlowMediaStreamsRequest
 * class' copy constructor.
 */
AddFlowMediaStreamsRequestPrivate::AddFlowMediaStreamsRequestPrivate(
    const AddFlowMediaStreamsRequestPrivate &other, AddFlowMediaStreamsRequest * const q)
    : MediaConnectRequestPrivate(other, q)
{

}

} // namespace MediaConnect
} // namespace QtAws
