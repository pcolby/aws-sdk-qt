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

#include "describevpcsrequest.h"
#include "describevpcsrequest_p.h"
#include "describevpcsresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeVpcsRequest
 * \brief The DescribeVpcsRequest class provides an interface for EC2 DescribeVpcs requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeVpcs
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeVpcsRequest::DescribeVpcsRequest(const DescribeVpcsRequest &other)
    : Ec2Request(new DescribeVpcsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeVpcsRequest object.
 */
DescribeVpcsRequest::DescribeVpcsRequest()
    : Ec2Request(new DescribeVpcsRequestPrivate(Ec2Request::DescribeVpcsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeVpcsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeVpcsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeVpcsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeVpcsResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::DescribeVpcsRequestPrivate
 * \brief The DescribeVpcsRequestPrivate class provides private implementation for DescribeVpcsRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeVpcsRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
DescribeVpcsRequestPrivate::DescribeVpcsRequestPrivate(
    const Ec2Request::Action action, DescribeVpcsRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeVpcsRequest
 * class' copy constructor.
 */
DescribeVpcsRequestPrivate::DescribeVpcsRequestPrivate(
    const DescribeVpcsRequestPrivate &other, DescribeVpcsRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
