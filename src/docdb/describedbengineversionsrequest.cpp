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

#include "describedbengineversionsrequest.h"
#include "describedbengineversionsrequest_p.h"
#include "describedbengineversionsresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribeDBEngineVersionsRequest
 * \brief The DescribeDBEngineVersionsRequest class provides an interface for DocDb DescribeDBEngineVersions requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describeDBEngineVersions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDBEngineVersionsRequest::DescribeDBEngineVersionsRequest(const DescribeDBEngineVersionsRequest &other)
    : DocDbRequest(new DescribeDBEngineVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDBEngineVersionsRequest object.
 */
DescribeDBEngineVersionsRequest::DescribeDBEngineVersionsRequest()
    : DocDbRequest(new DescribeDBEngineVersionsRequestPrivate(DocDbRequest::DescribeDBEngineVersionsAction, this))
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
 * \class QtAws::DocDb::DescribeDBEngineVersionsRequestPrivate
 * \brief The DescribeDBEngineVersionsRequestPrivate class provides private implementation for DescribeDBEngineVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribeDBEngineVersionsRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
DescribeDBEngineVersionsRequestPrivate::DescribeDBEngineVersionsRequestPrivate(
    const DocDbRequest::Action action, DescribeDBEngineVersionsRequest * const q)
    : DocDbRequestPrivate(action, q)
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
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
