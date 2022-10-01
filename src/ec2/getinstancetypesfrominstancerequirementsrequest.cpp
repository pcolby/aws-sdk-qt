/*
    Copyright 2013-2021 Paul Colby

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

#include "getinstancetypesfrominstancerequirementsrequest.h"
#include "getinstancetypesfrominstancerequirementsrequest_p.h"
#include "getinstancetypesfrominstancerequirementsresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace Ec2 {

/*!
 * \class QtAws::Ec2::GetInstanceTypesFromInstanceRequirementsRequest
 * \brief The GetInstanceTypesFromInstanceRequirementsRequest class provides an interface for Ec2 GetInstanceTypesFromInstanceRequirements requests.
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
 * \sa Ec2Client::getInstanceTypesFromInstanceRequirements
 */

/*!
 * Constructs a copy of \a other.
 */
GetInstanceTypesFromInstanceRequirementsRequest::GetInstanceTypesFromInstanceRequirementsRequest(const GetInstanceTypesFromInstanceRequirementsRequest &other)
    : Ec2Request(new GetInstanceTypesFromInstanceRequirementsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetInstanceTypesFromInstanceRequirementsRequest object.
 */
GetInstanceTypesFromInstanceRequirementsRequest::GetInstanceTypesFromInstanceRequirementsRequest()
    : Ec2Request(new GetInstanceTypesFromInstanceRequirementsRequestPrivate(Ec2Request::GetInstanceTypesFromInstanceRequirementsAction, this))
{

}

/*!
 * \reimp
 */
bool GetInstanceTypesFromInstanceRequirementsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetInstanceTypesFromInstanceRequirementsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetInstanceTypesFromInstanceRequirementsRequest::response(QNetworkReply * const reply) const
{
    return new GetInstanceTypesFromInstanceRequirementsResponse(*this, reply);
}

/*!
 * \class QtAws::Ec2::GetInstanceTypesFromInstanceRequirementsRequestPrivate
 * \brief The GetInstanceTypesFromInstanceRequirementsRequestPrivate class provides private implementation for GetInstanceTypesFromInstanceRequirementsRequest.
 * \internal
 *
 * \inmodule QtAwsEc2
 */

/*!
 * Constructs a GetInstanceTypesFromInstanceRequirementsRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
GetInstanceTypesFromInstanceRequirementsRequestPrivate::GetInstanceTypesFromInstanceRequirementsRequestPrivate(
    const Ec2Request::Action action, GetInstanceTypesFromInstanceRequirementsRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetInstanceTypesFromInstanceRequirementsRequest
 * class' copy constructor.
 */
GetInstanceTypesFromInstanceRequirementsRequestPrivate::GetInstanceTypesFromInstanceRequirementsRequestPrivate(
    const GetInstanceTypesFromInstanceRequirementsRequestPrivate &other, GetInstanceTypesFromInstanceRequirementsRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace Ec2
} // namespace QtAws
