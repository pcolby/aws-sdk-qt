// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "executestatementrequest.h"
#include "executestatementrequest_p.h"
#include "executestatementresponse.h"
#include "rdsdatarequest_p.h"

namespace QtAws {
namespace RdsData {

/*!
 * \class QtAws::RdsData::ExecuteStatementRequest
 * \brief The ExecuteStatementRequest class provides an interface for RdsData ExecuteStatement requests.
 *
 * \inmodule QtAwsRdsData
 *
 *  <fullname>Amazon RDS Data Service</fullname>
 * 
 *  Amazon RDS provides an HTTP endpoint to run SQL statements on an Amazon Aurora Serverless v1 DB cluster. To run these
 *  statements, you work with the Data Service
 * 
 *  API> <note>
 * 
 *  The Data Service API isn't supported on Amazon Aurora Serverless v2 DB
 * 
 *  clusters> </note>
 * 
 *  For more information about the Data Service API, see <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/data-api.html">Using the Data API</a> in the
 *  <i>Amazon Aurora User
 *
 * \sa RdsDataClient::executeStatement
 */

/*!
 * Constructs a copy of \a other.
 */
ExecuteStatementRequest::ExecuteStatementRequest(const ExecuteStatementRequest &other)
    : RdsDataRequest(new ExecuteStatementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ExecuteStatementRequest object.
 */
ExecuteStatementRequest::ExecuteStatementRequest()
    : RdsDataRequest(new ExecuteStatementRequestPrivate(RdsDataRequest::ExecuteStatementAction, this))
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
 * \class QtAws::RdsData::ExecuteStatementRequestPrivate
 * \brief The ExecuteStatementRequestPrivate class provides private implementation for ExecuteStatementRequest.
 * \internal
 *
 * \inmodule QtAwsRdsData
 */

/*!
 * Constructs a ExecuteStatementRequestPrivate object for RdsData \a action,
 * with public implementation \a q.
 */
ExecuteStatementRequestPrivate::ExecuteStatementRequestPrivate(
    const RdsDataRequest::Action action, ExecuteStatementRequest * const q)
    : RdsDataRequestPrivate(action, q)
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
    : RdsDataRequestPrivate(other, q)
{

}

} // namespace RdsData
} // namespace QtAws
