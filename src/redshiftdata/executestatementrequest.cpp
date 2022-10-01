// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
