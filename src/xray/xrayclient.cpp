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

#include "xrayclient.h"
#include "xrayclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace XRay {

/**
 * @class  XRayClient
 *
 * @brief  Client for AWS X-Ray
 *
 * AWS X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by processing those
 */

/**
 * @brief  Constructs a new XRayClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
XRayClient::XRayClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new XRayClientPrivate(this), parent)
{
    Q_D(XRayClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new XRayClient object.
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
XRayClient::XRayClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new XRayClientPrivate(this), parent)
{
    Q_D(XRayClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * Retrieves a list of traces specified by ID. Each trace is a collection of segment documents that originates from a
 * single request. Use <code>GetTraceSummaries</code> to get a list of trace
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
BatchGetTracesResponse * XRayClient::batchGetTraces(const BatchGetTracesRequest &request)
{

}

/**
 * Retrieves a document that describes services that process incoming requests, and downstream services that they call as a
 * result. Root services process incoming requests and make calls to downstream services. Root services are applications
 * that use the AWS X-Ray SDK. Downstream services can be other applications, AWS resources, HTTP web APIs, or SQL
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetServiceGraphResponse * XRayClient::getServiceGraph(const GetServiceGraphRequest &request)
{

}

/**
 * Retrieves a service graph for one or more specific trace
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetTraceGraphResponse * XRayClient::getTraceGraph(const GetTraceGraphRequest &request)
{

}

/**
 * Retrieves IDs and metadata for traces available for a specified time frame using an optional filter. To get the full
 * traces, pass the trace IDs to
 *
 * <code>BatchGetTraces</code>>
 *
 * A filter expression can target traced requests that hit specific service nodes or edges, have errors, or come from a
 * known user. For example, the following filter expression targets traces that pass through
 *
 * <code>api.example.com</code>>
 *
 * <code>service("api.example.com")</code>
 *
 * </p
 *
 * This filter expression finds traces that have an annotation named <code>account</code> with the value
 *
 * <code>12345</code>>
 *
 * <code>annotation.account = "12345"</code>
 *
 * </p
 *
 * For a full list of indexed fields and keywords that you can use in filter expressions, see <a
 * href="http://docs.aws.amazon.com/xray/latest/devguide/xray-console-filters.html">Using Filter Expressions</a> in the
 * <i>AWS X-Ray Developer
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetTraceSummariesResponse * XRayClient::getTraceSummaries(const GetTraceSummariesRequest &request)
{

}

/**
 * Used by the AWS X-Ray daemon to upload
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutTelemetryRecordsResponse * XRayClient::putTelemetryRecords(const PutTelemetryRecordsRequest &request)
{

}

/**
 * Uploads segment documents to AWS X-Ray. The X-Ray SDK generates segment documents and sends them to the X-Ray daemon,
 * which uploads them in batches. A segment document can be a completed segment, an in-progress segment, or an array of
 *
 * subsegments>
 *
 * Segments must include the following fields. For the full segment document schema, see <a
 * href="http://docs.aws.amazon.com/xray/latest/devguide/xray-api-segmentdocuments.html">AWS X-Ray Segment Documents</a> in
 * the <i>AWS X-Ray Developer
 *
 * Guide</i>> <p class="title"> <b>Required Segment Document Fields</b>
 *
 * </p <ul> <li>
 *
 * <code>name</code> - The name of the service that handled the
 *
 * request> </li> <li>
 *
 * <code>id</code> - A 64-bit identifier for the segment, unique among segments in the same trace, in 16 hexadecimal
 *
 * digits> </li> <li>
 *
 * <code>trace_id</code> - A unique identifier that connects all segments and subsegments originating from a single client
 *
 * request> </li> <li>
 *
 * <code>start_time</code> - Time the segment or subsegment was created, in floating point seconds in epoch time, accurate
 * to milliseconds. For example, <code>1480615200.010</code> or
 *
 * <code>1.480615200010E9</code>> </li> <li>
 *
 * <code>end_time</code> - Time the segment or subsegment was closed. For example, <code>1480615200.090</code> or
 * <code>1.480615200090E9</code>. Specify either an <code>end_time</code> or
 *
 * <code>in_progress</code>> </li> <li>
 *
 * <code>in_progress</code> - Set to <code>true</code> instead of specifying an <code>end_time</code> to record that a
 * segment has been started, but is not complete. Send an in progress segment when your application receives a request that
 * will take a long time to serve, to trace the fact that the request was received. When the response is sent, send the
 * complete segment to overwrite the in-progress
 *
 * segment> </li> </ul>
 *
 * A <code>trace_id</code> consists of three numbers separated by hyphens. For example,
 * 1-58406520-a006649127e371903a2de979. This
 *
 * includes> <p class="title"> <b>Trace ID Format</b>
 *
 * </p <ul> <li>
 *
 * The version number, i.e.
 *
 * <code>1</code>> </li> <li>
 *
 * The time of the original request, in Unix epoch time, in 8 hexadecimal digits. For example, 10:00AM December 2nd, 2016
 * PST in epoch time is <code>1480615200</code> seconds, or <code>58406520</code> in
 *
 * hexadecimal> </li> <li>
 *
 * A 96-bit identifier for the trace, globally unique, in 24 hexadecimal
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutTraceSegmentsResponse * XRayClient::putTraceSegments(const PutTraceSegmentsRequest &request)
{

}

/**
 * @internal
 *
 * @class  XRayClientPrivate
 *
 * @brief  Private implementation for XRayClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new XRayClientPrivate object.
 *
 * @param  q  Pointer to this object's public XRayClient instance.
 */
XRayClientPrivate::XRayClientPrivate(XRayClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace XRay
} // namespace AWS
