// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettransitgatewaypolicytableentriesrequest.h"
#include "gettransitgatewaypolicytableentriesrequest_p.h"
#include "gettransitgatewaypolicytableentriesresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace Ec2 {

/*!
 * \class QtAws::Ec2::GetTransitGatewayPolicyTableEntriesRequest
 * \brief The GetTransitGatewayPolicyTableEntriesRequest class provides an interface for Ec2 GetTransitGatewayPolicyTableEntries requests.
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
 * \sa Ec2Client::getTransitGatewayPolicyTableEntries
 */

/*!
 * Constructs a copy of \a other.
 */
GetTransitGatewayPolicyTableEntriesRequest::GetTransitGatewayPolicyTableEntriesRequest(const GetTransitGatewayPolicyTableEntriesRequest &other)
    : Ec2Request(new GetTransitGatewayPolicyTableEntriesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTransitGatewayPolicyTableEntriesRequest object.
 */
GetTransitGatewayPolicyTableEntriesRequest::GetTransitGatewayPolicyTableEntriesRequest()
    : Ec2Request(new GetTransitGatewayPolicyTableEntriesRequestPrivate(Ec2Request::GetTransitGatewayPolicyTableEntriesAction, this))
{

}

/*!
 * \reimp
 */
bool GetTransitGatewayPolicyTableEntriesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTransitGatewayPolicyTableEntriesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTransitGatewayPolicyTableEntriesRequest::response(QNetworkReply * const reply) const
{
    return new GetTransitGatewayPolicyTableEntriesResponse(*this, reply);
}

/*!
 * \class QtAws::Ec2::GetTransitGatewayPolicyTableEntriesRequestPrivate
 * \brief The GetTransitGatewayPolicyTableEntriesRequestPrivate class provides private implementation for GetTransitGatewayPolicyTableEntriesRequest.
 * \internal
 *
 * \inmodule QtAwsEc2
 */

/*!
 * Constructs a GetTransitGatewayPolicyTableEntriesRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
GetTransitGatewayPolicyTableEntriesRequestPrivate::GetTransitGatewayPolicyTableEntriesRequestPrivate(
    const Ec2Request::Action action, GetTransitGatewayPolicyTableEntriesRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTransitGatewayPolicyTableEntriesRequest
 * class' copy constructor.
 */
GetTransitGatewayPolicyTableEntriesRequestPrivate::GetTransitGatewayPolicyTableEntriesRequestPrivate(
    const GetTransitGatewayPolicyTableEntriesRequestPrivate &other, GetTransitGatewayPolicyTableEntriesRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace Ec2
} // namespace QtAws
