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

#include "createdbclusterparametergrouprequest.h"
#include "createdbclusterparametergrouprequest_p.h"
#include "createdbclusterparametergroupresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::CreateDBClusterParameterGroupRequest
 * \brief The CreateDBClusterParameterGroupRequest class provides an interface for DocDB CreateDBClusterParameterGroup requests.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::createDBClusterParameterGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDBClusterParameterGroupRequest::CreateDBClusterParameterGroupRequest(const CreateDBClusterParameterGroupRequest &other)
    : DocDBRequest(new CreateDBClusterParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDBClusterParameterGroupRequest object.
 */
CreateDBClusterParameterGroupRequest::CreateDBClusterParameterGroupRequest()
    : DocDBRequest(new CreateDBClusterParameterGroupRequestPrivate(DocDBRequest::CreateDBClusterParameterGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDBClusterParameterGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDBClusterParameterGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDBClusterParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateDBClusterParameterGroupResponse(*this, reply);
}

/*!
 * \class QtAws::DocDB::CreateDBClusterParameterGroupRequestPrivate
 * \brief The CreateDBClusterParameterGroupRequestPrivate class provides private implementation for CreateDBClusterParameterGroupRequest.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a CreateDBClusterParameterGroupRequestPrivate object for DocDB \a action,
 * with public implementation \a q.
 */
CreateDBClusterParameterGroupRequestPrivate::CreateDBClusterParameterGroupRequestPrivate(
    const DocDBRequest::Action action, CreateDBClusterParameterGroupRequest * const q)
    : DocDBRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDBClusterParameterGroupRequest
 * class' copy constructor.
 */
CreateDBClusterParameterGroupRequestPrivate::CreateDBClusterParameterGroupRequestPrivate(
    const CreateDBClusterParameterGroupRequestPrivate &other, CreateDBClusterParameterGroupRequest * const q)
    : DocDBRequestPrivate(other, q)
{

}

} // namespace DocDB
} // namespace QtAws
