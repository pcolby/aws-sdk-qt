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

#include "describedbclusterparametersrequest.h"
#include "describedbclusterparametersrequest_p.h"
#include "describedbclusterparametersresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::DescribeDBClusterParametersRequest
 * \brief The DescribeDBClusterParametersRequest class provides an interface for DocDB DescribeDBClusterParameters requests.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::describeDBClusterParameters
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDBClusterParametersRequest::DescribeDBClusterParametersRequest(const DescribeDBClusterParametersRequest &other)
    : DocDBRequest(new DescribeDBClusterParametersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDBClusterParametersRequest object.
 */
DescribeDBClusterParametersRequest::DescribeDBClusterParametersRequest()
    : DocDBRequest(new DescribeDBClusterParametersRequestPrivate(DocDBRequest::DescribeDBClusterParametersAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDBClusterParametersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDBClusterParametersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDBClusterParametersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDBClusterParametersResponse(*this, reply);
}

/*!
 * \class QtAws::DocDB::DescribeDBClusterParametersRequestPrivate
 * \brief The DescribeDBClusterParametersRequestPrivate class provides private implementation for DescribeDBClusterParametersRequest.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a DescribeDBClusterParametersRequestPrivate object for DocDB \a action,
 * with public implementation \a q.
 */
DescribeDBClusterParametersRequestPrivate::DescribeDBClusterParametersRequestPrivate(
    const DocDBRequest::Action action, DescribeDBClusterParametersRequest * const q)
    : DocDBRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDBClusterParametersRequest
 * class' copy constructor.
 */
DescribeDBClusterParametersRequestPrivate::DescribeDBClusterParametersRequestPrivate(
    const DescribeDBClusterParametersRequestPrivate &other, DescribeDBClusterParametersRequest * const q)
    : DocDBRequestPrivate(other, q)
{

}

} // namespace DocDB
} // namespace QtAws
