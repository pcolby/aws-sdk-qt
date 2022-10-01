// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createuserrequest.h"
#include "createuserrequest_p.h"
#include "createuserresponse.h"
#include "memorydbrequest_p.h"

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::CreateUserRequest
 * \brief The CreateUserRequest class provides an interface for MemoryDb CreateUser requests.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::createUser
 */

/*!
 * Constructs a copy of \a other.
 */
CreateUserRequest::CreateUserRequest(const CreateUserRequest &other)
    : MemoryDbRequest(new CreateUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateUserRequest object.
 */
CreateUserRequest::CreateUserRequest()
    : MemoryDbRequest(new CreateUserRequestPrivate(MemoryDbRequest::CreateUserAction, this))
{

}

/*!
 * \reimp
 */
bool CreateUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateUserRequest::response(QNetworkReply * const reply) const
{
    return new CreateUserResponse(*this, reply);
}

/*!
 * \class QtAws::MemoryDb::CreateUserRequestPrivate
 * \brief The CreateUserRequestPrivate class provides private implementation for CreateUserRequest.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a CreateUserRequestPrivate object for MemoryDb \a action,
 * with public implementation \a q.
 */
CreateUserRequestPrivate::CreateUserRequestPrivate(
    const MemoryDbRequest::Action action, CreateUserRequest * const q)
    : MemoryDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateUserRequest
 * class' copy constructor.
 */
CreateUserRequestPrivate::CreateUserRequestPrivate(
    const CreateUserRequestPrivate &other, CreateUserRequest * const q)
    : MemoryDbRequestPrivate(other, q)
{

}

} // namespace MemoryDb
} // namespace QtAws
