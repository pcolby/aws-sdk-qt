// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateclusterrequest.h"
#include "updateclusterrequest_p.h"
#include "updateclusterresponse.h"
#include "memorydbrequest_p.h"

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::UpdateClusterRequest
 * \brief The UpdateClusterRequest class provides an interface for MemoryDb UpdateCluster requests.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::updateCluster
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateClusterRequest::UpdateClusterRequest(const UpdateClusterRequest &other)
    : MemoryDbRequest(new UpdateClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateClusterRequest object.
 */
UpdateClusterRequest::UpdateClusterRequest()
    : MemoryDbRequest(new UpdateClusterRequestPrivate(MemoryDbRequest::UpdateClusterAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateClusterRequest::response(QNetworkReply * const reply) const
{
    return new UpdateClusterResponse(*this, reply);
}

/*!
 * \class QtAws::MemoryDb::UpdateClusterRequestPrivate
 * \brief The UpdateClusterRequestPrivate class provides private implementation for UpdateClusterRequest.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a UpdateClusterRequestPrivate object for MemoryDb \a action,
 * with public implementation \a q.
 */
UpdateClusterRequestPrivate::UpdateClusterRequestPrivate(
    const MemoryDbRequest::Action action, UpdateClusterRequest * const q)
    : MemoryDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateClusterRequest
 * class' copy constructor.
 */
UpdateClusterRequestPrivate::UpdateClusterRequestPrivate(
    const UpdateClusterRequestPrivate &other, UpdateClusterRequest * const q)
    : MemoryDbRequestPrivate(other, q)
{

}

} // namespace MemoryDb
} // namespace QtAws
