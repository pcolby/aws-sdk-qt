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

#include "begintransactionrequest.h"
#include "begintransactionrequest_p.h"
#include "begintransactionresponse.h"
#include "rdsdataservicerequest_p.h"

namespace QtAws {
namespace RDSDataService {

/*!
 * \class QtAws::RDSDataService::BeginTransactionRequest
 * \brief The BeginTransactionRequest class provides an interface for RDSDataService BeginTransaction requests.
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
 * \sa RDSDataServiceClient::beginTransaction
 */

/*!
 * Constructs a copy of \a other.
 */
BeginTransactionRequest::BeginTransactionRequest(const BeginTransactionRequest &other)
    : RDSDataServiceRequest(new BeginTransactionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BeginTransactionRequest object.
 */
BeginTransactionRequest::BeginTransactionRequest()
    : RDSDataServiceRequest(new BeginTransactionRequestPrivate(RDSDataServiceRequest::BeginTransactionAction, this))
{

}

/*!
 * \reimp
 */
bool BeginTransactionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BeginTransactionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BeginTransactionRequest::response(QNetworkReply * const reply) const
{
    return new BeginTransactionResponse(*this, reply);
}

/*!
 * \class QtAws::RDSDataService::BeginTransactionRequestPrivate
 * \brief The BeginTransactionRequestPrivate class provides private implementation for BeginTransactionRequest.
 * \internal
 *
 * \inmodule QtAwsRDSDataService
 */

/*!
 * Constructs a BeginTransactionRequestPrivate object for RDSDataService \a action,
 * with public implementation \a q.
 */
BeginTransactionRequestPrivate::BeginTransactionRequestPrivate(
    const RDSDataServiceRequest::Action action, BeginTransactionRequest * const q)
    : RDSDataServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BeginTransactionRequest
 * class' copy constructor.
 */
BeginTransactionRequestPrivate::BeginTransactionRequestPrivate(
    const BeginTransactionRequestPrivate &other, BeginTransactionRequest * const q)
    : RDSDataServiceRequestPrivate(other, q)
{

}

} // namespace RDSDataService
} // namespace QtAws
