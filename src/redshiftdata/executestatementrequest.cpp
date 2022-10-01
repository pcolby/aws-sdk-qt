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

#include "executestatementrequest.h"
#include "executestatementrequest_p.h"
#include "executestatementresponse.h"
#include "redshiftdatarequest_p.h"

namespace QtAws {
namespace RedshiftData {

/*!
 * \class QtAws::RedshiftData::ExecuteStatementRequest
 * \brief The ExecuteStatementRequest class provides an interface for RedshiftData ExecuteStatement requests.
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
 * \sa RedshiftDataClient::executeStatement
 */

/*!
 * Constructs a copy of \a other.
 */
ExecuteStatementRequest::ExecuteStatementRequest(const ExecuteStatementRequest &other)
    : RedshiftDataRequest(new ExecuteStatementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ExecuteStatementRequest object.
 */
ExecuteStatementRequest::ExecuteStatementRequest()
    : RedshiftDataRequest(new ExecuteStatementRequestPrivate(RedshiftDataRequest::ExecuteStatementAction, this))
{

}

/*!
 * \reimp
 */
bool ExecuteStatementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ExecuteStatementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ExecuteStatementRequest::response(QNetworkReply * const reply) const
{
    return new ExecuteStatementResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftData::ExecuteStatementRequestPrivate
 * \brief The ExecuteStatementRequestPrivate class provides private implementation for ExecuteStatementRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftData
 */

/*!
 * Constructs a ExecuteStatementRequestPrivate object for RedshiftData \a action,
 * with public implementation \a q.
 */
ExecuteStatementRequestPrivate::ExecuteStatementRequestPrivate(
    const RedshiftDataRequest::Action action, ExecuteStatementRequest * const q)
    : RedshiftDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ExecuteStatementRequest
 * class' copy constructor.
 */
ExecuteStatementRequestPrivate::ExecuteStatementRequestPrivate(
    const ExecuteStatementRequestPrivate &other, ExecuteStatementRequest * const q)
    : RedshiftDataRequestPrivate(other, q)
{

}

} // namespace RedshiftData
} // namespace QtAws
