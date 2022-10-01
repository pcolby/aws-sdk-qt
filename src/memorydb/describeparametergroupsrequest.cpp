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

#include "describeparametergroupsrequest.h"
#include "describeparametergroupsrequest_p.h"
#include "describeparametergroupsresponse.h"
#include "memorydbrequest_p.h"

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::DescribeParameterGroupsRequest
 * \brief The DescribeParameterGroupsRequest class provides an interface for MemoryDb DescribeParameterGroups requests.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::describeParameterGroups
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeParameterGroupsRequest::DescribeParameterGroupsRequest(const DescribeParameterGroupsRequest &other)
    : MemoryDbRequest(new DescribeParameterGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeParameterGroupsRequest object.
 */
DescribeParameterGroupsRequest::DescribeParameterGroupsRequest()
    : MemoryDbRequest(new DescribeParameterGroupsRequestPrivate(MemoryDbRequest::DescribeParameterGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeParameterGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeParameterGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeParameterGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeParameterGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::MemoryDb::DescribeParameterGroupsRequestPrivate
 * \brief The DescribeParameterGroupsRequestPrivate class provides private implementation for DescribeParameterGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a DescribeParameterGroupsRequestPrivate object for MemoryDb \a action,
 * with public implementation \a q.
 */
DescribeParameterGroupsRequestPrivate::DescribeParameterGroupsRequestPrivate(
    const MemoryDbRequest::Action action, DescribeParameterGroupsRequest * const q)
    : MemoryDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeParameterGroupsRequest
 * class' copy constructor.
 */
DescribeParameterGroupsRequestPrivate::DescribeParameterGroupsRequestPrivate(
    const DescribeParameterGroupsRequestPrivate &other, DescribeParameterGroupsRequest * const q)
    : MemoryDbRequestPrivate(other, q)
{

}

} // namespace MemoryDb
} // namespace QtAws
