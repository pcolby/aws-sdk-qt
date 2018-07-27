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

#include "cancelreservedinstanceslistingrequest.h"
#include "cancelreservedinstanceslistingrequest_p.h"
#include "cancelreservedinstanceslistingresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CancelReservedInstancesListingRequest
 * \brief The CancelReservedInstancesListingRequest class provides an interface for EC2 CancelReservedInstancesListing requests.
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
 * \sa Ec2Client::cancelReservedInstancesListing
 */

/*!
 * Constructs a copy of \a other.
 */
CancelReservedInstancesListingRequest::CancelReservedInstancesListingRequest(const CancelReservedInstancesListingRequest &other)
    : Ec2Request(new CancelReservedInstancesListingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelReservedInstancesListingRequest object.
 */
CancelReservedInstancesListingRequest::CancelReservedInstancesListingRequest()
    : Ec2Request(new CancelReservedInstancesListingRequestPrivate(Ec2Request::CancelReservedInstancesListingAction, this))
{

}

/*!
 * \reimp
 */
bool CancelReservedInstancesListingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelReservedInstancesListingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelReservedInstancesListingRequest::response(QNetworkReply * const reply) const
{
    return new CancelReservedInstancesListingResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::CancelReservedInstancesListingRequestPrivate
 * \brief The CancelReservedInstancesListingRequestPrivate class provides private implementation for CancelReservedInstancesListingRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a CancelReservedInstancesListingRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
CancelReservedInstancesListingRequestPrivate::CancelReservedInstancesListingRequestPrivate(
    const Ec2Request::Action action, CancelReservedInstancesListingRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelReservedInstancesListingRequest
 * class' copy constructor.
 */
CancelReservedInstancesListingRequestPrivate::CancelReservedInstancesListingRequestPrivate(
    const CancelReservedInstancesListingRequestPrivate &other, CancelReservedInstancesListingRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
