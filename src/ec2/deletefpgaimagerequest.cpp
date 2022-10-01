// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletefpgaimagerequest.h"
#include "deletefpgaimagerequest_p.h"
#include "deletefpgaimageresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace Ec2 {

/*!
 * \class QtAws::Ec2::DeleteFpgaImageRequest
 * \brief The DeleteFpgaImageRequest class provides an interface for Ec2 DeleteFpgaImage requests.
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
 * \sa Ec2Client::deleteFpgaImage
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFpgaImageRequest::DeleteFpgaImageRequest(const DeleteFpgaImageRequest &other)
    : Ec2Request(new DeleteFpgaImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFpgaImageRequest object.
 */
DeleteFpgaImageRequest::DeleteFpgaImageRequest()
    : Ec2Request(new DeleteFpgaImageRequestPrivate(Ec2Request::DeleteFpgaImageAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFpgaImageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFpgaImageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFpgaImageRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFpgaImageResponse(*this, reply);
}

/*!
 * \class QtAws::Ec2::DeleteFpgaImageRequestPrivate
 * \brief The DeleteFpgaImageRequestPrivate class provides private implementation for DeleteFpgaImageRequest.
 * \internal
 *
 * \inmodule QtAwsEc2
 */

/*!
 * Constructs a DeleteFpgaImageRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
DeleteFpgaImageRequestPrivate::DeleteFpgaImageRequestPrivate(
    const Ec2Request::Action action, DeleteFpgaImageRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFpgaImageRequest
 * class' copy constructor.
 */
DeleteFpgaImageRequestPrivate::DeleteFpgaImageRequestPrivate(
    const DeleteFpgaImageRequestPrivate &other, DeleteFpgaImageRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace Ec2
} // namespace QtAws
