// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesnapshotrequest.h"
#include "deletesnapshotrequest_p.h"
#include "deletesnapshotresponse.h"
#include "memorydbrequest_p.h"

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::DeleteSnapshotRequest
 * \brief The DeleteSnapshotRequest class provides an interface for MemoryDb DeleteSnapshot requests.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::deleteSnapshot
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSnapshotRequest::DeleteSnapshotRequest(const DeleteSnapshotRequest &other)
    : MemoryDbRequest(new DeleteSnapshotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSnapshotRequest object.
 */
DeleteSnapshotRequest::DeleteSnapshotRequest()
    : MemoryDbRequest(new DeleteSnapshotRequestPrivate(MemoryDbRequest::DeleteSnapshotAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSnapshotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSnapshotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSnapshotResponse(*this, reply);
}

/*!
 * \class QtAws::MemoryDb::DeleteSnapshotRequestPrivate
 * \brief The DeleteSnapshotRequestPrivate class provides private implementation for DeleteSnapshotRequest.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a DeleteSnapshotRequestPrivate object for MemoryDb \a action,
 * with public implementation \a q.
 */
DeleteSnapshotRequestPrivate::DeleteSnapshotRequestPrivate(
    const MemoryDbRequest::Action action, DeleteSnapshotRequest * const q)
    : MemoryDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSnapshotRequest
 * class' copy constructor.
 */
DeleteSnapshotRequestPrivate::DeleteSnapshotRequestPrivate(
    const DeleteSnapshotRequestPrivate &other, DeleteSnapshotRequest * const q)
    : MemoryDbRequestPrivate(other, q)
{

}

} // namespace MemoryDb
} // namespace QtAws
