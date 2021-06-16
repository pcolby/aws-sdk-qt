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

#include "deletedbsubnetgrouprequest.h"
#include "deletedbsubnetgrouprequest_p.h"
#include "deletedbsubnetgroupresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::DeleteDBSubnetGroupRequest
 * \brief The DeleteDBSubnetGroupRequest class provides an interface for DocDB DeleteDBSubnetGroup requests.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::deleteDBSubnetGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDBSubnetGroupRequest::DeleteDBSubnetGroupRequest(const DeleteDBSubnetGroupRequest &other)
    : DocDBRequest(new DeleteDBSubnetGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDBSubnetGroupRequest object.
 */
DeleteDBSubnetGroupRequest::DeleteDBSubnetGroupRequest()
    : DocDBRequest(new DeleteDBSubnetGroupRequestPrivate(DocDBRequest::DeleteDBSubnetGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDBSubnetGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDBSubnetGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDBSubnetGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDBSubnetGroupResponse(*this, reply);
}

/*!
 * \class QtAws::DocDB::DeleteDBSubnetGroupRequestPrivate
 * \brief The DeleteDBSubnetGroupRequestPrivate class provides private implementation for DeleteDBSubnetGroupRequest.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a DeleteDBSubnetGroupRequestPrivate object for DocDB \a action,
 * with public implementation \a q.
 */
DeleteDBSubnetGroupRequestPrivate::DeleteDBSubnetGroupRequestPrivate(
    const DocDBRequest::Action action, DeleteDBSubnetGroupRequest * const q)
    : DocDBRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDBSubnetGroupRequest
 * class' copy constructor.
 */
DeleteDBSubnetGroupRequestPrivate::DeleteDBSubnetGroupRequestPrivate(
    const DeleteDBSubnetGroupRequestPrivate &other, DeleteDBSubnetGroupRequest * const q)
    : DocDBRequestPrivate(other, q)
{

}

} // namespace DocDB
} // namespace QtAws
