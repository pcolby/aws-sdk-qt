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

#include "createdbclusterrequest.h"
#include "createdbclusterrequest_p.h"
#include "createdbclusterresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::CreateDBClusterRequest
 * \brief The CreateDBClusterRequest class provides an interface for DocDB CreateDBCluster requests.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::createDBCluster
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDBClusterRequest::CreateDBClusterRequest(const CreateDBClusterRequest &other)
    : DocDBRequest(new CreateDBClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDBClusterRequest object.
 */
CreateDBClusterRequest::CreateDBClusterRequest()
    : DocDBRequest(new CreateDBClusterRequestPrivate(DocDBRequest::CreateDBClusterAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDBClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDBClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDBClusterRequest::response(QNetworkReply * const reply) const
{
    return new CreateDBClusterResponse(*this, reply);
}

/*!
 * \class QtAws::DocDB::CreateDBClusterRequestPrivate
 * \brief The CreateDBClusterRequestPrivate class provides private implementation for CreateDBClusterRequest.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a CreateDBClusterRequestPrivate object for DocDB \a action,
 * with public implementation \a q.
 */
CreateDBClusterRequestPrivate::CreateDBClusterRequestPrivate(
    const DocDBRequest::Action action, CreateDBClusterRequest * const q)
    : DocDBRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDBClusterRequest
 * class' copy constructor.
 */
CreateDBClusterRequestPrivate::CreateDBClusterRequestPrivate(
    const CreateDBClusterRequestPrivate &other, CreateDBClusterRequest * const q)
    : DocDBRequestPrivate(other, q)
{

}

} // namespace DocDB
} // namespace QtAws
