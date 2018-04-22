/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describereservedinstancesrequest.h"
#include "describereservedinstancesrequest_p.h"
#include "describereservedinstancesresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeReservedInstancesRequest
 * \brief The DescribeReservedInstancesRequest class provides an interface for EC2 DescribeReservedInstances requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeReservedInstances
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeReservedInstancesRequest::DescribeReservedInstancesRequest(const DescribeReservedInstancesRequest &other)
    : Ec2Request(new DescribeReservedInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeReservedInstancesRequest object.
 */
DescribeReservedInstancesRequest::DescribeReservedInstancesRequest()
    : Ec2Request(new DescribeReservedInstancesRequestPrivate(Ec2Request::DescribeReservedInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeReservedInstancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeReservedInstancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeReservedInstancesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReservedInstancesResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::DescribeReservedInstancesRequestPrivate
 * \brief The DescribeReservedInstancesRequestPrivate class provides private implementation for DescribeReservedInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeReservedInstancesRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
DescribeReservedInstancesRequestPrivate::DescribeReservedInstancesRequestPrivate(
    const Ec2Request::Action action, DescribeReservedInstancesRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeReservedInstancesRequest
 * class' copy constructor.
 */
DescribeReservedInstancesRequestPrivate::DescribeReservedInstancesRequestPrivate(
    const DescribeReservedInstancesRequestPrivate &other, DescribeReservedInstancesRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
