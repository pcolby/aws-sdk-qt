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

#include "batchexecutestatementrequest.h"
#include "batchexecutestatementrequest_p.h"
#include "batchexecutestatementresponse.h"
#include "redshiftdatarequest_p.h"

namespace QtAws {
namespace RedshiftData {

/*!
 * \class QtAws::RedshiftData::BatchExecuteStatementRequest
 * \brief The BatchExecuteStatementRequest class provides an interface for RedshiftData BatchExecuteStatement requests.
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
 * \sa RedshiftDataClient::batchExecuteStatement
 */

/*!
 * Constructs a copy of \a other.
 */
BatchExecuteStatementRequest::BatchExecuteStatementRequest(const BatchExecuteStatementRequest &other)
    : RedshiftDataRequest(new BatchExecuteStatementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchExecuteStatementRequest object.
 */
BatchExecuteStatementRequest::BatchExecuteStatementRequest()
    : RedshiftDataRequest(new BatchExecuteStatementRequestPrivate(RedshiftDataRequest::BatchExecuteStatementAction, this))
{

}

/*!
 * \reimp
 */
bool BatchExecuteStatementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchExecuteStatementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchExecuteStatementRequest::response(QNetworkReply * const reply) const
{
    return new BatchExecuteStatementResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftData::BatchExecuteStatementRequestPrivate
 * \brief The BatchExecuteStatementRequestPrivate class provides private implementation for BatchExecuteStatementRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftData
 */

/*!
 * Constructs a BatchExecuteStatementRequestPrivate object for RedshiftData \a action,
 * with public implementation \a q.
 */
BatchExecuteStatementRequestPrivate::BatchExecuteStatementRequestPrivate(
    const RedshiftDataRequest::Action action, BatchExecuteStatementRequest * const q)
    : RedshiftDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchExecuteStatementRequest
 * class' copy constructor.
 */
BatchExecuteStatementRequestPrivate::BatchExecuteStatementRequestPrivate(
    const BatchExecuteStatementRequestPrivate &other, BatchExecuteStatementRequest * const q)
    : RedshiftDataRequestPrivate(other, q)
{

}

} // namespace RedshiftData
} // namespace QtAws
