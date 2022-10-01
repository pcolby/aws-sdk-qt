// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listallowednodetypeupdatesrequest.h"
#include "listallowednodetypeupdatesrequest_p.h"
#include "listallowednodetypeupdatesresponse.h"
#include "memorydbrequest_p.h"

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::ListAllowedNodeTypeUpdatesRequest
 * \brief The ListAllowedNodeTypeUpdatesRequest class provides an interface for MemoryDb ListAllowedNodeTypeUpdates requests.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::listAllowedNodeTypeUpdates
 */

/*!
 * Constructs a copy of \a other.
 */
ListAllowedNodeTypeUpdatesRequest::ListAllowedNodeTypeUpdatesRequest(const ListAllowedNodeTypeUpdatesRequest &other)
    : MemoryDbRequest(new ListAllowedNodeTypeUpdatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAllowedNodeTypeUpdatesRequest object.
 */
ListAllowedNodeTypeUpdatesRequest::ListAllowedNodeTypeUpdatesRequest()
    : MemoryDbRequest(new ListAllowedNodeTypeUpdatesRequestPrivate(MemoryDbRequest::ListAllowedNodeTypeUpdatesAction, this))
{

}

/*!
 * \reimp
 */
bool ListAllowedNodeTypeUpdatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAllowedNodeTypeUpdatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAllowedNodeTypeUpdatesRequest::response(QNetworkReply * const reply) const
{
    return new ListAllowedNodeTypeUpdatesResponse(*this, reply);
}

/*!
 * \class QtAws::MemoryDb::ListAllowedNodeTypeUpdatesRequestPrivate
 * \brief The ListAllowedNodeTypeUpdatesRequestPrivate class provides private implementation for ListAllowedNodeTypeUpdatesRequest.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a ListAllowedNodeTypeUpdatesRequestPrivate object for MemoryDb \a action,
 * with public implementation \a q.
 */
ListAllowedNodeTypeUpdatesRequestPrivate::ListAllowedNodeTypeUpdatesRequestPrivate(
    const MemoryDbRequest::Action action, ListAllowedNodeTypeUpdatesRequest * const q)
    : MemoryDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAllowedNodeTypeUpdatesRequest
 * class' copy constructor.
 */
ListAllowedNodeTypeUpdatesRequestPrivate::ListAllowedNodeTypeUpdatesRequestPrivate(
    const ListAllowedNodeTypeUpdatesRequestPrivate &other, ListAllowedNodeTypeUpdatesRequest * const q)
    : MemoryDbRequestPrivate(other, q)
{

}

} // namespace MemoryDb
} // namespace QtAws
