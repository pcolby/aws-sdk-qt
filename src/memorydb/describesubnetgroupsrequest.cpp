// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describesubnetgroupsrequest.h"
#include "describesubnetgroupsrequest_p.h"
#include "describesubnetgroupsresponse.h"
#include "memorydbrequest_p.h"

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::DescribeSubnetGroupsRequest
 * \brief The DescribeSubnetGroupsRequest class provides an interface for MemoryDb DescribeSubnetGroups requests.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::describeSubnetGroups
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSubnetGroupsRequest::DescribeSubnetGroupsRequest(const DescribeSubnetGroupsRequest &other)
    : MemoryDbRequest(new DescribeSubnetGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSubnetGroupsRequest object.
 */
DescribeSubnetGroupsRequest::DescribeSubnetGroupsRequest()
    : MemoryDbRequest(new DescribeSubnetGroupsRequestPrivate(MemoryDbRequest::DescribeSubnetGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSubnetGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSubnetGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSubnetGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSubnetGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::MemoryDb::DescribeSubnetGroupsRequestPrivate
 * \brief The DescribeSubnetGroupsRequestPrivate class provides private implementation for DescribeSubnetGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a DescribeSubnetGroupsRequestPrivate object for MemoryDb \a action,
 * with public implementation \a q.
 */
DescribeSubnetGroupsRequestPrivate::DescribeSubnetGroupsRequestPrivate(
    const MemoryDbRequest::Action action, DescribeSubnetGroupsRequest * const q)
    : MemoryDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSubnetGroupsRequest
 * class' copy constructor.
 */
DescribeSubnetGroupsRequestPrivate::DescribeSubnetGroupsRequestPrivate(
    const DescribeSubnetGroupsRequestPrivate &other, DescribeSubnetGroupsRequest * const q)
    : MemoryDbRequestPrivate(other, q)
{

}

} // namespace MemoryDb
} // namespace QtAws
