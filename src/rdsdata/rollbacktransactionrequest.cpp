// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rollbacktransactionrequest.h"
#include "rollbacktransactionrequest_p.h"
#include "rollbacktransactionresponse.h"
#include "rdsdatarequest_p.h"

namespace QtAws {
namespace RdsData {

/*!
 * \class QtAws::RdsData::RollbackTransactionRequest
 * \brief The RollbackTransactionRequest class provides an interface for RdsData RollbackTransaction requests.
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
 * \sa RdsDataClient::rollbackTransaction
 */

/*!
 * Constructs a copy of \a other.
 */
RollbackTransactionRequest::RollbackTransactionRequest(const RollbackTransactionRequest &other)
    : RdsDataRequest(new RollbackTransactionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RollbackTransactionRequest object.
 */
RollbackTransactionRequest::RollbackTransactionRequest()
    : RdsDataRequest(new RollbackTransactionRequestPrivate(RdsDataRequest::RollbackTransactionAction, this))
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
 * \class QtAws::RdsData::RollbackTransactionRequestPrivate
 * \brief The RollbackTransactionRequestPrivate class provides private implementation for RollbackTransactionRequest.
 * \internal
 *
 * \inmodule QtAwsRdsData
 */

/*!
 * Constructs a RollbackTransactionRequestPrivate object for RdsData \a action,
 * with public implementation \a q.
 */
RollbackTransactionRequestPrivate::RollbackTransactionRequestPrivate(
    const RdsDataRequest::Action action, RollbackTransactionRequest * const q)
    : RdsDataRequestPrivate(action, q)
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
    : RdsDataRequestPrivate(other, q)
{

}

} // namespace RdsData
} // namespace QtAws
