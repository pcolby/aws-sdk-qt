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

#include "startdbclusterrequest.h"
#include "startdbclusterrequest_p.h"
#include "startdbclusterresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::StartDBClusterRequest
 * \brief The StartDBClusterRequest class provides an interface for DocDb StartDBCluster requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::startDBCluster
 */

/*!
 * Constructs a copy of \a other.
 */
StartDBClusterRequest::StartDBClusterRequest(const StartDBClusterRequest &other)
    : DocDbRequest(new StartDBClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartDBClusterRequest object.
 */
StartDBClusterRequest::StartDBClusterRequest()
    : DocDbRequest(new StartDBClusterRequestPrivate(DocDbRequest::StartDBClusterAction, this))
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
 * \class QtAws::DocDb::StartDBClusterRequestPrivate
 * \brief The StartDBClusterRequestPrivate class provides private implementation for StartDBClusterRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a StartDBClusterRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
StartDBClusterRequestPrivate::StartDBClusterRequestPrivate(
    const DocDbRequest::Action action, StartDBClusterRequest * const q)
    : DocDbRequestPrivate(action, q)
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
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
