// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeconnectionsoninterconnectrequest.h"
#include "describeconnectionsoninterconnectrequest_p.h"
#include "describeconnectionsoninterconnectresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DescribeConnectionsOnInterconnectRequest
 * \brief The DescribeConnectionsOnInterconnectRequest class provides an interface for DirectConnect DescribeConnectionsOnInterconnect requests.
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
 * \sa DirectConnectClient::describeConnectionsOnInterconnect
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeConnectionsOnInterconnectRequest::DescribeConnectionsOnInterconnectRequest(const DescribeConnectionsOnInterconnectRequest &other)
    : DirectConnectRequest(new DescribeConnectionsOnInterconnectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeConnectionsOnInterconnectRequest object.
 */
DescribeConnectionsOnInterconnectRequest::DescribeConnectionsOnInterconnectRequest()
    : DirectConnectRequest(new DescribeConnectionsOnInterconnectRequestPrivate(DirectConnectRequest::DescribeConnectionsOnInterconnectAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeConnectionsOnInterconnectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeConnectionsOnInterconnectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeConnectionsOnInterconnectRequest::response(QNetworkReply * const reply) const
{
    return new DescribeConnectionsOnInterconnectResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::DescribeConnectionsOnInterconnectRequestPrivate
 * \brief The DescribeConnectionsOnInterconnectRequestPrivate class provides private implementation for DescribeConnectionsOnInterconnectRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DescribeConnectionsOnInterconnectRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
DescribeConnectionsOnInterconnectRequestPrivate::DescribeConnectionsOnInterconnectRequestPrivate(
    const DirectConnectRequest::Action action, DescribeConnectionsOnInterconnectRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeConnectionsOnInterconnectRequest
 * class' copy constructor.
 */
DescribeConnectionsOnInterconnectRequestPrivate::DescribeConnectionsOnInterconnectRequestPrivate(
    const DescribeConnectionsOnInterconnectRequestPrivate &other, DescribeConnectionsOnInterconnectRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
