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

#include "addflowvpcinterfacesrequest.h"
#include "addflowvpcinterfacesrequest_p.h"
#include "addflowvpcinterfacesresponse.h"
#include "mediaconnectrequest_p.h"

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::AddFlowVpcInterfacesRequest
 * \brief The AddFlowVpcInterfacesRequest class provides an interface for MediaConnect AddFlowVpcInterfaces requests.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::addFlowVpcInterfaces
 */

/*!
 * Constructs a copy of \a other.
 */
AddFlowVpcInterfacesRequest::AddFlowVpcInterfacesRequest(const AddFlowVpcInterfacesRequest &other)
    : MediaConnectRequest(new AddFlowVpcInterfacesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddFlowVpcInterfacesRequest object.
 */
AddFlowVpcInterfacesRequest::AddFlowVpcInterfacesRequest()
    : MediaConnectRequest(new AddFlowVpcInterfacesRequestPrivate(MediaConnectRequest::AddFlowVpcInterfacesAction, this))
{

}

/*!
 * \reimp
 */
bool AddFlowVpcInterfacesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddFlowVpcInterfacesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddFlowVpcInterfacesRequest::response(QNetworkReply * const reply) const
{
    return new AddFlowVpcInterfacesResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConnect::AddFlowVpcInterfacesRequestPrivate
 * \brief The AddFlowVpcInterfacesRequestPrivate class provides private implementation for AddFlowVpcInterfacesRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a AddFlowVpcInterfacesRequestPrivate object for MediaConnect \a action,
 * with public implementation \a q.
 */
AddFlowVpcInterfacesRequestPrivate::AddFlowVpcInterfacesRequestPrivate(
    const MediaConnectRequest::Action action, AddFlowVpcInterfacesRequest * const q)
    : MediaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddFlowVpcInterfacesRequest
 * class' copy constructor.
 */
AddFlowVpcInterfacesRequestPrivate::AddFlowVpcInterfacesRequestPrivate(
    const AddFlowVpcInterfacesRequestPrivate &other, AddFlowVpcInterfacesRequest * const q)
    : MediaConnectRequestPrivate(other, q)
{

}

} // namespace MediaConnect
} // namespace QtAws
