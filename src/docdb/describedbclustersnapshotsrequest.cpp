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

#include "describedbclustersnapshotsrequest.h"
#include "describedbclustersnapshotsrequest_p.h"
#include "describedbclustersnapshotsresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribeDBClusterSnapshotsRequest
 * \brief The DescribeDBClusterSnapshotsRequest class provides an interface for DocDb DescribeDBClusterSnapshots requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describeDBClusterSnapshots
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDBClusterSnapshotsRequest::DescribeDBClusterSnapshotsRequest(const DescribeDBClusterSnapshotsRequest &other)
    : DocDbRequest(new DescribeDBClusterSnapshotsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDBClusterSnapshotsRequest object.
 */
DescribeDBClusterSnapshotsRequest::DescribeDBClusterSnapshotsRequest()
    : DocDbRequest(new DescribeDBClusterSnapshotsRequestPrivate(DocDbRequest::DescribeDBClusterSnapshotsAction, this))
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
 * \class QtAws::DocDb::DescribeDBClusterSnapshotsRequestPrivate
 * \brief The DescribeDBClusterSnapshotsRequestPrivate class provides private implementation for DescribeDBClusterSnapshotsRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribeDBClusterSnapshotsRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
DescribeDBClusterSnapshotsRequestPrivate::DescribeDBClusterSnapshotsRequestPrivate(
    const DocDbRequest::Action action, DescribeDBClusterSnapshotsRequest * const q)
    : DocDbRequestPrivate(action, q)
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
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
