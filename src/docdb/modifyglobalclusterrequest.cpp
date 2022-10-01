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

#include "modifyglobalclusterrequest.h"
#include "modifyglobalclusterrequest_p.h"
#include "modifyglobalclusterresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::ModifyGlobalClusterRequest
 * \brief The ModifyGlobalClusterRequest class provides an interface for DocDb ModifyGlobalCluster requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::modifyGlobalCluster
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyGlobalClusterRequest::ModifyGlobalClusterRequest(const ModifyGlobalClusterRequest &other)
    : DocDbRequest(new ModifyGlobalClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyGlobalClusterRequest object.
 */
ModifyGlobalClusterRequest::ModifyGlobalClusterRequest()
    : DocDbRequest(new ModifyGlobalClusterRequestPrivate(DocDbRequest::ModifyGlobalClusterAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyGlobalClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyGlobalClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyGlobalClusterRequest::response(QNetworkReply * const reply) const
{
    return new ModifyGlobalClusterResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::ModifyGlobalClusterRequestPrivate
 * \brief The ModifyGlobalClusterRequestPrivate class provides private implementation for ModifyGlobalClusterRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a ModifyGlobalClusterRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
ModifyGlobalClusterRequestPrivate::ModifyGlobalClusterRequestPrivate(
    const DocDbRequest::Action action, ModifyGlobalClusterRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyGlobalClusterRequest
 * class' copy constructor.
 */
ModifyGlobalClusterRequestPrivate::ModifyGlobalClusterRequestPrivate(
    const ModifyGlobalClusterRequestPrivate &other, ModifyGlobalClusterRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
