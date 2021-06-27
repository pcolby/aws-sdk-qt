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

#include "redshiftdataapiserviceclient.h"
#include "redshiftdataapiserviceclient_p.h"

#include "core/awssignaturev4.h"
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
 * \namespace QtAws::RedshiftDataAPIService
 * \brief Contains classess for accessing Redshift Data API Service.
 *
 * \inmodule QtAwsRedshiftDataAPIService
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace RedshiftDataAPIService {

/*!
 * \class QtAws::RedshiftDataAPIService::RedshiftDataAPIServiceClient
 * \brief The RedshiftDataAPIServiceClient class provides access to the Redshift Data API Service service.
 *
 * \ingroup aws-clients
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
 */

/*!
 * \brief Constructs a RedshiftDataAPIServiceClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
RedshiftDataAPIServiceClient::RedshiftDataAPIServiceClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2019-12-20"),
    QStringLiteral("redshift-data"),
    QStringLiteral("Redshift Data API Service"),
    QStringLiteral("redshift-data"),
    parent), d_ptr(new RedshiftDataAPIServiceClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload RedshiftDataAPIServiceClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
RedshiftDataAPIServiceClient::RedshiftDataAPIServiceClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2019-12-20"),
    QStringLiteral("redshift-data"),
    QStringLiteral("Redshift Data API Service"),
    QStringLiteral("redshift-data"),
    parent), d_ptr(new RedshiftDataAPIServiceClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the RedshiftDataAPIServiceClient service, and returns a pointer to an
 * CancelStatementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels a running query. To be canceled, a query must be running.
 */
CancelStatementResponse * RedshiftDataAPIServiceClient::cancelStatement(const CancelStatementRequest &request)
{
    return qobject_cast<CancelStatementResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftDataAPIServiceClient service, and returns a pointer to an
 * DescribeStatementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the details about a specific instance when a query was run by the Amazon Redshift Data API. The information
 * includes when the query started, when it finished, the query status, the number of rows returned, and the SQL statement.
 */
DescribeStatementResponse * RedshiftDataAPIServiceClient::describeStatement(const DescribeStatementRequest &request)
{
    return qobject_cast<DescribeStatementResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftDataAPIServiceClient service, and returns a pointer to an
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
 * AWS Secrets Manager - specify the Amazon Resource Name (ARN) of the secret and the cluster identifier that matches the
 * cluster in the secret.
 *
 * </p </li> <li>
 *
 * Temporary credentials - specify the cluster identifier, the database name, and the database user name. Permission to
 * call the <code>redshift:GetClusterCredentials</code> operation is required to use this method.
 */
DescribeTableResponse * RedshiftDataAPIServiceClient::describeTable(const DescribeTableRequest &request)
{
    return qobject_cast<DescribeTableResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftDataAPIServiceClient service, and returns a pointer to an
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
 * AWS Secrets Manager - specify the Amazon Resource Name (ARN) of the secret and the cluster identifier that matches the
 * cluster in the secret.
 *
 * </p </li> <li>
 *
 * Temporary credentials - specify the cluster identifier, the database name, and the database user name. Permission to
 * call the <code>redshift:GetClusterCredentials</code> operation is required to use this method.
 */
ExecuteStatementResponse * RedshiftDataAPIServiceClient::executeStatement(const ExecuteStatementRequest &request)
{
    return qobject_cast<ExecuteStatementResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftDataAPIServiceClient service, and returns a pointer to an
 * GetStatementResultResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Fetches the temporarily cached result of an SQL statement. A token is returned to page through the statement results.
 */
GetStatementResultResponse * RedshiftDataAPIServiceClient::getStatementResult(const GetStatementResultRequest &request)
{
    return qobject_cast<GetStatementResultResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftDataAPIServiceClient service, and returns a pointer to an
 * ListDatabasesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the databases in a cluster. A token is returned to page through the database list. Depending on the authorization
 * method, use one of the following combinations of request parameters:
 *
 * </p <ul> <li>
 *
 * AWS Secrets Manager - specify the Amazon Resource Name (ARN) of the secret and the cluster identifier that matches the
 * cluster in the secret.
 *
 * </p </li> <li>
 *
 * Temporary credentials - specify the cluster identifier, the database name, and the database user name. Permission to
 * call the <code>redshift:GetClusterCredentials</code> operation is required to use this method.
 */
ListDatabasesResponse * RedshiftDataAPIServiceClient::listDatabases(const ListDatabasesRequest &request)
{
    return qobject_cast<ListDatabasesResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftDataAPIServiceClient service, and returns a pointer to an
 * ListSchemasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the schemas in a database. A token is returned to page through the schema list. Depending on the authorization
 * method, use one of the following combinations of request parameters:
 *
 * </p <ul> <li>
 *
 * AWS Secrets Manager - specify the Amazon Resource Name (ARN) of the secret and the cluster identifier that matches the
 * cluster in the secret.
 *
 * </p </li> <li>
 *
 * Temporary credentials - specify the cluster identifier, the database name, and the database user name. Permission to
 * call the <code>redshift:GetClusterCredentials</code> operation is required to use this method.
 */
ListSchemasResponse * RedshiftDataAPIServiceClient::listSchemas(const ListSchemasRequest &request)
{
    return qobject_cast<ListSchemasResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftDataAPIServiceClient service, and returns a pointer to an
 * ListStatementsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List of SQL statements. By default, only finished statements are shown. A token is returned to page through the
 * statement list.
 */
ListStatementsResponse * RedshiftDataAPIServiceClient::listStatements(const ListStatementsRequest &request)
{
    return qobject_cast<ListStatementsResponse *>(send(request));
}

/*!
 * Sends \a request to the RedshiftDataAPIServiceClient service, and returns a pointer to an
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
 * AWS Secrets Manager - specify the Amazon Resource Name (ARN) of the secret and the cluster identifier that matches the
 * cluster in the secret.
 *
 * </p </li> <li>
 *
 * Temporary credentials - specify the cluster identifier, the database name, and the database user name. Permission to
 * call the <code>redshift:GetClusterCredentials</code> operation is required to use this method.
 */
ListTablesResponse * RedshiftDataAPIServiceClient::listTables(const ListTablesRequest &request)
{
    return qobject_cast<ListTablesResponse *>(send(request));
}

/*!
 * \class QtAws::RedshiftDataAPIService::RedshiftDataAPIServiceClientPrivate
 * \brief The RedshiftDataAPIServiceClientPrivate class provides private implementation for RedshiftDataAPIServiceClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRedshiftDataAPIService
 */

/*!
 * Constructs a RedshiftDataAPIServiceClientPrivate object with public implementation \a q.
 */
RedshiftDataAPIServiceClientPrivate::RedshiftDataAPIServiceClientPrivate(RedshiftDataAPIServiceClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace RedshiftDataAPIService
} // namespace QtAws
