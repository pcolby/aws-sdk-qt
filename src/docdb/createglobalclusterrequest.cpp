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
namespace DocDb {

/*!
 * \class QtAws::DocDb::CreateGlobalClusterRequest
 * \brief The CreateGlobalClusterRequest class provides an interface for DocDb CreateGlobalCluster requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::createGlobalCluster
 */

/*!
 * Constructs a copy of \a other.
 */
CreateGlobalClusterRequest::CreateGlobalClusterRequest(const CreateGlobalClusterRequest &other)
    : DocDbRequest(new CreateGlobalClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateGlobalClusterRequest object.
 */
CreateGlobalClusterRequest::CreateGlobalClusterRequest()
    : DocDbRequest(new CreateGlobalClusterRequestPrivate(DocDbRequest::CreateGlobalClusterAction, this))
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
 * \class QtAws::DocDb::CreateGlobalClusterRequestPrivate
 * \brief The CreateGlobalClusterRequestPrivate class provides private implementation for CreateGlobalClusterRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a CreateGlobalClusterRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
CreateGlobalClusterRequestPrivate::CreateGlobalClusterRequestPrivate(
    const DocDbRequest::Action action, CreateGlobalClusterRequest * const q)
    : DocDbRequestPrivate(action, q)
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
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
