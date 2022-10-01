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

#include "failoverdbclusterrequest.h"
#include "failoverdbclusterrequest_p.h"
#include "failoverdbclusterresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::FailoverDBClusterRequest
 * \brief The FailoverDBClusterRequest class provides an interface for DocDb FailoverDBCluster requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::failoverDBCluster
 */

/*!
 * Constructs a copy of \a other.
 */
FailoverDBClusterRequest::FailoverDBClusterRequest(const FailoverDBClusterRequest &other)
    : DocDbRequest(new FailoverDBClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a FailoverDBClusterRequest object.
 */
FailoverDBClusterRequest::FailoverDBClusterRequest()
    : DocDbRequest(new FailoverDBClusterRequestPrivate(DocDbRequest::FailoverDBClusterAction, this))
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
 * \class QtAws::DocDb::FailoverDBClusterRequestPrivate
 * \brief The FailoverDBClusterRequestPrivate class provides private implementation for FailoverDBClusterRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a FailoverDBClusterRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
FailoverDBClusterRequestPrivate::FailoverDBClusterRequestPrivate(
    const DocDbRequest::Action action, FailoverDBClusterRequest * const q)
    : DocDbRequestPrivate(action, q)
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
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
