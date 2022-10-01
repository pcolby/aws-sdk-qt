// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeipv6poolsrequest.h"
#include "describeipv6poolsrequest_p.h"
#include "describeipv6poolsresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace Ec2 {

/*!
 * \class QtAws::Ec2::DescribeIpv6PoolsRequest
 * \brief The DescribeIpv6PoolsRequest class provides an interface for Ec2 DescribeIpv6Pools requests.
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
 * \sa Ec2Client::describeIpv6Pools
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeIpv6PoolsRequest::DescribeIpv6PoolsRequest(const DescribeIpv6PoolsRequest &other)
    : Ec2Request(new DescribeIpv6PoolsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeIpv6PoolsRequest object.
 */
DescribeIpv6PoolsRequest::DescribeIpv6PoolsRequest()
    : Ec2Request(new DescribeIpv6PoolsRequestPrivate(Ec2Request::DescribeIpv6PoolsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeIpv6PoolsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeIpv6PoolsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeIpv6PoolsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeIpv6PoolsResponse(*this, reply);
}

/*!
 * \class QtAws::Ec2::DescribeIpv6PoolsRequestPrivate
 * \brief The DescribeIpv6PoolsRequestPrivate class provides private implementation for DescribeIpv6PoolsRequest.
 * \internal
 *
 * \inmodule QtAwsEc2
 */

/*!
 * Constructs a DescribeIpv6PoolsRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
DescribeIpv6PoolsRequestPrivate::DescribeIpv6PoolsRequestPrivate(
    const Ec2Request::Action action, DescribeIpv6PoolsRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeIpv6PoolsRequest
 * class' copy constructor.
 */
DescribeIpv6PoolsRequestPrivate::DescribeIpv6PoolsRequestPrivate(
    const DescribeIpv6PoolsRequestPrivate &other, DescribeIpv6PoolsRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace Ec2
} // namespace QtAws
