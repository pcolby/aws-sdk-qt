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
namespace DocDb {

/*!
 * \class QtAws::DocDb::DeleteDBClusterSnapshotRequest
 * \brief The DeleteDBClusterSnapshotRequest class provides an interface for DocDb DeleteDBClusterSnapshot requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::deleteDBClusterSnapshot
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDBClusterSnapshotRequest::DeleteDBClusterSnapshotRequest(const DeleteDBClusterSnapshotRequest &other)
    : DocDbRequest(new DeleteDBClusterSnapshotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDBClusterSnapshotRequest object.
 */
DeleteDBClusterSnapshotRequest::DeleteDBClusterSnapshotRequest()
    : DocDbRequest(new DeleteDBClusterSnapshotRequestPrivate(DocDbRequest::DeleteDBClusterSnapshotAction, this))
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
 * \class QtAws::DocDb::DeleteDBClusterSnapshotRequestPrivate
 * \brief The DeleteDBClusterSnapshotRequestPrivate class provides private implementation for DeleteDBClusterSnapshotRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DeleteDBClusterSnapshotRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
DeleteDBClusterSnapshotRequestPrivate::DeleteDBClusterSnapshotRequestPrivate(
    const DocDbRequest::Action action, DeleteDBClusterSnapshotRequest * const q)
    : DocDbRequestPrivate(action, q)
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
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
