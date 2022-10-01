// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createclusterrequest.h"
#include "createclusterrequest_p.h"
#include "createclusterresponse.h"
#include "memorydbrequest_p.h"

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::CreateClusterRequest
 * \brief The CreateClusterRequest class provides an interface for MemoryDb CreateCluster requests.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::createCluster
 */

/*!
 * Constructs a copy of \a other.
 */
CreateClusterRequest::CreateClusterRequest(const CreateClusterRequest &other)
    : MemoryDbRequest(new CreateClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateClusterRequest object.
 */
CreateClusterRequest::CreateClusterRequest()
    : MemoryDbRequest(new CreateClusterRequestPrivate(MemoryDbRequest::CreateClusterAction, this))
{

}

/*!
 * \reimp
 */
bool CreateClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateClusterRequest::response(QNetworkReply * const reply) const
{
    return new CreateClusterResponse(*this, reply);
}

/*!
 * \class QtAws::MemoryDb::CreateClusterRequestPrivate
 * \brief The CreateClusterRequestPrivate class provides private implementation for CreateClusterRequest.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a CreateClusterRequestPrivate object for MemoryDb \a action,
 * with public implementation \a q.
 */
CreateClusterRequestPrivate::CreateClusterRequestPrivate(
    const MemoryDbRequest::Action action, CreateClusterRequest * const q)
    : MemoryDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateClusterRequest
 * class' copy constructor.
 */
CreateClusterRequestPrivate::CreateClusterRequestPrivate(
    const CreateClusterRequestPrivate &other, CreateClusterRequest * const q)
    : MemoryDbRequestPrivate(other, q)
{

}

} // namespace MemoryDb
} // namespace QtAws
