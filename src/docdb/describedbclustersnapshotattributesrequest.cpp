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

#include "describedbclustersnapshotattributesrequest.h"
#include "describedbclustersnapshotattributesrequest_p.h"
#include "describedbclustersnapshotattributesresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribeDBClusterSnapshotAttributesRequest
 * \brief The DescribeDBClusterSnapshotAttributesRequest class provides an interface for DocDb DescribeDBClusterSnapshotAttributes requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describeDBClusterSnapshotAttributes
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDBClusterSnapshotAttributesRequest::DescribeDBClusterSnapshotAttributesRequest(const DescribeDBClusterSnapshotAttributesRequest &other)
    : DocDbRequest(new DescribeDBClusterSnapshotAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDBClusterSnapshotAttributesRequest object.
 */
DescribeDBClusterSnapshotAttributesRequest::DescribeDBClusterSnapshotAttributesRequest()
    : DocDbRequest(new DescribeDBClusterSnapshotAttributesRequestPrivate(DocDbRequest::DescribeDBClusterSnapshotAttributesAction, this))
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
 * \class QtAws::DocDb::DescribeDBClusterSnapshotAttributesRequestPrivate
 * \brief The DescribeDBClusterSnapshotAttributesRequestPrivate class provides private implementation for DescribeDBClusterSnapshotAttributesRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribeDBClusterSnapshotAttributesRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
DescribeDBClusterSnapshotAttributesRequestPrivate::DescribeDBClusterSnapshotAttributesRequestPrivate(
    const DocDbRequest::Action action, DescribeDBClusterSnapshotAttributesRequest * const q)
    : DocDbRequestPrivate(action, q)
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
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
