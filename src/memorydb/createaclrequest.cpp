// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createaclrequest.h"
#include "createaclrequest_p.h"
#include "createaclresponse.h"
#include "memorydbrequest_p.h"

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::CreateACLRequest
 * \brief The CreateACLRequest class provides an interface for MemoryDb CreateACL requests.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::createACL
 */

/*!
 * Constructs a copy of \a other.
 */
CreateACLRequest::CreateACLRequest(const CreateACLRequest &other)
    : MemoryDbRequest(new CreateACLRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateACLRequest object.
 */
CreateACLRequest::CreateACLRequest()
    : MemoryDbRequest(new CreateACLRequestPrivate(MemoryDbRequest::CreateACLAction, this))
{

}

/*!
 * \reimp
 */
bool CreateACLRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateACLResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateACLRequest::response(QNetworkReply * const reply) const
{
    return new CreateACLResponse(*this, reply);
}

/*!
 * \class QtAws::MemoryDb::CreateACLRequestPrivate
 * \brief The CreateACLRequestPrivate class provides private implementation for CreateACLRequest.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a CreateACLRequestPrivate object for MemoryDb \a action,
 * with public implementation \a q.
 */
CreateACLRequestPrivate::CreateACLRequestPrivate(
    const MemoryDbRequest::Action action, CreateACLRequest * const q)
    : MemoryDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateACLRequest
 * class' copy constructor.
 */
CreateACLRequestPrivate::CreateACLRequestPrivate(
    const CreateACLRequestPrivate &other, CreateACLRequest * const q)
    : MemoryDbRequestPrivate(other, q)
{

}

} // namespace MemoryDb
} // namespace QtAws
