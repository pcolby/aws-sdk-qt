// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rdsdataclient.h"
#include "rdsdataclient_p.h"

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
 * \namespace QtAws::RdsData
 * \brief Contains classess for accessing AWS RDS DataService.
 *
 * \inmodule QtAwsRdsData
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace RdsData {

/*!
 * \class QtAws::RdsData::RdsDataClient
 * \brief The RdsDataClient class provides access to the AWS RDS DataService service.
 *
 * \ingroup aws-clients
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
 */

/*!
 * \brief Constructs a RdsDataClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
RdsDataClient::RdsDataClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new RdsDataClientPrivate(this), parent)
{
    Q_D(RdsDataClient);
    d->apiVersion = QStringLiteral("2018-08-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS RDS DataService");
    d->serviceName = QStringLiteral("rds-data");
}

/*!
 * \overload RdsDataClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
RdsDataClient::RdsDataClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new RdsDataClientPrivate(this), parent)
{
    Q_D(RdsDataClient);
    d->apiVersion = QStringLiteral("2018-08-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS RDS DataService");
    d->serviceName = QStringLiteral("rds-data");
}

/*!
 * Sends \a request to the RdsDataClient service, and returns a pointer to an
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
 * operations> <note>
 *
 * If a call isn't part of a transaction because it doesn't include the <code>transactionID</code> parameter, changes that
 * result from the call are committed
 *
 * automatically>
 *
 * There isn't a fixed upper limit on the number of parameter sets. However, the maximum size of the HTTP request submitted
 * through the Data API is 4 MiB. If the request exceeds this limit, the Data API returns an error and doesn't process the
 * request. This 4-MiB limit includes the size of the HTTP headers and the JSON notation in the request. Thus, the number
 * of parameter sets that you can include depends on a combination of factors, such as the size of the SQL statement and
 * the size of each parameter
 *
 * set>
 *
 * The response size limit is 1 MiB. If the call returns more than 1 MiB of response data, the call is
 */
BatchExecuteStatementResponse * RdsDataClient::batchExecuteStatement(const BatchExecuteStatementRequest &request)
{
    return qobject_cast<BatchExecuteStatementResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsDataClient service, and returns a pointer to an
 * BeginTransactionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a SQL
 *
 * transaction> <note>
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
BeginTransactionResponse * RdsDataClient::beginTransaction(const BeginTransactionRequest &request)
{
    return qobject_cast<BeginTransactionResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsDataClient service, and returns a pointer to an
 * CommitTransactionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Ends a SQL transaction started with the <code>BeginTransaction</code> operation and commits the
 */
CommitTransactionResponse * RdsDataClient::commitTransaction(const CommitTransactionRequest &request)
{
    return qobject_cast<CommitTransactionResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsDataClient service, and returns a pointer to an
 * ExecuteSqlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Runs one or more SQL
 *
 * statements> <note>
 *
 * This operation is deprecated. Use the <code>BatchExecuteStatement</code> or <code>ExecuteStatement</code>
 */
ExecuteSqlResponse * RdsDataClient::executeSql(const ExecuteSqlRequest &request)
{
    return qobject_cast<ExecuteSqlResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsDataClient service, and returns a pointer to an
 * ExecuteStatementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Runs a SQL statement against a
 *
 * database> <note>
 *
 * If a call isn't part of a transaction because it doesn't include the <code>transactionID</code> parameter, changes that
 * result from the call are committed
 *
 * automatically>
 *
 * If the binary response data from the database is more than 1 MB, the call is
 */
ExecuteStatementResponse * RdsDataClient::executeStatement(const ExecuteStatementRequest &request)
{
    return qobject_cast<ExecuteStatementResponse *>(send(request));
}

/*!
 * Sends \a request to the RdsDataClient service, and returns a pointer to an
 * RollbackTransactionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Performs a rollback of a transaction. Rolling back a transaction cancels its
 */
RollbackTransactionResponse * RdsDataClient::rollbackTransaction(const RollbackTransactionRequest &request)
{
    return qobject_cast<RollbackTransactionResponse *>(send(request));
}

/*!
 * \class QtAws::RdsData::RdsDataClientPrivate
 * \brief The RdsDataClientPrivate class provides private implementation for RdsDataClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRdsData
 */

/*!
 * Constructs a RdsDataClientPrivate object with public implementation \a q.
 */
RdsDataClientPrivate::RdsDataClientPrivate(RdsDataClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace RdsData
} // namespace QtAws
