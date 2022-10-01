// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createpublicipv4poolrequest.h"
#include "createpublicipv4poolrequest_p.h"
#include "createpublicipv4poolresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace Ec2 {

/*!
 * \class QtAws::Ec2::CreatePublicIpv4PoolRequest
 * \brief The CreatePublicIpv4PoolRequest class provides an interface for Ec2 CreatePublicIpv4Pool requests.
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
 * \sa Ec2Client::createPublicIpv4Pool
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePublicIpv4PoolRequest::CreatePublicIpv4PoolRequest(const CreatePublicIpv4PoolRequest &other)
    : Ec2Request(new CreatePublicIpv4PoolRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePublicIpv4PoolRequest object.
 */
CreatePublicIpv4PoolRequest::CreatePublicIpv4PoolRequest()
    : Ec2Request(new CreatePublicIpv4PoolRequestPrivate(Ec2Request::CreatePublicIpv4PoolAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePublicIpv4PoolRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePublicIpv4PoolResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePublicIpv4PoolRequest::response(QNetworkReply * const reply) const
{
    return new CreatePublicIpv4PoolResponse(*this, reply);
}

/*!
 * \class QtAws::Ec2::CreatePublicIpv4PoolRequestPrivate
 * \brief The CreatePublicIpv4PoolRequestPrivate class provides private implementation for CreatePublicIpv4PoolRequest.
 * \internal
 *
 * \inmodule QtAwsEc2
 */

/*!
 * Constructs a CreatePublicIpv4PoolRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
CreatePublicIpv4PoolRequestPrivate::CreatePublicIpv4PoolRequestPrivate(
    const Ec2Request::Action action, CreatePublicIpv4PoolRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePublicIpv4PoolRequest
 * class' copy constructor.
 */
CreatePublicIpv4PoolRequestPrivate::CreatePublicIpv4PoolRequestPrivate(
    const CreatePublicIpv4PoolRequestPrivate &other, CreatePublicIpv4PoolRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace Ec2
} // namespace QtAws
