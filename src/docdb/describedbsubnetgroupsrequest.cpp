/*
    Copyright 2013-2019 Paul Colby

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

#include "describedbsubnetgroupsrequest.h"
#include "describedbsubnetgroupsrequest_p.h"
#include "describedbsubnetgroupsresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::DescribeDBSubnetGroupsRequest
 * \brief The DescribeDBSubnetGroupsRequest class provides an interface for DocDB DescribeDBSubnetGroups requests.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::describeDBSubnetGroups
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDBSubnetGroupsRequest::DescribeDBSubnetGroupsRequest(const DescribeDBSubnetGroupsRequest &other)
    : DocDBRequest(new DescribeDBSubnetGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDBSubnetGroupsRequest object.
 */
DescribeDBSubnetGroupsRequest::DescribeDBSubnetGroupsRequest()
    : DocDBRequest(new DescribeDBSubnetGroupsRequestPrivate(DocDBRequest::DescribeDBSubnetGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDBSubnetGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDBSubnetGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDBSubnetGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDBSubnetGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::DocDB::DescribeDBSubnetGroupsRequestPrivate
 * \brief The DescribeDBSubnetGroupsRequestPrivate class provides private implementation for DescribeDBSubnetGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a DescribeDBSubnetGroupsRequestPrivate object for DocDB \a action,
 * with public implementation \a q.
 */
DescribeDBSubnetGroupsRequestPrivate::DescribeDBSubnetGroupsRequestPrivate(
    const DocDBRequest::Action action, DescribeDBSubnetGroupsRequest * const q)
    : DocDBRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDBSubnetGroupsRequest
 * class' copy constructor.
 */
DescribeDBSubnetGroupsRequestPrivate::DescribeDBSubnetGroupsRequestPrivate(
    const DescribeDBSubnetGroupsRequestPrivate &other, DescribeDBSubnetGroupsRequest * const q)
    : DocDBRequestPrivate(other, q)
{

}

} // namespace DocDB
} // namespace QtAws
