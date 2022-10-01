// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteparametergrouprequest.h"
#include "deleteparametergrouprequest_p.h"
#include "deleteparametergroupresponse.h"
#include "memorydbrequest_p.h"

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::DeleteParameterGroupRequest
 * \brief The DeleteParameterGroupRequest class provides an interface for MemoryDb DeleteParameterGroup requests.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::deleteParameterGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteParameterGroupRequest::DeleteParameterGroupRequest(const DeleteParameterGroupRequest &other)
    : MemoryDbRequest(new DeleteParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteParameterGroupRequest object.
 */
DeleteParameterGroupRequest::DeleteParameterGroupRequest()
    : MemoryDbRequest(new DeleteParameterGroupRequestPrivate(MemoryDbRequest::DeleteParameterGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteParameterGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteParameterGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteParameterGroupResponse(*this, reply);
}

/*!
 * \class QtAws::MemoryDb::DeleteParameterGroupRequestPrivate
 * \brief The DeleteParameterGroupRequestPrivate class provides private implementation for DeleteParameterGroupRequest.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a DeleteParameterGroupRequestPrivate object for MemoryDb \a action,
 * with public implementation \a q.
 */
DeleteParameterGroupRequestPrivate::DeleteParameterGroupRequestPrivate(
    const MemoryDbRequest::Action action, DeleteParameterGroupRequest * const q)
    : MemoryDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteParameterGroupRequest
 * class' copy constructor.
 */
DeleteParameterGroupRequestPrivate::DeleteParameterGroupRequestPrivate(
    const DeleteParameterGroupRequestPrivate &other, DeleteParameterGroupRequest * const q)
    : MemoryDbRequestPrivate(other, q)
{

}

} // namespace MemoryDb
} // namespace QtAws
