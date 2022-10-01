// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
