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
