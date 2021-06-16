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

#include "createglobalclusterrequest.h"
#include "createglobalclusterrequest_p.h"
#include "createglobalclusterresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::CreateGlobalClusterRequest
 * \brief The CreateGlobalClusterRequest class provides an interface for DocDB CreateGlobalCluster requests.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::createGlobalCluster
 */

/*!
 * Constructs a copy of \a other.
 */
CreateGlobalClusterRequest::CreateGlobalClusterRequest(const CreateGlobalClusterRequest &other)
    : DocDBRequest(new CreateGlobalClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateGlobalClusterRequest object.
 */
CreateGlobalClusterRequest::CreateGlobalClusterRequest()
    : DocDBRequest(new CreateGlobalClusterRequestPrivate(DocDBRequest::CreateGlobalClusterAction, this))
{

}

/*!
 * \reimp
 */
bool CreateGlobalClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateGlobalClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateGlobalClusterRequest::response(QNetworkReply * const reply) const
{
    return new CreateGlobalClusterResponse(*this, reply);
}

/*!
 * \class QtAws::DocDB::CreateGlobalClusterRequestPrivate
 * \brief The CreateGlobalClusterRequestPrivate class provides private implementation for CreateGlobalClusterRequest.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a CreateGlobalClusterRequestPrivate object for DocDB \a action,
 * with public implementation \a q.
 */
CreateGlobalClusterRequestPrivate::CreateGlobalClusterRequestPrivate(
    const DocDBRequest::Action action, CreateGlobalClusterRequest * const q)
    : DocDBRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateGlobalClusterRequest
 * class' copy constructor.
 */
CreateGlobalClusterRequestPrivate::CreateGlobalClusterRequestPrivate(
    const CreateGlobalClusterRequestPrivate &other, CreateGlobalClusterRequest * const q)
    : DocDBRequestPrivate(other, q)
{

}

} // namespace DocDB
} // namespace QtAws
