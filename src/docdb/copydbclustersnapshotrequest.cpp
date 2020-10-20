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

#include "copydbclustersnapshotrequest.h"
#include "copydbclustersnapshotrequest_p.h"
#include "copydbclustersnapshotresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::CopyDBClusterSnapshotRequest
 * \brief The CopyDBClusterSnapshotRequest class provides an interface for DocDB CopyDBClusterSnapshot requests.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::copyDBClusterSnapshot
 */

/*!
 * Constructs a copy of \a other.
 */
CopyDBClusterSnapshotRequest::CopyDBClusterSnapshotRequest(const CopyDBClusterSnapshotRequest &other)
    : DocDBRequest(new CopyDBClusterSnapshotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CopyDBClusterSnapshotRequest object.
 */
CopyDBClusterSnapshotRequest::CopyDBClusterSnapshotRequest()
    : DocDBRequest(new CopyDBClusterSnapshotRequestPrivate(DocDBRequest::CopyDBClusterSnapshotAction, this))
{

}

/*!
 * \reimp
 */
bool CopyDBClusterSnapshotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CopyDBClusterSnapshotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CopyDBClusterSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new CopyDBClusterSnapshotResponse(*this, reply);
}

/*!
 * \class QtAws::DocDB::CopyDBClusterSnapshotRequestPrivate
 * \brief The CopyDBClusterSnapshotRequestPrivate class provides private implementation for CopyDBClusterSnapshotRequest.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a CopyDBClusterSnapshotRequestPrivate object for DocDB \a action,
 * with public implementation \a q.
 */
CopyDBClusterSnapshotRequestPrivate::CopyDBClusterSnapshotRequestPrivate(
    const DocDBRequest::Action action, CopyDBClusterSnapshotRequest * const q)
    : DocDBRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CopyDBClusterSnapshotRequest
 * class' copy constructor.
 */
CopyDBClusterSnapshotRequestPrivate::CopyDBClusterSnapshotRequestPrivate(
    const CopyDBClusterSnapshotRequestPrivate &other, CopyDBClusterSnapshotRequest * const q)
    : DocDBRequestPrivate(other, q)
{

}

} // namespace DocDB
} // namespace QtAws
