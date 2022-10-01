// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteclusterrequest.h"
#include "deleteclusterrequest_p.h"
#include "deleteclusterresponse.h"
#include "memorydbrequest_p.h"

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::DeleteClusterRequest
 * \brief The DeleteClusterRequest class provides an interface for MemoryDb DeleteCluster requests.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::deleteCluster
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteClusterRequest::DeleteClusterRequest(const DeleteClusterRequest &other)
    : MemoryDbRequest(new DeleteClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteClusterRequest object.
 */
DeleteClusterRequest::DeleteClusterRequest()
    : MemoryDbRequest(new DeleteClusterRequestPrivate(MemoryDbRequest::DeleteClusterAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteClusterRequest::response(QNetworkReply * const reply) const
{
    return new DeleteClusterResponse(*this, reply);
}

/*!
 * \class QtAws::MemoryDb::DeleteClusterRequestPrivate
 * \brief The DeleteClusterRequestPrivate class provides private implementation for DeleteClusterRequest.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a DeleteClusterRequestPrivate object for MemoryDb \a action,
 * with public implementation \a q.
 */
DeleteClusterRequestPrivate::DeleteClusterRequestPrivate(
    const MemoryDbRequest::Action action, DeleteClusterRequest * const q)
    : MemoryDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteClusterRequest
 * class' copy constructor.
 */
DeleteClusterRequestPrivate::DeleteClusterRequestPrivate(
    const DeleteClusterRequestPrivate &other, DeleteClusterRequest * const q)
    : MemoryDbRequestPrivate(other, q)
{

}

} // namespace MemoryDb
} // namespace QtAws
