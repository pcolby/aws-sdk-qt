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

#include "createdbsubnetgrouprequest.h"
#include "createdbsubnetgrouprequest_p.h"
#include "createdbsubnetgroupresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::CreateDBSubnetGroupRequest
 * \brief The CreateDBSubnetGroupRequest class provides an interface for DocDB CreateDBSubnetGroup requests.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::createDBSubnetGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDBSubnetGroupRequest::CreateDBSubnetGroupRequest(const CreateDBSubnetGroupRequest &other)
    : DocDBRequest(new CreateDBSubnetGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDBSubnetGroupRequest object.
 */
CreateDBSubnetGroupRequest::CreateDBSubnetGroupRequest()
    : DocDBRequest(new CreateDBSubnetGroupRequestPrivate(DocDBRequest::CreateDBSubnetGroupAction, this))
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
 * \class QtAws::DocDB::CreateDBSubnetGroupRequestPrivate
 * \brief The CreateDBSubnetGroupRequestPrivate class provides private implementation for CreateDBSubnetGroupRequest.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a CreateDBSubnetGroupRequestPrivate object for DocDB \a action,
 * with public implementation \a q.
 */
CreateDBSubnetGroupRequestPrivate::CreateDBSubnetGroupRequestPrivate(
    const DocDBRequest::Action action, CreateDBSubnetGroupRequest * const q)
    : DocDBRequestPrivate(action, q)
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
    : DocDBRequestPrivate(other, q)
{

}

} // namespace DocDB
} // namespace QtAws
