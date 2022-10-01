// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeconnectionsrequest.h"
#include "describeconnectionsrequest_p.h"
#include "describeconnectionsresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DescribeConnectionsRequest
 * \brief The DescribeConnectionsRequest class provides an interface for DirectConnect DescribeConnections requests.
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
 * \sa DirectConnectClient::describeConnections
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeConnectionsRequest::DescribeConnectionsRequest(const DescribeConnectionsRequest &other)
    : DirectConnectRequest(new DescribeConnectionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeConnectionsRequest object.
 */
DescribeConnectionsRequest::DescribeConnectionsRequest()
    : DirectConnectRequest(new DescribeConnectionsRequestPrivate(DirectConnectRequest::DescribeConnectionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeConnectionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeConnectionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeConnectionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeConnectionsResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::DescribeConnectionsRequestPrivate
 * \brief The DescribeConnectionsRequestPrivate class provides private implementation for DescribeConnectionsRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DescribeConnectionsRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
DescribeConnectionsRequestPrivate::DescribeConnectionsRequestPrivate(
    const DirectConnectRequest::Action action, DescribeConnectionsRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeConnectionsRequest
 * class' copy constructor.
 */
DescribeConnectionsRequestPrivate::DescribeConnectionsRequestPrivate(
    const DescribeConnectionsRequestPrivate &other, DescribeConnectionsRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
