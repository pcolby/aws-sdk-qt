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

#ifndef QTAWS_IOTEVENTSDATACLIENT_H
#define QTAWS_IOTEVENTSDATACLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace IoTEventsData {

class IoTEventsDataClientPrivate;
class BatchPutMessageRequest;
class BatchPutMessageResponse;
class BatchUpdateDetectorRequest;
class BatchUpdateDetectorResponse;
class DescribeDetectorRequest;
class DescribeDetectorResponse;
class ListDetectorsRequest;
class ListDetectorsResponse;

class QTAWS_EXPORT IoTEventsDataClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    IoTEventsDataClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    IoTEventsDataClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchPutMessageResponse * batchPutMessage(const BatchPutMessageRequest &request);
    BatchUpdateDetectorResponse * batchUpdateDetector(const BatchUpdateDetectorRequest &request);
    DescribeDetectorResponse * describeDetector(const DescribeDetectorRequest &request);
    ListDetectorsResponse * listDetectors(const ListDetectorsRequest &request);

private:
    Q_DECLARE_PRIVATE(IoTEventsDataClient)
    Q_DISABLE_COPY(IoTEventsDataClient)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
