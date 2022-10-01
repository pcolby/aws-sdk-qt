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
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribeOrderableDBInstanceOptionsRequest
 * \brief The DescribeOrderableDBInstanceOptionsRequest class provides an interface for DocDb DescribeOrderableDBInstanceOptions requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describeOrderableDBInstanceOptions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeOrderableDBInstanceOptionsRequest::DescribeOrderableDBInstanceOptionsRequest(const DescribeOrderableDBInstanceOptionsRequest &other)
    : DocDbRequest(new DescribeOrderableDBInstanceOptionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeOrderableDBInstanceOptionsRequest object.
 */
DescribeOrderableDBInstanceOptionsRequest::DescribeOrderableDBInstanceOptionsRequest()
    : DocDbRequest(new DescribeOrderableDBInstanceOptionsRequestPrivate(DocDbRequest::DescribeOrderableDBInstanceOptionsAction, this))
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
 * \class QtAws::DocDb::DescribeOrderableDBInstanceOptionsRequestPrivate
 * \brief The DescribeOrderableDBInstanceOptionsRequestPrivate class provides private implementation for DescribeOrderableDBInstanceOptionsRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribeOrderableDBInstanceOptionsRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
DescribeOrderableDBInstanceOptionsRequestPrivate::DescribeOrderableDBInstanceOptionsRequestPrivate(
    const DocDbRequest::Action action, DescribeOrderableDBInstanceOptionsRequest * const q)
    : DocDbRequestPrivate(action, q)
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
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
