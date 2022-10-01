// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "provisionpublicipv4poolcidrrequest.h"
#include "provisionpublicipv4poolcidrrequest_p.h"
#include "provisionpublicipv4poolcidrresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace Ec2 {

/*!
 * \class QtAws::Ec2::ProvisionPublicIpv4PoolCidrRequest
 * \brief The ProvisionPublicIpv4PoolCidrRequest class provides an interface for Ec2 ProvisionPublicIpv4PoolCidr requests.
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
 * \sa Ec2Client::provisionPublicIpv4PoolCidr
 */

/*!
 * Constructs a copy of \a other.
 */
ProvisionPublicIpv4PoolCidrRequest::ProvisionPublicIpv4PoolCidrRequest(const ProvisionPublicIpv4PoolCidrRequest &other)
    : Ec2Request(new ProvisionPublicIpv4PoolCidrRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ProvisionPublicIpv4PoolCidrRequest object.
 */
ProvisionPublicIpv4PoolCidrRequest::ProvisionPublicIpv4PoolCidrRequest()
    : Ec2Request(new ProvisionPublicIpv4PoolCidrRequestPrivate(Ec2Request::ProvisionPublicIpv4PoolCidrAction, this))
{

}

/*!
 * \reimp
 */
bool ProvisionPublicIpv4PoolCidrRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ProvisionPublicIpv4PoolCidrResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ProvisionPublicIpv4PoolCidrRequest::response(QNetworkReply * const reply) const
{
    return new ProvisionPublicIpv4PoolCidrResponse(*this, reply);
}

/*!
 * \class QtAws::Ec2::ProvisionPublicIpv4PoolCidrRequestPrivate
 * \brief The ProvisionPublicIpv4PoolCidrRequestPrivate class provides private implementation for ProvisionPublicIpv4PoolCidrRequest.
 * \internal
 *
 * \inmodule QtAwsEc2
 */

/*!
 * Constructs a ProvisionPublicIpv4PoolCidrRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
ProvisionPublicIpv4PoolCidrRequestPrivate::ProvisionPublicIpv4PoolCidrRequestPrivate(
    const Ec2Request::Action action, ProvisionPublicIpv4PoolCidrRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ProvisionPublicIpv4PoolCidrRequest
 * class' copy constructor.
 */
ProvisionPublicIpv4PoolCidrRequestPrivate::ProvisionPublicIpv4PoolCidrRequestPrivate(
    const ProvisionPublicIpv4PoolCidrRequestPrivate &other, ProvisionPublicIpv4PoolCidrRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace Ec2
} // namespace QtAws
