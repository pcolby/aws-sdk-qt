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

#include "qtawsioteventsdataglobal.h"

class QNetworkReply;

namespace QtAws {
namespace IoTEventsData {

class IoTEventsDataClientPrivate;
class BatchAcknowledgeAlarmRequest;
class BatchAcknowledgeAlarmResponse;
class BatchDisableAlarmRequest;
class BatchDisableAlarmResponse;
class BatchEnableAlarmRequest;
class BatchEnableAlarmResponse;
class BatchPutMessageRequest;
class BatchPutMessageResponse;
class BatchResetAlarmRequest;
class BatchResetAlarmResponse;
class BatchSnoozeAlarmRequest;
class BatchSnoozeAlarmResponse;
class BatchUpdateDetectorRequest;
class BatchUpdateDetectorResponse;
class DescribeAlarmRequest;
class DescribeAlarmResponse;
class DescribeDetectorRequest;
class DescribeDetectorResponse;
class ListAlarmsRequest;
class ListAlarmsResponse;
class ListDetectorsRequest;
class ListDetectorsResponse;

class QTAWSIOTEVENTSDATA_EXPORT IoTEventsDataClient : public QtAws::Core::AwsAbstractClient {
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
    BatchAcknowledgeAlarmResponse * batchAcknowledgeAlarm(const BatchAcknowledgeAlarmRequest &request);
    BatchDisableAlarmResponse * batchDisableAlarm(const BatchDisableAlarmRequest &request);
    BatchEnableAlarmResponse * batchEnableAlarm(const BatchEnableAlarmRequest &request);
    BatchPutMessageResponse * batchPutMessage(const BatchPutMessageRequest &request);
    BatchResetAlarmResponse * batchResetAlarm(const BatchResetAlarmRequest &request);
    BatchSnoozeAlarmResponse * batchSnoozeAlarm(const BatchSnoozeAlarmRequest &request);
    BatchUpdateDetectorResponse * batchUpdateDetector(const BatchUpdateDetectorRequest &request);
    DescribeAlarmResponse * describeAlarm(const DescribeAlarmRequest &request);
    DescribeDetectorResponse * describeDetector(const DescribeDetectorRequest &request);
    ListAlarmsResponse * listAlarms(const ListAlarmsRequest &request);
    ListDetectorsResponse * listDetectors(const ListDetectorsRequest &request);

protected:
    /// @cond internal
    IoTEventsDataClientPrivate * const d_ptr; ///< Internal d-pointer.
    IoTEventsDataClient(IoTEventsDataClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(IoTEventsDataClient)
    Q_DISABLE_COPY(IoTEventsDataClient)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
