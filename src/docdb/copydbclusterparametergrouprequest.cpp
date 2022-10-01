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

#include "copydbclusterparametergrouprequest.h"
#include "copydbclusterparametergrouprequest_p.h"
#include "copydbclusterparametergroupresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::CopyDBClusterParameterGroupRequest
 * \brief The CopyDBClusterParameterGroupRequest class provides an interface for DocDb CopyDBClusterParameterGroup requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::copyDBClusterParameterGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CopyDBClusterParameterGroupRequest::CopyDBClusterParameterGroupRequest(const CopyDBClusterParameterGroupRequest &other)
    : DocDbRequest(new CopyDBClusterParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CopyDBClusterParameterGroupRequest object.
 */
CopyDBClusterParameterGroupRequest::CopyDBClusterParameterGroupRequest()
    : DocDbRequest(new CopyDBClusterParameterGroupRequestPrivate(DocDbRequest::CopyDBClusterParameterGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CopyDBClusterParameterGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CopyDBClusterParameterGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CopyDBClusterParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new CopyDBClusterParameterGroupResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::CopyDBClusterParameterGroupRequestPrivate
 * \brief The CopyDBClusterParameterGroupRequestPrivate class provides private implementation for CopyDBClusterParameterGroupRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a CopyDBClusterParameterGroupRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
CopyDBClusterParameterGroupRequestPrivate::CopyDBClusterParameterGroupRequestPrivate(
    const DocDbRequest::Action action, CopyDBClusterParameterGroupRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CopyDBClusterParameterGroupRequest
 * class' copy constructor.
 */
CopyDBClusterParameterGroupRequestPrivate::CopyDBClusterParameterGroupRequestPrivate(
    const CopyDBClusterParameterGroupRequestPrivate &other, CopyDBClusterParameterGroupRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
