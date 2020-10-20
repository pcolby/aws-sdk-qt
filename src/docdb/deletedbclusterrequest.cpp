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

#include "deletedbclusterrequest.h"
#include "deletedbclusterrequest_p.h"
#include "deletedbclusterresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::DeleteDBClusterRequest
 * \brief The DeleteDBClusterRequest class provides an interface for DocDB DeleteDBCluster requests.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::deleteDBCluster
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDBClusterRequest::DeleteDBClusterRequest(const DeleteDBClusterRequest &other)
    : DocDBRequest(new DeleteDBClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDBClusterRequest object.
 */
DeleteDBClusterRequest::DeleteDBClusterRequest()
    : DocDBRequest(new DeleteDBClusterRequestPrivate(DocDBRequest::DeleteDBClusterAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDBClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDBClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDBClusterRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDBClusterResponse(*this, reply);
}

/*!
 * \class QtAws::DocDB::DeleteDBClusterRequestPrivate
 * \brief The DeleteDBClusterRequestPrivate class provides private implementation for DeleteDBClusterRequest.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a DeleteDBClusterRequestPrivate object for DocDB \a action,
 * with public implementation \a q.
 */
DeleteDBClusterRequestPrivate::DeleteDBClusterRequestPrivate(
    const DocDBRequest::Action action, DeleteDBClusterRequest * const q)
    : DocDBRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDBClusterRequest
 * class' copy constructor.
 */
DeleteDBClusterRequestPrivate::DeleteDBClusterRequestPrivate(
    const DeleteDBClusterRequestPrivate &other, DeleteDBClusterRequest * const q)
    : DocDBRequestPrivate(other, q)
{

}

} // namespace DocDB
} // namespace QtAws
