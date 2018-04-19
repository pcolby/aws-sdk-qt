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

#include "describehostsrequest.h"
#include "describehostsrequest_p.h"
#include "describehostsresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeHostsRequest
 * \brief The DescribeHostsRequest class provides an interface for EC2 DescribeHosts requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeHosts
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeHostsRequest::DescribeHostsRequest(const DescribeHostsRequest &other)
    : EC2Request(new DescribeHostsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeHostsRequest object.
 */
DescribeHostsRequest::DescribeHostsRequest()
    : EC2Request(new DescribeHostsRequestPrivate(EC2Request::DescribeHostsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeHostsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeHostsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeHostsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeHostsResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::DescribeHostsRequestPrivate
 * \brief The DescribeHostsRequestPrivate class provides private implementation for DescribeHostsRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeHostsRequestPrivate object for EC2 \a action,
 * with public implementation \a q.
 */
DescribeHostsRequestPrivate::DescribeHostsRequestPrivate(
    const EC2Request::Action action, DescribeHostsRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeHostsRequest
 * class' copy constructor.
 */
DescribeHostsRequestPrivate::DescribeHostsRequestPrivate(
    const DescribeHostsRequestPrivate &other, DescribeHostsRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
