// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describehostedconnectionsrequest.h"
#include "describehostedconnectionsrequest_p.h"
#include "describehostedconnectionsresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DescribeHostedConnectionsRequest
 * \brief The DescribeHostedConnectionsRequest class provides an interface for DirectConnect DescribeHostedConnections requests.
 *
 * \inmodule QtAwsDirectConnect
 *
 *  Direct Connect links your internal network to an Direct Connect location over a standard Ethernet fiber-optic cable. One
 *  end of the cable is connected to your router, the other to an Direct Connect router. With this connection in place, you
 *  can create virtual interfaces directly to the Amazon Web Services Cloud (for example, to Amazon EC2 and Amazon S3) and
 *  to Amazon VPC, bypassing Internet service providers in your network path. A connection provides access to all Amazon Web
 *  Services Regions except the China (Beijing) and (China) Ningxia Regions. Amazon Web Services resources in the China
 *  Regions can only be accessed through locations associated with those
 *
 * \sa DirectConnectClient::describeHostedConnections
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeHostedConnectionsRequest::DescribeHostedConnectionsRequest(const DescribeHostedConnectionsRequest &other)
    : DirectConnectRequest(new DescribeHostedConnectionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeHostedConnectionsRequest object.
 */
DescribeHostedConnectionsRequest::DescribeHostedConnectionsRequest()
    : DirectConnectRequest(new DescribeHostedConnectionsRequestPrivate(DirectConnectRequest::DescribeHostedConnectionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeHostedConnectionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeHostedConnectionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeHostedConnectionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeHostedConnectionsResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::DescribeHostedConnectionsRequestPrivate
 * \brief The DescribeHostedConnectionsRequestPrivate class provides private implementation for DescribeHostedConnectionsRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DescribeHostedConnectionsRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
DescribeHostedConnectionsRequestPrivate::DescribeHostedConnectionsRequestPrivate(
    const DirectConnectRequest::Action action, DescribeHostedConnectionsRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeHostedConnectionsRequest
 * class' copy constructor.
 */
DescribeHostedConnectionsRequestPrivate::DescribeHostedConnectionsRequestPrivate(
    const DescribeHostedConnectionsRequestPrivate &other, DescribeHostedConnectionsRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
