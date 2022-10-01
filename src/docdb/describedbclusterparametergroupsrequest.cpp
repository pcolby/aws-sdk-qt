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

#include "describedbclusterparametergroupsrequest.h"
#include "describedbclusterparametergroupsrequest_p.h"
#include "describedbclusterparametergroupsresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribeDBClusterParameterGroupsRequest
 * \brief The DescribeDBClusterParameterGroupsRequest class provides an interface for DocDb DescribeDBClusterParameterGroups requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describeDBClusterParameterGroups
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDBClusterParameterGroupsRequest::DescribeDBClusterParameterGroupsRequest(const DescribeDBClusterParameterGroupsRequest &other)
    : DocDbRequest(new DescribeDBClusterParameterGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDBClusterParameterGroupsRequest object.
 */
DescribeDBClusterParameterGroupsRequest::DescribeDBClusterParameterGroupsRequest()
    : DocDbRequest(new DescribeDBClusterParameterGroupsRequestPrivate(DocDbRequest::DescribeDBClusterParameterGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDBClusterParameterGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDBClusterParameterGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDBClusterParameterGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDBClusterParameterGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::DescribeDBClusterParameterGroupsRequestPrivate
 * \brief The DescribeDBClusterParameterGroupsRequestPrivate class provides private implementation for DescribeDBClusterParameterGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribeDBClusterParameterGroupsRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
DescribeDBClusterParameterGroupsRequestPrivate::DescribeDBClusterParameterGroupsRequestPrivate(
    const DocDbRequest::Action action, DescribeDBClusterParameterGroupsRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDBClusterParameterGroupsRequest
 * class' copy constructor.
 */
DescribeDBClusterParameterGroupsRequestPrivate::DescribeDBClusterParameterGroupsRequestPrivate(
    const DescribeDBClusterParameterGroupsRequestPrivate &other, DescribeDBClusterParameterGroupsRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
