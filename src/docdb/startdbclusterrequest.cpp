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

#include "startdbclusterrequest.h"
#include "startdbclusterrequest_p.h"
#include "startdbclusterresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::StartDBClusterRequest
 * \brief The StartDBClusterRequest class provides an interface for DocDB StartDBCluster requests.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::startDBCluster
 */

/*!
 * Constructs a copy of \a other.
 */
StartDBClusterRequest::StartDBClusterRequest(const StartDBClusterRequest &other)
    : DocDBRequest(new StartDBClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartDBClusterRequest object.
 */
StartDBClusterRequest::StartDBClusterRequest()
    : DocDBRequest(new StartDBClusterRequestPrivate(DocDBRequest::StartDBClusterAction, this))
{

}

/*!
 * \reimp
 */
bool StartDBClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartDBClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartDBClusterRequest::response(QNetworkReply * const reply) const
{
    return new StartDBClusterResponse(*this, reply);
}

/*!
 * \class QtAws::DocDB::StartDBClusterRequestPrivate
 * \brief The StartDBClusterRequestPrivate class provides private implementation for StartDBClusterRequest.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a StartDBClusterRequestPrivate object for DocDB \a action,
 * with public implementation \a q.
 */
StartDBClusterRequestPrivate::StartDBClusterRequestPrivate(
    const DocDBRequest::Action action, StartDBClusterRequest * const q)
    : DocDBRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartDBClusterRequest
 * class' copy constructor.
 */
StartDBClusterRequestPrivate::StartDBClusterRequestPrivate(
    const StartDBClusterRequestPrivate &other, StartDBClusterRequest * const q)
    : DocDBRequestPrivate(other, q)
{

}

} // namespace DocDB
} // namespace QtAws
