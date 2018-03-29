/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_XRAYCLIENT_H
#define QTAWS_XRAYCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace XRay {

class XRayClientPrivate;
class BatchGetTracesRequest;
class BatchGetTracesResponse;
class GetServiceGraphRequest;
class GetServiceGraphResponse;
class GetTraceGraphRequest;
class GetTraceGraphResponse;
class GetTraceSummariesRequest;
class GetTraceSummariesResponse;
class PutTelemetryRecordsRequest;
class PutTelemetryRecordsResponse;
class PutTraceSegmentsRequest;
class PutTraceSegmentsResponse;

class QTAWS_EXPORT XRayClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    XRayClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    XRayClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
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
} // namespace QtAws

#endif
