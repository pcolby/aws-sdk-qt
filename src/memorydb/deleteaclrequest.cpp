// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteaclrequest.h"
#include "deleteaclrequest_p.h"
#include "deleteaclresponse.h"
#include "memorydbrequest_p.h"

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::DeleteACLRequest
 * \brief The DeleteACLRequest class provides an interface for MemoryDb DeleteACL requests.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::deleteACL
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteACLRequest::DeleteACLRequest(const DeleteACLRequest &other)
    : MemoryDbRequest(new DeleteACLRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteACLRequest object.
 */
DeleteACLRequest::DeleteACLRequest()
    : MemoryDbRequest(new DeleteACLRequestPrivate(MemoryDbRequest::DeleteACLAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteACLRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteACLResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteACLRequest::response(QNetworkReply * const reply) const
{
    return new DeleteACLResponse(*this, reply);
}

/*!
 * \class QtAws::MemoryDb::DeleteACLRequestPrivate
 * \brief The DeleteACLRequestPrivate class provides private implementation for DeleteACLRequest.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a DeleteACLRequestPrivate object for MemoryDb \a action,
 * with public implementation \a q.
 */
DeleteACLRequestPrivate::DeleteACLRequestPrivate(
    const MemoryDbRequest::Action action, DeleteACLRequest * const q)
    : MemoryDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteACLRequest
 * class' copy constructor.
 */
DeleteACLRequestPrivate::DeleteACLRequestPrivate(
    const DeleteACLRequestPrivate &other, DeleteACLRequest * const q)
    : MemoryDbRequestPrivate(other, q)
{

}

} // namespace MemoryDb
} // namespace QtAws
