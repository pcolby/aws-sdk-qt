// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsubnetgrouprequest.h"
#include "createsubnetgrouprequest_p.h"
#include "createsubnetgroupresponse.h"
#include "memorydbrequest_p.h"

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::CreateSubnetGroupRequest
 * \brief The CreateSubnetGroupRequest class provides an interface for MemoryDb CreateSubnetGroup requests.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::createSubnetGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSubnetGroupRequest::CreateSubnetGroupRequest(const CreateSubnetGroupRequest &other)
    : MemoryDbRequest(new CreateSubnetGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSubnetGroupRequest object.
 */
CreateSubnetGroupRequest::CreateSubnetGroupRequest()
    : MemoryDbRequest(new CreateSubnetGroupRequestPrivate(MemoryDbRequest::CreateSubnetGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSubnetGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSubnetGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSubnetGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateSubnetGroupResponse(*this, reply);
}

/*!
 * \class QtAws::MemoryDb::CreateSubnetGroupRequestPrivate
 * \brief The CreateSubnetGroupRequestPrivate class provides private implementation for CreateSubnetGroupRequest.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a CreateSubnetGroupRequestPrivate object for MemoryDb \a action,
 * with public implementation \a q.
 */
CreateSubnetGroupRequestPrivate::CreateSubnetGroupRequestPrivate(
    const MemoryDbRequest::Action action, CreateSubnetGroupRequest * const q)
    : MemoryDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSubnetGroupRequest
 * class' copy constructor.
 */
CreateSubnetGroupRequestPrivate::CreateSubnetGroupRequestPrivate(
    const CreateSubnetGroupRequestPrivate &other, CreateSubnetGroupRequest * const q)
    : MemoryDbRequestPrivate(other, q)
{

}

} // namespace MemoryDb
} // namespace QtAws
