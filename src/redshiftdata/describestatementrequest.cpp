// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describestatementrequest.h"
#include "describestatementrequest_p.h"
#include "describestatementresponse.h"
#include "redshiftdatarequest_p.h"

namespace QtAws {
namespace RedshiftData {

/*!
 * \class QtAws::RedshiftData::DescribeStatementRequest
 * \brief The DescribeStatementRequest class provides an interface for RedshiftData DescribeStatement requests.
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
 * \sa RedshiftDataClient::describeStatement
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeStatementRequest::DescribeStatementRequest(const DescribeStatementRequest &other)
    : RedshiftDataRequest(new DescribeStatementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeStatementRequest object.
 */
DescribeStatementRequest::DescribeStatementRequest()
    : RedshiftDataRequest(new DescribeStatementRequestPrivate(RedshiftDataRequest::DescribeStatementAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeStatementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeStatementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeStatementRequest::response(QNetworkReply * const reply) const
{
    return new DescribeStatementResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftData::DescribeStatementRequestPrivate
 * \brief The DescribeStatementRequestPrivate class provides private implementation for DescribeStatementRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftData
 */

/*!
 * Constructs a DescribeStatementRequestPrivate object for RedshiftData \a action,
 * with public implementation \a q.
 */
DescribeStatementRequestPrivate::DescribeStatementRequestPrivate(
    const RedshiftDataRequest::Action action, DescribeStatementRequest * const q)
    : RedshiftDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeStatementRequest
 * class' copy constructor.
 */
DescribeStatementRequestPrivate::DescribeStatementRequestPrivate(
    const DescribeStatementRequestPrivate &other, DescribeStatementRequest * const q)
    : RedshiftDataRequestPrivate(other, q)
{

}

} // namespace RedshiftData
} // namespace QtAws
