// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disableimagedeprecationrequest.h"
#include "disableimagedeprecationrequest_p.h"
#include "disableimagedeprecationresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace Ec2 {

/*!
 * \class QtAws::Ec2::DisableImageDeprecationRequest
 * \brief The DisableImageDeprecationRequest class provides an interface for Ec2 DisableImageDeprecation requests.
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
 * \sa Ec2Client::disableImageDeprecation
 */

/*!
 * Constructs a copy of \a other.
 */
DisableImageDeprecationRequest::DisableImageDeprecationRequest(const DisableImageDeprecationRequest &other)
    : Ec2Request(new DisableImageDeprecationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisableImageDeprecationRequest object.
 */
DisableImageDeprecationRequest::DisableImageDeprecationRequest()
    : Ec2Request(new DisableImageDeprecationRequestPrivate(Ec2Request::DisableImageDeprecationAction, this))
{

}

/*!
 * \reimp
 */
bool DisableImageDeprecationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisableImageDeprecationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisableImageDeprecationRequest::response(QNetworkReply * const reply) const
{
    return new DisableImageDeprecationResponse(*this, reply);
}

/*!
 * \class QtAws::Ec2::DisableImageDeprecationRequestPrivate
 * \brief The DisableImageDeprecationRequestPrivate class provides private implementation for DisableImageDeprecationRequest.
 * \internal
 *
 * \inmodule QtAwsEc2
 */

/*!
 * Constructs a DisableImageDeprecationRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
DisableImageDeprecationRequestPrivate::DisableImageDeprecationRequestPrivate(
    const Ec2Request::Action action, DisableImageDeprecationRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisableImageDeprecationRequest
 * class' copy constructor.
 */
DisableImageDeprecationRequestPrivate::DisableImageDeprecationRequestPrivate(
    const DisableImageDeprecationRequestPrivate &other, DisableImageDeprecationRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace Ec2
} // namespace QtAws
