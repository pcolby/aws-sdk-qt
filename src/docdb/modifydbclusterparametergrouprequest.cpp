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

#include "modifydbclusterparametergrouprequest.h"
#include "modifydbclusterparametergrouprequest_p.h"
#include "modifydbclusterparametergroupresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::ModifyDBClusterParameterGroupRequest
 * \brief The ModifyDBClusterParameterGroupRequest class provides an interface for DocDB ModifyDBClusterParameterGroup requests.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::modifyDBClusterParameterGroup
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyDBClusterParameterGroupRequest::ModifyDBClusterParameterGroupRequest(const ModifyDBClusterParameterGroupRequest &other)
    : DocDBRequest(new ModifyDBClusterParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyDBClusterParameterGroupRequest object.
 */
ModifyDBClusterParameterGroupRequest::ModifyDBClusterParameterGroupRequest()
    : DocDBRequest(new ModifyDBClusterParameterGroupRequestPrivate(DocDBRequest::ModifyDBClusterParameterGroupAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyDBClusterParameterGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyDBClusterParameterGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyDBClusterParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new ModifyDBClusterParameterGroupResponse(*this, reply);
}

/*!
 * \class QtAws::DocDB::ModifyDBClusterParameterGroupRequestPrivate
 * \brief The ModifyDBClusterParameterGroupRequestPrivate class provides private implementation for ModifyDBClusterParameterGroupRequest.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a ModifyDBClusterParameterGroupRequestPrivate object for DocDB \a action,
 * with public implementation \a q.
 */
ModifyDBClusterParameterGroupRequestPrivate::ModifyDBClusterParameterGroupRequestPrivate(
    const DocDBRequest::Action action, ModifyDBClusterParameterGroupRequest * const q)
    : DocDBRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyDBClusterParameterGroupRequest
 * class' copy constructor.
 */
ModifyDBClusterParameterGroupRequestPrivate::ModifyDBClusterParameterGroupRequestPrivate(
    const ModifyDBClusterParameterGroupRequestPrivate &other, ModifyDBClusterParameterGroupRequest * const q)
    : DocDBRequestPrivate(other, q)
{

}

} // namespace DocDB
} // namespace QtAws
