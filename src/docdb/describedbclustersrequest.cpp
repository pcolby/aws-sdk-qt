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

#include "describedbclustersrequest.h"
#include "describedbclustersrequest_p.h"
#include "describedbclustersresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribeDBClustersRequest
 * \brief The DescribeDBClustersRequest class provides an interface for DocDb DescribeDBClusters requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describeDBClusters
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDBClustersRequest::DescribeDBClustersRequest(const DescribeDBClustersRequest &other)
    : DocDbRequest(new DescribeDBClustersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDBClustersRequest object.
 */
DescribeDBClustersRequest::DescribeDBClustersRequest()
    : DocDbRequest(new DescribeDBClustersRequestPrivate(DocDbRequest::DescribeDBClustersAction, this))
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
 * \class QtAws::DocDb::DescribeDBClustersRequestPrivate
 * \brief The DescribeDBClustersRequestPrivate class provides private implementation for DescribeDBClustersRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribeDBClustersRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
DescribeDBClustersRequestPrivate::DescribeDBClustersRequestPrivate(
    const DocDbRequest::Action action, DescribeDBClustersRequest * const q)
    : DocDbRequestPrivate(action, q)
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
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
