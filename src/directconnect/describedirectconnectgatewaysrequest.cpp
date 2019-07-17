/*
    Copyright 2013-2019 Paul Colby

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

#include "describedirectconnectgatewaysrequest.h"
#include "describedirectconnectgatewaysrequest_p.h"
#include "describedirectconnectgatewaysresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DescribeDirectConnectGatewaysRequest
 * \brief The DescribeDirectConnectGatewaysRequest class provides an interface for DirectConnect DescribeDirectConnectGateways requests.
 *
 * \inmodule QtAwsDirectConnect
 *
 *  AWS Direct Connect links your internal network to an AWS Direct Connect location over a standard Ethernet fiber-optic
 *  cable. One end of the cable is connected to your router, the other to an AWS Direct Connect router. With this connection
 *  in place, you can create virtual interfaces directly to the AWS cloud (for example, to Amazon EC2 and Amazon S3) and to
 *  Amazon VPC, bypassing Internet service providers in your network path. A connection provides access to all AWS Regions
 *  except the China (Beijing) and (China) Ningxia Regions. AWS resources in the China Regions can only be accessed through
 *  locations associated with those
 *
 * \sa DirectConnectClient::describeDirectConnectGateways
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDirectConnectGatewaysRequest::DescribeDirectConnectGatewaysRequest(const DescribeDirectConnectGatewaysRequest &other)
    : DirectConnectRequest(new DescribeDirectConnectGatewaysRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDirectConnectGatewaysRequest object.
 */
DescribeDirectConnectGatewaysRequest::DescribeDirectConnectGatewaysRequest()
    : DirectConnectRequest(new DescribeDirectConnectGatewaysRequestPrivate(DirectConnectRequest::DescribeDirectConnectGatewaysAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDirectConnectGatewaysRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDirectConnectGatewaysResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDirectConnectGatewaysRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDirectConnectGatewaysResponse(*this, reply);
}

/*!
 * \class QtAws::DirectConnect::DescribeDirectConnectGatewaysRequestPrivate
 * \brief The DescribeDirectConnectGatewaysRequestPrivate class provides private implementation for DescribeDirectConnectGatewaysRequest.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DescribeDirectConnectGatewaysRequestPrivate object for DirectConnect \a action,
 * with public implementation \a q.
 */
DescribeDirectConnectGatewaysRequestPrivate::DescribeDirectConnectGatewaysRequestPrivate(
    const DirectConnectRequest::Action action, DescribeDirectConnectGatewaysRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDirectConnectGatewaysRequest
 * class' copy constructor.
 */
DescribeDirectConnectGatewaysRequestPrivate::DescribeDirectConnectGatewaysRequestPrivate(
    const DescribeDirectConnectGatewaysRequestPrivate &other, DescribeDirectConnectGatewaysRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
