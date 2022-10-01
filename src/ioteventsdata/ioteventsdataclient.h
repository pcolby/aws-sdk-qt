// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
class BatchDeleteDetectorRequest;
class BatchDeleteDetectorResponse;
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

    explicit IoTEventsDataClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchAcknowledgeAlarmResponse * batchAcknowledgeAlarm(const BatchAcknowledgeAlarmRequest &request);
    BatchDeleteDetectorResponse * batchDeleteDetector(const BatchDeleteDetectorRequest &request);
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

private:
    Q_DECLARE_PRIVATE(IoTEventsDataClient)
    Q_DISABLE_COPY(IoTEventsDataClient)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
