// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelstatementrequest.h"
#include "cancelstatementrequest_p.h"
#include "cancelstatementresponse.h"
#include "redshiftdatarequest_p.h"

namespace QtAws {
namespace RedshiftData {

/*!
 * \class QtAws::RedshiftData::CancelStatementRequest
 * \brief The CancelStatementRequest class provides an interface for RedshiftData CancelStatement requests.
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
 * \sa RedshiftDataClient::cancelStatement
 */

/*!
 * Constructs a copy of \a other.
 */
CancelStatementRequest::CancelStatementRequest(const CancelStatementRequest &other)
    : RedshiftDataRequest(new CancelStatementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelStatementRequest object.
 */
CancelStatementRequest::CancelStatementRequest()
    : RedshiftDataRequest(new CancelStatementRequestPrivate(RedshiftDataRequest::CancelStatementAction, this))
{

}

/*!
 * \reimp
 */
bool CancelStatementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelStatementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelStatementRequest::response(QNetworkReply * const reply) const
{
    return new CancelStatementResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftData::CancelStatementRequestPrivate
 * \brief The CancelStatementRequestPrivate class provides private implementation for CancelStatementRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftData
 */

/*!
 * Constructs a CancelStatementRequestPrivate object for RedshiftData \a action,
 * with public implementation \a q.
 */
CancelStatementRequestPrivate::CancelStatementRequestPrivate(
    const RedshiftDataRequest::Action action, CancelStatementRequest * const q)
    : RedshiftDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelStatementRequest
 * class' copy constructor.
 */
CancelStatementRequestPrivate::CancelStatementRequestPrivate(
    const CancelStatementRequestPrivate &other, CancelStatementRequest * const q)
    : RedshiftDataRequestPrivate(other, q)
{

}

} // namespace RedshiftData
} // namespace QtAws
