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

#include "describedbclustersnapshotsrequest.h"
#include "describedbclustersnapshotsrequest_p.h"
#include "describedbclustersnapshotsresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::DescribeDBClusterSnapshotsRequest
 * \brief The DescribeDBClusterSnapshotsRequest class provides an interface for DocDB DescribeDBClusterSnapshots requests.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::describeDBClusterSnapshots
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDBClusterSnapshotsRequest::DescribeDBClusterSnapshotsRequest(const DescribeDBClusterSnapshotsRequest &other)
    : DocDBRequest(new DescribeDBClusterSnapshotsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDBClusterSnapshotsRequest object.
 */
DescribeDBClusterSnapshotsRequest::DescribeDBClusterSnapshotsRequest()
    : DocDBRequest(new DescribeDBClusterSnapshotsRequestPrivate(DocDBRequest::DescribeDBClusterSnapshotsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDBClusterSnapshotsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDBClusterSnapshotsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDBClusterSnapshotsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDBClusterSnapshotsResponse(*this, reply);
}

/*!
 * \class QtAws::DocDB::DescribeDBClusterSnapshotsRequestPrivate
 * \brief The DescribeDBClusterSnapshotsRequestPrivate class provides private implementation for DescribeDBClusterSnapshotsRequest.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a DescribeDBClusterSnapshotsRequestPrivate object for DocDB \a action,
 * with public implementation \a q.
 */
DescribeDBClusterSnapshotsRequestPrivate::DescribeDBClusterSnapshotsRequestPrivate(
    const DocDBRequest::Action action, DescribeDBClusterSnapshotsRequest * const q)
    : DocDBRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDBClusterSnapshotsRequest
 * class' copy constructor.
 */
DescribeDBClusterSnapshotsRequestPrivate::DescribeDBClusterSnapshotsRequestPrivate(
    const DescribeDBClusterSnapshotsRequestPrivate &other, DescribeDBClusterSnapshotsRequest * const q)
    : DocDBRequestPrivate(other, q)
{

}

} // namespace DocDB
} // namespace QtAws
