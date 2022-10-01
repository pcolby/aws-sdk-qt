// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createparametergrouprequest.h"
#include "createparametergrouprequest_p.h"
#include "createparametergroupresponse.h"
#include "memorydbrequest_p.h"

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::CreateParameterGroupRequest
 * \brief The CreateParameterGroupRequest class provides an interface for MemoryDb CreateParameterGroup requests.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::createParameterGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateParameterGroupRequest::CreateParameterGroupRequest(const CreateParameterGroupRequest &other)
    : MemoryDbRequest(new CreateParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateParameterGroupRequest object.
 */
CreateParameterGroupRequest::CreateParameterGroupRequest()
    : MemoryDbRequest(new CreateParameterGroupRequestPrivate(MemoryDbRequest::CreateParameterGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateParameterGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateParameterGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateParameterGroupResponse(*this, reply);
}

/*!
 * \class QtAws::MemoryDb::CreateParameterGroupRequestPrivate
 * \brief The CreateParameterGroupRequestPrivate class provides private implementation for CreateParameterGroupRequest.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a CreateParameterGroupRequestPrivate object for MemoryDb \a action,
 * with public implementation \a q.
 */
CreateParameterGroupRequestPrivate::CreateParameterGroupRequestPrivate(
    const MemoryDbRequest::Action action, CreateParameterGroupRequest * const q)
    : MemoryDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateParameterGroupRequest
 * class' copy constructor.
 */
CreateParameterGroupRequestPrivate::CreateParameterGroupRequestPrivate(
    const CreateParameterGroupRequestPrivate &other, CreateParameterGroupRequest * const q)
    : MemoryDbRequestPrivate(other, q)
{

}

} // namespace MemoryDb
} // namespace QtAws
