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
namespace DocDb {

/*!
 * \class QtAws::DocDb::CreateDBClusterRequest
 * \brief The CreateDBClusterRequest class provides an interface for DocDb CreateDBCluster requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::createDBCluster
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDBClusterRequest::CreateDBClusterRequest(const CreateDBClusterRequest &other)
    : DocDbRequest(new CreateDBClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDBClusterRequest object.
 */
CreateDBClusterRequest::CreateDBClusterRequest()
    : DocDbRequest(new CreateDBClusterRequestPrivate(DocDbRequest::CreateDBClusterAction, this))
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
 * \class QtAws::DocDb::CreateDBClusterRequestPrivate
 * \brief The CreateDBClusterRequestPrivate class provides private implementation for CreateDBClusterRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a CreateDBClusterRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
CreateDBClusterRequestPrivate::CreateDBClusterRequestPrivate(
    const DocDbRequest::Action action, CreateDBClusterRequest * const q)
    : DocDbRequestPrivate(action, q)
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
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
