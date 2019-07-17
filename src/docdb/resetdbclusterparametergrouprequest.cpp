/*
    Copyright 2013-2019 Paul Colby

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

#include "resetdbclusterparametergrouprequest.h"
#include "resetdbclusterparametergrouprequest_p.h"
#include "resetdbclusterparametergroupresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::ResetDBClusterParameterGroupRequest
 * \brief The ResetDBClusterParameterGroupRequest class provides an interface for DocDB ResetDBClusterParameterGroup requests.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::resetDBClusterParameterGroup
 */

/*!
 * Constructs a copy of \a other.
 */
ResetDBClusterParameterGroupRequest::ResetDBClusterParameterGroupRequest(const ResetDBClusterParameterGroupRequest &other)
    : DocDBRequest(new ResetDBClusterParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ResetDBClusterParameterGroupRequest object.
 */
ResetDBClusterParameterGroupRequest::ResetDBClusterParameterGroupRequest()
    : DocDBRequest(new ResetDBClusterParameterGroupRequestPrivate(DocDBRequest::ResetDBClusterParameterGroupAction, this))
{

}

/*!
 * \reimp
 */
bool ResetDBClusterParameterGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ResetDBClusterParameterGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ResetDBClusterParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new ResetDBClusterParameterGroupResponse(*this, reply);
}

/*!
 * \class QtAws::DocDB::ResetDBClusterParameterGroupRequestPrivate
 * \brief The ResetDBClusterParameterGroupRequestPrivate class provides private implementation for ResetDBClusterParameterGroupRequest.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a ResetDBClusterParameterGroupRequestPrivate object for DocDB \a action,
 * with public implementation \a q.
 */
ResetDBClusterParameterGroupRequestPrivate::ResetDBClusterParameterGroupRequestPrivate(
    const DocDBRequest::Action action, ResetDBClusterParameterGroupRequest * const q)
    : DocDBRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ResetDBClusterParameterGroupRequest
 * class' copy constructor.
 */
ResetDBClusterParameterGroupRequestPrivate::ResetDBClusterParameterGroupRequestPrivate(
    const ResetDBClusterParameterGroupRequestPrivate &other, ResetDBClusterParameterGroupRequest * const q)
    : DocDBRequestPrivate(other, q)
{

}

} // namespace DocDB
} // namespace QtAws
