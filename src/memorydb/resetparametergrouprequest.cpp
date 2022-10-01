// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resetparametergrouprequest.h"
#include "resetparametergrouprequest_p.h"
#include "resetparametergroupresponse.h"
#include "memorydbrequest_p.h"

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::ResetParameterGroupRequest
 * \brief The ResetParameterGroupRequest class provides an interface for MemoryDb ResetParameterGroup requests.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::resetParameterGroup
 */

/*!
 * Constructs a copy of \a other.
 */
ResetParameterGroupRequest::ResetParameterGroupRequest(const ResetParameterGroupRequest &other)
    : MemoryDbRequest(new ResetParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ResetParameterGroupRequest object.
 */
ResetParameterGroupRequest::ResetParameterGroupRequest()
    : MemoryDbRequest(new ResetParameterGroupRequestPrivate(MemoryDbRequest::ResetParameterGroupAction, this))
{

}

/*!
 * \reimp
 */
bool ResetParameterGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ResetParameterGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ResetParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new ResetParameterGroupResponse(*this, reply);
}

/*!
 * \class QtAws::MemoryDb::ResetParameterGroupRequestPrivate
 * \brief The ResetParameterGroupRequestPrivate class provides private implementation for ResetParameterGroupRequest.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a ResetParameterGroupRequestPrivate object for MemoryDb \a action,
 * with public implementation \a q.
 */
ResetParameterGroupRequestPrivate::ResetParameterGroupRequestPrivate(
    const MemoryDbRequest::Action action, ResetParameterGroupRequest * const q)
    : MemoryDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ResetParameterGroupRequest
 * class' copy constructor.
 */
ResetParameterGroupRequestPrivate::ResetParameterGroupRequestPrivate(
    const ResetParameterGroupRequestPrivate &other, ResetParameterGroupRequest * const q)
    : MemoryDbRequestPrivate(other, q)
{

}

} // namespace MemoryDb
} // namespace QtAws
