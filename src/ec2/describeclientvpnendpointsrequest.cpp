/*
    Copyright 2013-2020 Paul Colby

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

#include "describeclientvpnendpointsrequest.h"
#include "describeclientvpnendpointsrequest_p.h"
#include "describeclientvpnendpointsresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeClientVpnEndpointsRequest
 * \brief The DescribeClientVpnEndpointsRequest class provides an interface for EC2 DescribeClientVpnEndpoints requests.
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
 * \sa Ec2Client::describeClientVpnEndpoints
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeClientVpnEndpointsRequest::DescribeClientVpnEndpointsRequest(const DescribeClientVpnEndpointsRequest &other)
    : Ec2Request(new DescribeClientVpnEndpointsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeClientVpnEndpointsRequest object.
 */
DescribeClientVpnEndpointsRequest::DescribeClientVpnEndpointsRequest()
    : Ec2Request(new DescribeClientVpnEndpointsRequestPrivate(Ec2Request::DescribeClientVpnEndpointsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeClientVpnEndpointsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeClientVpnEndpointsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeClientVpnEndpointsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeClientVpnEndpointsResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::DescribeClientVpnEndpointsRequestPrivate
 * \brief The DescribeClientVpnEndpointsRequestPrivate class provides private implementation for DescribeClientVpnEndpointsRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeClientVpnEndpointsRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
DescribeClientVpnEndpointsRequestPrivate::DescribeClientVpnEndpointsRequestPrivate(
    const Ec2Request::Action action, DescribeClientVpnEndpointsRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeClientVpnEndpointsRequest
 * class' copy constructor.
 */
DescribeClientVpnEndpointsRequestPrivate::DescribeClientVpnEndpointsRequestPrivate(
    const DescribeClientVpnEndpointsRequestPrivate &other, DescribeClientVpnEndpointsRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
