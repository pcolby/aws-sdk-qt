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

#include "deletedbinstancerequest.h"
#include "deletedbinstancerequest_p.h"
#include "deletedbinstanceresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::DeleteDBInstanceRequest
 * \brief The DeleteDBInstanceRequest class provides an interface for DocDB DeleteDBInstance requests.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::deleteDBInstance
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDBInstanceRequest::DeleteDBInstanceRequest(const DeleteDBInstanceRequest &other)
    : DocDBRequest(new DeleteDBInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDBInstanceRequest object.
 */
DeleteDBInstanceRequest::DeleteDBInstanceRequest()
    : DocDBRequest(new DeleteDBInstanceRequestPrivate(DocDBRequest::DeleteDBInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDBInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDBInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDBInstanceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDBInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::DocDB::DeleteDBInstanceRequestPrivate
 * \brief The DeleteDBInstanceRequestPrivate class provides private implementation for DeleteDBInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a DeleteDBInstanceRequestPrivate object for DocDB \a action,
 * with public implementation \a q.
 */
DeleteDBInstanceRequestPrivate::DeleteDBInstanceRequestPrivate(
    const DocDBRequest::Action action, DeleteDBInstanceRequest * const q)
    : DocDBRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDBInstanceRequest
 * class' copy constructor.
 */
DeleteDBInstanceRequestPrivate::DeleteDBInstanceRequestPrivate(
    const DeleteDBInstanceRequestPrivate &other, DeleteDBInstanceRequest * const q)
    : DocDBRequestPrivate(other, q)
{

}

} // namespace DocDB
} // namespace QtAws
