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

#include "rdsdataserviceclient.h"
#include "rdsdataserviceclient_p.h"

#include "core/awssignaturev4.h"
#include "batchexecutestatementrequest.h"
#include "batchexecutestatementresponse.h"
#include "begintransactionrequest.h"
#include "begintransactionresponse.h"
#include "committransactionrequest.h"
#include "committransactionresponse.h"
#include "executesqlrequest.h"
#include "executesqlresponse.h"
#include "executestatementrequest.h"
#include "executestatementresponse.h"
#include "rollbacktransactionrequest.h"
#include "rollbacktransactionresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::RDSDataService
 * \brief Contains classess for accessing AWS RDS DataService.
 *
 * \inmodule QtAwsRDSDataService
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace RDSDataService {

/*!
 * \class QtAws::RDSDataService::RDSDataServiceClient
 * \brief The RDSDataServiceClient class provides access to the AWS RDS DataService service.
 *
 * \ingroup aws-clients
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
 */

/*!
 * \brief Constructs a RDSDataServiceClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
RDSDataServiceClient::RDSDataServiceClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new RDSDataServiceClientPrivate(this), parent)
{
    Q_D(RDSDataServiceClient);
    d->apiVersion = QStringLiteral("2018-08-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("rds-data");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS RDS DataService");
    d->serviceName = QStringLiteral("rds-data");
}

/*!
 * \overload RDSDataServiceClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
RDSDataServiceClient::RDSDataServiceClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new RDSDataServiceClientPrivate(this), parent)
{
    Q_D(RDSDataServiceClient);
    d->apiVersion = QStringLiteral("2018-08-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("rds-data");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS RDS DataService");
    d->serviceName = QStringLiteral("rds-data");
}

/*!
 * Sends \a request to the RDSDataServiceClient service, and returns a pointer to an
 * BatchExecuteStatementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Runs a batch SQL statement over an array of
 *
 * data>
 *
 * You can run bulk update and insert operations for multiple records using a DML statement with different parameter sets.
 * Bulk operations can provide a significant performance improvement over individual insert and update
 *
 * operations> <b>
 *
 * If a call isn't part of a transaction because it doesn't include the <code>transactionID</code> parameter, changes that
 * result from the call are committed
 */
BatchExecuteStatementResponse * RDSDataServiceClient::batchExecuteStatement(const BatchExecuteStatementRequest &request)
{
    return qobject_cast<BatchExecuteStatementResponse *>(send(request));
}

/*!
 * Sends \a request to the RDSDataServiceClient service, and returns a pointer to an
 * BeginTransactionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a SQL
 *
 * transaction> <b>
 *
 * A transaction can run for a maximum of 24 hours. A transaction is terminated and rolled back automatically after 24
 *
 * hours>
 *
 * A transaction times out if no calls use its transaction ID in three minutes. If a transaction times out before it's
 * committed, it's rolled back
 *
 * automatically>
 *
 * DDL statements inside a transaction cause an implicit commit. We recommend that you run each DDL statement in a separate
 * <code>ExecuteStatement</code> call with <code>continueAfterTimeout</code>
 */
BeginTransactionResponse * RDSDataServiceClient::beginTransaction(const BeginTransactionRequest &request)
{
    return qobject_cast<BeginTransactionResponse *>(send(request));
}

/*!
 * Sends \a request to the RDSDataServiceClient service, and returns a pointer to an
 * CommitTransactionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Ends a SQL transaction started with the <code>BeginTransaction</code> operation and commits the
 */
CommitTransactionResponse * RDSDataServiceClient::commitTransaction(const CommitTransactionRequest &request)
{
    return qobject_cast<CommitTransactionResponse *>(send(request));
}

/*!
 * Sends \a request to the RDSDataServiceClient service, and returns a pointer to an
 * ExecuteSqlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Runs one or more SQL
 *
 * statements> <b>
 *
 * This operation is deprecated. Use the <code>BatchExecuteStatement</code> or <code>ExecuteStatement</code>
 */
ExecuteSqlResponse * RDSDataServiceClient::executeSql(const ExecuteSqlRequest &request)
{
    return qobject_cast<ExecuteSqlResponse *>(send(request));
}

/*!
 * Sends \a request to the RDSDataServiceClient service, and returns a pointer to an
 * ExecuteStatementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Runs a SQL statement against a
 *
 * database> <b>
 *
 * If a call isn't part of a transaction because it doesn't include the <code>transactionID</code> parameter, changes that
 * result from the call are committed
 *
 * automatically> </b>
 *
 * The response size limit is 1 MB or 1,000 records. If the call returns more than 1 MB of response data or over 1,000
 * records, the call is
 */
ExecuteStatementResponse * RDSDataServiceClient::executeStatement(const ExecuteStatementRequest &request)
{
    return qobject_cast<ExecuteStatementResponse *>(send(request));
}

/*!
 * Sends \a request to the RDSDataServiceClient service, and returns a pointer to an
 * RollbackTransactionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Performs a rollback of a transaction. Rolling back a transaction cancels its
 */
RollbackTransactionResponse * RDSDataServiceClient::rollbackTransaction(const RollbackTransactionRequest &request)
{
    return qobject_cast<RollbackTransactionResponse *>(send(request));
}

/*!
 * \class QtAws::RDSDataService::RDSDataServiceClientPrivate
 * \brief The RDSDataServiceClientPrivate class provides private implementation for RDSDataServiceClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRDSDataService
 */

/*!
 * Constructs a RDSDataServiceClientPrivate object with public implementation \a q.
 */
RDSDataServiceClientPrivate::RDSDataServiceClientPrivate(RDSDataServiceClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace RDSDataService
} // namespace QtAws
