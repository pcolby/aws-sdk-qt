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

#include "modifydbclusterrequest.h"
#include "modifydbclusterrequest_p.h"
#include "modifydbclusterresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::ModifyDBClusterRequest
 * \brief The ModifyDBClusterRequest class provides an interface for DocDB ModifyDBCluster requests.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::modifyDBCluster
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyDBClusterRequest::ModifyDBClusterRequest(const ModifyDBClusterRequest &other)
    : DocDBRequest(new ModifyDBClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyDBClusterRequest object.
 */
ModifyDBClusterRequest::ModifyDBClusterRequest()
    : DocDBRequest(new ModifyDBClusterRequestPrivate(DocDBRequest::ModifyDBClusterAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyDBClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyDBClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyDBClusterRequest::response(QNetworkReply * const reply) const
{
    return new ModifyDBClusterResponse(*this, reply);
}

/*!
 * \class QtAws::DocDB::ModifyDBClusterRequestPrivate
 * \brief The ModifyDBClusterRequestPrivate class provides private implementation for ModifyDBClusterRequest.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a ModifyDBClusterRequestPrivate object for DocDB \a action,
 * with public implementation \a q.
 */
ModifyDBClusterRequestPrivate::ModifyDBClusterRequestPrivate(
    const DocDBRequest::Action action, ModifyDBClusterRequest * const q)
    : DocDBRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyDBClusterRequest
 * class' copy constructor.
 */
ModifyDBClusterRequestPrivate::ModifyDBClusterRequestPrivate(
    const ModifyDBClusterRequestPrivate &other, ModifyDBClusterRequest * const q)
    : DocDBRequestPrivate(other, q)
{

}

} // namespace DocDB
} // namespace QtAws
