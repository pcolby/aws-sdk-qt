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

#include "deleteclientvpnendpointrequest.h"
#include "deleteclientvpnendpointrequest_p.h"
#include "deleteclientvpnendpointresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DeleteClientVpnEndpointRequest
 * \brief The DeleteClientVpnEndpointRequest class provides an interface for EC2 DeleteClientVpnEndpoint requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides secure and resizable computing capacity in the AWS cloud. Using
 *  Amazon EC2 eliminates the need to invest in hardware up front, so you can develop and deploy applications
 * 
 *  faster>
 * 
 *  To learn more, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  Amazon EC2: <a href="http://aws.amazon.com/ec2">Amazon EC2 product page</a>, <a
 *  href="http://aws.amazon.com/documentation/ec2">Amazon EC2 documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  Amazon EBS: <a href="http://aws.amazon.com/ebs">Amazon EBS product page</a>, <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/AmazonEBS.html">Amazon EBS documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  Amazon VPC: <a href="http://aws.amazon.com/vpc">Amazon VPC product page</a>, <a
 *  href="http://aws.amazon.com/documentation/vpc">Amazon VPC documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  AWS VPN: <a href="http://aws.amazon.com/vpn">AWS VPN product page</a>, <a
 *  href="http://aws.amazon.com/documentation/vpn">AWS VPN documentation</a>
 *
 * \sa Ec2Client::deleteClientVpnEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteClientVpnEndpointRequest::DeleteClientVpnEndpointRequest(const DeleteClientVpnEndpointRequest &other)
    : Ec2Request(new DeleteClientVpnEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteClientVpnEndpointRequest object.
 */
DeleteClientVpnEndpointRequest::DeleteClientVpnEndpointRequest()
    : Ec2Request(new DeleteClientVpnEndpointRequestPrivate(Ec2Request::DeleteClientVpnEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteClientVpnEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteClientVpnEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteClientVpnEndpointRequest::response(QNetworkReply * const reply) const
{
    return new DeleteClientVpnEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::DeleteClientVpnEndpointRequestPrivate
 * \brief The DeleteClientVpnEndpointRequestPrivate class provides private implementation for DeleteClientVpnEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DeleteClientVpnEndpointRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
DeleteClientVpnEndpointRequestPrivate::DeleteClientVpnEndpointRequestPrivate(
    const Ec2Request::Action action, DeleteClientVpnEndpointRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteClientVpnEndpointRequest
 * class' copy constructor.
 */
DeleteClientVpnEndpointRequestPrivate::DeleteClientVpnEndpointRequestPrivate(
    const DeleteClientVpnEndpointRequestPrivate &other, DeleteClientVpnEndpointRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
