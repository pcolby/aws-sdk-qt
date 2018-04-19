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

#include "describemovingaddressesrequest.h"
#include "describemovingaddressesrequest_p.h"
#include "describemovingaddressesresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeMovingAddressesRequest
 * \brief The DescribeMovingAddressesRequest class provides an interface for EC2 DescribeMovingAddresses requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::describeMovingAddresses
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeMovingAddressesRequest::DescribeMovingAddressesRequest(const DescribeMovingAddressesRequest &other)
    : EC2Request(new DescribeMovingAddressesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeMovingAddressesRequest object.
 */
DescribeMovingAddressesRequest::DescribeMovingAddressesRequest()
    : EC2Request(new DescribeMovingAddressesRequestPrivate(EC2Request::DescribeMovingAddressesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeMovingAddressesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeMovingAddressesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeMovingAddressesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeMovingAddressesResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::DescribeMovingAddressesRequestPrivate
 * \brief The DescribeMovingAddressesRequestPrivate class provides private implementation for DescribeMovingAddressesRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 *
 * Constructs a DescribeMovingAddressesRequestPrivate object for EC2 \a action with,
 * public implementation \a q.
 */
DescribeMovingAddressesRequestPrivate::DescribeMovingAddressesRequestPrivate(
    const EC2Request::Action action, DescribeMovingAddressesRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeMovingAddressesRequest
 * class' copy constructor.
 */
DescribeMovingAddressesRequestPrivate::DescribeMovingAddressesRequestPrivate(
    const DescribeMovingAddressesRequestPrivate &other, DescribeMovingAddressesRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
