// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeusersrequest.h"
#include "describeusersrequest_p.h"
#include "describeusersresponse.h"
#include "memorydbrequest_p.h"

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::DescribeUsersRequest
 * \brief The DescribeUsersRequest class provides an interface for MemoryDb DescribeUsers requests.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::describeUsers
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeUsersRequest::DescribeUsersRequest(const DescribeUsersRequest &other)
    : MemoryDbRequest(new DescribeUsersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeUsersRequest object.
 */
DescribeUsersRequest::DescribeUsersRequest()
    : MemoryDbRequest(new DescribeUsersRequestPrivate(MemoryDbRequest::DescribeUsersAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeUsersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeUsersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeUsersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeUsersResponse(*this, reply);
}

/*!
 * \class QtAws::MemoryDb::DescribeUsersRequestPrivate
 * \brief The DescribeUsersRequestPrivate class provides private implementation for DescribeUsersRequest.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a DescribeUsersRequestPrivate object for MemoryDb \a action,
 * with public implementation \a q.
 */
DescribeUsersRequestPrivate::DescribeUsersRequestPrivate(
    const MemoryDbRequest::Action action, DescribeUsersRequest * const q)
    : MemoryDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeUsersRequest
 * class' copy constructor.
 */
DescribeUsersRequestPrivate::DescribeUsersRequestPrivate(
    const DescribeUsersRequestPrivate &other, DescribeUsersRequest * const q)
    : MemoryDbRequestPrivate(other, q)
{

}

} // namespace MemoryDb
} // namespace QtAws
