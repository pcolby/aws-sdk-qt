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

#ifndef QTAWS_XRAYCLIENT_H
#define QTAWS_XRAYCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace XRay {

class XRayClientPrivate;
class BatchGetTracesResponse;
class GetServiceGraphResponse;
class GetTraceGraphResponse;
class GetTraceSummariesResponse;
class PutTelemetryRecordsResponse;
class PutTraceSegmentsResponse;

class QTAWS_EXPORT XRayClient : public AwsAbstractClient {
    Q_OBJECT

public:
    XRayClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    XRayClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchGetTracesResponse * batchGetTraces(const BatchGetTracesRequest &request);
    GetServiceGraphResponse * getServiceGraph(const GetServiceGraphRequest &request);
    GetTraceGraphResponse * getTraceGraph(const GetTraceGraphRequest &request);
    GetTraceSummariesResponse * getTraceSummaries(const GetTraceSummariesRequest &request);
    PutTelemetryRecordsResponse * putTelemetryRecords(const PutTelemetryRecordsRequest &request);
    PutTraceSegmentsResponse * putTraceSegments(const PutTraceSegmentsRequest &request);

private:
    Q_DECLARE_PRIVATE(XRayClient)
    Q_DISABLE_COPY(XRayClient)

};

} // namespace XRay
} // namespace AWS

#endif
