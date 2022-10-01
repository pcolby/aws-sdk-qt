/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
