/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getqueryexecutionrequest.h"
#include "getqueryexecutionrequest_p.h"
#include "getqueryexecutionresponse.h"
#include "athenarequest_p.h"

namespace QtAws {
namespace Athena {

/*!
 * \class QtAws::Athena::GetQueryExecutionRequest
 * \brief The GetQueryExecutionRequest class provides an interface for Athena GetQueryExecution requests.
 *
 * \inmodule QtAwsAthena
 *
 *  Amazon Athena is an interactive query service that lets you use standard SQL to analyze data directly in Amazon S3. You
 *  can point Athena at your data in Amazon S3 and run ad-hoc queries and get results in seconds. Athena is serverless, so
 *  there is no infrastructure to set up or manage. You pay only for the queries you run. Athena scales
 *  automatically—executing queries in parallel—so results are fast, even with large datasets and complex queries. For more
 *  information, see <a href="http://docs.aws.amazon.com/athena/latest/ug/what-is.html">What is Amazon Athena</a> in the
 *  <i>Amazon Athena User
 * 
 *  Guide</i>>
 * 
 *  For code samples using the AWS SDK for Java, see <a
 *  href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples and Code Samples</a> in the <i>Amazon
 *  Athena User
 *
 * \sa AthenaClient::getQueryExecution
 */

/*!
 * Constructs a copy of \a other.
 */
GetQueryExecutionRequest::GetQueryExecutionRequest(const GetQueryExecutionRequest &other)
    : AthenaRequest(new GetQueryExecutionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetQueryExecutionRequest object.
 */
GetQueryExecutionRequest::GetQueryExecutionRequest()
    : AthenaRequest(new GetQueryExecutionRequestPrivate(AthenaRequest::GetQueryExecutionAction, this))
{

}

/*!
 * \reimp
 */
bool GetQueryExecutionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetQueryExecutionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetQueryExecutionRequest::response(QNetworkReply * const reply) const
{
    return new GetQueryExecutionResponse(*this, reply);
}

/*!
 * \class QtAws::Athena::GetQueryExecutionRequestPrivate
 * \brief The GetQueryExecutionRequestPrivate class provides private implementation for GetQueryExecutionRequest.
 * \internal
 *
 * \inmodule QtAwsAthena
 */

/*!
 *
 * Constructs a GetQueryExecutionRequestPrivate object for Athena \a action with,
 * public implementation \a q.
 */
GetQueryExecutionRequestPrivate::GetQueryExecutionRequestPrivate(
    const AthenaRequest::Action action, GetQueryExecutionRequest * const q)
    : AthenaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetQueryExecutionRequest
 * class' copy constructor.
 */
GetQueryExecutionRequestPrivate::GetQueryExecutionRequestPrivate(
    const GetQueryExecutionRequestPrivate &other, GetQueryExecutionRequest * const q)
    : AthenaRequestPrivate(other, q)
{

}

} // namespace Athena
} // namespace QtAws
