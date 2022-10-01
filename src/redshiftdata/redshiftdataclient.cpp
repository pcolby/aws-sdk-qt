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

#include "redshiftdataclient.h"
#include "redshiftdataclient_p.h"

#include "core/awssignaturev4.h"
#include "batchexecutestatementrequest.h"
#include "batchexecutestatementresponse.h"
#include "cancelstatementrequest.h"
#include "cancelstatementresponse.h"
#include "describestatementrequest.h"
#include "describestatementresponse.h"
#include "describetablerequest.h"
#include "describetableresponse.h"
#include "executestatementrequest.h"
#include "executestatementresponse.h"
#include "getstatementresultrequest.h"
#include "getstatementresultresponse.h"
#include "listdatabasesrequest.h"
#include "listdatabasesresponse.h"
#include "listschemasrequest.h"
#include "listschemasresponse.h"
#include "liststatementsrequest.h"
#include "liststatementsresponse.h"
#include "listtablesrequest.h"
#include "listtablesresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::RedshiftData
 * \brief Contains classess for accessing Redshift Data API Service.
 *
 * \inmodule QtAwsRedshiftData
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace RedshiftData {

/*!
 * \class QtAws::RedshiftData::RedshiftDataClient
 * \brief The RedshiftDataClient class provides access to the Redshift Data API Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRedshiftData
 *
 *  You can use the Amazon Redshift Data API to run queries on Amazon Redshift tables. You can run SQL statements, which are
 *  committed if the statement succeeds.
 * 
 *  </p
 * 
 *  For more information about the Amazon Redshift Data API and CLI usage examples, see <a
 *  href="https://docs.aws.amazon.com/redshift/latest/mgmt/data-api.html">Using the Amazon Redshift Data API</a> in the
 *  <i>Amazon Redshift Cluster Management Guide</i>.
 */

/*!
 * \brief Constructs a RedshiftDataClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
RedshiftDataClient::RedshiftDataClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new RedshiftDataClientPrivate(this), parent)
{
    Q_D(RedshiftDataClient);
    d->apiVersion = QStringLiteral("2019-12-20");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("redshift-data");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Redshift Data API Service");
    d->serviceName = QStringLiteral("redshift-data");
}

/*!
 * \overload RedshiftDataClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
RedshiftDataClient::RedshiftDataClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new RedshiftDataClientPrivate(this), parent)
{
    Q_D(RedshiftDataClient);
    d->apiVersion = QStringLiteral("2019-12-20");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("redshift-data");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Redshift Data API Service");
    d->serviceName = QStringLiteral("redshift-data");
}

/*!
 * Sends \a request to the RedshiftDataClient service, and returns a pointer to an
 * BatchExecuteStatementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Runs one or more SQL statements, which can be data manipulation language (DML) or data definition language (DDL).
 * Depending on the authorization method, use one of the following combinations of request parameters:
 *
 * </p <ul> <li>
 *
 * Secrets Manager - when connecting to a cluster, specify the Amazon Resource Name (ARN) of the secret, the database name,
 * and the cluster identifier that matches the cluster in the secret. When connecting to a serverless workgroup, specify
 * the Amazon Resource Name (ARN) of the secret and the database name.
 *
 * </p </li> <li>
 *
 * Temporary credentials - when connecting to a cluster, specify the cluster identifier, the database name, and the
 * database user name. Also, permission to call the <code>redshift:GetClusterCredentials</code> operation is required. When
 * connecting to a serverless workgroup, specify the workgroup name and database name. Also, permission to call the
 * <code>redshift-serverless:GetCredentials</code> operation is required.
 */
BatchExecuteStatementResponse * RedshiftDataClient::batchExecuteStatement(const BatchExecuteStatementRequest &request)
{
    return qobject_cast<BatchExecuteStatementResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftDataClient service, and returns a pointer to an
 * CancelStatementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels a running query. To be canceled, a query must be running.
 */
CancelStatementResponse * RedshiftDataClient::cancelStatement(const CancelStatementRequest &request)
{
    return qobject_cast<CancelStatementResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftDataClient service, and returns a pointer to an
 * DescribeStatementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the details about a specific instance when a query was run by the Amazon Redshift Data API. The information
 * includes when the query started, when it finished, the query status, the number of rows returned, and the SQL statement.
 */
DescribeStatementResponse * RedshiftDataClient::describeStatement(const DescribeStatementRequest &request)
{
    return qobject_cast<DescribeStatementResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftDataClient service, and returns a pointer to an
 * DescribeTableResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the detailed information about a table from metadata in the cluster. The information includes its columns. A
 * token is returned to page through the column list. Depending on the authorization method, use one of the following
 * combinations of request parameters:
 *
 * </p <ul> <li>
 *
 * Secrets Manager - when connecting to a cluster, specify the Amazon Resource Name (ARN) of the secret, the database name,
 * and the cluster identifier that matches the cluster in the secret. When connecting to a serverless workgroup, specify
 * the Amazon Resource Name (ARN) of the secret and the database name.
 *
 * </p </li> <li>
 *
 * Temporary credentials - when connecting to a cluster, specify the cluster identifier, the database name, and the
 * database user name. Also, permission to call the <code>redshift:GetClusterCredentials</code> operation is required. When
 * connecting to a serverless workgroup, specify the workgroup name and database name. Also, permission to call the
 * <code>redshift-serverless:GetCredentials</code> operation is required.
 */
DescribeTableResponse * RedshiftDataClient::describeTable(const DescribeTableRequest &request)
{
    return qobject_cast<DescribeTableResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftDataClient service, and returns a pointer to an
 * ExecuteStatementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Runs an SQL statement, which can be data manipulation language (DML) or data definition language (DDL). This statement
 * must be a single SQL statement. Depending on the authorization method, use one of the following combinations of request
 * parameters:
 *
 * </p <ul> <li>
 *
 * Secrets Manager - when connecting to a cluster, specify the Amazon Resource Name (ARN) of the secret, the database name,
 * and the cluster identifier that matches the cluster in the secret. When connecting to a serverless workgroup, specify
 * the Amazon Resource Name (ARN) of the secret and the database name.
 *
 * </p </li> <li>
 *
 * Temporary credentials - when connecting to a cluster, specify the cluster identifier, the database name, and the
 * database user name. Also, permission to call the <code>redshift:GetClusterCredentials</code> operation is required. When
 * connecting to a serverless workgroup, specify the workgroup name and database name. Also, permission to call the
 * <code>redshift-serverless:GetCredentials</code> operation is required.
 */
ExecuteStatementResponse * RedshiftDataClient::executeStatement(const ExecuteStatementRequest &request)
{
    return qobject_cast<ExecuteStatementResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftDataClient service, and returns a pointer to an
 * GetStatementResultResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Fetches the temporarily cached result of an SQL statement. A token is returned to page through the statement results.
 */
GetStatementResultResponse * RedshiftDataClient::getStatementResult(const GetStatementResultRequest &request)
{
    return qobject_cast<GetStatementResultResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftDataClient service, and returns a pointer to an
 * ListDatabasesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the databases in a cluster. A token is returned to page through the database list. Depending on the authorization
 * method, use one of the following combinations of request parameters:
 *
 * </p <ul> <li>
 *
 * Secrets Manager - when connecting to a cluster, specify the Amazon Resource Name (ARN) of the secret, the database name,
 * and the cluster identifier that matches the cluster in the secret. When connecting to a serverless workgroup, specify
 * the Amazon Resource Name (ARN) of the secret and the database name.
 *
 * </p </li> <li>
 *
 * Temporary credentials - when connecting to a cluster, specify the cluster identifier, the database name, and the
 * database user name. Also, permission to call the <code>redshift:GetClusterCredentials</code> operation is required. When
 * connecting to a serverless workgroup, specify the workgroup name and database name. Also, permission to call the
 * <code>redshift-serverless:GetCredentials</code> operation is required.
 */
ListDatabasesResponse * RedshiftDataClient::listDatabases(const ListDatabasesRequest &request)
{
    return qobject_cast<ListDatabasesResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftDataClient service, and returns a pointer to an
 * ListSchemasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the schemas in a database. A token is returned to page through the schema list. Depending on the authorization
 * method, use one of the following combinations of request parameters:
 *
 * </p <ul> <li>
 *
 * Secrets Manager - when connecting to a cluster, specify the Amazon Resource Name (ARN) of the secret, the database name,
 * and the cluster identifier that matches the cluster in the secret. When connecting to a serverless workgroup, specify
 * the Amazon Resource Name (ARN) of the secret and the database name.
 *
 * </p </li> <li>
 *
 * Temporary credentials - when connecting to a cluster, specify the cluster identifier, the database name, and the
 * database user name. Also, permission to call the <code>redshift:GetClusterCredentials</code> operation is required. When
 * connecting to a serverless workgroup, specify the workgroup name and database name. Also, permission to call the
 * <code>redshift-serverless:GetCredentials</code> operation is required.
 */
ListSchemasResponse * RedshiftDataClient::listSchemas(const ListSchemasRequest &request)
{
    return qobject_cast<ListSchemasResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftDataClient service, and returns a pointer to an
 * ListStatementsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List of SQL statements. By default, only finished statements are shown. A token is returned to page through the
 * statement list.
 */
ListStatementsResponse * RedshiftDataClient::listStatements(const ListStatementsRequest &request)
{
    return qobject_cast<ListStatementsResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftDataClient service, and returns a pointer to an
 * ListTablesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the tables in a database. If neither <code>SchemaPattern</code> nor <code>TablePattern</code> are specified, then
 * all tables in the database are returned. A token is returned to page through the table list. Depending on the
 * authorization method, use one of the following combinations of request parameters:
 *
 * </p <ul> <li>
 *
 * Secrets Manager - when connecting to a cluster, specify the Amazon Resource Name (ARN) of the secret, the database name,
 * and the cluster identifier that matches the cluster in the secret. When connecting to a serverless workgroup, specify
 * the Amazon Resource Name (ARN) of the secret and the database name.
 *
 * </p </li> <li>
 *
 * Temporary credentials - when connecting to a cluster, specify the cluster identifier, the database name, and the
 * database user name. Also, permission to call the <code>redshift:GetClusterCredentials</code> operation is required. When
 * connecting to a serverless workgroup, specify the workgroup name and database name. Also, permission to call the
 * <code>redshift-serverless:GetCredentials</code> operation is required.
 */
ListTablesResponse * RedshiftDataClient::listTables(const ListTablesRequest &request)
{
    return qobject_cast<ListTablesResponse *>(send(request));
}

/*!
 * \class QtAws::RedshiftData::RedshiftDataClientPrivate
 * \brief The RedshiftDataClientPrivate class provides private implementation for RedshiftDataClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRedshiftData
 */

/*!
 * Constructs a RedshiftDataClientPrivate object with public implementation \a q.
 */
RedshiftDataClientPrivate::RedshiftDataClientPrivate(RedshiftDataClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace RedshiftData
} // namespace QtAws
