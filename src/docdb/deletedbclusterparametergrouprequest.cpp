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

#include "deletedbclusterparametergrouprequest.h"
#include "deletedbclusterparametergrouprequest_p.h"
#include "deletedbclusterparametergroupresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DeleteDBClusterParameterGroupRequest
 * \brief The DeleteDBClusterParameterGroupRequest class provides an interface for DocDb DeleteDBClusterParameterGroup requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::deleteDBClusterParameterGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDBClusterParameterGroupRequest::DeleteDBClusterParameterGroupRequest(const DeleteDBClusterParameterGroupRequest &other)
    : DocDbRequest(new DeleteDBClusterParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDBClusterParameterGroupRequest object.
 */
DeleteDBClusterParameterGroupRequest::DeleteDBClusterParameterGroupRequest()
    : DocDbRequest(new DeleteDBClusterParameterGroupRequestPrivate(DocDbRequest::DeleteDBClusterParameterGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDBClusterParameterGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDBClusterParameterGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDBClusterParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDBClusterParameterGroupResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::DeleteDBClusterParameterGroupRequestPrivate
 * \brief The DeleteDBClusterParameterGroupRequestPrivate class provides private implementation for DeleteDBClusterParameterGroupRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DeleteDBClusterParameterGroupRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
DeleteDBClusterParameterGroupRequestPrivate::DeleteDBClusterParameterGroupRequestPrivate(
    const DocDbRequest::Action action, DeleteDBClusterParameterGroupRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDBClusterParameterGroupRequest
 * class' copy constructor.
 */
DeleteDBClusterParameterGroupRequestPrivate::DeleteDBClusterParameterGroupRequestPrivate(
    const DeleteDBClusterParameterGroupRequestPrivate &other, DeleteDBClusterParameterGroupRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
