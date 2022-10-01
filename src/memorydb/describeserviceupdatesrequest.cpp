// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeserviceupdatesrequest.h"
#include "describeserviceupdatesrequest_p.h"
#include "describeserviceupdatesresponse.h"
#include "memorydbrequest_p.h"

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::DescribeServiceUpdatesRequest
 * \brief The DescribeServiceUpdatesRequest class provides an interface for MemoryDb DescribeServiceUpdates requests.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::describeServiceUpdates
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeServiceUpdatesRequest::DescribeServiceUpdatesRequest(const DescribeServiceUpdatesRequest &other)
    : MemoryDbRequest(new DescribeServiceUpdatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeServiceUpdatesRequest object.
 */
DescribeServiceUpdatesRequest::DescribeServiceUpdatesRequest()
    : MemoryDbRequest(new DescribeServiceUpdatesRequestPrivate(MemoryDbRequest::DescribeServiceUpdatesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeServiceUpdatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeServiceUpdatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeServiceUpdatesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeServiceUpdatesResponse(*this, reply);
}

/*!
 * \class QtAws::MemoryDb::DescribeServiceUpdatesRequestPrivate
 * \brief The DescribeServiceUpdatesRequestPrivate class provides private implementation for DescribeServiceUpdatesRequest.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a DescribeServiceUpdatesRequestPrivate object for MemoryDb \a action,
 * with public implementation \a q.
 */
DescribeServiceUpdatesRequestPrivate::DescribeServiceUpdatesRequestPrivate(
    const MemoryDbRequest::Action action, DescribeServiceUpdatesRequest * const q)
    : MemoryDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeServiceUpdatesRequest
 * class' copy constructor.
 */
DescribeServiceUpdatesRequestPrivate::DescribeServiceUpdatesRequestPrivate(
    const DescribeServiceUpdatesRequestPrivate &other, DescribeServiceUpdatesRequest * const q)
    : MemoryDbRequestPrivate(other, q)
{

}

} // namespace MemoryDb
} // namespace QtAws
