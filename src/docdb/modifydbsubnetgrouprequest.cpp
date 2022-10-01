// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifydbsubnetgrouprequest.h"
#include "modifydbsubnetgrouprequest_p.h"
#include "modifydbsubnetgroupresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::ModifyDBSubnetGroupRequest
 * \brief The ModifyDBSubnetGroupRequest class provides an interface for DocDb ModifyDBSubnetGroup requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::modifyDBSubnetGroup
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyDBSubnetGroupRequest::ModifyDBSubnetGroupRequest(const ModifyDBSubnetGroupRequest &other)
    : DocDbRequest(new ModifyDBSubnetGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyDBSubnetGroupRequest object.
 */
ModifyDBSubnetGroupRequest::ModifyDBSubnetGroupRequest()
    : DocDbRequest(new ModifyDBSubnetGroupRequestPrivate(DocDbRequest::ModifyDBSubnetGroupAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyDBSubnetGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyDBSubnetGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyDBSubnetGroupRequest::response(QNetworkReply * const reply) const
{
    return new ModifyDBSubnetGroupResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::ModifyDBSubnetGroupRequestPrivate
 * \brief The ModifyDBSubnetGroupRequestPrivate class provides private implementation for ModifyDBSubnetGroupRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a ModifyDBSubnetGroupRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
ModifyDBSubnetGroupRequestPrivate::ModifyDBSubnetGroupRequestPrivate(
    const DocDbRequest::Action action, ModifyDBSubnetGroupRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyDBSubnetGroupRequest
 * class' copy constructor.
 */
ModifyDBSubnetGroupRequestPrivate::ModifyDBSubnetGroupRequestPrivate(
    const ModifyDBSubnetGroupRequestPrivate &other, ModifyDBSubnetGroupRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
