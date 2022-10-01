/*
    Copyright 2013-2021 Paul Colby

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
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribeDBSubnetGroupsRequest
 * \brief The DescribeDBSubnetGroupsRequest class provides an interface for DocDb DescribeDBSubnetGroups requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describeDBSubnetGroups
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDBSubnetGroupsRequest::DescribeDBSubnetGroupsRequest(const DescribeDBSubnetGroupsRequest &other)
    : DocDbRequest(new DescribeDBSubnetGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDBSubnetGroupsRequest object.
 */
DescribeDBSubnetGroupsRequest::DescribeDBSubnetGroupsRequest()
    : DocDbRequest(new DescribeDBSubnetGroupsRequestPrivate(DocDbRequest::DescribeDBSubnetGroupsAction, this))
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
 * \class QtAws::DocDb::DescribeDBSubnetGroupsRequestPrivate
 * \brief The DescribeDBSubnetGroupsRequestPrivate class provides private implementation for DescribeDBSubnetGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribeDBSubnetGroupsRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
DescribeDBSubnetGroupsRequestPrivate::DescribeDBSubnetGroupsRequestPrivate(
    const DocDbRequest::Action action, DescribeDBSubnetGroupsRequest * const q)
    : DocDbRequestPrivate(action, q)
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
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
