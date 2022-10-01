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

#include "timestreamqueryclient.h"
#include "timestreamqueryclient_p.h"

#include "core/awssignaturev4.h"
#include "cancelqueryrequest.h"
#include "cancelqueryresponse.h"
#include "createscheduledqueryrequest.h"
#include "createscheduledqueryresponse.h"
#include "deletescheduledqueryrequest.h"
#include "deletescheduledqueryresponse.h"
#include "describeendpointsrequest.h"
#include "describeendpointsresponse.h"
#include "describescheduledqueryrequest.h"
#include "describescheduledqueryresponse.h"
#include "executescheduledqueryrequest.h"
#include "executescheduledqueryresponse.h"
#include "listscheduledqueriesrequest.h"
#include "listscheduledqueriesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "preparequeryrequest.h"
#include "preparequeryresponse.h"
#include "queryrequest.h"
#include "queryresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatescheduledqueryrequest.h"
#include "updatescheduledqueryresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::TimestreamQuery
 * \brief Contains classess for accessing Amazon Timestream Query.
 *
 * \inmodule QtAwsTimestreamQuery
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace TimestreamQuery {

/*!
 * \class QtAws::TimestreamQuery::TimestreamQueryClient
 * \brief The TimestreamQueryClient class provides access to the Amazon Timestream Query service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsTimestreamQuery
 *
 *  <fullname>Amazon Timestream Query </fullname>
 */

/*!
 * \brief Constructs a TimestreamQueryClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
TimestreamQueryClient::TimestreamQueryClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new TimestreamQueryClientPrivate(this), parent)
{
    Q_D(TimestreamQueryClient);
    d->apiVersion = QStringLiteral("2018-11-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("query.timestream");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Timestream Query");
    d->serviceName = QStringLiteral("timestream");
}

/*!
 * \overload TimestreamQueryClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
TimestreamQueryClient::TimestreamQueryClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new TimestreamQueryClientPrivate(this), parent)
{
    Q_D(TimestreamQueryClient);
    d->apiVersion = QStringLiteral("2018-11-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("query.timestream");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Timestream Query");
    d->serviceName = QStringLiteral("timestream");
}

/*!
 * Sends \a request to the TimestreamQueryClient service, and returns a pointer to an
 * CancelQueryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels a query that has been issued. Cancellation is provided only if the query has not completed running before the
 * cancellation request was issued. Because cancellation is an idempotent operation, subsequent cancellation requests will
 * return a <code>CancellationMessage</code>, indicating that the query has already been canceled. See <a
 * href="https://docs.aws.amazon.com/timestream/latest/developerguide/code-samples.cancel-query.html">code sample</a> for
 * details.
 */
CancelQueryResponse * TimestreamQueryClient::cancelQuery(const CancelQueryRequest &request)
{
    return qobject_cast<CancelQueryResponse *>(send(request));
}

/*!
 * Sends \a request to the TimestreamQueryClient service, and returns a pointer to an
 * CreateScheduledQueryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a scheduled query that will be run on your behalf at the configured schedule. Timestream assumes the execution
 * role provided as part of the <code>ScheduledQueryExecutionRoleArn</code> parameter to run the query. You can use the
 * <code>NotificationConfiguration</code> parameter to configure notification for your scheduled query
 */
CreateScheduledQueryResponse * TimestreamQueryClient::createScheduledQuery(const CreateScheduledQueryRequest &request)
{
    return qobject_cast<CreateScheduledQueryResponse *>(send(request));
}

/*!
 * Sends \a request to the TimestreamQueryClient service, and returns a pointer to an
 * DeleteScheduledQueryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a given scheduled query. This is an irreversible operation.
 */
DeleteScheduledQueryResponse * TimestreamQueryClient::deleteScheduledQuery(const DeleteScheduledQueryRequest &request)
{
    return qobject_cast<DeleteScheduledQueryResponse *>(send(request));
}

/*!
 * Sends \a request to the TimestreamQueryClient service, and returns a pointer to an
 * DescribeEndpointsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * DescribeEndpoints returns a list of available endpoints to make Timestream API calls against. This API is available
 * through both Write and
 *
 * Query>
 *
 * Because the Timestream SDKs are designed to transparently work with the service’s architecture, including the management
 * and mapping of the service endpoints, <i>it is not recommended that you use this API
 *
 * unless</i>> <ul> <li>
 *
 * You are using <a href="https://docs.aws.amazon.com/timestream/latest/developerguide/VPCEndpoints">VPC endpoints (Amazon
 * Web Services PrivateLink) with Timestream </a>
 *
 * </p </li> <li>
 *
 * Your application uses a programming language that does not yet have SDK
 *
 * suppor> </li> <li>
 *
 * You require better control over the client-side
 *
 * implementatio> </li> </ul>
 *
 * For detailed information on how and when to use and implement DescribeEndpoints, see <a
 * href="https://docs.aws.amazon.com/timestream/latest/developerguide/Using.API.html#Using-API.endpoint-discovery">The
 * Endpoint Discovery
 */
DescribeEndpointsResponse * TimestreamQueryClient::describeEndpoints(const DescribeEndpointsRequest &request)
{
    return qobject_cast<DescribeEndpointsResponse *>(send(request));
}

/*!
 * Sends \a request to the TimestreamQueryClient service, and returns a pointer to an
 * DescribeScheduledQueryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides detailed information about a scheduled
 */
DescribeScheduledQueryResponse * TimestreamQueryClient::describeScheduledQuery(const DescribeScheduledQueryRequest &request)
{
    return qobject_cast<DescribeScheduledQueryResponse *>(send(request));
}

/*!
 * Sends \a request to the TimestreamQueryClient service, and returns a pointer to an
 * ExecuteScheduledQueryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * You can use this API to run a scheduled query manually.
 */
ExecuteScheduledQueryResponse * TimestreamQueryClient::executeScheduledQuery(const ExecuteScheduledQueryRequest &request)
{
    return qobject_cast<ExecuteScheduledQueryResponse *>(send(request));
}

/*!
 * Sends \a request to the TimestreamQueryClient service, and returns a pointer to an
 * ListScheduledQueriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of all scheduled queries in the caller's Amazon account and Region. <code>ListScheduledQueries</code> is
 * eventually consistent.
 */
ListScheduledQueriesResponse * TimestreamQueryClient::listScheduledQueries(const ListScheduledQueriesRequest &request)
{
    return qobject_cast<ListScheduledQueriesResponse *>(send(request));
}

/*!
 * Sends \a request to the TimestreamQueryClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List all tags on a Timestream query
 */
ListTagsForResourceResponse * TimestreamQueryClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the TimestreamQueryClient service, and returns a pointer to an
 * PrepareQueryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A synchronous operation that allows you to submit a query with parameters to be stored by Timestream for later running.
 * Timestream only supports using this operation with the <code>PrepareQueryRequest$ValidateOnly</code> set to
 * <code>true</code>.
 */
PrepareQueryResponse * TimestreamQueryClient::prepareQuery(const PrepareQueryRequest &request)
{
    return qobject_cast<PrepareQueryResponse *>(send(request));
}

/*!
 * Sends \a request to the TimestreamQueryClient service, and returns a pointer to an
 * QueryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <code>Query</code> is a synchronous operation that enables you to run a query against your Amazon Timestream data.
 * <code>Query</code> will time out after 60 seconds. You must update the default timeout in the SDK to support a timeout
 * of 60 seconds. See the <a
 * href="https://docs.aws.amazon.com/timestream/latest/developerguide/code-samples.run-query.html">code sample</a> for
 * details.
 *
 * </p
 *
 * Your query request will fail in the following
 *
 * cases> <ul> <li>
 *
 * If you submit a <code>Query</code> request with the same client token outside of the 5-minute idempotency window.
 *
 * </p </li> <li>
 *
 * If you submit a <code>Query</code> request with the same client token, but change other parameters, within the 5-minute
 * idempotency window.
 *
 * </p </li> <li>
 *
 * If the size of the row (including the query metadata) exceeds 1 MB, then the query will fail with the following error
 * message:
 *
 * </p
 *
 * <code>Query aborted as max page response size has been exceeded by the output result row</code>
 *
 * </p </li> <li>
 *
 * If the IAM principal of the query initiator and the result reader are not the same and/or the query initiator and the
 * result reader do not have the same query string in the query requests, the query will fail with an <code>Invalid
 * pagination token</code> error.
 */
QueryResponse * TimestreamQueryClient::query(const QueryRequest &request)
{
    return qobject_cast<QueryResponse *>(send(request));
}

/*!
 * Sends \a request to the TimestreamQueryClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associate a set of tags with a Timestream resource. You can then activate these user-defined tags so that they appear on
 * the Billing and Cost Management console for cost allocation tracking.
 */
TagResourceResponse * TimestreamQueryClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the TimestreamQueryClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the association of tags from a Timestream query
 */
UntagResourceResponse * TimestreamQueryClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the TimestreamQueryClient service, and returns a pointer to an
 * UpdateScheduledQueryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update a scheduled
 */
UpdateScheduledQueryResponse * TimestreamQueryClient::updateScheduledQuery(const UpdateScheduledQueryRequest &request)
{
    return qobject_cast<UpdateScheduledQueryResponse *>(send(request));
}

/*!
 * \class QtAws::TimestreamQuery::TimestreamQueryClientPrivate
 * \brief The TimestreamQueryClientPrivate class provides private implementation for TimestreamQueryClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsTimestreamQuery
 */

/*!
 * Constructs a TimestreamQueryClientPrivate object with public implementation \a q.
 */
TimestreamQueryClientPrivate::TimestreamQueryClientPrivate(TimestreamQueryClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace TimestreamQuery
} // namespace QtAws
