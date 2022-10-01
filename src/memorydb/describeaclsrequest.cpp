// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeaclsrequest.h"
#include "describeaclsrequest_p.h"
#include "describeaclsresponse.h"
#include "memorydbrequest_p.h"

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::DescribeACLsRequest
 * \brief The DescribeACLsRequest class provides an interface for MemoryDb DescribeACLs requests.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::describeACLs
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeACLsRequest::DescribeACLsRequest(const DescribeACLsRequest &other)
    : MemoryDbRequest(new DescribeACLsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeACLsRequest object.
 */
DescribeACLsRequest::DescribeACLsRequest()
    : MemoryDbRequest(new DescribeACLsRequestPrivate(MemoryDbRequest::DescribeACLsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeACLsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeACLsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeACLsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeACLsResponse(*this, reply);
}

/*!
 * \class QtAws::MemoryDb::DescribeACLsRequestPrivate
 * \brief The DescribeACLsRequestPrivate class provides private implementation for DescribeACLsRequest.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a DescribeACLsRequestPrivate object for MemoryDb \a action,
 * with public implementation \a q.
 */
DescribeACLsRequestPrivate::DescribeACLsRequestPrivate(
    const MemoryDbRequest::Action action, DescribeACLsRequest * const q)
    : MemoryDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeACLsRequest
 * class' copy constructor.
 */
DescribeACLsRequestPrivate::DescribeACLsRequestPrivate(
    const DescribeACLsRequestPrivate &other, DescribeACLsRequest * const q)
    : MemoryDbRequestPrivate(other, q)
{

}

} // namespace MemoryDb
} // namespace QtAws
