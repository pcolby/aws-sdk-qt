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

#include "describedbengineversionsrequest.h"
#include "describedbengineversionsrequest_p.h"
#include "describedbengineversionsresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::DescribeDBEngineVersionsRequest
 * \brief The DescribeDBEngineVersionsRequest class provides an interface for DocDB DescribeDBEngineVersions requests.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::describeDBEngineVersions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDBEngineVersionsRequest::DescribeDBEngineVersionsRequest(const DescribeDBEngineVersionsRequest &other)
    : DocDBRequest(new DescribeDBEngineVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDBEngineVersionsRequest object.
 */
DescribeDBEngineVersionsRequest::DescribeDBEngineVersionsRequest()
    : DocDBRequest(new DescribeDBEngineVersionsRequestPrivate(DocDBRequest::DescribeDBEngineVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDBEngineVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDBEngineVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDBEngineVersionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDBEngineVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::DocDB::DescribeDBEngineVersionsRequestPrivate
 * \brief The DescribeDBEngineVersionsRequestPrivate class provides private implementation for DescribeDBEngineVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a DescribeDBEngineVersionsRequestPrivate object for DocDB \a action,
 * with public implementation \a q.
 */
DescribeDBEngineVersionsRequestPrivate::DescribeDBEngineVersionsRequestPrivate(
    const DocDBRequest::Action action, DescribeDBEngineVersionsRequest * const q)
    : DocDBRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDBEngineVersionsRequest
 * class' copy constructor.
 */
DescribeDBEngineVersionsRequestPrivate::DescribeDBEngineVersionsRequestPrivate(
    const DescribeDBEngineVersionsRequestPrivate &other, DescribeDBEngineVersionsRequest * const q)
    : DocDBRequestPrivate(other, q)
{

}

} // namespace DocDB
} // namespace QtAws
