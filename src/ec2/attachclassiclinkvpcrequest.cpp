/*
    Copyright 2013-2018 Paul Colby

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

#include "attachclassiclinkvpcrequest.h"
#include "attachclassiclinkvpcrequest_p.h"
#include "attachclassiclinkvpcresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::AttachClassicLinkVpcRequest
 * \brief The AttachClassicLinkVpcRequest class provides an interface for EC2 AttachClassicLinkVpc requests.
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
 * \sa Ec2Client::attachClassicLinkVpc
 */

/*!
 * Constructs a copy of \a other.
 */
AttachClassicLinkVpcRequest::AttachClassicLinkVpcRequest(const AttachClassicLinkVpcRequest &other)
    : Ec2Request(new AttachClassicLinkVpcRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AttachClassicLinkVpcRequest object.
 */
AttachClassicLinkVpcRequest::AttachClassicLinkVpcRequest()
    : Ec2Request(new AttachClassicLinkVpcRequestPrivate(Ec2Request::AttachClassicLinkVpcAction, this))
{

}

/*!
 * \reimp
 */
bool AttachClassicLinkVpcRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AttachClassicLinkVpcResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AttachClassicLinkVpcRequest::response(QNetworkReply * const reply) const
{
    return new AttachClassicLinkVpcResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::AttachClassicLinkVpcRequestPrivate
 * \brief The AttachClassicLinkVpcRequestPrivate class provides private implementation for AttachClassicLinkVpcRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a AttachClassicLinkVpcRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
AttachClassicLinkVpcRequestPrivate::AttachClassicLinkVpcRequestPrivate(
    const Ec2Request::Action action, AttachClassicLinkVpcRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AttachClassicLinkVpcRequest
 * class' copy constructor.
 */
AttachClassicLinkVpcRequestPrivate::AttachClassicLinkVpcRequestPrivate(
    const AttachClassicLinkVpcRequestPrivate &other, AttachClassicLinkVpcRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
