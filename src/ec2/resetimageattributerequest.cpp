/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "resetimageattributerequest.h"
#include "resetimageattributerequest_p.h"
#include "resetimageattributeresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ResetImageAttributeRequest
 * \brief The ResetImageAttributeRequest class provides an interface for EC2 ResetImageAttribute requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides secure and resizable computing capacity in the AWS cloud. Using
 *  Amazon EC2 eliminates the need to invest in hardware up front, so you can develop and deploy applications
 * 
 *  faster>
 * 
 *  To learn more about Amazon EC2, Amazon EBS, and Amazon VPC, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/ec2">Amazon EC2 product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/ec2">Amazon EC2 documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/ebs">Amazon EBS product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/vpc">Amazon VPC product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/vpc">Amazon VPC documentation</a>
 *
 * \sa Ec2Client::resetImageAttribute
 */

/*!
 * Constructs a copy of \a other.
 */
ResetImageAttributeRequest::ResetImageAttributeRequest(const ResetImageAttributeRequest &other)
    : Ec2Request(new ResetImageAttributeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ResetImageAttributeRequest object.
 */
ResetImageAttributeRequest::ResetImageAttributeRequest()
    : Ec2Request(new ResetImageAttributeRequestPrivate(Ec2Request::ResetImageAttributeAction, this))
{

}

/*!
 * \reimp
 */
bool ResetImageAttributeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ResetImageAttributeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ResetImageAttributeRequest::response(QNetworkReply * const reply) const
{
    return new ResetImageAttributeResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::ResetImageAttributeRequestPrivate
 * \brief The ResetImageAttributeRequestPrivate class provides private implementation for ResetImageAttributeRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a ResetImageAttributeRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
ResetImageAttributeRequestPrivate::ResetImageAttributeRequestPrivate(
    const Ec2Request::Action action, ResetImageAttributeRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ResetImageAttributeRequest
 * class' copy constructor.
 */
ResetImageAttributeRequestPrivate::ResetImageAttributeRequestPrivate(
    const ResetImageAttributeRequestPrivate &other, ResetImageAttributeRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
