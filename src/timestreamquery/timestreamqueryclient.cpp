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
#include "describeendpointsrequest.h"
#include "describeendpointsresponse.h"
#include "queryrequest.h"
#include "queryresponse.h"

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
 * Cancels a query that has been issued. Cancellation is guaranteed only if the query has not completed execution before
 * the cancellation request was issued. Because cancellation is an idempotent operation, subsequent cancellation requests
 * will return a <code>CancellationMessage</code>, indicating that the query has already been canceled.
 */
CancelQueryResponse * TimestreamQueryClient::cancelQuery(const CancelQueryRequest &request)
{
    return qobject_cast<CancelQueryResponse *>(send(request));
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
 * Because Timestream’s SDKs are designed to transparently work with the service’s architecture, including the management
 * and mapping of the service endpoints, <i>it is not recommended that you use this API
 *
 * unless</i>> <ul> <li>
 *
 * Your application uses a programming language that does not yet have SDK
 *
 * suppor> </li> <li>
 *
 * You require better control over the client-side
 *
 * implementatio> </li> </ul>
 *
 * For detailed information on how to use DescribeEndpoints, see <a
 * href="https://docs.aws.amazon.com/timestream/latest/developerguide/Using-API.endpoint-discovery.html">The Endpoint
 * Discovery Pattern and REST
 */
DescribeEndpointsResponse * TimestreamQueryClient::describeEndpoints(const DescribeEndpointsRequest &request)
{
    return qobject_cast<DescribeEndpointsResponse *>(send(request));
}

/*!
 * Sends \a request to the TimestreamQueryClient service, and returns a pointer to an
 * QueryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Query is a synchronous operation that enables you to execute a query. Query will timeout after 60 seconds. You must
 * update the default timeout in the SDK to support a timeout of 60 seconds. The result set will be truncated to 1MB.
 * Service quotas apply. For more information, see Quotas in the Timestream Developer Guide.
 */
QueryResponse * TimestreamQueryClient::query(const QueryRequest &request)
{
    return qobject_cast<QueryResponse *>(send(request));
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
