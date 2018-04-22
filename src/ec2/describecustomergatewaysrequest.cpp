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

#include "describecustomergatewaysrequest.h"
#include "describecustomergatewaysrequest_p.h"
#include "describecustomergatewaysresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeCustomerGatewaysRequest
 * \brief The DescribeCustomerGatewaysRequest class provides an interface for EC2 DescribeCustomerGateways requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeCustomerGateways
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeCustomerGatewaysRequest::DescribeCustomerGatewaysRequest(const DescribeCustomerGatewaysRequest &other)
    : Ec2Request(new DescribeCustomerGatewaysRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeCustomerGatewaysRequest object.
 */
DescribeCustomerGatewaysRequest::DescribeCustomerGatewaysRequest()
    : Ec2Request(new DescribeCustomerGatewaysRequestPrivate(Ec2Request::DescribeCustomerGatewaysAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeCustomerGatewaysRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeCustomerGatewaysResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeCustomerGatewaysRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCustomerGatewaysResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::DescribeCustomerGatewaysRequestPrivate
 * \brief The DescribeCustomerGatewaysRequestPrivate class provides private implementation for DescribeCustomerGatewaysRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeCustomerGatewaysRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
DescribeCustomerGatewaysRequestPrivate::DescribeCustomerGatewaysRequestPrivate(
    const Ec2Request::Action action, DescribeCustomerGatewaysRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeCustomerGatewaysRequest
 * class' copy constructor.
 */
DescribeCustomerGatewaysRequestPrivate::DescribeCustomerGatewaysRequestPrivate(
    const DescribeCustomerGatewaysRequestPrivate &other, DescribeCustomerGatewaysRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
