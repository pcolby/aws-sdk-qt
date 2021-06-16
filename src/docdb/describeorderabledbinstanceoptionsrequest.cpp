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

#include "describeorderabledbinstanceoptionsrequest.h"
#include "describeorderabledbinstanceoptionsrequest_p.h"
#include "describeorderabledbinstanceoptionsresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::DescribeOrderableDBInstanceOptionsRequest
 * \brief The DescribeOrderableDBInstanceOptionsRequest class provides an interface for DocDB DescribeOrderableDBInstanceOptions requests.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::describeOrderableDBInstanceOptions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeOrderableDBInstanceOptionsRequest::DescribeOrderableDBInstanceOptionsRequest(const DescribeOrderableDBInstanceOptionsRequest &other)
    : DocDBRequest(new DescribeOrderableDBInstanceOptionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeOrderableDBInstanceOptionsRequest object.
 */
DescribeOrderableDBInstanceOptionsRequest::DescribeOrderableDBInstanceOptionsRequest()
    : DocDBRequest(new DescribeOrderableDBInstanceOptionsRequestPrivate(DocDBRequest::DescribeOrderableDBInstanceOptionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeOrderableDBInstanceOptionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeOrderableDBInstanceOptionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeOrderableDBInstanceOptionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeOrderableDBInstanceOptionsResponse(*this, reply);
}

/*!
 * \class QtAws::DocDB::DescribeOrderableDBInstanceOptionsRequestPrivate
 * \brief The DescribeOrderableDBInstanceOptionsRequestPrivate class provides private implementation for DescribeOrderableDBInstanceOptionsRequest.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a DescribeOrderableDBInstanceOptionsRequestPrivate object for DocDB \a action,
 * with public implementation \a q.
 */
DescribeOrderableDBInstanceOptionsRequestPrivate::DescribeOrderableDBInstanceOptionsRequestPrivate(
    const DocDBRequest::Action action, DescribeOrderableDBInstanceOptionsRequest * const q)
    : DocDBRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeOrderableDBInstanceOptionsRequest
 * class' copy constructor.
 */
DescribeOrderableDBInstanceOptionsRequestPrivate::DescribeOrderableDBInstanceOptionsRequestPrivate(
    const DescribeOrderableDBInstanceOptionsRequestPrivate &other, DescribeOrderableDBInstanceOptionsRequest * const q)
    : DocDBRequestPrivate(other, q)
{

}

} // namespace DocDB
} // namespace QtAws
