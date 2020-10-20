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

#include "rollbacktransactionrequest.h"
#include "rollbacktransactionrequest_p.h"
#include "rollbacktransactionresponse.h"
#include "rdsdataservicerequest_p.h"

namespace QtAws {
namespace RDSDataService {

/*!
 * \class QtAws::RDSDataService::RollbackTransactionRequest
 * \brief The RollbackTransactionRequest class provides an interface for RDSDataService RollbackTransaction requests.
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
 * \sa RDSDataServiceClient::rollbackTransaction
 */

/*!
 * Constructs a copy of \a other.
 */
RollbackTransactionRequest::RollbackTransactionRequest(const RollbackTransactionRequest &other)
    : RDSDataServiceRequest(new RollbackTransactionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RollbackTransactionRequest object.
 */
RollbackTransactionRequest::RollbackTransactionRequest()
    : RDSDataServiceRequest(new RollbackTransactionRequestPrivate(RDSDataServiceRequest::RollbackTransactionAction, this))
{

}

/*!
 * \reimp
 */
bool RollbackTransactionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RollbackTransactionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RollbackTransactionRequest::response(QNetworkReply * const reply) const
{
    return new RollbackTransactionResponse(*this, reply);
}

/*!
 * \class QtAws::RDSDataService::RollbackTransactionRequestPrivate
 * \brief The RollbackTransactionRequestPrivate class provides private implementation for RollbackTransactionRequest.
 * \internal
 *
 * \inmodule QtAwsRDSDataService
 */

/*!
 * Constructs a RollbackTransactionRequestPrivate object for RDSDataService \a action,
 * with public implementation \a q.
 */
RollbackTransactionRequestPrivate::RollbackTransactionRequestPrivate(
    const RDSDataServiceRequest::Action action, RollbackTransactionRequest * const q)
    : RDSDataServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RollbackTransactionRequest
 * class' copy constructor.
 */
RollbackTransactionRequestPrivate::RollbackTransactionRequestPrivate(
    const RollbackTransactionRequestPrivate &other, RollbackTransactionRequest * const q)
    : RDSDataServiceRequestPrivate(other, q)
{

}

} // namespace RDSDataService
} // namespace QtAws
