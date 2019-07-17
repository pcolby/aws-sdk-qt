/*
    Copyright 2013-2019 Paul Colby

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
#include "rdsdataservicerequest_p.h"

namespace QtAws {
namespace RDSDataService {

/*!
 * \class QtAws::RDSDataService::ExecuteStatementRequest
 * \brief The ExecuteStatementRequest class provides an interface for RDSDataService ExecuteStatement requests.
 *
 * \inmodule QtAwsRDSDataService
 *
 *  <fullname>Amazon RDS Data Service</fullname>
 * 
 *  Amazon RDS provides an HTTP endpoint to run SQL statements on an Amazon Aurora Serverless DB cluster. To run these
 *  statements, you work with the Data Service
 * 
 *  API>
 * 
 *  For more information about the Data Service API, see <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/data-api.html">Using the Data API for Aurora
 *  Serverless</a> in the <i>Amazon Aurora User
 *
 * \sa RDSDataServiceClient::executeStatement
 */

/*!
 * Constructs a copy of \a other.
 */
ExecuteStatementRequest::ExecuteStatementRequest(const ExecuteStatementRequest &other)
    : RDSDataServiceRequest(new ExecuteStatementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ExecuteStatementRequest object.
 */
ExecuteStatementRequest::ExecuteStatementRequest()
    : RDSDataServiceRequest(new ExecuteStatementRequestPrivate(RDSDataServiceRequest::ExecuteStatementAction, this))
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
 * \class QtAws::RDSDataService::ExecuteStatementRequestPrivate
 * \brief The ExecuteStatementRequestPrivate class provides private implementation for ExecuteStatementRequest.
 * \internal
 *
 * \inmodule QtAwsRDSDataService
 */

/*!
 * Constructs a ExecuteStatementRequestPrivate object for RDSDataService \a action,
 * with public implementation \a q.
 */
ExecuteStatementRequestPrivate::ExecuteStatementRequestPrivate(
    const RDSDataServiceRequest::Action action, ExecuteStatementRequest * const q)
    : RDSDataServiceRequestPrivate(action, q)
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
    : RDSDataServiceRequestPrivate(other, q)
{

}

} // namespace RDSDataService
} // namespace QtAws
