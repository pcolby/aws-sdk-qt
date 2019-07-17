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

#include "modifytransitgatewayvpcattachmentrequest.h"
#include "modifytransitgatewayvpcattachmentrequest_p.h"
#include "modifytransitgatewayvpcattachmentresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ModifyTransitGatewayVpcAttachmentRequest
 * \brief The ModifyTransitGatewayVpcAttachmentRequest class provides an interface for EC2 ModifyTransitGatewayVpcAttachment requests.
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
 * \sa Ec2Client::modifyTransitGatewayVpcAttachment
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyTransitGatewayVpcAttachmentRequest::ModifyTransitGatewayVpcAttachmentRequest(const ModifyTransitGatewayVpcAttachmentRequest &other)
    : Ec2Request(new ModifyTransitGatewayVpcAttachmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyTransitGatewayVpcAttachmentRequest object.
 */
ModifyTransitGatewayVpcAttachmentRequest::ModifyTransitGatewayVpcAttachmentRequest()
    : Ec2Request(new ModifyTransitGatewayVpcAttachmentRequestPrivate(Ec2Request::ModifyTransitGatewayVpcAttachmentAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyTransitGatewayVpcAttachmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyTransitGatewayVpcAttachmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyTransitGatewayVpcAttachmentRequest::response(QNetworkReply * const reply) const
{
    return new ModifyTransitGatewayVpcAttachmentResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::ModifyTransitGatewayVpcAttachmentRequestPrivate
 * \brief The ModifyTransitGatewayVpcAttachmentRequestPrivate class provides private implementation for ModifyTransitGatewayVpcAttachmentRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a ModifyTransitGatewayVpcAttachmentRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
ModifyTransitGatewayVpcAttachmentRequestPrivate::ModifyTransitGatewayVpcAttachmentRequestPrivate(
    const Ec2Request::Action action, ModifyTransitGatewayVpcAttachmentRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyTransitGatewayVpcAttachmentRequest
 * class' copy constructor.
 */
ModifyTransitGatewayVpcAttachmentRequestPrivate::ModifyTransitGatewayVpcAttachmentRequestPrivate(
    const ModifyTransitGatewayVpcAttachmentRequestPrivate &other, ModifyTransitGatewayVpcAttachmentRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
