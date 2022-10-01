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

#include "rebootdbinstancerequest.h"
#include "rebootdbinstancerequest_p.h"
#include "rebootdbinstanceresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::RebootDBInstanceRequest
 * \brief The RebootDBInstanceRequest class provides an interface for DocDb RebootDBInstance requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::rebootDBInstance
 */

/*!
 * Constructs a copy of \a other.
 */
RebootDBInstanceRequest::RebootDBInstanceRequest(const RebootDBInstanceRequest &other)
    : DocDbRequest(new RebootDBInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RebootDBInstanceRequest object.
 */
RebootDBInstanceRequest::RebootDBInstanceRequest()
    : DocDbRequest(new RebootDBInstanceRequestPrivate(DocDbRequest::RebootDBInstanceAction, this))
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
 * \class QtAws::DocDb::RebootDBInstanceRequestPrivate
 * \brief The RebootDBInstanceRequestPrivate class provides private implementation for RebootDBInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a RebootDBInstanceRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
RebootDBInstanceRequestPrivate::RebootDBInstanceRequestPrivate(
    const DocDbRequest::Action action, RebootDBInstanceRequest * const q)
    : DocDbRequestPrivate(action, q)
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
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
