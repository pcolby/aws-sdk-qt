/*
    Copyright 2013-2020 Paul Colby

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

#include "describedbclustersnapshotattributesrequest.h"
#include "describedbclustersnapshotattributesrequest_p.h"
#include "describedbclustersnapshotattributesresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::DescribeDBClusterSnapshotAttributesRequest
 * \brief The DescribeDBClusterSnapshotAttributesRequest class provides an interface for DocDB DescribeDBClusterSnapshotAttributes requests.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::describeDBClusterSnapshotAttributes
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDBClusterSnapshotAttributesRequest::DescribeDBClusterSnapshotAttributesRequest(const DescribeDBClusterSnapshotAttributesRequest &other)
    : DocDBRequest(new DescribeDBClusterSnapshotAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDBClusterSnapshotAttributesRequest object.
 */
DescribeDBClusterSnapshotAttributesRequest::DescribeDBClusterSnapshotAttributesRequest()
    : DocDBRequest(new DescribeDBClusterSnapshotAttributesRequestPrivate(DocDBRequest::DescribeDBClusterSnapshotAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDBClusterSnapshotAttributesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDBClusterSnapshotAttributesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDBClusterSnapshotAttributesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDBClusterSnapshotAttributesResponse(*this, reply);
}

/*!
 * \class QtAws::DocDB::DescribeDBClusterSnapshotAttributesRequestPrivate
 * \brief The DescribeDBClusterSnapshotAttributesRequestPrivate class provides private implementation for DescribeDBClusterSnapshotAttributesRequest.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a DescribeDBClusterSnapshotAttributesRequestPrivate object for DocDB \a action,
 * with public implementation \a q.
 */
DescribeDBClusterSnapshotAttributesRequestPrivate::DescribeDBClusterSnapshotAttributesRequestPrivate(
    const DocDBRequest::Action action, DescribeDBClusterSnapshotAttributesRequest * const q)
    : DocDBRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDBClusterSnapshotAttributesRequest
 * class' copy constructor.
 */
DescribeDBClusterSnapshotAttributesRequestPrivate::DescribeDBClusterSnapshotAttributesRequestPrivate(
    const DescribeDBClusterSnapshotAttributesRequestPrivate &other, DescribeDBClusterSnapshotAttributesRequest * const q)
    : DocDBRequestPrivate(other, q)
{

}

} // namespace DocDB
} // namespace QtAws
