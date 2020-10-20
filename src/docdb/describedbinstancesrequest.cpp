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

#include "describedbinstancesrequest.h"
#include "describedbinstancesrequest_p.h"
#include "describedbinstancesresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::DescribeDBInstancesRequest
 * \brief The DescribeDBInstancesRequest class provides an interface for DocDB DescribeDBInstances requests.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::describeDBInstances
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDBInstancesRequest::DescribeDBInstancesRequest(const DescribeDBInstancesRequest &other)
    : DocDBRequest(new DescribeDBInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDBInstancesRequest object.
 */
DescribeDBInstancesRequest::DescribeDBInstancesRequest()
    : DocDBRequest(new DescribeDBInstancesRequestPrivate(DocDBRequest::DescribeDBInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDBInstancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDBInstancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDBInstancesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDBInstancesResponse(*this, reply);
}

/*!
 * \class QtAws::DocDB::DescribeDBInstancesRequestPrivate
 * \brief The DescribeDBInstancesRequestPrivate class provides private implementation for DescribeDBInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a DescribeDBInstancesRequestPrivate object for DocDB \a action,
 * with public implementation \a q.
 */
DescribeDBInstancesRequestPrivate::DescribeDBInstancesRequestPrivate(
    const DocDBRequest::Action action, DescribeDBInstancesRequest * const q)
    : DocDBRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDBInstancesRequest
 * class' copy constructor.
 */
DescribeDBInstancesRequestPrivate::DescribeDBInstancesRequestPrivate(
    const DescribeDBInstancesRequestPrivate &other, DescribeDBInstancesRequest * const q)
    : DocDBRequestPrivate(other, q)
{

}

} // namespace DocDB
} // namespace QtAws
