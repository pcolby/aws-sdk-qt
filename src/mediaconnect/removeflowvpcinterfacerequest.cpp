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

#include "removeflowvpcinterfacerequest.h"
#include "removeflowvpcinterfacerequest_p.h"
#include "removeflowvpcinterfaceresponse.h"
#include "mediaconnectrequest_p.h"

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::RemoveFlowVpcInterfaceRequest
 * \brief The RemoveFlowVpcInterfaceRequest class provides an interface for MediaConnect RemoveFlowVpcInterface requests.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::removeFlowVpcInterface
 */

/*!
 * Constructs a copy of \a other.
 */
RemoveFlowVpcInterfaceRequest::RemoveFlowVpcInterfaceRequest(const RemoveFlowVpcInterfaceRequest &other)
    : MediaConnectRequest(new RemoveFlowVpcInterfaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RemoveFlowVpcInterfaceRequest object.
 */
RemoveFlowVpcInterfaceRequest::RemoveFlowVpcInterfaceRequest()
    : MediaConnectRequest(new RemoveFlowVpcInterfaceRequestPrivate(MediaConnectRequest::RemoveFlowVpcInterfaceAction, this))
{

}

/*!
 * \reimp
 */
bool RemoveFlowVpcInterfaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RemoveFlowVpcInterfaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveFlowVpcInterfaceRequest::response(QNetworkReply * const reply) const
{
    return new RemoveFlowVpcInterfaceResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConnect::RemoveFlowVpcInterfaceRequestPrivate
 * \brief The RemoveFlowVpcInterfaceRequestPrivate class provides private implementation for RemoveFlowVpcInterfaceRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a RemoveFlowVpcInterfaceRequestPrivate object for MediaConnect \a action,
 * with public implementation \a q.
 */
RemoveFlowVpcInterfaceRequestPrivate::RemoveFlowVpcInterfaceRequestPrivate(
    const MediaConnectRequest::Action action, RemoveFlowVpcInterfaceRequest * const q)
    : MediaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RemoveFlowVpcInterfaceRequest
 * class' copy constructor.
 */
RemoveFlowVpcInterfaceRequestPrivate::RemoveFlowVpcInterfaceRequestPrivate(
    const RemoveFlowVpcInterfaceRequestPrivate &other, RemoveFlowVpcInterfaceRequest * const q)
    : MediaConnectRequestPrivate(other, q)
{

}

} // namespace MediaConnect
} // namespace QtAws
