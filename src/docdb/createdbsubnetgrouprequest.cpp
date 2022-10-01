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
