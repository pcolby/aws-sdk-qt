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

#include "deleteclientvpnrouterequest.h"
#include "deleteclientvpnrouterequest_p.h"
#include "deleteclientvpnrouteresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DeleteClientVpnRouteRequest
 * \brief The DeleteClientVpnRouteRequest class provides an interface for EC2 DeleteClientVpnRoute requests.
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
 * \sa Ec2Client::deleteClientVpnRoute
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteClientVpnRouteRequest::DeleteClientVpnRouteRequest(const DeleteClientVpnRouteRequest &other)
    : Ec2Request(new DeleteClientVpnRouteRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteClientVpnRouteRequest object.
 */
DeleteClientVpnRouteRequest::DeleteClientVpnRouteRequest()
    : Ec2Request(new DeleteClientVpnRouteRequestPrivate(Ec2Request::DeleteClientVpnRouteAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteClientVpnRouteRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteClientVpnRouteResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteClientVpnRouteRequest::response(QNetworkReply * const reply) const
{
    return new DeleteClientVpnRouteResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::DeleteClientVpnRouteRequestPrivate
 * \brief The DeleteClientVpnRouteRequestPrivate class provides private implementation for DeleteClientVpnRouteRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DeleteClientVpnRouteRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
DeleteClientVpnRouteRequestPrivate::DeleteClientVpnRouteRequestPrivate(
    const Ec2Request::Action action, DeleteClientVpnRouteRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteClientVpnRouteRequest
 * class' copy constructor.
 */
DeleteClientVpnRouteRequestPrivate::DeleteClientVpnRouteRequestPrivate(
    const DeleteClientVpnRouteRequestPrivate &other, DeleteClientVpnRouteRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
