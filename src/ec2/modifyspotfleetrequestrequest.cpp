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

#include "modifyspotfleetrequestrequest.h"
#include "modifyspotfleetrequestrequest_p.h"
#include "modifyspotfleetrequestresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ModifySpotFleetRequestRequest
 * \brief The ModifySpotFleetRequestRequest class provides an interface for EC2 ModifySpotFleetRequest requests.
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
 * \sa Ec2Client::modifySpotFleetRequest
 */

/*!
 * Constructs a copy of \a other.
 */
ModifySpotFleetRequestRequest::ModifySpotFleetRequestRequest(const ModifySpotFleetRequestRequest &other)
    : Ec2Request(new ModifySpotFleetRequestRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifySpotFleetRequestRequest object.
 */
ModifySpotFleetRequestRequest::ModifySpotFleetRequestRequest()
    : Ec2Request(new ModifySpotFleetRequestRequestPrivate(Ec2Request::ModifySpotFleetRequestAction, this))
{

}

/*!
 * \reimp
 */
bool ModifySpotFleetRequestRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifySpotFleetRequestResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifySpotFleetRequestRequest::response(QNetworkReply * const reply) const
{
    return new ModifySpotFleetRequestResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::ModifySpotFleetRequestRequestPrivate
 * \brief The ModifySpotFleetRequestRequestPrivate class provides private implementation for ModifySpotFleetRequestRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a ModifySpotFleetRequestRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
ModifySpotFleetRequestRequestPrivate::ModifySpotFleetRequestRequestPrivate(
    const Ec2Request::Action action, ModifySpotFleetRequestRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifySpotFleetRequestRequest
 * class' copy constructor.
 */
ModifySpotFleetRequestRequestPrivate::ModifySpotFleetRequestRequestPrivate(
    const ModifySpotFleetRequestRequestPrivate &other, ModifySpotFleetRequestRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
