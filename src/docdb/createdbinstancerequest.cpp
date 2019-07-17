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

#include "createdbinstancerequest.h"
#include "createdbinstancerequest_p.h"
#include "createdbinstanceresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::CreateDBInstanceRequest
 * \brief The CreateDBInstanceRequest class provides an interface for DocDB CreateDBInstance requests.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::createDBInstance
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDBInstanceRequest::CreateDBInstanceRequest(const CreateDBInstanceRequest &other)
    : DocDBRequest(new CreateDBInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDBInstanceRequest object.
 */
CreateDBInstanceRequest::CreateDBInstanceRequest()
    : DocDBRequest(new CreateDBInstanceRequestPrivate(DocDBRequest::CreateDBInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDBInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDBInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDBInstanceRequest::response(QNetworkReply * const reply) const
{
    return new CreateDBInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::DocDB::CreateDBInstanceRequestPrivate
 * \brief The CreateDBInstanceRequestPrivate class provides private implementation for CreateDBInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a CreateDBInstanceRequestPrivate object for DocDB \a action,
 * with public implementation \a q.
 */
CreateDBInstanceRequestPrivate::CreateDBInstanceRequestPrivate(
    const DocDBRequest::Action action, CreateDBInstanceRequest * const q)
    : DocDBRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDBInstanceRequest
 * class' copy constructor.
 */
CreateDBInstanceRequestPrivate::CreateDBInstanceRequestPrivate(
    const CreateDBInstanceRequestPrivate &other, CreateDBInstanceRequest * const q)
    : DocDBRequestPrivate(other, q)
{

}

} // namespace DocDB
} // namespace QtAws
