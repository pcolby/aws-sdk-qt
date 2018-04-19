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

#include "describeroutetablesrequest.h"
#include "describeroutetablesrequest_p.h"
#include "describeroutetablesresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeRouteTablesRequest
 * \brief The DescribeRouteTablesRequest class provides an interface for EC2 DescribeRouteTables requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::describeRouteTables
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeRouteTablesRequest::DescribeRouteTablesRequest(const DescribeRouteTablesRequest &other)
    : EC2Request(new DescribeRouteTablesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeRouteTablesRequest object.
 */
DescribeRouteTablesRequest::DescribeRouteTablesRequest()
    : EC2Request(new DescribeRouteTablesRequestPrivate(EC2Request::DescribeRouteTablesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeRouteTablesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeRouteTablesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeRouteTablesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRouteTablesResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::DescribeRouteTablesRequestPrivate
 * \brief The DescribeRouteTablesRequestPrivate class provides private implementation for DescribeRouteTablesRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeRouteTablesRequestPrivate object for EC2 \a action,
 * with public implementation \a q.
 */
DescribeRouteTablesRequestPrivate::DescribeRouteTablesRequestPrivate(
    const EC2Request::Action action, DescribeRouteTablesRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeRouteTablesRequest
 * class' copy constructor.
 */
DescribeRouteTablesRequestPrivate::DescribeRouteTablesRequestPrivate(
    const DescribeRouteTablesRequestPrivate &other, DescribeRouteTablesRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
