/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "athenaclient.h"
#include "athenaclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace Athena {

/**
 * @class  AthenaClient
 *
 * @brief  Client for Amazon Athena
 *
 * Amazon Athena is an interactive query service that lets you use standard SQL to analyze data directly in Amazon S3. You
 * can point Athena at your data in Amazon S3 and run ad-hoc queries and get results in seconds. Athena is serverless, so
 * there is no infrastructure to set up or manage. You pay only for the queries you run. Athena scales
 * automatically—executing queries in parallel—so results are fast, even with large datasets and complex queries. For more
 * information, see <a href="http://docs.aws.amazon.com/athena/latest/ug/what-is.html">What is Amazon Athena</a> in the
 * <i>Amazon Athena User
 *
 * Guide</i>>
 *
 * For code samples using the AWS SDK for Java, see <a
 * href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples and Code Samples</a> in the <i>Amazon
 * Athena User
 */

/**
 * @brief  Constructs a new AthenaClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
AthenaClient::AthenaClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new AthenaClientPrivate(this), parent)
{
    Q_D(AthenaClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QStringLiteral("athena");
}

/**
 * @brief  Constructs a new AthenaClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
AthenaClient::AthenaClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new AthenaClientPrivate(this), parent)
{
    Q_D(AthenaClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QStringLiteral("athena");
}

/// @todo override getEndpoint() to use athena.

/**
 * Returns the details of a single named query or a list of up to 50 queries, which you provide as an array of query ID
 * strings. Use <a>ListNamedQueries</a> to get the list of named query IDs. If information could not be retrieved for a
 * submitted query ID, information about the query ID submitted is listed under <a>UnprocessedNamedQueryId</a>. Named
 * queries are different from executed queries. Use <a>BatchGetQueryExecution</a> to get details about each unique query
 * execution, and <a>ListQueryExecutions</a> to get a list of query execution
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
BatchGetNamedQueryResponse * AthenaClient::batchGetNamedQuery(const BatchGetNamedQueryRequest &request)
{

}

/**
 * Returns the details of a single query execution or a list of up to 50 query executions, which you provide as an array of
 * query execution ID strings. To get a list of query execution IDs, use <a>ListQueryExecutions</a>. Query executions are
 * different from named (saved) queries. Use <a>BatchGetNamedQuery</a> to get details about named
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
BatchGetQueryExecutionResponse * AthenaClient::batchGetQueryExecution(const BatchGetQueryExecutionRequest &request)
{

}

/**
 * Creates a named
 *
 * query>
 *
 * For code samples using the AWS SDK for Java, see <a
 * href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples and Code Samples</a> in the <i>Amazon
 * Athena User
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateNamedQueryResponse * AthenaClient::createNamedQuery(const CreateNamedQueryRequest &request)
{

}

/**
 * Deletes a named
 *
 * query>
 *
 * For code samples using the AWS SDK for Java, see <a
 * href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples and Code Samples</a> in the <i>Amazon
 * Athena User
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteNamedQueryResponse * AthenaClient::deleteNamedQuery(const DeleteNamedQueryRequest &request)
{

}

/**
 * Returns information about a single
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetNamedQueryResponse * AthenaClient::getNamedQuery(const GetNamedQueryRequest &request)
{

}

/**
 * Returns information about a single execution of a query. Each time a query executes, information about the query
 * execution is saved with a unique
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetQueryExecutionResponse * AthenaClient::getQueryExecution(const GetQueryExecutionRequest &request)
{

}

/**
 * Returns the results of a single query execution specified by <code>QueryExecutionId</code>. This request does not
 * execute the query but returns results. Use <a>StartQueryExecution</a> to run a
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetQueryResultsResponse * AthenaClient::getQueryResults(const GetQueryResultsRequest &request)
{

}

/**
 * Provides a list of all available query
 *
 * IDs>
 *
 * For code samples using the AWS SDK for Java, see <a
 * href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples and Code Samples</a> in the <i>Amazon
 * Athena User
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListNamedQueriesResponse * AthenaClient::listNamedQueries(const ListNamedQueriesRequest &request)
{

}

/**
 * Provides a list of all available query execution
 *
 * IDs>
 *
 * For code samples using the AWS SDK for Java, see <a
 * href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples and Code Samples</a> in the <i>Amazon
 * Athena User
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListQueryExecutionsResponse * AthenaClient::listQueryExecutions(const ListQueryExecutionsRequest &request)
{

}

/**
 * Runs (executes) the SQL query statements contained in the <code>Query</code>
 *
 * string>
 *
 * For code samples using the AWS SDK for Java, see <a
 * href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples and Code Samples</a> in the <i>Amazon
 * Athena User
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartQueryExecutionResponse * AthenaClient::startQueryExecution(const StartQueryExecutionRequest &request)
{

}

/**
 * Stops a query
 *
 * execution>
 *
 * For code samples using the AWS SDK for Java, see <a
 * href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples and Code Samples</a> in the <i>Amazon
 * Athena User
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StopQueryExecutionResponse * AthenaClient::stopQueryExecution(const StopQueryExecutionRequest &request)
{

}

/**
 * @internal
 *
 * @class  AthenaClientPrivate
 *
 * @brief  Private implementation for AthenaClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AthenaClientPrivate object.
 *
 * @param  q  Pointer to this object's public AthenaClient instance.
 */
AthenaClientPrivate::AthenaClientPrivate(AthenaClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace Athena
} // namespace AWS
