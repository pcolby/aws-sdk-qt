/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "acceptvpcendpointconnectionsrequest.h"
#include "acceptvpcendpointconnectionsrequest_p.h"
#include "acceptvpcendpointconnectionsresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::AcceptVpcEndpointConnectionsRequest
 * \brief The AcceptVpcEndpointConnectionsRequest class provides an interface for EC2 AcceptVpcEndpointConnections requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::acceptVpcEndpointConnections
 */

/*!
 * Constructs a copy of \a other.
 */
AcceptVpcEndpointConnectionsRequest::AcceptVpcEndpointConnectionsRequest(const AcceptVpcEndpointConnectionsRequest &other)
    : EC2Request(new AcceptVpcEndpointConnectionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AcceptVpcEndpointConnectionsRequest object.
 */
AcceptVpcEndpointConnectionsRequest::AcceptVpcEndpointConnectionsRequest()
    : EC2Request(new AcceptVpcEndpointConnectionsRequestPrivate(EC2Request::AcceptVpcEndpointConnectionsAction, this))
{

}

/*!
 * \reimp
 */
bool AcceptVpcEndpointConnectionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AcceptVpcEndpointConnectionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AcceptVpcEndpointConnectionsRequest::response(QNetworkReply * const reply) const
{
    return new AcceptVpcEndpointConnectionsResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::AcceptVpcEndpointConnectionsRequestPrivate
 * \brief The AcceptVpcEndpointConnectionsRequestPrivate class provides private implementation for AcceptVpcEndpointConnectionsRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a AcceptVpcEndpointConnectionsRequestPrivate object for EC2 \a action,
 * with public implementation \a q.
 */
AcceptVpcEndpointConnectionsRequestPrivate::AcceptVpcEndpointConnectionsRequestPrivate(
    const EC2Request::Action action, AcceptVpcEndpointConnectionsRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AcceptVpcEndpointConnectionsRequest
 * class' copy constructor.
 */
AcceptVpcEndpointConnectionsRequestPrivate::AcceptVpcEndpointConnectionsRequestPrivate(
    const AcceptVpcEndpointConnectionsRequestPrivate &other, AcceptVpcEndpointConnectionsRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
