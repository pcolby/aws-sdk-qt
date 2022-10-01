// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "enablevpcclassiclinkdnssupportrequest.h"
#include "enablevpcclassiclinkdnssupportrequest_p.h"
#include "enablevpcclassiclinkdnssupportresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace Ec2 {

/*!
 * \class QtAws::Ec2::EnableVpcClassicLinkDnsSupportRequest
 * \brief The EnableVpcClassicLinkDnsSupportRequest class provides an interface for Ec2 EnableVpcClassicLinkDnsSupport requests.
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
 * \sa Ec2Client::enableVpcClassicLinkDnsSupport
 */

/*!
 * Constructs a copy of \a other.
 */
EnableVpcClassicLinkDnsSupportRequest::EnableVpcClassicLinkDnsSupportRequest(const EnableVpcClassicLinkDnsSupportRequest &other)
    : Ec2Request(new EnableVpcClassicLinkDnsSupportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a EnableVpcClassicLinkDnsSupportRequest object.
 */
EnableVpcClassicLinkDnsSupportRequest::EnableVpcClassicLinkDnsSupportRequest()
    : Ec2Request(new EnableVpcClassicLinkDnsSupportRequestPrivate(Ec2Request::EnableVpcClassicLinkDnsSupportAction, this))
{

}

/*!
 * \reimp
 */
bool EnableVpcClassicLinkDnsSupportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a EnableVpcClassicLinkDnsSupportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * EnableVpcClassicLinkDnsSupportRequest::response(QNetworkReply * const reply) const
{
    return new EnableVpcClassicLinkDnsSupportResponse(*this, reply);
}

/*!
 * \class QtAws::Ec2::EnableVpcClassicLinkDnsSupportRequestPrivate
 * \brief The EnableVpcClassicLinkDnsSupportRequestPrivate class provides private implementation for EnableVpcClassicLinkDnsSupportRequest.
 * \internal
 *
 * \inmodule QtAwsEc2
 */

/*!
 * Constructs a EnableVpcClassicLinkDnsSupportRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
EnableVpcClassicLinkDnsSupportRequestPrivate::EnableVpcClassicLinkDnsSupportRequestPrivate(
    const Ec2Request::Action action, EnableVpcClassicLinkDnsSupportRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the EnableVpcClassicLinkDnsSupportRequest
 * class' copy constructor.
 */
EnableVpcClassicLinkDnsSupportRequestPrivate::EnableVpcClassicLinkDnsSupportRequestPrivate(
    const EnableVpcClassicLinkDnsSupportRequestPrivate &other, EnableVpcClassicLinkDnsSupportRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace Ec2
} // namespace QtAws
