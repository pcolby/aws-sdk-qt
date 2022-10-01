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

#include "deleteglobalclusterrequest.h"
#include "deleteglobalclusterrequest_p.h"
#include "deleteglobalclusterresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DeleteGlobalClusterRequest
 * \brief The DeleteGlobalClusterRequest class provides an interface for DocDb DeleteGlobalCluster requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::deleteGlobalCluster
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteGlobalClusterRequest::DeleteGlobalClusterRequest(const DeleteGlobalClusterRequest &other)
    : DocDbRequest(new DeleteGlobalClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteGlobalClusterRequest object.
 */
DeleteGlobalClusterRequest::DeleteGlobalClusterRequest()
    : DocDbRequest(new DeleteGlobalClusterRequestPrivate(DocDbRequest::DeleteGlobalClusterAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteGlobalClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteGlobalClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteGlobalClusterRequest::response(QNetworkReply * const reply) const
{
    return new DeleteGlobalClusterResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::DeleteGlobalClusterRequestPrivate
 * \brief The DeleteGlobalClusterRequestPrivate class provides private implementation for DeleteGlobalClusterRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DeleteGlobalClusterRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
DeleteGlobalClusterRequestPrivate::DeleteGlobalClusterRequestPrivate(
    const DocDbRequest::Action action, DeleteGlobalClusterRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteGlobalClusterRequest
 * class' copy constructor.
 */
DeleteGlobalClusterRequestPrivate::DeleteGlobalClusterRequestPrivate(
    const DeleteGlobalClusterRequestPrivate &other, DeleteGlobalClusterRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
