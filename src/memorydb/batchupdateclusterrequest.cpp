// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchupdateclusterrequest.h"
#include "batchupdateclusterrequest_p.h"
#include "batchupdateclusterresponse.h"
#include "memorydbrequest_p.h"

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::BatchUpdateClusterRequest
 * \brief The BatchUpdateClusterRequest class provides an interface for MemoryDb BatchUpdateCluster requests.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::batchUpdateCluster
 */

/*!
 * Constructs a copy of \a other.
 */
BatchUpdateClusterRequest::BatchUpdateClusterRequest(const BatchUpdateClusterRequest &other)
    : MemoryDbRequest(new BatchUpdateClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchUpdateClusterRequest object.
 */
BatchUpdateClusterRequest::BatchUpdateClusterRequest()
    : MemoryDbRequest(new BatchUpdateClusterRequestPrivate(MemoryDbRequest::BatchUpdateClusterAction, this))
{

}

/*!
 * \reimp
 */
bool BatchUpdateClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchUpdateClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchUpdateClusterRequest::response(QNetworkReply * const reply) const
{
    return new BatchUpdateClusterResponse(*this, reply);
}

/*!
 * \class QtAws::MemoryDb::BatchUpdateClusterRequestPrivate
 * \brief The BatchUpdateClusterRequestPrivate class provides private implementation for BatchUpdateClusterRequest.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a BatchUpdateClusterRequestPrivate object for MemoryDb \a action,
 * with public implementation \a q.
 */
BatchUpdateClusterRequestPrivate::BatchUpdateClusterRequestPrivate(
    const MemoryDbRequest::Action action, BatchUpdateClusterRequest * const q)
    : MemoryDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchUpdateClusterRequest
 * class' copy constructor.
 */
BatchUpdateClusterRequestPrivate::BatchUpdateClusterRequestPrivate(
    const BatchUpdateClusterRequestPrivate &other, BatchUpdateClusterRequest * const q)
    : MemoryDbRequestPrivate(other, q)
{

}

} // namespace MemoryDb
} // namespace QtAws
