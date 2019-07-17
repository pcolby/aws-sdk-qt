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

#include "deleteroutetablerequest.h"
#include "deleteroutetablerequest_p.h"
#include "deleteroutetableresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DeleteRouteTableRequest
 * \brief The DeleteRouteTableRequest class provides an interface for EC2 DeleteRouteTable requests.
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
 * \sa Ec2Client::deleteRouteTable
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRouteTableRequest::DeleteRouteTableRequest(const DeleteRouteTableRequest &other)
    : Ec2Request(new DeleteRouteTableRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRouteTableRequest object.
 */
DeleteRouteTableRequest::DeleteRouteTableRequest()
    : Ec2Request(new DeleteRouteTableRequestPrivate(Ec2Request::DeleteRouteTableAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRouteTableRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRouteTableResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRouteTableRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRouteTableResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::DeleteRouteTableRequestPrivate
 * \brief The DeleteRouteTableRequestPrivate class provides private implementation for DeleteRouteTableRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DeleteRouteTableRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
DeleteRouteTableRequestPrivate::DeleteRouteTableRequestPrivate(
    const Ec2Request::Action action, DeleteRouteTableRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRouteTableRequest
 * class' copy constructor.
 */
DeleteRouteTableRequestPrivate::DeleteRouteTableRequestPrivate(
    const DeleteRouteTableRequestPrivate &other, DeleteRouteTableRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
