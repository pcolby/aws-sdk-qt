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

#include "describevpcendpointservicesrequest.h"
#include "describevpcendpointservicesrequest_p.h"
#include "describevpcendpointservicesresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeVpcEndpointServicesRequest
 * \brief The DescribeVpcEndpointServicesRequest class provides an interface for EC2 DescribeVpcEndpointServices requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeVpcEndpointServices
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeVpcEndpointServicesRequest::DescribeVpcEndpointServicesRequest(const DescribeVpcEndpointServicesRequest &other)
    : Ec2Request(new DescribeVpcEndpointServicesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeVpcEndpointServicesRequest object.
 */
DescribeVpcEndpointServicesRequest::DescribeVpcEndpointServicesRequest()
    : Ec2Request(new DescribeVpcEndpointServicesRequestPrivate(Ec2Request::DescribeVpcEndpointServicesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeVpcEndpointServicesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeVpcEndpointServicesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeVpcEndpointServicesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeVpcEndpointServicesResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::DescribeVpcEndpointServicesRequestPrivate
 * \brief The DescribeVpcEndpointServicesRequestPrivate class provides private implementation for DescribeVpcEndpointServicesRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeVpcEndpointServicesRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
DescribeVpcEndpointServicesRequestPrivate::DescribeVpcEndpointServicesRequestPrivate(
    const Ec2Request::Action action, DescribeVpcEndpointServicesRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeVpcEndpointServicesRequest
 * class' copy constructor.
 */
DescribeVpcEndpointServicesRequestPrivate::DescribeVpcEndpointServicesRequestPrivate(
    const DescribeVpcEndpointServicesRequestPrivate &other, DescribeVpcEndpointServicesRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
