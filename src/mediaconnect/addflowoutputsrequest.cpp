/*
    Copyright 2013-2020 Paul Colby

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

#include "addflowoutputsrequest.h"
#include "addflowoutputsrequest_p.h"
#include "addflowoutputsresponse.h"
#include "mediaconnectrequest_p.h"

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::AddFlowOutputsRequest
 * \brief The AddFlowOutputsRequest class provides an interface for MediaConnect AddFlowOutputs requests.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::addFlowOutputs
 */

/*!
 * Constructs a copy of \a other.
 */
AddFlowOutputsRequest::AddFlowOutputsRequest(const AddFlowOutputsRequest &other)
    : MediaConnectRequest(new AddFlowOutputsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddFlowOutputsRequest object.
 */
AddFlowOutputsRequest::AddFlowOutputsRequest()
    : MediaConnectRequest(new AddFlowOutputsRequestPrivate(MediaConnectRequest::AddFlowOutputsAction, this))
{

}

/*!
 * \reimp
 */
bool AddFlowOutputsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddFlowOutputsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddFlowOutputsRequest::response(QNetworkReply * const reply) const
{
    return new AddFlowOutputsResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConnect::AddFlowOutputsRequestPrivate
 * \brief The AddFlowOutputsRequestPrivate class provides private implementation for AddFlowOutputsRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a AddFlowOutputsRequestPrivate object for MediaConnect \a action,
 * with public implementation \a q.
 */
AddFlowOutputsRequestPrivate::AddFlowOutputsRequestPrivate(
    const MediaConnectRequest::Action action, AddFlowOutputsRequest * const q)
    : MediaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddFlowOutputsRequest
 * class' copy constructor.
 */
AddFlowOutputsRequestPrivate::AddFlowOutputsRequestPrivate(
    const AddFlowOutputsRequestPrivate &other, AddFlowOutputsRequest * const q)
    : MediaConnectRequestPrivate(other, q)
{

}

} // namespace MediaConnect
} // namespace QtAws
