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

#include "modifydbinstancerequest.h"
#include "modifydbinstancerequest_p.h"
#include "modifydbinstanceresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::ModifyDBInstanceRequest
 * \brief The ModifyDBInstanceRequest class provides an interface for DocDb ModifyDBInstance requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::modifyDBInstance
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyDBInstanceRequest::ModifyDBInstanceRequest(const ModifyDBInstanceRequest &other)
    : DocDbRequest(new ModifyDBInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyDBInstanceRequest object.
 */
ModifyDBInstanceRequest::ModifyDBInstanceRequest()
    : DocDbRequest(new ModifyDBInstanceRequestPrivate(DocDbRequest::ModifyDBInstanceAction, this))
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
 * \class QtAws::DocDb::ModifyDBInstanceRequestPrivate
 * \brief The ModifyDBInstanceRequestPrivate class provides private implementation for ModifyDBInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a ModifyDBInstanceRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
ModifyDBInstanceRequestPrivate::ModifyDBInstanceRequestPrivate(
    const DocDbRequest::Action action, ModifyDBInstanceRequest * const q)
    : DocDbRequestPrivate(action, q)
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
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
