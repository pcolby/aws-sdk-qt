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

#include "describeglobalclustersrequest.h"
#include "describeglobalclustersrequest_p.h"
#include "describeglobalclustersresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::DescribeGlobalClustersRequest
 * \brief The DescribeGlobalClustersRequest class provides an interface for DocDB DescribeGlobalClusters requests.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::describeGlobalClusters
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeGlobalClustersRequest::DescribeGlobalClustersRequest(const DescribeGlobalClustersRequest &other)
    : DocDBRequest(new DescribeGlobalClustersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeGlobalClustersRequest object.
 */
DescribeGlobalClustersRequest::DescribeGlobalClustersRequest()
    : DocDBRequest(new DescribeGlobalClustersRequestPrivate(DocDBRequest::DescribeGlobalClustersAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeGlobalClustersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeGlobalClustersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeGlobalClustersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeGlobalClustersResponse(*this, reply);
}

/*!
 * \class QtAws::DocDB::DescribeGlobalClustersRequestPrivate
 * \brief The DescribeGlobalClustersRequestPrivate class provides private implementation for DescribeGlobalClustersRequest.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a DescribeGlobalClustersRequestPrivate object for DocDB \a action,
 * with public implementation \a q.
 */
DescribeGlobalClustersRequestPrivate::DescribeGlobalClustersRequestPrivate(
    const DocDBRequest::Action action, DescribeGlobalClustersRequest * const q)
    : DocDBRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeGlobalClustersRequest
 * class' copy constructor.
 */
DescribeGlobalClustersRequestPrivate::DescribeGlobalClustersRequestPrivate(
    const DescribeGlobalClustersRequestPrivate &other, DescribeGlobalClustersRequest * const q)
    : DocDBRequestPrivate(other, q)
{

}

} // namespace DocDB
} // namespace QtAws
