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

#include "describedbclustersrequest.h"
#include "describedbclustersrequest_p.h"
#include "describedbclustersresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::DescribeDBClustersRequest
 * \brief The DescribeDBClustersRequest class provides an interface for DocDB DescribeDBClusters requests.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::describeDBClusters
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDBClustersRequest::DescribeDBClustersRequest(const DescribeDBClustersRequest &other)
    : DocDBRequest(new DescribeDBClustersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDBClustersRequest object.
 */
DescribeDBClustersRequest::DescribeDBClustersRequest()
    : DocDBRequest(new DescribeDBClustersRequestPrivate(DocDBRequest::DescribeDBClustersAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDBClustersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDBClustersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDBClustersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDBClustersResponse(*this, reply);
}

/*!
 * \class QtAws::DocDB::DescribeDBClustersRequestPrivate
 * \brief The DescribeDBClustersRequestPrivate class provides private implementation for DescribeDBClustersRequest.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a DescribeDBClustersRequestPrivate object for DocDB \a action,
 * with public implementation \a q.
 */
DescribeDBClustersRequestPrivate::DescribeDBClustersRequestPrivate(
    const DocDBRequest::Action action, DescribeDBClustersRequest * const q)
    : DocDBRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDBClustersRequest
 * class' copy constructor.
 */
DescribeDBClustersRequestPrivate::DescribeDBClustersRequestPrivate(
    const DescribeDBClustersRequestPrivate &other, DescribeDBClustersRequest * const q)
    : DocDBRequestPrivate(other, q)
{

}

} // namespace DocDB
} // namespace QtAws
