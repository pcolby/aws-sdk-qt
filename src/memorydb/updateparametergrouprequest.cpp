// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateparametergrouprequest.h"
#include "updateparametergrouprequest_p.h"
#include "updateparametergroupresponse.h"
#include "memorydbrequest_p.h"

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::UpdateParameterGroupRequest
 * \brief The UpdateParameterGroupRequest class provides an interface for MemoryDb UpdateParameterGroup requests.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::updateParameterGroup
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateParameterGroupRequest::UpdateParameterGroupRequest(const UpdateParameterGroupRequest &other)
    : MemoryDbRequest(new UpdateParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateParameterGroupRequest object.
 */
UpdateParameterGroupRequest::UpdateParameterGroupRequest()
    : MemoryDbRequest(new UpdateParameterGroupRequestPrivate(MemoryDbRequest::UpdateParameterGroupAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateParameterGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateParameterGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateParameterGroupResponse(*this, reply);
}

/*!
 * \class QtAws::MemoryDb::UpdateParameterGroupRequestPrivate
 * \brief The UpdateParameterGroupRequestPrivate class provides private implementation for UpdateParameterGroupRequest.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a UpdateParameterGroupRequestPrivate object for MemoryDb \a action,
 * with public implementation \a q.
 */
UpdateParameterGroupRequestPrivate::UpdateParameterGroupRequestPrivate(
    const MemoryDbRequest::Action action, UpdateParameterGroupRequest * const q)
    : MemoryDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateParameterGroupRequest
 * class' copy constructor.
 */
UpdateParameterGroupRequestPrivate::UpdateParameterGroupRequestPrivate(
    const UpdateParameterGroupRequestPrivate &other, UpdateParameterGroupRequest * const q)
    : MemoryDbRequestPrivate(other, q)
{

}

} // namespace MemoryDb
} // namespace QtAws
