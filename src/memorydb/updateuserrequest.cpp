// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateuserrequest.h"
#include "updateuserrequest_p.h"
#include "updateuserresponse.h"
#include "memorydbrequest_p.h"

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::UpdateUserRequest
 * \brief The UpdateUserRequest class provides an interface for MemoryDb UpdateUser requests.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::updateUser
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateUserRequest::UpdateUserRequest(const UpdateUserRequest &other)
    : MemoryDbRequest(new UpdateUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateUserRequest object.
 */
UpdateUserRequest::UpdateUserRequest()
    : MemoryDbRequest(new UpdateUserRequestPrivate(MemoryDbRequest::UpdateUserAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateUserRequest::response(QNetworkReply * const reply) const
{
    return new UpdateUserResponse(*this, reply);
}

/*!
 * \class QtAws::MemoryDb::UpdateUserRequestPrivate
 * \brief The UpdateUserRequestPrivate class provides private implementation for UpdateUserRequest.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a UpdateUserRequestPrivate object for MemoryDb \a action,
 * with public implementation \a q.
 */
UpdateUserRequestPrivate::UpdateUserRequestPrivate(
    const MemoryDbRequest::Action action, UpdateUserRequest * const q)
    : MemoryDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateUserRequest
 * class' copy constructor.
 */
UpdateUserRequestPrivate::UpdateUserRequestPrivate(
    const UpdateUserRequestPrivate &other, UpdateUserRequest * const q)
    : MemoryDbRequestPrivate(other, q)
{

}

} // namespace MemoryDb
} // namespace QtAws
