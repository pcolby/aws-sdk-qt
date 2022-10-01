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

#include "copysnapshotrequest.h"
#include "copysnapshotrequest_p.h"
#include "copysnapshotresponse.h"
#include "memorydbrequest_p.h"

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::CopySnapshotRequest
 * \brief The CopySnapshotRequest class provides an interface for MemoryDb CopySnapshot requests.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::copySnapshot
 */

/*!
 * Constructs a copy of \a other.
 */
CopySnapshotRequest::CopySnapshotRequest(const CopySnapshotRequest &other)
    : MemoryDbRequest(new CopySnapshotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CopySnapshotRequest object.
 */
CopySnapshotRequest::CopySnapshotRequest()
    : MemoryDbRequest(new CopySnapshotRequestPrivate(MemoryDbRequest::CopySnapshotAction, this))
{

}

/*!
 * \reimp
 */
bool CopySnapshotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CopySnapshotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CopySnapshotRequest::response(QNetworkReply * const reply) const
{
    return new CopySnapshotResponse(*this, reply);
}

/*!
 * \class QtAws::MemoryDb::CopySnapshotRequestPrivate
 * \brief The CopySnapshotRequestPrivate class provides private implementation for CopySnapshotRequest.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a CopySnapshotRequestPrivate object for MemoryDb \a action,
 * with public implementation \a q.
 */
CopySnapshotRequestPrivate::CopySnapshotRequestPrivate(
    const MemoryDbRequest::Action action, CopySnapshotRequest * const q)
    : MemoryDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CopySnapshotRequest
 * class' copy constructor.
 */
CopySnapshotRequestPrivate::CopySnapshotRequestPrivate(
    const CopySnapshotRequestPrivate &other, CopySnapshotRequest * const q)
    : MemoryDbRequestPrivate(other, q)
{

}

} // namespace MemoryDb
} // namespace QtAws
