// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
