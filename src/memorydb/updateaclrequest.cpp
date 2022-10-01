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

#include "updateaclrequest.h"
#include "updateaclrequest_p.h"
#include "updateaclresponse.h"
#include "memorydbrequest_p.h"

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::UpdateACLRequest
 * \brief The UpdateACLRequest class provides an interface for MemoryDb UpdateACL requests.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::updateACL
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateACLRequest::UpdateACLRequest(const UpdateACLRequest &other)
    : MemoryDbRequest(new UpdateACLRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateACLRequest object.
 */
UpdateACLRequest::UpdateACLRequest()
    : MemoryDbRequest(new UpdateACLRequestPrivate(MemoryDbRequest::UpdateACLAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateACLRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateACLResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateACLRequest::response(QNetworkReply * const reply) const
{
    return new UpdateACLResponse(*this, reply);
}

/*!
 * \class QtAws::MemoryDb::UpdateACLRequestPrivate
 * \brief The UpdateACLRequestPrivate class provides private implementation for UpdateACLRequest.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a UpdateACLRequestPrivate object for MemoryDb \a action,
 * with public implementation \a q.
 */
UpdateACLRequestPrivate::UpdateACLRequestPrivate(
    const MemoryDbRequest::Action action, UpdateACLRequest * const q)
    : MemoryDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateACLRequest
 * class' copy constructor.
 */
UpdateACLRequestPrivate::UpdateACLRequestPrivate(
    const UpdateACLRequestPrivate &other, UpdateACLRequest * const q)
    : MemoryDbRequestPrivate(other, q)
{

}

} // namespace MemoryDb
} // namespace QtAws
