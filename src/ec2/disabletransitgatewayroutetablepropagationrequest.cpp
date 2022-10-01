// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disabletransitgatewayroutetablepropagationrequest.h"
#include "disabletransitgatewayroutetablepropagationrequest_p.h"
#include "disabletransitgatewayroutetablepropagationresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace Ec2 {

/*!
 * \class QtAws::Ec2::DisableTransitGatewayRouteTablePropagationRequest
 * \brief The DisableTransitGatewayRouteTablePropagationRequest class provides an interface for Ec2 DisableTransitGatewayRouteTablePropagation requests.
 *
 * \inmodule QtAwsEc2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides secure and resizable computing capacity in the Amazon Web Services
 *  Cloud. Using Amazon EC2 eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *  faster. Amazon Virtual Private Cloud (Amazon VPC) enables you to provision a logically isolated section of the Amazon
 *  Web Services Cloud where you can launch Amazon Web Services resources in a virtual network that you've defined. Amazon
 *  Elastic Block Store (Amazon EBS) provides block level storage volumes for use with EC2 instances. EBS volumes are highly
 *  available and reliable storage volumes that can be attached to any running instance and used like a hard
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
 *  Amazon Web Services VPN: <a href="http://aws.amazon.com/vpn">Amazon Web Services VPN product page</a>, <a
 *  href="http://aws.amazon.com/documentation/vpn">Amazon Web Services VPN documentation</a>
 *
 * \sa Ec2Client::disableTransitGatewayRouteTablePropagation
 */

/*!
 * Constructs a copy of \a other.
 */
DisableTransitGatewayRouteTablePropagationRequest::DisableTransitGatewayRouteTablePropagationRequest(const DisableTransitGatewayRouteTablePropagationRequest &other)
    : Ec2Request(new DisableTransitGatewayRouteTablePropagationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisableTransitGatewayRouteTablePropagationRequest object.
 */
DisableTransitGatewayRouteTablePropagationRequest::DisableTransitGatewayRouteTablePropagationRequest()
    : Ec2Request(new DisableTransitGatewayRouteTablePropagationRequestPrivate(Ec2Request::DisableTransitGatewayRouteTablePropagationAction, this))
{

}

/*!
 * \reimp
 */
bool DisableTransitGatewayRouteTablePropagationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisableTransitGatewayRouteTablePropagationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisableTransitGatewayRouteTablePropagationRequest::response(QNetworkReply * const reply) const
{
    return new DisableTransitGatewayRouteTablePropagationResponse(*this, reply);
}

/*!
 * \class QtAws::Ec2::DisableTransitGatewayRouteTablePropagationRequestPrivate
 * \brief The DisableTransitGatewayRouteTablePropagationRequestPrivate class provides private implementation for DisableTransitGatewayRouteTablePropagationRequest.
 * \internal
 *
 * \inmodule QtAwsEc2
 */

/*!
 * Constructs a DisableTransitGatewayRouteTablePropagationRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
DisableTransitGatewayRouteTablePropagationRequestPrivate::DisableTransitGatewayRouteTablePropagationRequestPrivate(
    const Ec2Request::Action action, DisableTransitGatewayRouteTablePropagationRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisableTransitGatewayRouteTablePropagationRequest
 * class' copy constructor.
 */
DisableTransitGatewayRouteTablePropagationRequestPrivate::DisableTransitGatewayRouteTablePropagationRequestPrivate(
    const DisableTransitGatewayRouteTablePropagationRequestPrivate &other, DisableTransitGatewayRouteTablePropagationRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace Ec2
} // namespace QtAws
