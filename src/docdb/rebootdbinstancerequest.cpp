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

#include "rebootdbinstancerequest.h"
#include "rebootdbinstancerequest_p.h"
#include "rebootdbinstanceresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::RebootDBInstanceRequest
 * \brief The RebootDBInstanceRequest class provides an interface for DocDB RebootDBInstance requests.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::rebootDBInstance
 */

/*!
 * Constructs a copy of \a other.
 */
RebootDBInstanceRequest::RebootDBInstanceRequest(const RebootDBInstanceRequest &other)
    : DocDBRequest(new RebootDBInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RebootDBInstanceRequest object.
 */
RebootDBInstanceRequest::RebootDBInstanceRequest()
    : DocDBRequest(new RebootDBInstanceRequestPrivate(DocDBRequest::RebootDBInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool RebootDBInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RebootDBInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RebootDBInstanceRequest::response(QNetworkReply * const reply) const
{
    return new RebootDBInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::DocDB::RebootDBInstanceRequestPrivate
 * \brief The RebootDBInstanceRequestPrivate class provides private implementation for RebootDBInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a RebootDBInstanceRequestPrivate object for DocDB \a action,
 * with public implementation \a q.
 */
RebootDBInstanceRequestPrivate::RebootDBInstanceRequestPrivate(
    const DocDBRequest::Action action, RebootDBInstanceRequest * const q)
    : DocDBRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RebootDBInstanceRequest
 * class' copy constructor.
 */
RebootDBInstanceRequestPrivate::RebootDBInstanceRequestPrivate(
    const RebootDBInstanceRequestPrivate &other, RebootDBInstanceRequest * const q)
    : DocDBRequestPrivate(other, q)
{

}

} // namespace DocDB
} // namespace QtAws
