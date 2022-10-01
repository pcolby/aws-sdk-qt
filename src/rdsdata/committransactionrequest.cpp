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

#include "committransactionrequest.h"
#include "committransactionrequest_p.h"
#include "committransactionresponse.h"
#include "rdsdatarequest_p.h"

namespace QtAws {
namespace RdsData {

/*!
 * \class QtAws::RdsData::CommitTransactionRequest
 * \brief The CommitTransactionRequest class provides an interface for RdsData CommitTransaction requests.
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
 * \sa RdsDataClient::commitTransaction
 */

/*!
 * Constructs a copy of \a other.
 */
CommitTransactionRequest::CommitTransactionRequest(const CommitTransactionRequest &other)
    : RdsDataRequest(new CommitTransactionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CommitTransactionRequest object.
 */
CommitTransactionRequest::CommitTransactionRequest()
    : RdsDataRequest(new CommitTransactionRequestPrivate(RdsDataRequest::CommitTransactionAction, this))
{

}

/*!
 * \reimp
 */
bool CommitTransactionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CommitTransactionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CommitTransactionRequest::response(QNetworkReply * const reply) const
{
    return new CommitTransactionResponse(*this, reply);
}

/*!
 * \class QtAws::RdsData::CommitTransactionRequestPrivate
 * \brief The CommitTransactionRequestPrivate class provides private implementation for CommitTransactionRequest.
 * \internal
 *
 * \inmodule QtAwsRdsData
 */

/*!
 * Constructs a CommitTransactionRequestPrivate object for RdsData \a action,
 * with public implementation \a q.
 */
CommitTransactionRequestPrivate::CommitTransactionRequestPrivate(
    const RdsDataRequest::Action action, CommitTransactionRequest * const q)
    : RdsDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CommitTransactionRequest
 * class' copy constructor.
 */
CommitTransactionRequestPrivate::CommitTransactionRequestPrivate(
    const CommitTransactionRequestPrivate &other, CommitTransactionRequest * const q)
    : RdsDataRequestPrivate(other, q)
{

}

} // namespace RdsData
} // namespace QtAws
