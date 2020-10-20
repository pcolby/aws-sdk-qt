/*
    Copyright 2013-2020 Paul Colby

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

#include "modifydbinstancerequest.h"
#include "modifydbinstancerequest_p.h"
#include "modifydbinstanceresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::ModifyDBInstanceRequest
 * \brief The ModifyDBInstanceRequest class provides an interface for DocDB ModifyDBInstance requests.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::modifyDBInstance
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyDBInstanceRequest::ModifyDBInstanceRequest(const ModifyDBInstanceRequest &other)
    : DocDBRequest(new ModifyDBInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyDBInstanceRequest object.
 */
ModifyDBInstanceRequest::ModifyDBInstanceRequest()
    : DocDBRequest(new ModifyDBInstanceRequestPrivate(DocDBRequest::ModifyDBInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyDBInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyDBInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyDBInstanceRequest::response(QNetworkReply * const reply) const
{
    return new ModifyDBInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::DocDB::ModifyDBInstanceRequestPrivate
 * \brief The ModifyDBInstanceRequestPrivate class provides private implementation for ModifyDBInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a ModifyDBInstanceRequestPrivate object for DocDB \a action,
 * with public implementation \a q.
 */
ModifyDBInstanceRequestPrivate::ModifyDBInstanceRequestPrivate(
    const DocDBRequest::Action action, ModifyDBInstanceRequest * const q)
    : DocDBRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyDBInstanceRequest
 * class' copy constructor.
 */
ModifyDBInstanceRequestPrivate::ModifyDBInstanceRequestPrivate(
    const ModifyDBInstanceRequestPrivate &other, ModifyDBInstanceRequest * const q)
    : DocDBRequestPrivate(other, q)
{

}

} // namespace DocDB
} // namespace QtAws
