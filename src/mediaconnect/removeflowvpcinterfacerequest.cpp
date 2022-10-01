// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
