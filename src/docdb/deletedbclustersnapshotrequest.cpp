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

#include "deletedbclustersnapshotrequest.h"
#include "deletedbclustersnapshotrequest_p.h"
#include "deletedbclustersnapshotresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::DeleteDBClusterSnapshotRequest
 * \brief The DeleteDBClusterSnapshotRequest class provides an interface for DocDB DeleteDBClusterSnapshot requests.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::deleteDBClusterSnapshot
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDBClusterSnapshotRequest::DeleteDBClusterSnapshotRequest(const DeleteDBClusterSnapshotRequest &other)
    : DocDBRequest(new DeleteDBClusterSnapshotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDBClusterSnapshotRequest object.
 */
DeleteDBClusterSnapshotRequest::DeleteDBClusterSnapshotRequest()
    : DocDBRequest(new DeleteDBClusterSnapshotRequestPrivate(DocDBRequest::DeleteDBClusterSnapshotAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDBClusterSnapshotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDBClusterSnapshotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDBClusterSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDBClusterSnapshotResponse(*this, reply);
}

/*!
 * \class QtAws::DocDB::DeleteDBClusterSnapshotRequestPrivate
 * \brief The DeleteDBClusterSnapshotRequestPrivate class provides private implementation for DeleteDBClusterSnapshotRequest.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a DeleteDBClusterSnapshotRequestPrivate object for DocDB \a action,
 * with public implementation \a q.
 */
DeleteDBClusterSnapshotRequestPrivate::DeleteDBClusterSnapshotRequestPrivate(
    const DocDBRequest::Action action, DeleteDBClusterSnapshotRequest * const q)
    : DocDBRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDBClusterSnapshotRequest
 * class' copy constructor.
 */
DeleteDBClusterSnapshotRequestPrivate::DeleteDBClusterSnapshotRequestPrivate(
    const DeleteDBClusterSnapshotRequestPrivate &other, DeleteDBClusterSnapshotRequest * const q)
    : DocDBRequestPrivate(other, q)
{

}

} // namespace DocDB
} // namespace QtAws
