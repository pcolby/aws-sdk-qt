// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdbsubnetgrouprequest.h"
#include "createdbsubnetgrouprequest_p.h"
#include "createdbsubnetgroupresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::CreateDBSubnetGroupRequest
 * \brief The CreateDBSubnetGroupRequest class provides an interface for DocDb CreateDBSubnetGroup requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::createDBSubnetGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDBSubnetGroupRequest::CreateDBSubnetGroupRequest(const CreateDBSubnetGroupRequest &other)
    : DocDbRequest(new CreateDBSubnetGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDBSubnetGroupRequest object.
 */
CreateDBSubnetGroupRequest::CreateDBSubnetGroupRequest()
    : DocDbRequest(new CreateDBSubnetGroupRequestPrivate(DocDbRequest::CreateDBSubnetGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDBSubnetGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDBSubnetGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDBSubnetGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateDBSubnetGroupResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::CreateDBSubnetGroupRequestPrivate
 * \brief The CreateDBSubnetGroupRequestPrivate class provides private implementation for CreateDBSubnetGroupRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a CreateDBSubnetGroupRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
CreateDBSubnetGroupRequestPrivate::CreateDBSubnetGroupRequestPrivate(
    const DocDbRequest::Action action, CreateDBSubnetGroupRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDBSubnetGroupRequest
 * class' copy constructor.
 */
CreateDBSubnetGroupRequestPrivate::CreateDBSubnetGroupRequestPrivate(
    const CreateDBSubnetGroupRequestPrivate &other, CreateDBSubnetGroupRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
