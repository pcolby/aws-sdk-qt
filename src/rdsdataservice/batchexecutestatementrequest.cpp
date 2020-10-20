/*
    Copyright 2013-2020 Paul Colby

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
#include "rdsdataservicerequest_p.h"

namespace QtAws {
namespace RDSDataService {

/*!
 * \class QtAws::RDSDataService::BatchExecuteStatementRequest
 * \brief The BatchExecuteStatementRequest class provides an interface for RDSDataService BatchExecuteStatement requests.
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
 * \sa RDSDataServiceClient::batchExecuteStatement
 */

/*!
 * Constructs a copy of \a other.
 */
BatchExecuteStatementRequest::BatchExecuteStatementRequest(const BatchExecuteStatementRequest &other)
    : RDSDataServiceRequest(new BatchExecuteStatementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchExecuteStatementRequest object.
 */
BatchExecuteStatementRequest::BatchExecuteStatementRequest()
    : RDSDataServiceRequest(new BatchExecuteStatementRequestPrivate(RDSDataServiceRequest::BatchExecuteStatementAction, this))
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
 * \class QtAws::RDSDataService::BatchExecuteStatementRequestPrivate
 * \brief The BatchExecuteStatementRequestPrivate class provides private implementation for BatchExecuteStatementRequest.
 * \internal
 *
 * \inmodule QtAwsRDSDataService
 */

/*!
 * Constructs a BatchExecuteStatementRequestPrivate object for RDSDataService \a action,
 * with public implementation \a q.
 */
BatchExecuteStatementRequestPrivate::BatchExecuteStatementRequestPrivate(
    const RDSDataServiceRequest::Action action, BatchExecuteStatementRequest * const q)
    : RDSDataServiceRequestPrivate(action, q)
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
    : RDSDataServiceRequestPrivate(other, q)
{

}

} // namespace RDSDataService
} // namespace QtAws
