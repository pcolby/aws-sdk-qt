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

#include "revokesecuritygroupingressrequest.h"
#include "revokesecuritygroupingressrequest_p.h"
#include "revokesecuritygroupingressresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::RevokeSecurityGroupIngressRequest
 * \brief The RevokeSecurityGroupIngressRequest class provides an interface for EC2 RevokeSecurityGroupIngress requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides secure and resizable computing capacity in the AWS Cloud. Using
 *  Amazon EC2 eliminates the need to invest in hardware up front, so you can develop and deploy applications faster. Amazon
 *  Virtual Private Cloud (Amazon VPC) enables you to provision a logically isolated section of the AWS Cloud where you can
 *  launch AWS resources in a virtual network that you've defined. Amazon Elastic Block Store (Amazon EBS) provides block
 *  level storage volumes for use with EC2 instances. EBS volumes are highly available and reliable storage volumes that can
 *  be attached to any running instance and used like a hard
 * 
 *  drive>
 * 
 *  To learn more, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  Amazon EC2: <a href="http://aws.amazon.com/ec2">AmazonEC2 product page</a>, <a
 *  href="http://aws.amazon.com/documentation/ec2">Amazon EC2 documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  Amazon EBS: <a href="http://aws.amazon.com/ebs">Amazon EBS product page</a>, <a
 *  href="http://aws.amazon.com/documentation/ebs">Amazon EBS documentation</a>
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
 * \sa Ec2Client::revokeSecurityGroupIngress
 */

/*!
 * Constructs a copy of \a other.
 */
RevokeSecurityGroupIngressRequest::RevokeSecurityGroupIngressRequest(const RevokeSecurityGroupIngressRequest &other)
    : Ec2Request(new RevokeSecurityGroupIngressRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RevokeSecurityGroupIngressRequest object.
 */
RevokeSecurityGroupIngressRequest::RevokeSecurityGroupIngressRequest()
    : Ec2Request(new RevokeSecurityGroupIngressRequestPrivate(Ec2Request::RevokeSecurityGroupIngressAction, this))
{

}

/*!
 * \reimp
 */
bool RevokeSecurityGroupIngressRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RevokeSecurityGroupIngressResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RevokeSecurityGroupIngressRequest::response(QNetworkReply * const reply) const
{
    return new RevokeSecurityGroupIngressResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::RevokeSecurityGroupIngressRequestPrivate
 * \brief The RevokeSecurityGroupIngressRequestPrivate class provides private implementation for RevokeSecurityGroupIngressRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a RevokeSecurityGroupIngressRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
RevokeSecurityGroupIngressRequestPrivate::RevokeSecurityGroupIngressRequestPrivate(
    const Ec2Request::Action action, RevokeSecurityGroupIngressRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RevokeSecurityGroupIngressRequest
 * class' copy constructor.
 */
RevokeSecurityGroupIngressRequestPrivate::RevokeSecurityGroupIngressRequestPrivate(
    const RevokeSecurityGroupIngressRequestPrivate &other, RevokeSecurityGroupIngressRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
