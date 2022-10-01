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

#include "stopdbclusterrequest.h"
#include "stopdbclusterrequest_p.h"
#include "stopdbclusterresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::StopDBClusterRequest
 * \brief The StopDBClusterRequest class provides an interface for DocDb StopDBCluster requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::stopDBCluster
 */

/*!
 * Constructs a copy of \a other.
 */
StopDBClusterRequest::StopDBClusterRequest(const StopDBClusterRequest &other)
    : DocDbRequest(new StopDBClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopDBClusterRequest object.
 */
StopDBClusterRequest::StopDBClusterRequest()
    : DocDbRequest(new StopDBClusterRequestPrivate(DocDbRequest::StopDBClusterAction, this))
{

}

/*!
 * \reimp
 */
bool StopDBClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopDBClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopDBClusterRequest::response(QNetworkReply * const reply) const
{
    return new StopDBClusterResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::StopDBClusterRequestPrivate
 * \brief The StopDBClusterRequestPrivate class provides private implementation for StopDBClusterRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a StopDBClusterRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
StopDBClusterRequestPrivate::StopDBClusterRequestPrivate(
    const DocDbRequest::Action action, StopDBClusterRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopDBClusterRequest
 * class' copy constructor.
 */
StopDBClusterRequestPrivate::StopDBClusterRequestPrivate(
    const StopDBClusterRequestPrivate &other, StopDBClusterRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
