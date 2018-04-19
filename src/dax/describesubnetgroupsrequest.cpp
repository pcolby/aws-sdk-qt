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

#include "describesubnetgroupsrequest.h"
#include "describesubnetgroupsrequest_p.h"
#include "describesubnetgroupsresponse.h"
#include "daxrequest_p.h"

namespace QtAws {
namespace DAX {

/*!
 * \class QtAws::DAX::DescribeSubnetGroupsRequest
 * \brief The DescribeSubnetGroupsRequest class provides an interface for DAX DescribeSubnetGroups requests.
 *
 * \inmodule QtAwsDAX
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::describeSubnetGroups
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSubnetGroupsRequest::DescribeSubnetGroupsRequest(const DescribeSubnetGroupsRequest &other)
    : DAXRequest(new DescribeSubnetGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSubnetGroupsRequest object.
 */
DescribeSubnetGroupsRequest::DescribeSubnetGroupsRequest()
    : DAXRequest(new DescribeSubnetGroupsRequestPrivate(DAXRequest::DescribeSubnetGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSubnetGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSubnetGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSubnetGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSubnetGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::DAX::DescribeSubnetGroupsRequestPrivate
 * \brief The DescribeSubnetGroupsRequestPrivate class provides private implementation for DescribeSubnetGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsDAX
 */

/*!
 * Constructs a DescribeSubnetGroupsRequestPrivate object for DAX \a action,
 * with public implementation \a q.
 */
DescribeSubnetGroupsRequestPrivate::DescribeSubnetGroupsRequestPrivate(
    const DAXRequest::Action action, DescribeSubnetGroupsRequest * const q)
    : DAXRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSubnetGroupsRequest
 * class' copy constructor.
 */
DescribeSubnetGroupsRequestPrivate::DescribeSubnetGroupsRequestPrivate(
    const DescribeSubnetGroupsRequestPrivate &other, DescribeSubnetGroupsRequest * const q)
    : DAXRequestPrivate(other, q)
{

}

} // namespace DAX
} // namespace QtAws
