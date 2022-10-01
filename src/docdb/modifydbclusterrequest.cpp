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

#include "modifydbclusterrequest.h"
#include "modifydbclusterrequest_p.h"
#include "modifydbclusterresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::ModifyDBClusterRequest
 * \brief The ModifyDBClusterRequest class provides an interface for DocDb ModifyDBCluster requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::modifyDBCluster
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyDBClusterRequest::ModifyDBClusterRequest(const ModifyDBClusterRequest &other)
    : DocDbRequest(new ModifyDBClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyDBClusterRequest object.
 */
ModifyDBClusterRequest::ModifyDBClusterRequest()
    : DocDbRequest(new ModifyDBClusterRequestPrivate(DocDbRequest::ModifyDBClusterAction, this))
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
 * \class QtAws::DocDb::ModifyDBClusterRequestPrivate
 * \brief The ModifyDBClusterRequestPrivate class provides private implementation for ModifyDBClusterRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a ModifyDBClusterRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
ModifyDBClusterRequestPrivate::ModifyDBClusterRequestPrivate(
    const DocDbRequest::Action action, ModifyDBClusterRequest * const q)
    : DocDbRequestPrivate(action, q)
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
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
