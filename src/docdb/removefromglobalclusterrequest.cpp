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

#include "removefromglobalclusterrequest.h"
#include "removefromglobalclusterrequest_p.h"
#include "removefromglobalclusterresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::RemoveFromGlobalClusterRequest
 * \brief The RemoveFromGlobalClusterRequest class provides an interface for DocDb RemoveFromGlobalCluster requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::removeFromGlobalCluster
 */

/*!
 * Constructs a copy of \a other.
 */
RemoveFromGlobalClusterRequest::RemoveFromGlobalClusterRequest(const RemoveFromGlobalClusterRequest &other)
    : DocDbRequest(new RemoveFromGlobalClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RemoveFromGlobalClusterRequest object.
 */
RemoveFromGlobalClusterRequest::RemoveFromGlobalClusterRequest()
    : DocDbRequest(new RemoveFromGlobalClusterRequestPrivate(DocDbRequest::RemoveFromGlobalClusterAction, this))
{

}

/*!
 * \reimp
 */
bool RemoveFromGlobalClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RemoveFromGlobalClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveFromGlobalClusterRequest::response(QNetworkReply * const reply) const
{
    return new RemoveFromGlobalClusterResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::RemoveFromGlobalClusterRequestPrivate
 * \brief The RemoveFromGlobalClusterRequestPrivate class provides private implementation for RemoveFromGlobalClusterRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a RemoveFromGlobalClusterRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
RemoveFromGlobalClusterRequestPrivate::RemoveFromGlobalClusterRequestPrivate(
    const DocDbRequest::Action action, RemoveFromGlobalClusterRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RemoveFromGlobalClusterRequest
 * class' copy constructor.
 */
RemoveFromGlobalClusterRequestPrivate::RemoveFromGlobalClusterRequestPrivate(
    const RemoveFromGlobalClusterRequestPrivate &other, RemoveFromGlobalClusterRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
