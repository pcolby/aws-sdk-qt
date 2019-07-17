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

#include "describevpcendpointsrequest.h"
#include "describevpcendpointsrequest_p.h"
#include "describevpcendpointsresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeVpcEndpointsRequest
 * \brief The DescribeVpcEndpointsRequest class provides an interface for EC2 DescribeVpcEndpoints requests.
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
 *  To learn more about Amazon EC2, Amazon EBS, and Amazon VPC, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/ec2">Amazon EC2 product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/ec2">Amazon EC2 documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/ebs">Amazon EBS product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/vpc">Amazon VPC product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/vpc">Amazon VPC documentation</a>
 *
 * \sa Ec2Client::describeVpcEndpoints
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeVpcEndpointsRequest::DescribeVpcEndpointsRequest(const DescribeVpcEndpointsRequest &other)
    : Ec2Request(new DescribeVpcEndpointsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeVpcEndpointsRequest object.
 */
DescribeVpcEndpointsRequest::DescribeVpcEndpointsRequest()
    : Ec2Request(new DescribeVpcEndpointsRequestPrivate(Ec2Request::DescribeVpcEndpointsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeVpcEndpointsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeVpcEndpointsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeVpcEndpointsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeVpcEndpointsResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::DescribeVpcEndpointsRequestPrivate
 * \brief The DescribeVpcEndpointsRequestPrivate class provides private implementation for DescribeVpcEndpointsRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeVpcEndpointsRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
DescribeVpcEndpointsRequestPrivate::DescribeVpcEndpointsRequestPrivate(
    const Ec2Request::Action action, DescribeVpcEndpointsRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeVpcEndpointsRequest
 * class' copy constructor.
 */
DescribeVpcEndpointsRequestPrivate::DescribeVpcEndpointsRequestPrivate(
    const DescribeVpcEndpointsRequestPrivate &other, DescribeVpcEndpointsRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
