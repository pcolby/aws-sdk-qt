/*
    Copyright 2013-2021 Paul Colby

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

#include "resetnetworkinterfaceattributerequest.h"
#include "resetnetworkinterfaceattributerequest_p.h"
#include "resetnetworkinterfaceattributeresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ResetNetworkInterfaceAttributeRequest
 * \brief The ResetNetworkInterfaceAttributeRequest class provides an interface for EC2 ResetNetworkInterfaceAttribute requests.
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
 * \sa Ec2Client::resetNetworkInterfaceAttribute
 */

/*!
 * Constructs a copy of \a other.
 */
ResetNetworkInterfaceAttributeRequest::ResetNetworkInterfaceAttributeRequest(const ResetNetworkInterfaceAttributeRequest &other)
    : Ec2Request(new ResetNetworkInterfaceAttributeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ResetNetworkInterfaceAttributeRequest object.
 */
ResetNetworkInterfaceAttributeRequest::ResetNetworkInterfaceAttributeRequest()
    : Ec2Request(new ResetNetworkInterfaceAttributeRequestPrivate(Ec2Request::ResetNetworkInterfaceAttributeAction, this))
{

}

/*!
 * \reimp
 */
bool ResetNetworkInterfaceAttributeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ResetNetworkInterfaceAttributeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ResetNetworkInterfaceAttributeRequest::response(QNetworkReply * const reply) const
{
    return new ResetNetworkInterfaceAttributeResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::ResetNetworkInterfaceAttributeRequestPrivate
 * \brief The ResetNetworkInterfaceAttributeRequestPrivate class provides private implementation for ResetNetworkInterfaceAttributeRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a ResetNetworkInterfaceAttributeRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
ResetNetworkInterfaceAttributeRequestPrivate::ResetNetworkInterfaceAttributeRequestPrivate(
    const Ec2Request::Action action, ResetNetworkInterfaceAttributeRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ResetNetworkInterfaceAttributeRequest
 * class' copy constructor.
 */
ResetNetworkInterfaceAttributeRequestPrivate::ResetNetworkInterfaceAttributeRequestPrivate(
    const ResetNetworkInterfaceAttributeRequestPrivate &other, ResetNetworkInterfaceAttributeRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
