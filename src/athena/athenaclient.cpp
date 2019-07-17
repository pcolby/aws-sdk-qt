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

#include "athenaclient.h"
#include "athenaclient_p.h"

#include "core/awssignaturev4.h"
#include "batchgetnamedqueryrequest.h"
#include "batchgetnamedqueryresponse.h"
#include "batchgetqueryexecutionrequest.h"
#include "batchgetqueryexecutionresponse.h"
#include "createnamedqueryrequest.h"
#include "createnamedqueryresponse.h"
#include "createworkgrouprequest.h"
#include "createworkgroupresponse.h"
#include "deletenamedqueryrequest.h"
#include "deletenamedqueryresponse.h"
#include "deleteworkgrouprequest.h"
#include "deleteworkgroupresponse.h"
#include "getnamedqueryrequest.h"
#include "getnamedqueryresponse.h"
#include "getqueryexecutionrequest.h"
#include "getqueryexecutionresponse.h"
#include "getqueryresultsrequest.h"
#include "getqueryresultsresponse.h"
#include "getworkgrouprequest.h"
#include "getworkgroupresponse.h"
#include "listnamedqueriesrequest.h"
#include "listnamedqueriesresponse.h"
#include "listqueryexecutionsrequest.h"
#include "listqueryexecutionsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listworkgroupsrequest.h"
#include "listworkgroupsresponse.h"
#include "startqueryexecutionrequest.h"
#include "startqueryexecutionresponse.h"
#include "stopqueryexecutionrequest.h"
#include "stopqueryexecutionresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateworkgrouprequest.h"
#include "updateworkgroupresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Athena
 * \brief Contains classess for accessing Amazon Athena.
 *
 * \inmodule QtAwsAthena
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Athena {

/*!
 * \class QtAws::Athena::AthenaClient
 * \brief The AthenaClient class provides access to the Amazon Athena service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAthena
 *
 *  Amazon Athena is an interactive query service that lets you use standard SQL to analyze data directly in Amazon S3. You
 *  can point Athena at your data in Amazon S3 and run ad-hoc queries and get results in seconds. Athena is serverless, so
 *  there is no infrastructure to set up or manage. You pay only for the queries you run. Athena scales
 *  automatically—executing queries in parallel—so results are fast, even with large datasets and complex queries. For more
 *  information, see <a href="http://docs.aws.amazon.com/athena/latest/ug/what-is.html">What is Amazon Athena</a> in the
 *  <i>Amazon Athena User
 * 
 *  Guide</i>>
 * 
 *  If you connect to Athena using the JDBC driver, use version 1.1.0 of the driver or later with the Amazon Athena API.
 *  Earlier version drivers do not support the API. For more information and to download the driver, see <a
 *  href="https://docs.aws.amazon.com/athena/latest/ug/connect-with-jdbc.html">Accessing Amazon Athena with
 * 
 *  JDBC</a>>
 * 
 *  For code samples using the AWS SDK for Java, see <a
 *  href="https://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples and Code Samples</a> in the <i>Amazon
 *  Athena User
 */

/*!
 * \brief Constructs a AthenaClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
AthenaClient::AthenaClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AthenaClientPrivate(this), parent)
{
    Q_D(AthenaClient);
    d->apiVersion = QStringLiteral("2017-05-18");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("athena");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Athena");
    d->serviceName = QStringLiteral("athena");
}

/*!
 * \overload AthenaClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
AthenaClient::AthenaClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AthenaClientPrivate(this), parent)
{
    Q_D(AthenaClient);
    d->apiVersion = QStringLiteral("2017-05-18");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("athena");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Athena");
    d->serviceName = QStringLiteral("athena");
}

/*!
 * Sends \a request to the AthenaClient service, and returns a pointer to an
 * BatchGetNamedQueryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the details of a single named query or a list of up to 50 queries, which you provide as an array of query ID
 * strings. Requires you to have access to the workgroup in which the queries were saved. Use <a>ListNamedQueriesInput</a>
 * to get the list of named query IDs in the specified workgroup. If information could not be retrieved for a submitted
 * query ID, information about the query ID submitted is listed under <a>UnprocessedNamedQueryId</a>. Named queries differ
 * from executed queries. Use <a>BatchGetQueryExecutionInput</a> to get details about each unique query execution, and
 * <a>ListQueryExecutionsInput</a> to get a list of query execution
 */
BatchGetNamedQueryResponse * AthenaClient::batchGetNamedQuery(const BatchGetNamedQueryRequest &request)
{
    return qobject_cast<BatchGetNamedQueryResponse *>(send(request));
}

/*!
 * Sends \a request to the AthenaClient service, and returns a pointer to an
 * BatchGetQueryExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the details of a single query execution or a list of up to 50 query executions, which you provide as an array of
 * query execution ID strings. Requires you to have access to the workgroup in which the queries ran. To get a list of
 * query execution IDs, use <a>ListQueryExecutionsInput$WorkGroup</a>. Query executions differ from named (saved) queries.
 * Use <a>BatchGetNamedQueryInput</a> to get details about named
 */
BatchGetQueryExecutionResponse * AthenaClient::batchGetQueryExecution(const BatchGetQueryExecutionRequest &request)
{
    return qobject_cast<BatchGetQueryExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the AthenaClient service, and returns a pointer to an
 * CreateNamedQueryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a named query in the specified workgroup. Requires that you have access to the
 *
 * workgroup>
 *
 * For code samples using the AWS SDK for Java, see <a
 * href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples and Code Samples</a> in the <i>Amazon
 * Athena User
 */
CreateNamedQueryResponse * AthenaClient::createNamedQuery(const CreateNamedQueryRequest &request)
{
    return qobject_cast<CreateNamedQueryResponse *>(send(request));
}

/*!
 * Sends \a request to the AthenaClient service, and returns a pointer to an
 * CreateWorkGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a workgroup with the specified
 */
CreateWorkGroupResponse * AthenaClient::createWorkGroup(const CreateWorkGroupRequest &request)
{
    return qobject_cast<CreateWorkGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the AthenaClient service, and returns a pointer to an
 * DeleteNamedQueryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the named query if you have access to the workgroup in which the query was
 *
 * saved>
 *
 * For code samples using the AWS SDK for Java, see <a
 * href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples and Code Samples</a> in the <i>Amazon
 * Athena User
 */
DeleteNamedQueryResponse * AthenaClient::deleteNamedQuery(const DeleteNamedQueryRequest &request)
{
    return qobject_cast<DeleteNamedQueryResponse *>(send(request));
}

/*!
 * Sends \a request to the AthenaClient service, and returns a pointer to an
 * DeleteWorkGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the workgroup with the specified name. The primary workgroup cannot be
 */
DeleteWorkGroupResponse * AthenaClient::deleteWorkGroup(const DeleteWorkGroupRequest &request)
{
    return qobject_cast<DeleteWorkGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the AthenaClient service, and returns a pointer to an
 * GetNamedQueryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a single query. Requires that you have access to the workgroup in which the query was
 */
GetNamedQueryResponse * AthenaClient::getNamedQuery(const GetNamedQueryRequest &request)
{
    return qobject_cast<GetNamedQueryResponse *>(send(request));
}

/*!
 * Sends \a request to the AthenaClient service, and returns a pointer to an
 * GetQueryExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a single execution of a query if you have access to the workgroup in which the query ran. Each
 * time a query executes, information about the query execution is saved with a unique
 */
GetQueryExecutionResponse * AthenaClient::getQueryExecution(const GetQueryExecutionRequest &request)
{
    return qobject_cast<GetQueryExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the AthenaClient service, and returns a pointer to an
 * GetQueryResultsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the results of a single query execution specified by <code>QueryExecutionId</code> if you have access to the
 * workgroup in which the query ran. This request does not execute the query but returns results. Use
 * <a>StartQueryExecution</a> to run a
 */
GetQueryResultsResponse * AthenaClient::getQueryResults(const GetQueryResultsRequest &request)
{
    return qobject_cast<GetQueryResultsResponse *>(send(request));
}

/*!
 * Sends \a request to the AthenaClient service, and returns a pointer to an
 * GetWorkGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the workgroup with the specified
 */
GetWorkGroupResponse * AthenaClient::getWorkGroup(const GetWorkGroupRequest &request)
{
    return qobject_cast<GetWorkGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the AthenaClient service, and returns a pointer to an
 * ListNamedQueriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a list of available query IDs only for queries saved in the specified workgroup. Requires that you have access
 * to the
 *
 * workgroup>
 *
 * For code samples using the AWS SDK for Java, see <a
 * href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples and Code Samples</a> in the <i>Amazon
 * Athena User
 */
ListNamedQueriesResponse * AthenaClient::listNamedQueries(const ListNamedQueriesRequest &request)
{
    return qobject_cast<ListNamedQueriesResponse *>(send(request));
}

/*!
 * Sends \a request to the AthenaClient service, and returns a pointer to an
 * ListQueryExecutionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a list of available query execution IDs for the queries in the specified workgroup. Requires you to have access
 * to the workgroup in which the queries
 *
 * ran>
 *
 * For code samples using the AWS SDK for Java, see <a
 * href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples and Code Samples</a> in the <i>Amazon
 * Athena User
 */
ListQueryExecutionsResponse * AthenaClient::listQueryExecutions(const ListQueryExecutionsRequest &request)
{
    return qobject_cast<ListQueryExecutionsResponse *>(send(request));
}

/*!
 * Sends \a request to the AthenaClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags associated with this
 */
ListTagsForResourceResponse * AthenaClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AthenaClient service, and returns a pointer to an
 * ListWorkGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists available workgroups for the
 */
ListWorkGroupsResponse * AthenaClient::listWorkGroups(const ListWorkGroupsRequest &request)
{
    return qobject_cast<ListWorkGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the AthenaClient service, and returns a pointer to an
 * StartQueryExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Runs the SQL query statements contained in the <code>Query</code>. Requires you to have access to the workgroup in which
 * the query
 *
 * ran>
 *
 * For code samples using the AWS SDK for Java, see <a
 * href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples and Code Samples</a> in the <i>Amazon
 * Athena User
 */
StartQueryExecutionResponse * AthenaClient::startQueryExecution(const StartQueryExecutionRequest &request)
{
    return qobject_cast<StartQueryExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the AthenaClient service, and returns a pointer to an
 * StopQueryExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a query execution. Requires you to have access to the workgroup in which the query
 *
 * ran>
 *
 * For code samples using the AWS SDK for Java, see <a
 * href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples and Code Samples</a> in the <i>Amazon
 * Athena User
 */
StopQueryExecutionResponse * AthenaClient::stopQueryExecution(const StopQueryExecutionRequest &request)
{
    return qobject_cast<StopQueryExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the AthenaClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more tags to the resource, such as a workgroup. A tag is a label that you assign to an AWS Athena resource
 * (a workgroup). Each tag consists of a key and an optional value, both of which you define. Tags enable you to categorize
 * resources (workgroups) in Athena, for example, by purpose, owner, or environment. Use a consistent set of tag keys to
 * make it easier to search and filter workgroups in your account. For best practices, see <a
 * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS Tagging Strategies</a>. The key
 * length is from 1 (minimum) to 128 (maximum) Unicode characters in UTF-8. The tag value length is from 0 (minimum) to 256
 * (maximum) Unicode characters in UTF-8. You can use letters and numbers representable in UTF-8, and the following
 * characters: + - = . _ : / @. Tag keys and values are case-sensitive. Tag keys must be unique per resource. If you
 * specify more than one, separate them by
 */
TagResourceResponse * AthenaClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AthenaClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes one or more tags from the workgroup resource. Takes as an input a list of TagKey Strings separated by commas,
 * and removes their tags at the same
 */
UntagResourceResponse * AthenaClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AthenaClient service, and returns a pointer to an
 * UpdateWorkGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the workgroup with the specified name. The workgroup's name cannot be
 */
UpdateWorkGroupResponse * AthenaClient::updateWorkGroup(const UpdateWorkGroupRequest &request)
{
    return qobject_cast<UpdateWorkGroupResponse *>(send(request));
}

/*!
 * \class QtAws::Athena::AthenaClientPrivate
 * \brief The AthenaClientPrivate class provides private implementation for AthenaClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAthena
 */

/*!
 * Constructs a AthenaClientPrivate object with public implementation \a q.
 */
AthenaClientPrivate::AthenaClientPrivate(AthenaClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Athena
} // namespace QtAws
