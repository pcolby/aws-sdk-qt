// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getstatementresultrequest.h"
#include "getstatementresultrequest_p.h"
#include "getstatementresultresponse.h"
#include "redshiftdatarequest_p.h"

namespace QtAws {
namespace RedshiftData {

/*!
 * \class QtAws::RedshiftData::GetStatementResultRequest
 * \brief The GetStatementResultRequest class provides an interface for RedshiftData GetStatementResult requests.
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
 * \sa RedshiftDataClient::getStatementResult
 */

/*!
 * Constructs a copy of \a other.
 */
GetStatementResultRequest::GetStatementResultRequest(const GetStatementResultRequest &other)
    : RedshiftDataRequest(new GetStatementResultRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetStatementResultRequest object.
 */
GetStatementResultRequest::GetStatementResultRequest()
    : RedshiftDataRequest(new GetStatementResultRequestPrivate(RedshiftDataRequest::GetStatementResultAction, this))
{

}

/*!
 * \reimp
 */
bool GetStatementResultRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetStatementResultResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetStatementResultRequest::response(QNetworkReply * const reply) const
{
    return new GetStatementResultResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftData::GetStatementResultRequestPrivate
 * \brief The GetStatementResultRequestPrivate class provides private implementation for GetStatementResultRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftData
 */

/*!
 * Constructs a GetStatementResultRequestPrivate object for RedshiftData \a action,
 * with public implementation \a q.
 */
GetStatementResultRequestPrivate::GetStatementResultRequestPrivate(
    const RedshiftDataRequest::Action action, GetStatementResultRequest * const q)
    : RedshiftDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetStatementResultRequest
 * class' copy constructor.
 */
GetStatementResultRequestPrivate::GetStatementResultRequestPrivate(
    const GetStatementResultRequestPrivate &other, GetStatementResultRequest * const q)
    : RedshiftDataRequestPrivate(other, q)
{

}

} // namespace RedshiftData
} // namespace QtAws
