// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "failovershardrequest.h"
#include "failovershardrequest_p.h"
#include "failovershardresponse.h"
#include "memorydbrequest_p.h"

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::FailoverShardRequest
 * \brief The FailoverShardRequest class provides an interface for MemoryDb FailoverShard requests.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::failoverShard
 */

/*!
 * Constructs a copy of \a other.
 */
FailoverShardRequest::FailoverShardRequest(const FailoverShardRequest &other)
    : MemoryDbRequest(new FailoverShardRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a FailoverShardRequest object.
 */
FailoverShardRequest::FailoverShardRequest()
    : MemoryDbRequest(new FailoverShardRequestPrivate(MemoryDbRequest::FailoverShardAction, this))
{

}

/*!
 * \reimp
 */
bool FailoverShardRequest::isValid() const
{
    return false;
}


/*!
 * Returns a FailoverShardResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * FailoverShardRequest::response(QNetworkReply * const reply) const
{
    return new FailoverShardResponse(*this, reply);
}

/*!
 * \class QtAws::MemoryDb::FailoverShardRequestPrivate
 * \brief The FailoverShardRequestPrivate class provides private implementation for FailoverShardRequest.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a FailoverShardRequestPrivate object for MemoryDb \a action,
 * with public implementation \a q.
 */
FailoverShardRequestPrivate::FailoverShardRequestPrivate(
    const MemoryDbRequest::Action action, FailoverShardRequest * const q)
    : MemoryDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the FailoverShardRequest
 * class' copy constructor.
 */
FailoverShardRequestPrivate::FailoverShardRequestPrivate(
    const FailoverShardRequestPrivate &other, FailoverShardRequest * const q)
    : MemoryDbRequestPrivate(other, q)
{

}

} // namespace MemoryDb
} // namespace QtAws
