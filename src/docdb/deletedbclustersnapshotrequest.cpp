// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
