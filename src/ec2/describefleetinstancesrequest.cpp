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

#include "describefleetinstancesrequest.h"
#include "describefleetinstancesrequest_p.h"
#include "describefleetinstancesresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeFleetInstancesRequest
 * \brief The DescribeFleetInstancesRequest class provides an interface for EC2 DescribeFleetInstances requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeFleetInstances
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFleetInstancesRequest::DescribeFleetInstancesRequest(const DescribeFleetInstancesRequest &other)
    : Ec2Request(new DescribeFleetInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFleetInstancesRequest object.
 */
DescribeFleetInstancesRequest::DescribeFleetInstancesRequest()
    : Ec2Request(new DescribeFleetInstancesRequestPrivate(Ec2Request::DescribeFleetInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeFleetInstancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeFleetInstancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFleetInstancesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFleetInstancesResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::DescribeFleetInstancesRequestPrivate
 * \brief The DescribeFleetInstancesRequestPrivate class provides private implementation for DescribeFleetInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeFleetInstancesRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
DescribeFleetInstancesRequestPrivate::DescribeFleetInstancesRequestPrivate(
    const Ec2Request::Action action, DescribeFleetInstancesRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeFleetInstancesRequest
 * class' copy constructor.
 */
DescribeFleetInstancesRequestPrivate::DescribeFleetInstancesRequestPrivate(
    const DescribeFleetInstancesRequestPrivate &other, DescribeFleetInstancesRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
