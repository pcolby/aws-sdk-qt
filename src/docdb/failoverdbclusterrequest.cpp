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

#include "failoverdbclusterrequest.h"
#include "failoverdbclusterrequest_p.h"
#include "failoverdbclusterresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::FailoverDBClusterRequest
 * \brief The FailoverDBClusterRequest class provides an interface for DocDB FailoverDBCluster requests.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::failoverDBCluster
 */

/*!
 * Constructs a copy of \a other.
 */
FailoverDBClusterRequest::FailoverDBClusterRequest(const FailoverDBClusterRequest &other)
    : DocDBRequest(new FailoverDBClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a FailoverDBClusterRequest object.
 */
FailoverDBClusterRequest::FailoverDBClusterRequest()
    : DocDBRequest(new FailoverDBClusterRequestPrivate(DocDBRequest::FailoverDBClusterAction, this))
{

}

/*!
 * \reimp
 */
bool FailoverDBClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a FailoverDBClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * FailoverDBClusterRequest::response(QNetworkReply * const reply) const
{
    return new FailoverDBClusterResponse(*this, reply);
}

/*!
 * \class QtAws::DocDB::FailoverDBClusterRequestPrivate
 * \brief The FailoverDBClusterRequestPrivate class provides private implementation for FailoverDBClusterRequest.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a FailoverDBClusterRequestPrivate object for DocDB \a action,
 * with public implementation \a q.
 */
FailoverDBClusterRequestPrivate::FailoverDBClusterRequestPrivate(
    const DocDBRequest::Action action, FailoverDBClusterRequest * const q)
    : DocDBRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the FailoverDBClusterRequest
 * class' copy constructor.
 */
FailoverDBClusterRequestPrivate::FailoverDBClusterRequestPrivate(
    const FailoverDBClusterRequestPrivate &other, FailoverDBClusterRequest * const q)
    : DocDBRequestPrivate(other, q)
{

}

} // namespace DocDB
} // namespace QtAws
