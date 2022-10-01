// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeparametersrequest.h"
#include "describeparametersrequest_p.h"
#include "describeparametersresponse.h"
#include "memorydbrequest_p.h"

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::DescribeParametersRequest
 * \brief The DescribeParametersRequest class provides an interface for MemoryDb DescribeParameters requests.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::describeParameters
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeParametersRequest::DescribeParametersRequest(const DescribeParametersRequest &other)
    : MemoryDbRequest(new DescribeParametersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeParametersRequest object.
 */
DescribeParametersRequest::DescribeParametersRequest()
    : MemoryDbRequest(new DescribeParametersRequestPrivate(MemoryDbRequest::DescribeParametersAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeParametersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeParametersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeParametersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeParametersResponse(*this, reply);
}

/*!
 * \class QtAws::MemoryDb::DescribeParametersRequestPrivate
 * \brief The DescribeParametersRequestPrivate class provides private implementation for DescribeParametersRequest.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a DescribeParametersRequestPrivate object for MemoryDb \a action,
 * with public implementation \a q.
 */
DescribeParametersRequestPrivate::DescribeParametersRequestPrivate(
    const MemoryDbRequest::Action action, DescribeParametersRequest * const q)
    : MemoryDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeParametersRequest
 * class' copy constructor.
 */
DescribeParametersRequestPrivate::DescribeParametersRequestPrivate(
    const DescribeParametersRequestPrivate &other, DescribeParametersRequest * const q)
    : MemoryDbRequestPrivate(other, q)
{

}

} // namespace MemoryDb
} // namespace QtAws
