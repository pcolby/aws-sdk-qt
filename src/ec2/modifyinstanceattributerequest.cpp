// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifyinstanceattributerequest.h"
#include "modifyinstanceattributerequest_p.h"
#include "modifyinstanceattributeresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace Ec2 {

/*!
 * \class QtAws::Ec2::ModifyInstanceAttributeRequest
 * \brief The ModifyInstanceAttributeRequest class provides an interface for Ec2 ModifyInstanceAttribute requests.
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
 * \sa Ec2Client::modifyInstanceAttribute
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyInstanceAttributeRequest::ModifyInstanceAttributeRequest(const ModifyInstanceAttributeRequest &other)
    : Ec2Request(new ModifyInstanceAttributeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyInstanceAttributeRequest object.
 */
ModifyInstanceAttributeRequest::ModifyInstanceAttributeRequest()
    : Ec2Request(new ModifyInstanceAttributeRequestPrivate(Ec2Request::ModifyInstanceAttributeAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyInstanceAttributeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyInstanceAttributeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyInstanceAttributeRequest::response(QNetworkReply * const reply) const
{
    return new ModifyInstanceAttributeResponse(*this, reply);
}

/*!
 * \class QtAws::Ec2::ModifyInstanceAttributeRequestPrivate
 * \brief The ModifyInstanceAttributeRequestPrivate class provides private implementation for ModifyInstanceAttributeRequest.
 * \internal
 *
 * \inmodule QtAwsEc2
 */

/*!
 * Constructs a ModifyInstanceAttributeRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
ModifyInstanceAttributeRequestPrivate::ModifyInstanceAttributeRequestPrivate(
    const Ec2Request::Action action, ModifyInstanceAttributeRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyInstanceAttributeRequest
 * class' copy constructor.
 */
ModifyInstanceAttributeRequestPrivate::ModifyInstanceAttributeRequestPrivate(
    const ModifyInstanceAttributeRequestPrivate &other, ModifyInstanceAttributeRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace Ec2
} // namespace QtAws
