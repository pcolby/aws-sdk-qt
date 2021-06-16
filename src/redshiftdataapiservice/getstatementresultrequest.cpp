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

#include "getstatementresultrequest.h"
#include "getstatementresultrequest_p.h"
#include "getstatementresultresponse.h"
#include "redshiftdataapiservicerequest_p.h"

namespace QtAws {
namespace RedshiftDataAPIService {

/*!
 * \class QtAws::RedshiftDataAPIService::GetStatementResultRequest
 * \brief The GetStatementResultRequest class provides an interface for RedshiftDataAPIService GetStatementResult requests.
 *
 * \inmodule QtAwsRedshiftDataAPIService
 *
 *  You can use the Amazon Redshift Data API to run queries on Amazon Redshift tables. You can run individual SQL
 *  statements, which are committed if the statement succeeds.
 * 
 *  </p
 * 
 *  For more information about the Amazon Redshift Data API, see <a
 *  href="https://docs.aws.amazon.com/redshift/latest/mgmt/data-api.html">Using the Amazon Redshift Data API</a> in the
 *  <i>Amazon Redshift Cluster Management Guide</i>.
 *
 * \sa RedshiftDataAPIServiceClient::getStatementResult
 */

/*!
 * Constructs a copy of \a other.
 */
GetStatementResultRequest::GetStatementResultRequest(const GetStatementResultRequest &other)
    : RedshiftDataAPIServiceRequest(new GetStatementResultRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetStatementResultRequest object.
 */
GetStatementResultRequest::GetStatementResultRequest()
    : RedshiftDataAPIServiceRequest(new GetStatementResultRequestPrivate(RedshiftDataAPIServiceRequest::GetStatementResultAction, this))
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
 * \class QtAws::RedshiftDataAPIService::GetStatementResultRequestPrivate
 * \brief The GetStatementResultRequestPrivate class provides private implementation for GetStatementResultRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftDataAPIService
 */

/*!
 * Constructs a GetStatementResultRequestPrivate object for RedshiftDataAPIService \a action,
 * with public implementation \a q.
 */
GetStatementResultRequestPrivate::GetStatementResultRequestPrivate(
    const RedshiftDataAPIServiceRequest::Action action, GetStatementResultRequest * const q)
    : RedshiftDataAPIServiceRequestPrivate(action, q)
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
    : RedshiftDataAPIServiceRequestPrivate(other, q)
{

}

} // namespace RedshiftDataAPIService
} // namespace QtAws
