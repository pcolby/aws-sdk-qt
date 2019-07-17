/*
    Copyright 2013-2019 Paul Colby

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
namespace DocDB {

/*!
 * \class QtAws::DocDB::ModifyDBSubnetGroupRequest
 * \brief The ModifyDBSubnetGroupRequest class provides an interface for DocDB ModifyDBSubnetGroup requests.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::modifyDBSubnetGroup
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyDBSubnetGroupRequest::ModifyDBSubnetGroupRequest(const ModifyDBSubnetGroupRequest &other)
    : DocDBRequest(new ModifyDBSubnetGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyDBSubnetGroupRequest object.
 */
ModifyDBSubnetGroupRequest::ModifyDBSubnetGroupRequest()
    : DocDBRequest(new ModifyDBSubnetGroupRequestPrivate(DocDBRequest::ModifyDBSubnetGroupAction, this))
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
 * \class QtAws::DocDB::ModifyDBSubnetGroupRequestPrivate
 * \brief The ModifyDBSubnetGroupRequestPrivate class provides private implementation for ModifyDBSubnetGroupRequest.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a ModifyDBSubnetGroupRequestPrivate object for DocDB \a action,
 * with public implementation \a q.
 */
ModifyDBSubnetGroupRequestPrivate::ModifyDBSubnetGroupRequestPrivate(
    const DocDBRequest::Action action, ModifyDBSubnetGroupRequest * const q)
    : DocDBRequestPrivate(action, q)
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
    : DocDBRequestPrivate(other, q)
{

}

} // namespace DocDB
} // namespace QtAws
