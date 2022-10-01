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

#include "liststatementsrequest.h"
#include "liststatementsrequest_p.h"
#include "liststatementsresponse.h"
#include "redshiftdatarequest_p.h"

namespace QtAws {
namespace RedshiftData {

/*!
 * \class QtAws::RedshiftData::ListStatementsRequest
 * \brief The ListStatementsRequest class provides an interface for RedshiftData ListStatements requests.
 *
 * \inmodule QtAwsRedshiftData
 *
 *  You can use the Amazon Redshift Data API to run queries on Amazon Redshift tables. You can run SQL statements, which are
 *  committed if the statement succeeds.
 * 
 *  </p
 * 
 *  For more information about the Amazon Redshift Data API and CLI usage examples, see <a
 *  href="https://docs.aws.amazon.com/redshift/latest/mgmt/data-api.html">Using the Amazon Redshift Data API</a> in the
 *  <i>Amazon Redshift Cluster Management Guide</i>.
 *
 * \sa RedshiftDataClient::listStatements
 */

/*!
 * Constructs a copy of \a other.
 */
ListStatementsRequest::ListStatementsRequest(const ListStatementsRequest &other)
    : RedshiftDataRequest(new ListStatementsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListStatementsRequest object.
 */
ListStatementsRequest::ListStatementsRequest()
    : RedshiftDataRequest(new ListStatementsRequestPrivate(RedshiftDataRequest::ListStatementsAction, this))
{

}

/*!
 * \reimp
 */
bool ListStatementsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListStatementsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStatementsRequest::response(QNetworkReply * const reply) const
{
    return new ListStatementsResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftData::ListStatementsRequestPrivate
 * \brief The ListStatementsRequestPrivate class provides private implementation for ListStatementsRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftData
 */

/*!
 * Constructs a ListStatementsRequestPrivate object for RedshiftData \a action,
 * with public implementation \a q.
 */
ListStatementsRequestPrivate::ListStatementsRequestPrivate(
    const RedshiftDataRequest::Action action, ListStatementsRequest * const q)
    : RedshiftDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListStatementsRequest
 * class' copy constructor.
 */
ListStatementsRequestPrivate::ListStatementsRequestPrivate(
    const ListStatementsRequestPrivate &other, ListStatementsRequest * const q)
    : RedshiftDataRequestPrivate(other, q)
{

}

} // namespace RedshiftData
} // namespace QtAws
