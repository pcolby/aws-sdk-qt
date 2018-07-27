/*
    Copyright 2013-2018 Paul Colby

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

#include "modifyidentityidformatrequest.h"
#include "modifyidentityidformatrequest_p.h"
#include "modifyidentityidformatresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ModifyIdentityIdFormatRequest
 * \brief The ModifyIdentityIdFormatRequest class provides an interface for EC2 ModifyIdentityIdFormat requests.
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
 * \sa Ec2Client::modifyIdentityIdFormat
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyIdentityIdFormatRequest::ModifyIdentityIdFormatRequest(const ModifyIdentityIdFormatRequest &other)
    : Ec2Request(new ModifyIdentityIdFormatRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyIdentityIdFormatRequest object.
 */
ModifyIdentityIdFormatRequest::ModifyIdentityIdFormatRequest()
    : Ec2Request(new ModifyIdentityIdFormatRequestPrivate(Ec2Request::ModifyIdentityIdFormatAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyIdentityIdFormatRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyIdentityIdFormatResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyIdentityIdFormatRequest::response(QNetworkReply * const reply) const
{
    return new ModifyIdentityIdFormatResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::ModifyIdentityIdFormatRequestPrivate
 * \brief The ModifyIdentityIdFormatRequestPrivate class provides private implementation for ModifyIdentityIdFormatRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a ModifyIdentityIdFormatRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
ModifyIdentityIdFormatRequestPrivate::ModifyIdentityIdFormatRequestPrivate(
    const Ec2Request::Action action, ModifyIdentityIdFormatRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyIdentityIdFormatRequest
 * class' copy constructor.
 */
ModifyIdentityIdFormatRequestPrivate::ModifyIdentityIdFormatRequestPrivate(
    const ModifyIdentityIdFormatRequestPrivate &other, ModifyIdentityIdFormatRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
