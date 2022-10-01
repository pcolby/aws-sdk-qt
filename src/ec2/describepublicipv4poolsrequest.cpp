// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describepublicipv4poolsrequest.h"
#include "describepublicipv4poolsrequest_p.h"
#include "describepublicipv4poolsresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace Ec2 {

/*!
 * \class QtAws::Ec2::DescribePublicIpv4PoolsRequest
 * \brief The DescribePublicIpv4PoolsRequest class provides an interface for Ec2 DescribePublicIpv4Pools requests.
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
 * \sa Ec2Client::describePublicIpv4Pools
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePublicIpv4PoolsRequest::DescribePublicIpv4PoolsRequest(const DescribePublicIpv4PoolsRequest &other)
    : Ec2Request(new DescribePublicIpv4PoolsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePublicIpv4PoolsRequest object.
 */
DescribePublicIpv4PoolsRequest::DescribePublicIpv4PoolsRequest()
    : Ec2Request(new DescribePublicIpv4PoolsRequestPrivate(Ec2Request::DescribePublicIpv4PoolsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribePublicIpv4PoolsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribePublicIpv4PoolsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePublicIpv4PoolsRequest::response(QNetworkReply * const reply) const
{
    return new DescribePublicIpv4PoolsResponse(*this, reply);
}

/*!
 * \class QtAws::Ec2::DescribePublicIpv4PoolsRequestPrivate
 * \brief The DescribePublicIpv4PoolsRequestPrivate class provides private implementation for DescribePublicIpv4PoolsRequest.
 * \internal
 *
 * \inmodule QtAwsEc2
 */

/*!
 * Constructs a DescribePublicIpv4PoolsRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
DescribePublicIpv4PoolsRequestPrivate::DescribePublicIpv4PoolsRequestPrivate(
    const Ec2Request::Action action, DescribePublicIpv4PoolsRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribePublicIpv4PoolsRequest
 * class' copy constructor.
 */
DescribePublicIpv4PoolsRequestPrivate::DescribePublicIpv4PoolsRequestPrivate(
    const DescribePublicIpv4PoolsRequestPrivate &other, DescribePublicIpv4PoolsRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace Ec2
} // namespace QtAws
